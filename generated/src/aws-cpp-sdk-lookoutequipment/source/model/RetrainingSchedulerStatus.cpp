/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/RetrainingSchedulerStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LookoutEquipment
  {
    namespace Model
    {
      namespace RetrainingSchedulerStatusMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");


        RetrainingSchedulerStatus GetRetrainingSchedulerStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return RetrainingSchedulerStatus::PENDING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return RetrainingSchedulerStatus::RUNNING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return RetrainingSchedulerStatus::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return RetrainingSchedulerStatus::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RetrainingSchedulerStatus>(hashCode);
          }

          return RetrainingSchedulerStatus::NOT_SET;
        }

        Aws::String GetNameForRetrainingSchedulerStatus(RetrainingSchedulerStatus enumValue)
        {
          switch(enumValue)
          {
          case RetrainingSchedulerStatus::NOT_SET:
            return {};
          case RetrainingSchedulerStatus::PENDING:
            return "PENDING";
          case RetrainingSchedulerStatus::RUNNING:
            return "RUNNING";
          case RetrainingSchedulerStatus::STOPPING:
            return "STOPPING";
          case RetrainingSchedulerStatus::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RetrainingSchedulerStatusMapper
    } // namespace Model
  } // namespace LookoutEquipment
} // namespace Aws
