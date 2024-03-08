/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/AuthenticationMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EKS
  {
    namespace Model
    {
      namespace AuthenticationModeMapper
      {

        static const int API_HASH = HashingUtils::HashString("API");
        static const int API_AND_CONFIG_MAP_HASH = HashingUtils::HashString("API_AND_CONFIG_MAP");
        static const int CONFIG_MAP_HASH = HashingUtils::HashString("CONFIG_MAP");


        AuthenticationMode GetAuthenticationModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == API_HASH)
          {
            return AuthenticationMode::API;
          }
          else if (hashCode == API_AND_CONFIG_MAP_HASH)
          {
            return AuthenticationMode::API_AND_CONFIG_MAP;
          }
          else if (hashCode == CONFIG_MAP_HASH)
          {
            return AuthenticationMode::CONFIG_MAP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthenticationMode>(hashCode);
          }

          return AuthenticationMode::NOT_SET;
        }

        Aws::String GetNameForAuthenticationMode(AuthenticationMode enumValue)
        {
          switch(enumValue)
          {
          case AuthenticationMode::NOT_SET:
            return {};
          case AuthenticationMode::API:
            return "API";
          case AuthenticationMode::API_AND_CONFIG_MAP:
            return "API_AND_CONFIG_MAP";
          case AuthenticationMode::CONFIG_MAP:
            return "CONFIG_MAP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthenticationModeMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
