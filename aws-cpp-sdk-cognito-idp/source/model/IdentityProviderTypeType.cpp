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

        static const int SAML_HASH = HashingUtils::HashString("SAML");
        static const int Facebook_HASH = HashingUtils::HashString("Facebook");
        static const int Google_HASH = HashingUtils::HashString("Google");
        static const int LoginWithAmazon_HASH = HashingUtils::HashString("LoginWithAmazon");
        static const int SignInWithApple_HASH = HashingUtils::HashString("SignInWithApple");
        static const int OIDC_HASH = HashingUtils::HashString("OIDC");


        IdentityProviderTypeType GetIdentityProviderTypeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
