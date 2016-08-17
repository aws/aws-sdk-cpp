/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/swf/model/EventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SWF
  {
    namespace Model
    {
      namespace EventTypeMapper
      {

        static const int WorkflowExecutionStarted_HASH = HashingUtils::HashString("WorkflowExecutionStarted");
        static const int WorkflowExecutionCancelRequested_HASH = HashingUtils::HashString("WorkflowExecutionCancelRequested");
        static const int WorkflowExecutionCompleted_HASH = HashingUtils::HashString("WorkflowExecutionCompleted");
        static const int CompleteWorkflowExecutionFailed_HASH = HashingUtils::HashString("CompleteWorkflowExecutionFailed");
        static const int WorkflowExecutionFailed_HASH = HashingUtils::HashString("WorkflowExecutionFailed");
        static const int FailWorkflowExecutionFailed_HASH = HashingUtils::HashString("FailWorkflowExecutionFailed");
        static const int WorkflowExecutionTimedOut_HASH = HashingUtils::HashString("WorkflowExecutionTimedOut");
        static const int WorkflowExecutionCanceled_HASH = HashingUtils::HashString("WorkflowExecutionCanceled");
        static const int CancelWorkflowExecutionFailed_HASH = HashingUtils::HashString("CancelWorkflowExecutionFailed");
        static const int WorkflowExecutionContinuedAsNew_HASH = HashingUtils::HashString("WorkflowExecutionContinuedAsNew");
        static const int ContinueAsNewWorkflowExecutionFailed_HASH = HashingUtils::HashString("ContinueAsNewWorkflowExecutionFailed");
        static const int WorkflowExecutionTerminated_HASH = HashingUtils::HashString("WorkflowExecutionTerminated");
        static const int DecisionTaskScheduled_HASH = HashingUtils::HashString("DecisionTaskScheduled");
        static const int DecisionTaskStarted_HASH = HashingUtils::HashString("DecisionTaskStarted");
        static const int DecisionTaskCompleted_HASH = HashingUtils::HashString("DecisionTaskCompleted");
        static const int DecisionTaskTimedOut_HASH = HashingUtils::HashString("DecisionTaskTimedOut");
        static const int ActivityTaskScheduled_HASH = HashingUtils::HashString("ActivityTaskScheduled");
        static const int ScheduleActivityTaskFailed_HASH = HashingUtils::HashString("ScheduleActivityTaskFailed");
        static const int ActivityTaskStarted_HASH = HashingUtils::HashString("ActivityTaskStarted");
        static const int ActivityTaskCompleted_HASH = HashingUtils::HashString("ActivityTaskCompleted");
        static const int ActivityTaskFailed_HASH = HashingUtils::HashString("ActivityTaskFailed");
        static const int ActivityTaskTimedOut_HASH = HashingUtils::HashString("ActivityTaskTimedOut");
        static const int ActivityTaskCanceled_HASH = HashingUtils::HashString("ActivityTaskCanceled");
        static const int ActivityTaskCancelRequested_HASH = HashingUtils::HashString("ActivityTaskCancelRequested");
        static const int RequestCancelActivityTaskFailed_HASH = HashingUtils::HashString("RequestCancelActivityTaskFailed");
        static const int WorkflowExecutionSignaled_HASH = HashingUtils::HashString("WorkflowExecutionSignaled");
        static const int MarkerRecorded_HASH = HashingUtils::HashString("MarkerRecorded");
        static const int RecordMarkerFailed_HASH = HashingUtils::HashString("RecordMarkerFailed");
        static const int TimerStarted_HASH = HashingUtils::HashString("TimerStarted");
        static const int StartTimerFailed_HASH = HashingUtils::HashString("StartTimerFailed");
        static const int TimerFired_HASH = HashingUtils::HashString("TimerFired");
        static const int TimerCanceled_HASH = HashingUtils::HashString("TimerCanceled");
        static const int CancelTimerFailed_HASH = HashingUtils::HashString("CancelTimerFailed");
        static const int StartChildWorkflowExecutionInitiated_HASH = HashingUtils::HashString("StartChildWorkflowExecutionInitiated");
        static const int StartChildWorkflowExecutionFailed_HASH = HashingUtils::HashString("StartChildWorkflowExecutionFailed");
        static const int ChildWorkflowExecutionStarted_HASH = HashingUtils::HashString("ChildWorkflowExecutionStarted");
        static const int ChildWorkflowExecutionCompleted_HASH = HashingUtils::HashString("ChildWorkflowExecutionCompleted");
        static const int ChildWorkflowExecutionFailed_HASH = HashingUtils::HashString("ChildWorkflowExecutionFailed");
        static const int ChildWorkflowExecutionTimedOut_HASH = HashingUtils::HashString("ChildWorkflowExecutionTimedOut");
        static const int ChildWorkflowExecutionCanceled_HASH = HashingUtils::HashString("ChildWorkflowExecutionCanceled");
        static const int ChildWorkflowExecutionTerminated_HASH = HashingUtils::HashString("ChildWorkflowExecutionTerminated");
        static const int SignalExternalWorkflowExecutionInitiated_HASH = HashingUtils::HashString("SignalExternalWorkflowExecutionInitiated");
        static const int SignalExternalWorkflowExecutionFailed_HASH = HashingUtils::HashString("SignalExternalWorkflowExecutionFailed");
        static const int ExternalWorkflowExecutionSignaled_HASH = HashingUtils::HashString("ExternalWorkflowExecutionSignaled");
        static const int RequestCancelExternalWorkflowExecutionInitiated_HASH = HashingUtils::HashString("RequestCancelExternalWorkflowExecutionInitiated");
        static const int RequestCancelExternalWorkflowExecutionFailed_HASH = HashingUtils::HashString("RequestCancelExternalWorkflowExecutionFailed");
        static const int ExternalWorkflowExecutionCancelRequested_HASH = HashingUtils::HashString("ExternalWorkflowExecutionCancelRequested");
        static const int LambdaFunctionScheduled_HASH = HashingUtils::HashString("LambdaFunctionScheduled");
        static const int LambdaFunctionStarted_HASH = HashingUtils::HashString("LambdaFunctionStarted");
        static const int LambdaFunctionCompleted_HASH = HashingUtils::HashString("LambdaFunctionCompleted");
        static const int LambdaFunctionFailed_HASH = HashingUtils::HashString("LambdaFunctionFailed");
        static const int LambdaFunctionTimedOut_HASH = HashingUtils::HashString("LambdaFunctionTimedOut");
        static const int ScheduleLambdaFunctionFailed_HASH = HashingUtils::HashString("ScheduleLambdaFunctionFailed");
        static const int StartLambdaFunctionFailed_HASH = HashingUtils::HashString("StartLambdaFunctionFailed");


        EventType GetEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WorkflowExecutionStarted_HASH)
          {
            return EventType::WorkflowExecutionStarted;
          }
          else if (hashCode == WorkflowExecutionCancelRequested_HASH)
          {
            return EventType::WorkflowExecutionCancelRequested;
          }
          else if (hashCode == WorkflowExecutionCompleted_HASH)
          {
            return EventType::WorkflowExecutionCompleted;
          }
          else if (hashCode == CompleteWorkflowExecutionFailed_HASH)
          {
            return EventType::CompleteWorkflowExecutionFailed;
          }
          else if (hashCode == WorkflowExecutionFailed_HASH)
          {
            return EventType::WorkflowExecutionFailed;
          }
          else if (hashCode == FailWorkflowExecutionFailed_HASH)
          {
            return EventType::FailWorkflowExecutionFailed;
          }
          else if (hashCode == WorkflowExecutionTimedOut_HASH)
          {
            return EventType::WorkflowExecutionTimedOut;
          }
          else if (hashCode == WorkflowExecutionCanceled_HASH)
          {
            return EventType::WorkflowExecutionCanceled;
          }
          else if (hashCode == CancelWorkflowExecutionFailed_HASH)
          {
            return EventType::CancelWorkflowExecutionFailed;
          }
          else if (hashCode == WorkflowExecutionContinuedAsNew_HASH)
          {
            return EventType::WorkflowExecutionContinuedAsNew;
          }
          else if (hashCode == ContinueAsNewWorkflowExecutionFailed_HASH)
          {
            return EventType::ContinueAsNewWorkflowExecutionFailed;
          }
          else if (hashCode == WorkflowExecutionTerminated_HASH)
          {
            return EventType::WorkflowExecutionTerminated;
          }
          else if (hashCode == DecisionTaskScheduled_HASH)
          {
            return EventType::DecisionTaskScheduled;
          }
          else if (hashCode == DecisionTaskStarted_HASH)
          {
            return EventType::DecisionTaskStarted;
          }
          else if (hashCode == DecisionTaskCompleted_HASH)
          {
            return EventType::DecisionTaskCompleted;
          }
          else if (hashCode == DecisionTaskTimedOut_HASH)
          {
            return EventType::DecisionTaskTimedOut;
          }
          else if (hashCode == ActivityTaskScheduled_HASH)
          {
            return EventType::ActivityTaskScheduled;
          }
          else if (hashCode == ScheduleActivityTaskFailed_HASH)
          {
            return EventType::ScheduleActivityTaskFailed;
          }
          else if (hashCode == ActivityTaskStarted_HASH)
          {
            return EventType::ActivityTaskStarted;
          }
          else if (hashCode == ActivityTaskCompleted_HASH)
          {
            return EventType::ActivityTaskCompleted;
          }
          else if (hashCode == ActivityTaskFailed_HASH)
          {
            return EventType::ActivityTaskFailed;
          }
          else if (hashCode == ActivityTaskTimedOut_HASH)
          {
            return EventType::ActivityTaskTimedOut;
          }
          else if (hashCode == ActivityTaskCanceled_HASH)
          {
            return EventType::ActivityTaskCanceled;
          }
          else if (hashCode == ActivityTaskCancelRequested_HASH)
          {
            return EventType::ActivityTaskCancelRequested;
          }
          else if (hashCode == RequestCancelActivityTaskFailed_HASH)
          {
            return EventType::RequestCancelActivityTaskFailed;
          }
          else if (hashCode == WorkflowExecutionSignaled_HASH)
          {
            return EventType::WorkflowExecutionSignaled;
          }
          else if (hashCode == MarkerRecorded_HASH)
          {
            return EventType::MarkerRecorded;
          }
          else if (hashCode == RecordMarkerFailed_HASH)
          {
            return EventType::RecordMarkerFailed;
          }
          else if (hashCode == TimerStarted_HASH)
          {
            return EventType::TimerStarted;
          }
          else if (hashCode == StartTimerFailed_HASH)
          {
            return EventType::StartTimerFailed;
          }
          else if (hashCode == TimerFired_HASH)
          {
            return EventType::TimerFired;
          }
          else if (hashCode == TimerCanceled_HASH)
          {
            return EventType::TimerCanceled;
          }
          else if (hashCode == CancelTimerFailed_HASH)
          {
            return EventType::CancelTimerFailed;
          }
          else if (hashCode == StartChildWorkflowExecutionInitiated_HASH)
          {
            return EventType::StartChildWorkflowExecutionInitiated;
          }
          else if (hashCode == StartChildWorkflowExecutionFailed_HASH)
          {
            return EventType::StartChildWorkflowExecutionFailed;
          }
          else if (hashCode == ChildWorkflowExecutionStarted_HASH)
          {
            return EventType::ChildWorkflowExecutionStarted;
          }
          else if (hashCode == ChildWorkflowExecutionCompleted_HASH)
          {
            return EventType::ChildWorkflowExecutionCompleted;
          }
          else if (hashCode == ChildWorkflowExecutionFailed_HASH)
          {
            return EventType::ChildWorkflowExecutionFailed;
          }
          else if (hashCode == ChildWorkflowExecutionTimedOut_HASH)
          {
            return EventType::ChildWorkflowExecutionTimedOut;
          }
          else if (hashCode == ChildWorkflowExecutionCanceled_HASH)
          {
            return EventType::ChildWorkflowExecutionCanceled;
          }
          else if (hashCode == ChildWorkflowExecutionTerminated_HASH)
          {
            return EventType::ChildWorkflowExecutionTerminated;
          }
          else if (hashCode == SignalExternalWorkflowExecutionInitiated_HASH)
          {
            return EventType::SignalExternalWorkflowExecutionInitiated;
          }
          else if (hashCode == SignalExternalWorkflowExecutionFailed_HASH)
          {
            return EventType::SignalExternalWorkflowExecutionFailed;
          }
          else if (hashCode == ExternalWorkflowExecutionSignaled_HASH)
          {
            return EventType::ExternalWorkflowExecutionSignaled;
          }
          else if (hashCode == RequestCancelExternalWorkflowExecutionInitiated_HASH)
          {
            return EventType::RequestCancelExternalWorkflowExecutionInitiated;
          }
          else if (hashCode == RequestCancelExternalWorkflowExecutionFailed_HASH)
          {
            return EventType::RequestCancelExternalWorkflowExecutionFailed;
          }
          else if (hashCode == ExternalWorkflowExecutionCancelRequested_HASH)
          {
            return EventType::ExternalWorkflowExecutionCancelRequested;
          }
          else if (hashCode == LambdaFunctionScheduled_HASH)
          {
            return EventType::LambdaFunctionScheduled;
          }
          else if (hashCode == LambdaFunctionStarted_HASH)
          {
            return EventType::LambdaFunctionStarted;
          }
          else if (hashCode == LambdaFunctionCompleted_HASH)
          {
            return EventType::LambdaFunctionCompleted;
          }
          else if (hashCode == LambdaFunctionFailed_HASH)
          {
            return EventType::LambdaFunctionFailed;
          }
          else if (hashCode == LambdaFunctionTimedOut_HASH)
          {
            return EventType::LambdaFunctionTimedOut;
          }
          else if (hashCode == ScheduleLambdaFunctionFailed_HASH)
          {
            return EventType::ScheduleLambdaFunctionFailed;
          }
          else if (hashCode == StartLambdaFunctionFailed_HASH)
          {
            return EventType::StartLambdaFunctionFailed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventType>(hashCode);
          }

          return EventType::NOT_SET;
        }

        Aws::String GetNameForEventType(EventType enumValue)
        {
          switch(enumValue)
          {
          case EventType::WorkflowExecutionStarted:
            return "WorkflowExecutionStarted";
          case EventType::WorkflowExecutionCancelRequested:
            return "WorkflowExecutionCancelRequested";
          case EventType::WorkflowExecutionCompleted:
            return "WorkflowExecutionCompleted";
          case EventType::CompleteWorkflowExecutionFailed:
            return "CompleteWorkflowExecutionFailed";
          case EventType::WorkflowExecutionFailed:
            return "WorkflowExecutionFailed";
          case EventType::FailWorkflowExecutionFailed:
            return "FailWorkflowExecutionFailed";
          case EventType::WorkflowExecutionTimedOut:
            return "WorkflowExecutionTimedOut";
          case EventType::WorkflowExecutionCanceled:
            return "WorkflowExecutionCanceled";
          case EventType::CancelWorkflowExecutionFailed:
            return "CancelWorkflowExecutionFailed";
          case EventType::WorkflowExecutionContinuedAsNew:
            return "WorkflowExecutionContinuedAsNew";
          case EventType::ContinueAsNewWorkflowExecutionFailed:
            return "ContinueAsNewWorkflowExecutionFailed";
          case EventType::WorkflowExecutionTerminated:
            return "WorkflowExecutionTerminated";
          case EventType::DecisionTaskScheduled:
            return "DecisionTaskScheduled";
          case EventType::DecisionTaskStarted:
            return "DecisionTaskStarted";
          case EventType::DecisionTaskCompleted:
            return "DecisionTaskCompleted";
          case EventType::DecisionTaskTimedOut:
            return "DecisionTaskTimedOut";
          case EventType::ActivityTaskScheduled:
            return "ActivityTaskScheduled";
          case EventType::ScheduleActivityTaskFailed:
            return "ScheduleActivityTaskFailed";
          case EventType::ActivityTaskStarted:
            return "ActivityTaskStarted";
          case EventType::ActivityTaskCompleted:
            return "ActivityTaskCompleted";
          case EventType::ActivityTaskFailed:
            return "ActivityTaskFailed";
          case EventType::ActivityTaskTimedOut:
            return "ActivityTaskTimedOut";
          case EventType::ActivityTaskCanceled:
            return "ActivityTaskCanceled";
          case EventType::ActivityTaskCancelRequested:
            return "ActivityTaskCancelRequested";
          case EventType::RequestCancelActivityTaskFailed:
            return "RequestCancelActivityTaskFailed";
          case EventType::WorkflowExecutionSignaled:
            return "WorkflowExecutionSignaled";
          case EventType::MarkerRecorded:
            return "MarkerRecorded";
          case EventType::RecordMarkerFailed:
            return "RecordMarkerFailed";
          case EventType::TimerStarted:
            return "TimerStarted";
          case EventType::StartTimerFailed:
            return "StartTimerFailed";
          case EventType::TimerFired:
            return "TimerFired";
          case EventType::TimerCanceled:
            return "TimerCanceled";
          case EventType::CancelTimerFailed:
            return "CancelTimerFailed";
          case EventType::StartChildWorkflowExecutionInitiated:
            return "StartChildWorkflowExecutionInitiated";
          case EventType::StartChildWorkflowExecutionFailed:
            return "StartChildWorkflowExecutionFailed";
          case EventType::ChildWorkflowExecutionStarted:
            return "ChildWorkflowExecutionStarted";
          case EventType::ChildWorkflowExecutionCompleted:
            return "ChildWorkflowExecutionCompleted";
          case EventType::ChildWorkflowExecutionFailed:
            return "ChildWorkflowExecutionFailed";
          case EventType::ChildWorkflowExecutionTimedOut:
            return "ChildWorkflowExecutionTimedOut";
          case EventType::ChildWorkflowExecutionCanceled:
            return "ChildWorkflowExecutionCanceled";
          case EventType::ChildWorkflowExecutionTerminated:
            return "ChildWorkflowExecutionTerminated";
          case EventType::SignalExternalWorkflowExecutionInitiated:
            return "SignalExternalWorkflowExecutionInitiated";
          case EventType::SignalExternalWorkflowExecutionFailed:
            return "SignalExternalWorkflowExecutionFailed";
          case EventType::ExternalWorkflowExecutionSignaled:
            return "ExternalWorkflowExecutionSignaled";
          case EventType::RequestCancelExternalWorkflowExecutionInitiated:
            return "RequestCancelExternalWorkflowExecutionInitiated";
          case EventType::RequestCancelExternalWorkflowExecutionFailed:
            return "RequestCancelExternalWorkflowExecutionFailed";
          case EventType::ExternalWorkflowExecutionCancelRequested:
            return "ExternalWorkflowExecutionCancelRequested";
          case EventType::LambdaFunctionScheduled:
            return "LambdaFunctionScheduled";
          case EventType::LambdaFunctionStarted:
            return "LambdaFunctionStarted";
          case EventType::LambdaFunctionCompleted:
            return "LambdaFunctionCompleted";
          case EventType::LambdaFunctionFailed:
            return "LambdaFunctionFailed";
          case EventType::LambdaFunctionTimedOut:
            return "LambdaFunctionTimedOut";
          case EventType::ScheduleLambdaFunctionFailed:
            return "ScheduleLambdaFunctionFailed";
          case EventType::StartLambdaFunctionFailed:
            return "StartLambdaFunctionFailed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace EventTypeMapper
    } // namespace Model
  } // namespace SWF
} // namespace Aws
