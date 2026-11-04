#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	//test isalpha
	printf("isalpha");
	printf("%d\n", isalpha(64));
        printf("%d\n", isalpha(65));
        printf("%d\n", ft_isalpha(64));
        printf("%d\n", ft_isalpha(65));
	//test isdigit
	printf("%d\n", isdigit(47));
        printf("%d\n", isdigit(48));
        printf("%d\n", ft_isdigit(47));
        printf("%d\n", ft_isdigit(48));
	//test isalnum
	printf("%d\n", isalnum(64));
        printf("%d\n", isalnum(65));
	printf("%d\n", isalnum(47));
        printf("%d\n", isalnum(48));
        printf("%d\n", ft_isalnum(64));
        printf("%d\n", ft_isalnum(65));
        printf("%d\n", ft_isalnum(47));
        printf("%d\n", ft_isalnum(48));
	
}
