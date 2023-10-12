/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/ApplicationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisAnalyticsV2
  {
    namespace Model
    {
      namespace ApplicationStatusMapper
      {

        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t STARTING_HASH = ConstExprHashingUtils::HashString("STARTING");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");
        static constexpr uint32_t READY_HASH = ConstExprHashingUtils::HashString("READY");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t AUTOSCALING_HASH = ConstExprHashingUtils::HashString("AUTOSCALING");
        static constexpr uint32_t FORCE_STOPPING_HASH = ConstExprHashingUtils::HashString("FORCE_STOPPING");
        static constexpr uint32_t ROLLING_BACK_HASH = ConstExprHashingUtils::HashString("ROLLING_BACK");
        static constexpr uint32_t MAINTENANCE_HASH = ConstExprHashingUtils::HashString("MAINTENANCE");
        static constexpr uint32_t ROLLED_BACK_HASH = ConstExprHashingUtils::HashString("ROLLED_BACK");


        ApplicationStatus GetApplicationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DELETING_HASH)
          {
            return ApplicationStatus::DELETING;
          }
          else if (hashCode == STARTING_HASH)
          {
            return ApplicationStatus::STARTING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return ApplicationStatus::STOPPING;
          }
          else if (hashCode == READY_HASH)
          {
            return ApplicationStatus::READY;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return ApplicationStatus::RUNNING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ApplicationStatus::UPDATING;
          }
          else if (hashCode == AUTOSCALING_HASH)
          {
            return ApplicationStatus::AUTOSCALING;
          }
          else if (hashCode == FORCE_STOPPING_HASH)
          {
            return ApplicationStatus::FORCE_STOPPING;
          }
          else if (hashCode == ROLLING_BACK_HASH)
          {
            return ApplicationStatus::ROLLING_BACK;
          }
          else if (hashCode == MAINTENANCE_HASH)
          {
            return ApplicationStatus::MAINTENANCE;
          }
          else if (hashCode == ROLLED_BACK_HASH)
          {
            return ApplicationStatus::ROLLED_BACK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationStatus>(hashCode);
          }

          return ApplicationStatus::NOT_SET;
        }

        Aws::String GetNameForApplicationStatus(ApplicationStatus enumValue)
        {
          switch(enumValue)
          {
          case ApplicationStatus::NOT_SET:
            return {};
          case ApplicationStatus::DELETING:
            return "DELETING";
          case ApplicationStatus::STARTING:
            return "STARTING";
          case ApplicationStatus::STOPPING:
            return "STOPPING";
          case ApplicationStatus::READY:
            return "READY";
          case ApplicationStatus::RUNNING:
            return "RUNNING";
          case ApplicationStatus::UPDATING:
            return "UPDATING";
          case ApplicationStatus::AUTOSCALING:
            return "AUTOSCALING";
          case ApplicationStatus::FORCE_STOPPING:
            return "FORCE_STOPPING";
          case ApplicationStatus::ROLLING_BACK:
            return "ROLLING_BACK";
          case ApplicationStatus::MAINTENANCE:
            return "MAINTENANCE";
          case ApplicationStatus::ROLLED_BACK:
            return "ROLLED_BACK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationStatusMapper
    } // namespace Model
  } // namespace KinesisAnalyticsV2
} // namespace Aws
