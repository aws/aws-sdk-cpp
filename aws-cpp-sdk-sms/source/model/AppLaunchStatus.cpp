/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/AppLaunchStatus.h>
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
      namespace AppLaunchStatusMapper
      {

        static const int READY_FOR_CONFIGURATION_HASH = HashingUtils::HashString("READY_FOR_CONFIGURATION");
        static const int CONFIGURATION_IN_PROGRESS_HASH = HashingUtils::HashString("CONFIGURATION_IN_PROGRESS");
        static const int CONFIGURATION_INVALID_HASH = HashingUtils::HashString("CONFIGURATION_INVALID");
        static const int READY_FOR_LAUNCH_HASH = HashingUtils::HashString("READY_FOR_LAUNCH");
        static const int VALIDATION_IN_PROGRESS_HASH = HashingUtils::HashString("VALIDATION_IN_PROGRESS");
        static const int LAUNCH_PENDING_HASH = HashingUtils::HashString("LAUNCH_PENDING");
        static const int LAUNCH_IN_PROGRESS_HASH = HashingUtils::HashString("LAUNCH_IN_PROGRESS");
        static const int LAUNCHED_HASH = HashingUtils::HashString("LAUNCHED");
        static const int PARTIALLY_LAUNCHED_HASH = HashingUtils::HashString("PARTIALLY_LAUNCHED");
        static const int DELTA_LAUNCH_IN_PROGRESS_HASH = HashingUtils::HashString("DELTA_LAUNCH_IN_PROGRESS");
        static const int DELTA_LAUNCH_FAILED_HASH = HashingUtils::HashString("DELTA_LAUNCH_FAILED");
        static const int LAUNCH_FAILED_HASH = HashingUtils::HashString("LAUNCH_FAILED");
        static const int TERMINATE_IN_PROGRESS_HASH = HashingUtils::HashString("TERMINATE_IN_PROGRESS");
        static const int TERMINATE_FAILED_HASH = HashingUtils::HashString("TERMINATE_FAILED");
        static const int TERMINATED_HASH = HashingUtils::HashString("TERMINATED");


        AppLaunchStatus GetAppLaunchStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READY_FOR_CONFIGURATION_HASH)
          {
            return AppLaunchStatus::READY_FOR_CONFIGURATION;
          }
          else if (hashCode == CONFIGURATION_IN_PROGRESS_HASH)
          {
            return AppLaunchStatus::CONFIGURATION_IN_PROGRESS;
          }
          else if (hashCode == CONFIGURATION_INVALID_HASH)
          {
            return AppLaunchStatus::CONFIGURATION_INVALID;
          }
          else if (hashCode == READY_FOR_LAUNCH_HASH)
          {
            return AppLaunchStatus::READY_FOR_LAUNCH;
          }
          else if (hashCode == VALIDATION_IN_PROGRESS_HASH)
          {
            return AppLaunchStatus::VALIDATION_IN_PROGRESS;
          }
          else if (hashCode == LAUNCH_PENDING_HASH)
          {
            return AppLaunchStatus::LAUNCH_PENDING;
          }
          else if (hashCode == LAUNCH_IN_PROGRESS_HASH)
          {
            return AppLaunchStatus::LAUNCH_IN_PROGRESS;
          }
          else if (hashCode == LAUNCHED_HASH)
          {
            return AppLaunchStatus::LAUNCHED;
          }
          else if (hashCode == PARTIALLY_LAUNCHED_HASH)
          {
            return AppLaunchStatus::PARTIALLY_LAUNCHED;
          }
          else if (hashCode == DELTA_LAUNCH_IN_PROGRESS_HASH)
          {
            return AppLaunchStatus::DELTA_LAUNCH_IN_PROGRESS;
          }
          else if (hashCode == DELTA_LAUNCH_FAILED_HASH)
          {
            return AppLaunchStatus::DELTA_LAUNCH_FAILED;
          }
          else if (hashCode == LAUNCH_FAILED_HASH)
          {
            return AppLaunchStatus::LAUNCH_FAILED;
          }
          else if (hashCode == TERMINATE_IN_PROGRESS_HASH)
          {
            return AppLaunchStatus::TERMINATE_IN_PROGRESS;
          }
          else if (hashCode == TERMINATE_FAILED_HASH)
          {
            return AppLaunchStatus::TERMINATE_FAILED;
          }
          else if (hashCode == TERMINATED_HASH)
          {
            return AppLaunchStatus::TERMINATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppLaunchStatus>(hashCode);
          }

          return AppLaunchStatus::NOT_SET;
        }

        Aws::String GetNameForAppLaunchStatus(AppLaunchStatus enumValue)
        {
          switch(enumValue)
          {
          case AppLaunchStatus::READY_FOR_CONFIGURATION:
            return "READY_FOR_CONFIGURATION";
          case AppLaunchStatus::CONFIGURATION_IN_PROGRESS:
            return "CONFIGURATION_IN_PROGRESS";
          case AppLaunchStatus::CONFIGURATION_INVALID:
            return "CONFIGURATION_INVALID";
          case AppLaunchStatus::READY_FOR_LAUNCH:
            return "READY_FOR_LAUNCH";
          case AppLaunchStatus::VALIDATION_IN_PROGRESS:
            return "VALIDATION_IN_PROGRESS";
          case AppLaunchStatus::LAUNCH_PENDING:
            return "LAUNCH_PENDING";
          case AppLaunchStatus::LAUNCH_IN_PROGRESS:
            return "LAUNCH_IN_PROGRESS";
          case AppLaunchStatus::LAUNCHED:
            return "LAUNCHED";
          case AppLaunchStatus::PARTIALLY_LAUNCHED:
            return "PARTIALLY_LAUNCHED";
          case AppLaunchStatus::DELTA_LAUNCH_IN_PROGRESS:
            return "DELTA_LAUNCH_IN_PROGRESS";
          case AppLaunchStatus::DELTA_LAUNCH_FAILED:
            return "DELTA_LAUNCH_FAILED";
          case AppLaunchStatus::LAUNCH_FAILED:
            return "LAUNCH_FAILED";
          case AppLaunchStatus::TERMINATE_IN_PROGRESS:
            return "TERMINATE_IN_PROGRESS";
          case AppLaunchStatus::TERMINATE_FAILED:
            return "TERMINATE_FAILED";
          case AppLaunchStatus::TERMINATED:
            return "TERMINATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppLaunchStatusMapper
    } // namespace Model
  } // namespace SMS
} // namespace Aws
