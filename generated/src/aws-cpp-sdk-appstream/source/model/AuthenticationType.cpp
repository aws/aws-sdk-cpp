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

        static const int API_HASH = HashingUtils::HashString("API");
        static const int SAML_HASH = HashingUtils::HashString("SAML");
        static const int USERPOOL_HASH = HashingUtils::HashString("USERPOOL");
        static const int AWS_AD_HASH = HashingUtils::HashString("AWS_AD");


        AuthenticationType GetAuthenticationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
