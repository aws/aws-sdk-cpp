/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
        static const int ActivityScheduleFailed_HASH = HashingUtils::HashString("ActivityScheduleFailed");
        static const int ActivityScheduled_HASH = HashingUtils::HashString("ActivityScheduled");
        static const int ActivityStarted_HASH = HashingUtils::HashString("ActivityStarted");
        static const int ActivitySucceeded_HASH = HashingUtils::HashString("ActivitySucceeded");
        static const int ActivityTimedOut_HASH = HashingUtils::HashString("ActivityTimedOut");
        static const int ChoiceStateEntered_HASH = HashingUtils::HashString("ChoiceStateEntered");
        static const int ChoiceStateExited_HASH = HashingUtils::HashString("ChoiceStateExited");
        static const int ExecutionFailed_HASH = HashingUtils::HashString("ExecutionFailed");
        static const int ExecutionStarted_HASH = HashingUtils::HashString("ExecutionStarted");
        static const int ExecutionSucceeded_HASH = HashingUtils::HashString("ExecutionSucceeded");
        static const int ExecutionAborted_HASH = HashingUtils::HashString("ExecutionAborted");
        static const int ExecutionTimedOut_HASH = HashingUtils::HashString("ExecutionTimedOut");
        static const int FailStateEntered_HASH = HashingUtils::HashString("FailStateEntered");
        static const int LambdaFunctionFailed_HASH = HashingUtils::HashString("LambdaFunctionFailed");
        static const int LambdaFunctionScheduleFailed_HASH = HashingUtils::HashString("LambdaFunctionScheduleFailed");
        static const int LambdaFunctionScheduled_HASH = HashingUtils::HashString("LambdaFunctionScheduled");
        static const int LambdaFunctionStartFailed_HASH = HashingUtils::HashString("LambdaFunctionStartFailed");
        static const int LambdaFunctionStarted_HASH = HashingUtils::HashString("LambdaFunctionStarted");
        static const int LambdaFunctionSucceeded_HASH = HashingUtils::HashString("LambdaFunctionSucceeded");
        static const int LambdaFunctionTimedOut_HASH = HashingUtils::HashString("LambdaFunctionTimedOut");
        static const int SucceedStateEntered_HASH = HashingUtils::HashString("SucceedStateEntered");
        static const int SucceedStateExited_HASH = HashingUtils::HashString("SucceedStateExited");
        static const int TaskStateEntered_HASH = HashingUtils::HashString("TaskStateEntered");
        static const int TaskStateExited_HASH = HashingUtils::HashString("TaskStateExited");
        static const int PassStateEntered_HASH = HashingUtils::HashString("PassStateEntered");
        static const int PassStateExited_HASH = HashingUtils::HashString("PassStateExited");
        static const int ParallelStateEntered_HASH = HashingUtils::HashString("ParallelStateEntered");
        static const int ParallelStateExited_HASH = HashingUtils::HashString("ParallelStateExited");
        static const int WaitStateEntered_HASH = HashingUtils::HashString("WaitStateEntered");
        static const int WaitStateExited_HASH = HashingUtils::HashString("WaitStateExited");


        HistoryEventType GetHistoryEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ActivityFailed_HASH)
          {
            return HistoryEventType::ActivityFailed;
          }
          else if (hashCode == ActivityScheduleFailed_HASH)
          {
            return HistoryEventType::ActivityScheduleFailed;
          }
          else if (hashCode == ActivityScheduled_HASH)
          {
            return HistoryEventType::ActivityScheduled;
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
          else if (hashCode == ExecutionAborted_HASH)
          {
            return HistoryEventType::ExecutionAborted;
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
          else if (hashCode == LambdaFunctionScheduleFailed_HASH)
          {
            return HistoryEventType::LambdaFunctionScheduleFailed;
          }
          else if (hashCode == LambdaFunctionScheduled_HASH)
          {
            return HistoryEventType::LambdaFunctionScheduled;
          }
          else if (hashCode == LambdaFunctionStartFailed_HASH)
          {
            return HistoryEventType::LambdaFunctionStartFailed;
          }
          else if (hashCode == LambdaFunctionStarted_HASH)
          {
            return HistoryEventType::LambdaFunctionStarted;
          }
          else if (hashCode == LambdaFunctionSucceeded_HASH)
          {
            return HistoryEventType::LambdaFunctionSucceeded;
          }
          else if (hashCode == LambdaFunctionTimedOut_HASH)
          {
            return HistoryEventType::LambdaFunctionTimedOut;
          }
          else if (hashCode == SucceedStateEntered_HASH)
          {
            return HistoryEventType::SucceedStateEntered;
          }
          else if (hashCode == SucceedStateExited_HASH)
          {
            return HistoryEventType::SucceedStateExited;
          }
          else if (hashCode == TaskStateEntered_HASH)
          {
            return HistoryEventType::TaskStateEntered;
          }
          else if (hashCode == TaskStateExited_HASH)
          {
            return HistoryEventType::TaskStateExited;
          }
          else if (hashCode == PassStateEntered_HASH)
          {
            return HistoryEventType::PassStateEntered;
          }
          else if (hashCode == PassStateExited_HASH)
          {
            return HistoryEventType::PassStateExited;
          }
          else if (hashCode == ParallelStateEntered_HASH)
          {
            return HistoryEventType::ParallelStateEntered;
          }
          else if (hashCode == ParallelStateExited_HASH)
          {
            return HistoryEventType::ParallelStateExited;
          }
          else if (hashCode == WaitStateEntered_HASH)
          {
            return HistoryEventType::WaitStateEntered;
          }
          else if (hashCode == WaitStateExited_HASH)
          {
            return HistoryEventType::WaitStateExited;
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
          case HistoryEventType::ActivityScheduleFailed:
            return "ActivityScheduleFailed";
          case HistoryEventType::ActivityScheduled:
            return "ActivityScheduled";
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
          case HistoryEventType::ExecutionFailed:
            return "ExecutionFailed";
          case HistoryEventType::ExecutionStarted:
            return "ExecutionStarted";
          case HistoryEventType::ExecutionSucceeded:
            return "ExecutionSucceeded";
          case HistoryEventType::ExecutionAborted:
            return "ExecutionAborted";
          case HistoryEventType::ExecutionTimedOut:
            return "ExecutionTimedOut";
          case HistoryEventType::FailStateEntered:
            return "FailStateEntered";
          case HistoryEventType::LambdaFunctionFailed:
            return "LambdaFunctionFailed";
          case HistoryEventType::LambdaFunctionScheduleFailed:
            return "LambdaFunctionScheduleFailed";
          case HistoryEventType::LambdaFunctionScheduled:
            return "LambdaFunctionScheduled";
          case HistoryEventType::LambdaFunctionStartFailed:
            return "LambdaFunctionStartFailed";
          case HistoryEventType::LambdaFunctionStarted:
            return "LambdaFunctionStarted";
          case HistoryEventType::LambdaFunctionSucceeded:
            return "LambdaFunctionSucceeded";
          case HistoryEventType::LambdaFunctionTimedOut:
            return "LambdaFunctionTimedOut";
          case HistoryEventType::SucceedStateEntered:
            return "SucceedStateEntered";
          case HistoryEventType::SucceedStateExited:
            return "SucceedStateExited";
          case HistoryEventType::TaskStateEntered:
            return "TaskStateEntered";
          case HistoryEventType::TaskStateExited:
            return "TaskStateExited";
          case HistoryEventType::PassStateEntered:
            return "PassStateEntered";
          case HistoryEventType::PassStateExited:
            return "PassStateExited";
          case HistoryEventType::ParallelStateEntered:
            return "ParallelStateEntered";
          case HistoryEventType::ParallelStateExited:
            return "ParallelStateExited";
          case HistoryEventType::WaitStateEntered:
            return "WaitStateEntered";
          case HistoryEventType::WaitStateExited:
            return "WaitStateExited";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace HistoryEventTypeMapper
    } // namespace Model
  } // namespace SFN
} // namespace Aws
