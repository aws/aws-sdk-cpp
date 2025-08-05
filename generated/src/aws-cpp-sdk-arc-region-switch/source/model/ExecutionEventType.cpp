/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/ExecutionEventType.h>
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
      namespace ExecutionEventTypeMapper
      {

        static const int unknown_HASH = HashingUtils::HashString("unknown");
        static const int executionPending_HASH = HashingUtils::HashString("executionPending");
        static const int executionStarted_HASH = HashingUtils::HashString("executionStarted");
        static const int executionSucceeded_HASH = HashingUtils::HashString("executionSucceeded");
        static const int executionFailed_HASH = HashingUtils::HashString("executionFailed");
        static const int executionPausing_HASH = HashingUtils::HashString("executionPausing");
        static const int executionPaused_HASH = HashingUtils::HashString("executionPaused");
        static const int executionCanceling_HASH = HashingUtils::HashString("executionCanceling");
        static const int executionCanceled_HASH = HashingUtils::HashString("executionCanceled");
        static const int executionPendingApproval_HASH = HashingUtils::HashString("executionPendingApproval");
        static const int executionBehaviorChangedToUngraceful_HASH = HashingUtils::HashString("executionBehaviorChangedToUngraceful");
        static const int executionBehaviorChangedToGraceful_HASH = HashingUtils::HashString("executionBehaviorChangedToGraceful");
        static const int executionPendingChildPlanManualApproval_HASH = HashingUtils::HashString("executionPendingChildPlanManualApproval");
        static const int executionSuccessMonitoringApplicationHealth_HASH = HashingUtils::HashString("executionSuccessMonitoringApplicationHealth");
        static const int stepStarted_HASH = HashingUtils::HashString("stepStarted");
        static const int stepUpdate_HASH = HashingUtils::HashString("stepUpdate");
        static const int stepSucceeded_HASH = HashingUtils::HashString("stepSucceeded");
        static const int stepFailed_HASH = HashingUtils::HashString("stepFailed");
        static const int stepSkipped_HASH = HashingUtils::HashString("stepSkipped");
        static const int stepPausedByError_HASH = HashingUtils::HashString("stepPausedByError");
        static const int stepPausedByOperator_HASH = HashingUtils::HashString("stepPausedByOperator");
        static const int stepCanceled_HASH = HashingUtils::HashString("stepCanceled");
        static const int stepPendingApproval_HASH = HashingUtils::HashString("stepPendingApproval");
        static const int stepExecutionBehaviorChangedToUngraceful_HASH = HashingUtils::HashString("stepExecutionBehaviorChangedToUngraceful");
        static const int stepPendingApplicationHealthMonitor_HASH = HashingUtils::HashString("stepPendingApplicationHealthMonitor");


        ExecutionEventType GetExecutionEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == unknown_HASH)
          {
            return ExecutionEventType::unknown;
          }
          else if (hashCode == executionPending_HASH)
          {
            return ExecutionEventType::executionPending;
          }
          else if (hashCode == executionStarted_HASH)
          {
            return ExecutionEventType::executionStarted;
          }
          else if (hashCode == executionSucceeded_HASH)
          {
            return ExecutionEventType::executionSucceeded;
          }
          else if (hashCode == executionFailed_HASH)
          {
            return ExecutionEventType::executionFailed;
          }
          else if (hashCode == executionPausing_HASH)
          {
            return ExecutionEventType::executionPausing;
          }
          else if (hashCode == executionPaused_HASH)
          {
            return ExecutionEventType::executionPaused;
          }
          else if (hashCode == executionCanceling_HASH)
          {
            return ExecutionEventType::executionCanceling;
          }
          else if (hashCode == executionCanceled_HASH)
          {
            return ExecutionEventType::executionCanceled;
          }
          else if (hashCode == executionPendingApproval_HASH)
          {
            return ExecutionEventType::executionPendingApproval;
          }
          else if (hashCode == executionBehaviorChangedToUngraceful_HASH)
          {
            return ExecutionEventType::executionBehaviorChangedToUngraceful;
          }
          else if (hashCode == executionBehaviorChangedToGraceful_HASH)
          {
            return ExecutionEventType::executionBehaviorChangedToGraceful;
          }
          else if (hashCode == executionPendingChildPlanManualApproval_HASH)
          {
            return ExecutionEventType::executionPendingChildPlanManualApproval;
          }
          else if (hashCode == executionSuccessMonitoringApplicationHealth_HASH)
          {
            return ExecutionEventType::executionSuccessMonitoringApplicationHealth;
          }
          else if (hashCode == stepStarted_HASH)
          {
            return ExecutionEventType::stepStarted;
          }
          else if (hashCode == stepUpdate_HASH)
          {
            return ExecutionEventType::stepUpdate;
          }
          else if (hashCode == stepSucceeded_HASH)
          {
            return ExecutionEventType::stepSucceeded;
          }
          else if (hashCode == stepFailed_HASH)
          {
            return ExecutionEventType::stepFailed;
          }
          else if (hashCode == stepSkipped_HASH)
          {
            return ExecutionEventType::stepSkipped;
          }
          else if (hashCode == stepPausedByError_HASH)
          {
            return ExecutionEventType::stepPausedByError;
          }
          else if (hashCode == stepPausedByOperator_HASH)
          {
            return ExecutionEventType::stepPausedByOperator;
          }
          else if (hashCode == stepCanceled_HASH)
          {
            return ExecutionEventType::stepCanceled;
          }
          else if (hashCode == stepPendingApproval_HASH)
          {
            return ExecutionEventType::stepPendingApproval;
          }
          else if (hashCode == stepExecutionBehaviorChangedToUngraceful_HASH)
          {
            return ExecutionEventType::stepExecutionBehaviorChangedToUngraceful;
          }
          else if (hashCode == stepPendingApplicationHealthMonitor_HASH)
          {
            return ExecutionEventType::stepPendingApplicationHealthMonitor;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutionEventType>(hashCode);
          }

          return ExecutionEventType::NOT_SET;
        }

        Aws::String GetNameForExecutionEventType(ExecutionEventType enumValue)
        {
          switch(enumValue)
          {
          case ExecutionEventType::NOT_SET:
            return {};
          case ExecutionEventType::unknown:
            return "unknown";
          case ExecutionEventType::executionPending:
            return "executionPending";
          case ExecutionEventType::executionStarted:
            return "executionStarted";
          case ExecutionEventType::executionSucceeded:
            return "executionSucceeded";
          case ExecutionEventType::executionFailed:
            return "executionFailed";
          case ExecutionEventType::executionPausing:
            return "executionPausing";
          case ExecutionEventType::executionPaused:
            return "executionPaused";
          case ExecutionEventType::executionCanceling:
            return "executionCanceling";
          case ExecutionEventType::executionCanceled:
            return "executionCanceled";
          case ExecutionEventType::executionPendingApproval:
            return "executionPendingApproval";
          case ExecutionEventType::executionBehaviorChangedToUngraceful:
            return "executionBehaviorChangedToUngraceful";
          case ExecutionEventType::executionBehaviorChangedToGraceful:
            return "executionBehaviorChangedToGraceful";
          case ExecutionEventType::executionPendingChildPlanManualApproval:
            return "executionPendingChildPlanManualApproval";
          case ExecutionEventType::executionSuccessMonitoringApplicationHealth:
            return "executionSuccessMonitoringApplicationHealth";
          case ExecutionEventType::stepStarted:
            return "stepStarted";
          case ExecutionEventType::stepUpdate:
            return "stepUpdate";
          case ExecutionEventType::stepSucceeded:
            return "stepSucceeded";
          case ExecutionEventType::stepFailed:
            return "stepFailed";
          case ExecutionEventType::stepSkipped:
            return "stepSkipped";
          case ExecutionEventType::stepPausedByError:
            return "stepPausedByError";
          case ExecutionEventType::stepPausedByOperator:
            return "stepPausedByOperator";
          case ExecutionEventType::stepCanceled:
            return "stepCanceled";
          case ExecutionEventType::stepPendingApproval:
            return "stepPendingApproval";
          case ExecutionEventType::stepExecutionBehaviorChangedToUngraceful:
            return "stepExecutionBehaviorChangedToUngraceful";
          case ExecutionEventType::stepPendingApplicationHealthMonitor:
            return "stepPendingApplicationHealthMonitor";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExecutionEventTypeMapper
    } // namespace Model
  } // namespace ARCRegionswitch
} // namespace Aws
