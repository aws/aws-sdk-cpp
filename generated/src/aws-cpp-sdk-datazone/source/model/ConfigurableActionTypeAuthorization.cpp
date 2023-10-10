/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ConfigurableActionTypeAuthorization.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace ConfigurableActionTypeAuthorizationMapper
      {

        static const int IAM_HASH = HashingUtils::HashString("IAM");
        static const int HTTPS_HASH = HashingUtils::HashString("HTTPS");


        ConfigurableActionTypeAuthorization GetConfigurableActionTypeAuthorizationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IAM_HASH)
          {
            return ConfigurableActionTypeAuthorization::IAM;
          }
          else if (hashCode == HTTPS_HASH)
          {
            return ConfigurableActionTypeAuthorization::HTTPS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfigurableActionTypeAuthorization>(hashCode);
          }

          return ConfigurableActionTypeAuthorization::NOT_SET;
        }

        Aws::String GetNameForConfigurableActionTypeAuthorization(ConfigurableActionTypeAuthorization enumValue)
        {
          switch(enumValue)
          {
          case ConfigurableActionTypeAuthorization::NOT_SET:
            return {};
          case ConfigurableActionTypeAuthorization::IAM:
            return "IAM";
          case ConfigurableActionTypeAuthorization::HTTPS:
            return "HTTPS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfigurableActionTypeAuthorizationMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
