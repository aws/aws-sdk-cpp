/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/ExecutionState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ARCRegionswitch
  {
    namespace Model
    {
      namespace ExecutionStateMapper
      {

        static const int inProgress_HASH = HashingUtils::HashString("inProgress");
        static const int pausedByFailedStep_HASH = HashingUtils::HashString("pausedByFailedStep");
        static const int pausedByOperator_HASH = HashingUtils::HashString("pausedByOperator");
        static const int completed_HASH = HashingUtils::HashString("completed");
        static const int completedWithExceptions_HASH = HashingUtils::HashString("completedWithExceptions");
        static const int canceled_HASH = HashingUtils::HashString("canceled");
        static const int planExecutionTimedOut_HASH = HashingUtils::HashString("planExecutionTimedOut");
        static const int pendingManualApproval_HASH = HashingUtils::HashString("pendingManualApproval");
        static const int failed_HASH = HashingUtils::HashString("failed");
        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int completedMonitoringApplicationHealth_HASH = HashingUtils::HashString("completedMonitoringApplicationHealth");


        ExecutionState GetExecutionStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == inProgress_HASH)
          {
            return ExecutionState::inProgress;
          }
          else if (hashCode == pausedByFailedStep_HASH)
          {
            return ExecutionState::pausedByFailedStep;
          }
          else if (hashCode == pausedByOperator_HASH)
          {
            return ExecutionState::pausedByOperator;
          }
          else if (hashCode == completed_HASH)
          {
            return ExecutionState::completed;
          }
          else if (hashCode == completedWithExceptions_HASH)
          {
            return ExecutionState::completedWithExceptions;
          }
          else if (hashCode == canceled_HASH)
          {
            return ExecutionState::canceled;
          }
          else if (hashCode == planExecutionTimedOut_HASH)
          {
            return ExecutionState::planExecutionTimedOut;
          }
          else if (hashCode == pendingManualApproval_HASH)
          {
            return ExecutionState::pendingManualApproval;
          }
          else if (hashCode == failed_HASH)
          {
            return ExecutionState::failed;
          }
          else if (hashCode == pending_HASH)
          {
            return ExecutionState::pending;
          }
          else if (hashCode == completedMonitoringApplicationHealth_HASH)
          {
            return ExecutionState::completedMonitoringApplicationHealth;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutionState>(hashCode);
          }

          return ExecutionState::NOT_SET;
        }

        Aws::String GetNameForExecutionState(ExecutionState enumValue)
        {
          switch(enumValue)
          {
          case ExecutionState::NOT_SET:
            return {};
          case ExecutionState::inProgress:
            return "inProgress";
          case ExecutionState::pausedByFailedStep:
            return "pausedByFailedStep";
          case ExecutionState::pausedByOperator:
            return "pausedByOperator";
          case ExecutionState::completed:
            return "completed";
          case ExecutionState::completedWithExceptions:
            return "completedWithExceptions";
          case ExecutionState::canceled:
            return "canceled";
          case ExecutionState::planExecutionTimedOut:
            return "planExecutionTimedOut";
          case ExecutionState::pendingManualApproval:
            return "pendingManualApproval";
          case ExecutionState::failed:
            return "failed";
          case ExecutionState::pending:
            return "pending";
          case ExecutionState::completedMonitoringApplicationHealth:
            return "completedMonitoringApplicationHealth";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExecutionStateMapper
    } // namespace Model
  } // namespace ARCRegionswitch
} // namespace Aws
