/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/SimulationJobBatchStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RoboMaker
  {
    namespace Model
    {
      namespace SimulationJobBatchStatusMapper
      {

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int Canceled_HASH = HashingUtils::HashString("Canceled");
        static const int Canceling_HASH = HashingUtils::HashString("Canceling");
        static const int Completing_HASH = HashingUtils::HashString("Completing");
        static const int TimingOut_HASH = HashingUtils::HashString("TimingOut");
        static const int TimedOut_HASH = HashingUtils::HashString("TimedOut");


        SimulationJobBatchStatus GetSimulationJobBatchStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return SimulationJobBatchStatus::Pending;
          }
          else if (hashCode == InProgress_HASH)
          {
            return SimulationJobBatchStatus::InProgress;
          }
          else if (hashCode == Failed_HASH)
          {
            return SimulationJobBatchStatus::Failed;
          }
          else if (hashCode == Completed_HASH)
          {
            return SimulationJobBatchStatus::Completed;
          }
          else if (hashCode == Canceled_HASH)
          {
            return SimulationJobBatchStatus::Canceled;
          }
          else if (hashCode == Canceling_HASH)
          {
            return SimulationJobBatchStatus::Canceling;
          }
          else if (hashCode == Completing_HASH)
          {
            return SimulationJobBatchStatus::Completing;
          }
          else if (hashCode == TimingOut_HASH)
          {
            return SimulationJobBatchStatus::TimingOut;
          }
          else if (hashCode == TimedOut_HASH)
          {
            return SimulationJobBatchStatus::TimedOut;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SimulationJobBatchStatus>(hashCode);
          }

          return SimulationJobBatchStatus::NOT_SET;
        }

        Aws::String GetNameForSimulationJobBatchStatus(SimulationJobBatchStatus enumValue)
        {
          switch(enumValue)
          {
          case SimulationJobBatchStatus::Pending:
            return "Pending";
          case SimulationJobBatchStatus::InProgress:
            return "InProgress";
          case SimulationJobBatchStatus::Failed:
            return "Failed";
          case SimulationJobBatchStatus::Completed:
            return "Completed";
          case SimulationJobBatchStatus::Canceled:
            return "Canceled";
          case SimulationJobBatchStatus::Canceling:
            return "Canceling";
          case SimulationJobBatchStatus::Completing:
            return "Completing";
          case SimulationJobBatchStatus::TimingOut:
            return "TimingOut";
          case SimulationJobBatchStatus::TimedOut:
            return "TimedOut";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SimulationJobBatchStatusMapper
    } // namespace Model
  } // namespace RoboMaker
} // namespace Aws
