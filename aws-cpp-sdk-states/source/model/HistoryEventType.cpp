/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/HistoryEventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SFN
  {
    namespace Model
    {
      namespace HistoryEventTypeMapper
      {

        static const int ActivityFailed_HASH = HashingUtils::HashString("ActivityFailed");
        static const int ActivityScheduled_HASH = HashingUtils::HashString("ActivityScheduled");
        static const int ActivityScheduleFailed_HASH = HashingUtils::HashString("ActivityScheduleFailed");
        static const int ActivityStarted_HASH = HashingUtils::HashString("ActivityStarted");
        static const int ActivitySucceeded_HASH = HashingUtils::HashString("ActivitySucceeded");
        static const int ActivityTimedOut_HASH = HashingUtils::HashString("ActivityTimedOut");
        static const int ChoiceStateEntered_HASH = HashingUtils::HashString("ChoiceStateEntered");
        static const int ChoiceStateExited_HASH = HashingUtils::HashString("ChoiceStateExited");
        static const int ExecutionAborted_HASH = HashingUtils::HashString("ExecutionAborted");
        static const int ExecutionFailed_HASH = HashingUtils::HashString("ExecutionFailed");
        static const int ExecutionStarted_HASH = HashingUtils::HashString("ExecutionStarted");
        static const int ExecutionSucceeded_HASH = HashingUtils::HashString("ExecutionSucceeded");
        static const int ExecutionTimedOut_HASH = HashingUtils::HashString("ExecutionTimedOut");
        static const int FailStateEntered_HASH = HashingUtils::HashString("FailStateEntered");
        static const int LambdaFunctionFailed_HASH = HashingUtils::HashString("LambdaFunctionFailed");
        static const int LambdaFunctionScheduled_HASH = HashingUtils::HashString("LambdaFunctionScheduled");
        static const int LambdaFunctionScheduleFailed_HASH = HashingUtils::HashString("LambdaFunctionScheduleFailed");
        static const int LambdaFunctionStarted_HASH = HashingUtils::HashString("LambdaFunctionStarted");
        static const int LambdaFunctionStartFailed_HASH = HashingUtils::HashString("LambdaFunctionStartFailed");
        static const int LambdaFunctionSucceeded_HASH = HashingUtils::HashString("LambdaFunctionSucceeded");
        static const int LambdaFunctionTimedOut_HASH = HashingUtils::HashString("LambdaFunctionTimedOut");
        static const int MapIterationAborted_HASH = HashingUtils::HashString("MapIterationAborted");
        static const int MapIterationFailed_HASH = HashingUtils::HashString("MapIterationFailed");
        static const int MapIterationStarted_HASH = HashingUtils::HashString("MapIterationStarted");
        static const int MapIterationSucceeded_HASH = HashingUtils::HashString("MapIterationSucceeded");
        static const int MapStateAborted_HASH = HashingUtils::HashString("MapStateAborted");
        static const int MapStateEntered_HASH = HashingUtils::HashString("MapStateEntered");
        static const int MapStateExited_HASH = HashingUtils::HashString("MapStateExited");
        static const int MapStateFailed_HASH = HashingUtils::HashString("MapStateFailed");
        static const int MapStateStarted_HASH = HashingUtils::HashString("MapStateStarted");
        static const int MapStateSucceeded_HASH = HashingUtils::HashString("MapStateSucceeded");
        static const int ParallelStateAborted_HASH = HashingUtils::HashString("ParallelStateAborted");
        static const int ParallelStateEntered_HASH = HashingUtils::HashString("ParallelStateEntered");
        static const int ParallelStateExited_HASH = HashingUtils::HashString("ParallelStateExited");
        static const int ParallelStateFailed_HASH = HashingUtils::HashString("ParallelStateFailed");
        static const int ParallelStateStarted_HASH = HashingUtils::HashString("ParallelStateStarted");
        static const int ParallelStateSucceeded_HASH = HashingUtils::HashString("ParallelStateSucceeded");
        static const int PassStateEntered_HASH = HashingUtils::HashString("PassStateEntered");
        static const int PassStateExited_HASH = HashingUtils::HashString("PassStateExited");
        static const int SucceedStateEntered_HASH = HashingUtils::HashString("SucceedStateEntered");
        static const int SucceedStateExited_HASH = HashingUtils::HashString("SucceedStateExited");
        static const int TaskFailed_HASH = HashingUtils::HashString("TaskFailed");
        static const int TaskScheduled_HASH = HashingUtils::HashString("TaskScheduled");
        static const int TaskStarted_HASH = HashingUtils::HashString("TaskStarted");
        static const int TaskStartFailed_HASH = HashingUtils::HashString("TaskStartFailed");
        static const int TaskStateAborted_HASH = HashingUtils::HashString("TaskStateAborted");
        static const int TaskStateEntered_HASH = HashingUtils::HashString("TaskStateEntered");
        static const int TaskStateExited_HASH = HashingUtils::HashString("TaskStateExited");
        static const int TaskSubmitFailed_HASH = HashingUtils::HashString("TaskSubmitFailed");
        static const int TaskSubmitted_HASH = HashingUtils::HashString("TaskSubmitted");
        static const int TaskSucceeded_HASH = HashingUtils::HashString("TaskSucceeded");
        static const int TaskTimedOut_HASH = HashingUtils::HashString("TaskTimedOut");
        static const int WaitStateAborted_HASH = HashingUtils::HashString("WaitStateAborted");
        static const int WaitStateEntered_HASH = HashingUtils::HashString("WaitStateEntered");
        static const int WaitStateExited_HASH = HashingUtils::HashString("WaitStateExited");
        static const int MapRunAborted_HASH = HashingUtils::HashString("MapRunAborted");
        static const int MapRunFailed_HASH = HashingUtils::HashString("MapRunFailed");
        static const int MapRunStarted_HASH = HashingUtils::HashString("MapRunStarted");
        static const int MapRunSucceeded_HASH = HashingUtils::HashString("MapRunSucceeded");


        HistoryEventType GetHistoryEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ActivityFailed_HASH)
          {
            return HistoryEventType::ActivityFailed;
          }
          else if (hashCode == ActivityScheduled_HASH)
          {
            return HistoryEventType::ActivityScheduled;
          }
          else if (hashCode == ActivityScheduleFailed_HASH)
          {
            return HistoryEventType::ActivityScheduleFailed;
          }
          else if (hashCode == ActivityStarted_HASH)
          {
            return HistoryEventType::ActivityStarted;
          }
          else if (hashCode == ActivitySucceeded_HASH)
          {
            return HistoryEventType::ActivitySucceeded;
          }
          else if (hashCode == ActivityTimedOut_HASH)
          {
            return HistoryEventType::ActivityTimedOut;
          }
          else if (hashCode == ChoiceStateEntered_HASH)
          {
            return HistoryEventType::ChoiceStateEntered;
          }
          else if (hashCode == ChoiceStateExited_HASH)
          {
            return HistoryEventType::ChoiceStateExited;
          }
          else if (hashCode == ExecutionAborted_HASH)
          {
            return HistoryEventType::ExecutionAborted;
          }
          else if (hashCode == ExecutionFailed_HASH)
          {
            return HistoryEventType::ExecutionFailed;
          }
          else if (hashCode == ExecutionStarted_HASH)
          {
            return HistoryEventType::ExecutionStarted;
          }
          else if (hashCode == ExecutionSucceeded_HASH)
          {
            return HistoryEventType::ExecutionSucceeded;
          }
          else if (hashCode == ExecutionTimedOut_HASH)
          {
            return HistoryEventType::ExecutionTimedOut;
          }
          else if (hashCode == FailStateEntered_HASH)
          {
            return HistoryEventType::FailStateEntered;
          }
          else if (hashCode == LambdaFunctionFailed_HASH)
          {
            return HistoryEventType::LambdaFunctionFailed;
          }
          else if (hashCode == LambdaFunctionScheduled_HASH)
          {
            return HistoryEventType::LambdaFunctionScheduled;
          }
          else if (hashCode == LambdaFunctionScheduleFailed_HASH)
          {
            return HistoryEventType::LambdaFunctionScheduleFailed;
          }
          else if (hashCode == LambdaFunctionStarted_HASH)
          {
            return HistoryEventType::LambdaFunctionStarted;
          }
          else if (hashCode == LambdaFunctionStartFailed_HASH)
          {
            return HistoryEventType::LambdaFunctionStartFailed;
          }
          else if (hashCode == LambdaFunctionSucceeded_HASH)
          {
            return HistoryEventType::LambdaFunctionSucceeded;
          }
          else if (hashCode == LambdaFunctionTimedOut_HASH)
          {
            return HistoryEventType::LambdaFunctionTimedOut;
          }
          else if (hashCode == MapIterationAborted_HASH)
          {
            return HistoryEventType::MapIterationAborted;
          }
          else if (hashCode == MapIterationFailed_HASH)
          {
            return HistoryEventType::MapIterationFailed;
          }
          else if (hashCode == MapIterationStarted_HASH)
          {
            return HistoryEventType::MapIterationStarted;
          }
          else if (hashCode == MapIterationSucceeded_HASH)
          {
            return HistoryEventType::MapIterationSucceeded;
          }
          else if (hashCode == MapStateAborted_HASH)
          {
            return HistoryEventType::MapStateAborted;
          }
          else if (hashCode == MapStateEntered_HASH)
          {
            return HistoryEventType::MapStateEntered;
          }
          else if (hashCode == MapStateExited_HASH)
          {
            return HistoryEventType::MapStateExited;
          }
          else if (hashCode == MapStateFailed_HASH)
          {
            return HistoryEventType::MapStateFailed;
          }
          else if (hashCode == MapStateStarted_HASH)
          {
            return HistoryEventType::MapStateStarted;
          }
          else if (hashCode == MapStateSucceeded_HASH)
          {
            return HistoryEventType::MapStateSucceeded;
          }
          else if (hashCode == ParallelStateAborted_HASH)
          {
            return HistoryEventType::ParallelStateAborted;
          }
          else if (hashCode == ParallelStateEntered_HASH)
          {
            return HistoryEventType::ParallelStateEntered;
          }
          else if (hashCode == ParallelStateExited_HASH)
          {
            return HistoryEventType::ParallelStateExited;
          }
          else if (hashCode == ParallelStateFailed_HASH)
          {
            return HistoryEventType::ParallelStateFailed;
          }
          else if (hashCode == ParallelStateStarted_HASH)
          {
            return HistoryEventType::ParallelStateStarted;
          }
          else if (hashCode == ParallelStateSucceeded_HASH)
          {
            return HistoryEventType::ParallelStateSucceeded;
          }
          else if (hashCode == PassStateEntered_HASH)
          {
            return HistoryEventType::PassStateEntered;
          }
          else if (hashCode == PassStateExited_HASH)
          {
            return HistoryEventType::PassStateExited;
          }
          else if (hashCode == SucceedStateEntered_HASH)
          {
            return HistoryEventType::SucceedStateEntered;
          }
          else if (hashCode == SucceedStateExited_HASH)
          {
            return HistoryEventType::SucceedStateExited;
          }
          else if (hashCode == TaskFailed_HASH)
          {
            return HistoryEventType::TaskFailed;
          }
          else if (hashCode == TaskScheduled_HASH)
          {
            return HistoryEventType::TaskScheduled;
          }
          else if (hashCode == TaskStarted_HASH)
          {
            return HistoryEventType::TaskStarted;
          }
          else if (hashCode == TaskStartFailed_HASH)
          {
            return HistoryEventType::TaskStartFailed;
          }
          else if (hashCode == TaskStateAborted_HASH)
          {
            return HistoryEventType::TaskStateAborted;
          }
          else if (hashCode == TaskStateEntered_HASH)
          {
            return HistoryEventType::TaskStateEntered;
          }
          else if (hashCode == TaskStateExited_HASH)
          {
            return HistoryEventType::TaskStateExited;
          }
          else if (hashCode == TaskSubmitFailed_HASH)
          {
            return HistoryEventType::TaskSubmitFailed;
          }
          else if (hashCode == TaskSubmitted_HASH)
          {
            return HistoryEventType::TaskSubmitted;
          }
          else if (hashCode == TaskSucceeded_HASH)
          {
            return HistoryEventType::TaskSucceeded;
          }
          else if (hashCode == TaskTimedOut_HASH)
          {
            return HistoryEventType::TaskTimedOut;
          }
          else if (hashCode == WaitStateAborted_HASH)
          {
            return HistoryEventType::WaitStateAborted;
          }
          else if (hashCode == WaitStateEntered_HASH)
          {
            return HistoryEventType::WaitStateEntered;
          }
          else if (hashCode == WaitStateExited_HASH)
          {
            return HistoryEventType::WaitStateExited;
          }
          else if (hashCode == MapRunAborted_HASH)
          {
            return HistoryEventType::MapRunAborted;
          }
          else if (hashCode == MapRunFailed_HASH)
          {
            return HistoryEventType::MapRunFailed;
          }
          else if (hashCode == MapRunStarted_HASH)
          {
            return HistoryEventType::MapRunStarted;
          }
          else if (hashCode == MapRunSucceeded_HASH)
          {
            return HistoryEventType::MapRunSucceeded;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HistoryEventType>(hashCode);
          }

          return HistoryEventType::NOT_SET;
        }

        Aws::String GetNameForHistoryEventType(HistoryEventType enumValue)
        {
          switch(enumValue)
          {
          case HistoryEventType::ActivityFailed:
            return "ActivityFailed";
          case HistoryEventType::ActivityScheduled:
            return "ActivityScheduled";
          case HistoryEventType::ActivityScheduleFailed:
            return "ActivityScheduleFailed";
          case HistoryEventType::ActivityStarted:
            return "ActivityStarted";
          case HistoryEventType::ActivitySucceeded:
            return "ActivitySucceeded";
          case HistoryEventType::ActivityTimedOut:
            return "ActivityTimedOut";
          case HistoryEventType::ChoiceStateEntered:
            return "ChoiceStateEntered";
          case HistoryEventType::ChoiceStateExited:
            return "ChoiceStateExited";
          case HistoryEventType::ExecutionAborted:
            return "ExecutionAborted";
          case HistoryEventType::ExecutionFailed:
            return "ExecutionFailed";
          case HistoryEventType::ExecutionStarted:
            return "ExecutionStarted";
          case HistoryEventType::ExecutionSucceeded:
            return "ExecutionSucceeded";
          case HistoryEventType::ExecutionTimedOut:
            return "ExecutionTimedOut";
          case HistoryEventType::FailStateEntered:
            return "FailStateEntered";
          case HistoryEventType::LambdaFunctionFailed:
            return "LambdaFunctionFailed";
          case HistoryEventType::LambdaFunctionScheduled:
            return "LambdaFunctionScheduled";
          case HistoryEventType::LambdaFunctionScheduleFailed:
            return "LambdaFunctionScheduleFailed";
          case HistoryEventType::LambdaFunctionStarted:
            return "LambdaFunctionStarted";
          case HistoryEventType::LambdaFunctionStartFailed:
            return "LambdaFunctionStartFailed";
          case HistoryEventType::LambdaFunctionSucceeded:
            return "LambdaFunctionSucceeded";
          case HistoryEventType::LambdaFunctionTimedOut:
            return "LambdaFunctionTimedOut";
          case HistoryEventType::MapIterationAborted:
            return "MapIterationAborted";
          case HistoryEventType::MapIterationFailed:
            return "MapIterationFailed";
          case HistoryEventType::MapIterationStarted:
            return "MapIterationStarted";
          case HistoryEventType::MapIterationSucceeded:
            return "MapIterationSucceeded";
          case HistoryEventType::MapStateAborted:
            return "MapStateAborted";
          case HistoryEventType::MapStateEntered:
            return "MapStateEntered";
          case HistoryEventType::MapStateExited:
            return "MapStateExited";
          case HistoryEventType::MapStateFailed:
            return "MapStateFailed";
          case HistoryEventType::MapStateStarted:
            return "MapStateStarted";
          case HistoryEventType::MapStateSucceeded:
            return "MapStateSucceeded";
          case HistoryEventType::ParallelStateAborted:
            return "ParallelStateAborted";
          case HistoryEventType::ParallelStateEntered:
            return "ParallelStateEntered";
          case HistoryEventType::ParallelStateExited:
            return "ParallelStateExited";
          case HistoryEventType::ParallelStateFailed:
            return "ParallelStateFailed";
          case HistoryEventType::ParallelStateStarted:
            return "ParallelStateStarted";
          case HistoryEventType::ParallelStateSucceeded:
            return "ParallelStateSucceeded";
          case HistoryEventType::PassStateEntered:
            return "PassStateEntered";
          case HistoryEventType::PassStateExited:
            return "PassStateExited";
          case HistoryEventType::SucceedStateEntered:
            return "SucceedStateEntered";
          case HistoryEventType::SucceedStateExited:
            return "SucceedStateExited";
          case HistoryEventType::TaskFailed:
            return "TaskFailed";
          case HistoryEventType::TaskScheduled:
            return "TaskScheduled";
          case HistoryEventType::TaskStarted:
            return "TaskStarted";
          case HistoryEventType::TaskStartFailed:
            return "TaskStartFailed";
          case HistoryEventType::TaskStateAborted:
            return "TaskStateAborted";
          case HistoryEventType::TaskStateEntered:
            return "TaskStateEntered";
          case HistoryEventType::TaskStateExited:
            return "TaskStateExited";
          case HistoryEventType::TaskSubmitFailed:
            return "TaskSubmitFailed";
          case HistoryEventType::TaskSubmitted:
            return "TaskSubmitted";
          case HistoryEventType::TaskSucceeded:
            return "TaskSucceeded";
          case HistoryEventType::TaskTimedOut:
            return "TaskTimedOut";
          case HistoryEventType::WaitStateAborted:
            return "WaitStateAborted";
          case HistoryEventType::WaitStateEntered:
            return "WaitStateEntered";
          case HistoryEventType::WaitStateExited:
            return "WaitStateExited";
          case HistoryEventType::MapRunAborted:
            return "MapRunAborted";
          case HistoryEventType::MapRunFailed:
            return "MapRunFailed";
          case HistoryEventType::MapRunStarted:
            return "MapRunStarted";
          case HistoryEventType::MapRunSucceeded:
            return "MapRunSucceeded";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HistoryEventTypeMapper
    } // namespace Model
  } // namespace SFN
} // namespace Aws
