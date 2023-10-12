/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/UpdateActionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElastiCache
  {
    namespace Model
    {
      namespace UpdateActionStatusMapper
      {

        static constexpr uint32_t not_applied_HASH = ConstExprHashingUtils::HashString("not-applied");
        static constexpr uint32_t waiting_to_start_HASH = ConstExprHashingUtils::HashString("waiting-to-start");
        static constexpr uint32_t in_progress_HASH = ConstExprHashingUtils::HashString("in-progress");
        static constexpr uint32_t stopping_HASH = ConstExprHashingUtils::HashString("stopping");
        static constexpr uint32_t stopped_HASH = ConstExprHashingUtils::HashString("stopped");
        static constexpr uint32_t complete_HASH = ConstExprHashingUtils::HashString("complete");
        static constexpr uint32_t scheduling_HASH = ConstExprHashingUtils::HashString("scheduling");
        static constexpr uint32_t scheduled_HASH = ConstExprHashingUtils::HashString("scheduled");
        static constexpr uint32_t not_applicable_HASH = ConstExprHashingUtils::HashString("not-applicable");


        UpdateActionStatus GetUpdateActionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == not_applied_HASH)
          {
            return UpdateActionStatus::not_applied;
          }
          else if (hashCode == waiting_to_start_HASH)
          {
            return UpdateActionStatus::waiting_to_start;
          }
          else if (hashCode == in_progress_HASH)
          {
            return UpdateActionStatus::in_progress;
          }
          else if (hashCode == stopping_HASH)
          {
            return UpdateActionStatus::stopping;
          }
          else if (hashCode == stopped_HASH)
          {
            return UpdateActionStatus::stopped;
          }
          else if (hashCode == complete_HASH)
          {
            return UpdateActionStatus::complete;
          }
          else if (hashCode == scheduling_HASH)
          {
            return UpdateActionStatus::scheduling;
          }
          else if (hashCode == scheduled_HASH)
          {
            return UpdateActionStatus::scheduled;
          }
          else if (hashCode == not_applicable_HASH)
          {
            return UpdateActionStatus::not_applicable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateActionStatus>(hashCode);
          }

          return UpdateActionStatus::NOT_SET;
        }

        Aws::String GetNameForUpdateActionStatus(UpdateActionStatus enumValue)
        {
          switch(enumValue)
          {
          case UpdateActionStatus::NOT_SET:
            return {};
          case UpdateActionStatus::not_applied:
            return "not-applied";
          case UpdateActionStatus::waiting_to_start:
            return "waiting-to-start";
          case UpdateActionStatus::in_progress:
            return "in-progress";
          case UpdateActionStatus::stopping:
            return "stopping";
          case UpdateActionStatus::stopped:
            return "stopped";
          case UpdateActionStatus::complete:
            return "complete";
          case UpdateActionStatus::scheduling:
            return "scheduling";
          case UpdateActionStatus::scheduled:
            return "scheduled";
          case UpdateActionStatus::not_applicable:
            return "not-applicable";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdateActionStatusMapper
    } // namespace Model
  } // namespace ElastiCache
} // namespace Aws
