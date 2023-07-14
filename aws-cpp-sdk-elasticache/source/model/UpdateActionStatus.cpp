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

        static const int not_applied_HASH = HashingUtils::HashString("not-applied");
        static const int waiting_to_start_HASH = HashingUtils::HashString("waiting-to-start");
        static const int in_progress_HASH = HashingUtils::HashString("in-progress");
        static const int stopping_HASH = HashingUtils::HashString("stopping");
        static const int stopped_HASH = HashingUtils::HashString("stopped");
        static const int complete_HASH = HashingUtils::HashString("complete");
        static const int scheduling_HASH = HashingUtils::HashString("scheduling");
        static const int scheduled_HASH = HashingUtils::HashString("scheduled");
        static const int not_applicable_HASH = HashingUtils::HashString("not-applicable");


        UpdateActionStatus GetUpdateActionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
