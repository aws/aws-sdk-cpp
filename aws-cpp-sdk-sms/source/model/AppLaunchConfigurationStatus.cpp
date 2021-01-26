/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/AppLaunchConfigurationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SMS
  {
    namespace Model
    {
      namespace AppLaunchConfigurationStatusMapper
      {

        static const int NOT_CONFIGURED_HASH = HashingUtils::HashString("NOT_CONFIGURED");
        static const int CONFIGURED_HASH = HashingUtils::HashString("CONFIGURED");


        AppLaunchConfigurationStatus GetAppLaunchConfigurationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_CONFIGURED_HASH)
          {
            return AppLaunchConfigurationStatus::NOT_CONFIGURED;
          }
          else if (hashCode == CONFIGURED_HASH)
          {
            return AppLaunchConfigurationStatus::CONFIGURED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppLaunchConfigurationStatus>(hashCode);
          }

          return AppLaunchConfigurationStatus::NOT_SET;
        }

        Aws::String GetNameForAppLaunchConfigurationStatus(AppLaunchConfigurationStatus enumValue)
        {
          switch(enumValue)
          {
          case AppLaunchConfigurationStatus::NOT_CONFIGURED:
            return "NOT_CONFIGURED";
          case AppLaunchConfigurationStatus::CONFIGURED:
            return "CONFIGURED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppLaunchConfigurationStatusMapper
    } // namespace Model
  } // namespace SMS
} // namespace Aws
