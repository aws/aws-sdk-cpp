/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/IdentityProviderTypeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CognitoIdentityProvider
  {
    namespace Model
    {
      namespace IdentityProviderTypeTypeMapper
      {

        static constexpr uint32_t SAML_HASH = ConstExprHashingUtils::HashString("SAML");
        static constexpr uint32_t Facebook_HASH = ConstExprHashingUtils::HashString("Facebook");
        static constexpr uint32_t Google_HASH = ConstExprHashingUtils::HashString("Google");
        static constexpr uint32_t LoginWithAmazon_HASH = ConstExprHashingUtils::HashString("LoginWithAmazon");
        static constexpr uint32_t SignInWithApple_HASH = ConstExprHashingUtils::HashString("SignInWithApple");
        static constexpr uint32_t OIDC_HASH = ConstExprHashingUtils::HashString("OIDC");


        IdentityProviderTypeType GetIdentityProviderTypeTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SAML_HASH)
          {
            return IdentityProviderTypeType::SAML;
          }
          else if (hashCode == Facebook_HASH)
          {
            return IdentityProviderTypeType::Facebook;
          }
          else if (hashCode == Google_HASH)
          {
            return IdentityProviderTypeType::Google;
          }
          else if (hashCode == LoginWithAmazon_HASH)
          {
            return IdentityProviderTypeType::LoginWithAmazon;
          }
          else if (hashCode == SignInWithApple_HASH)
          {
            return IdentityProviderTypeType::SignInWithApple;
          }
          else if (hashCode == OIDC_HASH)
          {
            return IdentityProviderTypeType::OIDC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IdentityProviderTypeType>(hashCode);
          }

          return IdentityProviderTypeType::NOT_SET;
        }

        Aws::String GetNameForIdentityProviderTypeType(IdentityProviderTypeType enumValue)
        {
          switch(enumValue)
          {
          case IdentityProviderTypeType::NOT_SET:
            return {};
          case IdentityProviderTypeType::SAML:
            return "SAML";
          case IdentityProviderTypeType::Facebook:
            return "Facebook";
          case IdentityProviderTypeType::Google:
            return "Google";
          case IdentityProviderTypeType::LoginWithAmazon:
            return "LoginWithAmazon";
          case IdentityProviderTypeType::SignInWithApple:
            return "SignInWithApple";
          case IdentityProviderTypeType::OIDC:
            return "OIDC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IdentityProviderTypeTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
