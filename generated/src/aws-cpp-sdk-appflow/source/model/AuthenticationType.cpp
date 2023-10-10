/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/AuthenticationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Appflow
  {
    namespace Model
    {
      namespace AuthenticationTypeMapper
      {

        static const int OAUTH2_HASH = HashingUtils::HashString("OAUTH2");
        static const int APIKEY_HASH = HashingUtils::HashString("APIKEY");
        static const int BASIC_HASH = HashingUtils::HashString("BASIC");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");


        AuthenticationType GetAuthenticationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OAUTH2_HASH)
          {
            return AuthenticationType::OAUTH2;
          }
          else if (hashCode == APIKEY_HASH)
          {
            return AuthenticationType::APIKEY;
          }
          else if (hashCode == BASIC_HASH)
          {
            return AuthenticationType::BASIC;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return AuthenticationType::CUSTOM;
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
          case AuthenticationType::OAUTH2:
            return "OAUTH2";
          case AuthenticationType::APIKEY:
            return "APIKEY";
          case AuthenticationType::BASIC:
            return "BASIC";
          case AuthenticationType::CUSTOM:
            return "CUSTOM";
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
  } // namespace Appflow
} // namespace Aws
