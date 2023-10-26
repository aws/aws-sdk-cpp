/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/AuthenticationProviderTypes.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ManagedGrafana
  {
    namespace Model
    {
      namespace AuthenticationProviderTypesMapper
      {

        static const int AWS_SSO_HASH = HashingUtils::HashString("AWS_SSO");
        static const int SAML_HASH = HashingUtils::HashString("SAML");


        AuthenticationProviderTypes GetAuthenticationProviderTypesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_SSO_HASH)
          {
            return AuthenticationProviderTypes::AWS_SSO;
          }
          else if (hashCode == SAML_HASH)
          {
            return AuthenticationProviderTypes::SAML;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthenticationProviderTypes>(hashCode);
          }

          return AuthenticationProviderTypes::NOT_SET;
        }

        Aws::String GetNameForAuthenticationProviderTypes(AuthenticationProviderTypes enumValue)
        {
          switch(enumValue)
          {
          case AuthenticationProviderTypes::NOT_SET:
            return {};
          case AuthenticationProviderTypes::AWS_SSO:
            return "AWS_SSO";
          case AuthenticationProviderTypes::SAML:
            return "SAML";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthenticationProviderTypesMapper
    } // namespace Model
  } // namespace ManagedGrafana
} // namespace Aws
