/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/AuthenticationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppStream
  {
    namespace Model
    {
      namespace AuthenticationTypeMapper
      {

        static constexpr uint32_t API_HASH = ConstExprHashingUtils::HashString("API");
        static constexpr uint32_t SAML_HASH = ConstExprHashingUtils::HashString("SAML");
        static constexpr uint32_t USERPOOL_HASH = ConstExprHashingUtils::HashString("USERPOOL");
        static constexpr uint32_t AWS_AD_HASH = ConstExprHashingUtils::HashString("AWS_AD");


        AuthenticationType GetAuthenticationTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == API_HASH)
          {
            return AuthenticationType::API;
          }
          else if (hashCode == SAML_HASH)
          {
            return AuthenticationType::SAML;
          }
          else if (hashCode == USERPOOL_HASH)
          {
            return AuthenticationType::USERPOOL;
          }
          else if (hashCode == AWS_AD_HASH)
          {
            return AuthenticationType::AWS_AD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthenticationType>(hashCode);
          }

          return AuthenticationType::NOT_SET;
        }

        Aws::String GetNameForAuthenticationType(AuthenticationType enumValue)
        {
          switch(enumValue)
          {
          case AuthenticationType::NOT_SET:
            return {};
          case AuthenticationType::API:
            return "API";
          case AuthenticationType::SAML:
            return "SAML";
          case AuthenticationType::USERPOOL:
            return "USERPOOL";
          case AuthenticationType::AWS_AD:
            return "AWS_AD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthenticationTypeMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
