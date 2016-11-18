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
#include <aws/swf/model/DecisionType.h>
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
      namespace DecisionTypeMapper
      {

        static const int ScheduleActivityTask_HASH = HashingUtils::HashString("ScheduleActivityTask");
        static const int RequestCancelActivityTask_HASH = HashingUtils::HashString("RequestCancelActivityTask");
        static const int CompleteWorkflowExecution_HASH = HashingUtils::HashString("CompleteWorkflowExecution");
        static const int FailWorkflowExecution_HASH = HashingUtils::HashString("FailWorkflowExecution");
        static const int CancelWorkflowExecution_HASH = HashingUtils::HashString("CancelWorkflowExecution");
        static const int ContinueAsNewWorkflowExecution_HASH = HashingUtils::HashString("ContinueAsNewWorkflowExecution");
        static const int RecordMarker_HASH = HashingUtils::HashString("RecordMarker");
        static const int StartTimer_HASH = HashingUtils::HashString("StartTimer");
        static const int CancelTimer_HASH = HashingUtils::HashString("CancelTimer");
        static const int SignalExternalWorkflowExecution_HASH = HashingUtils::HashString("SignalExternalWorkflowExecution");
        static const int RequestCancelExternalWorkflowExecution_HASH = HashingUtils::HashString("RequestCancelExternalWorkflowExecution");
        static const int StartChildWorkflowExecution_HASH = HashingUtils::HashString("StartChildWorkflowExecution");
        static const int ScheduleLambdaFunction_HASH = HashingUtils::HashString("ScheduleLambdaFunction");


        DecisionType GetDecisionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ScheduleActivityTask_HASH)
          {
            return DecisionType::ScheduleActivityTask;
          }
          else if (hashCode == RequestCancelActivityTask_HASH)
          {
            return DecisionType::RequestCancelActivityTask;
          }
          else if (hashCode == CompleteWorkflowExecution_HASH)
          {
            return DecisionType::CompleteWorkflowExecution;
          }
          else if (hashCode == FailWorkflowExecution_HASH)
          {
            return DecisionType::FailWorkflowExecution;
          }
          else if (hashCode == CancelWorkflowExecution_HASH)
          {
            return DecisionType::CancelWorkflowExecution;
          }
          else if (hashCode == ContinueAsNewWorkflowExecution_HASH)
          {
            return DecisionType::ContinueAsNewWorkflowExecution;
          }
          else if (hashCode == RecordMarker_HASH)
          {
            return DecisionType::RecordMarker;
          }
          else if (hashCode == StartTimer_HASH)
          {
            return DecisionType::StartTimer;
          }
          else if (hashCode == CancelTimer_HASH)
          {
            return DecisionType::CancelTimer;
          }
          else if (hashCode == SignalExternalWorkflowExecution_HASH)
          {
            return DecisionType::SignalExternalWorkflowExecution;
          }
          else if (hashCode == RequestCancelExternalWorkflowExecution_HASH)
          {
            return DecisionType::RequestCancelExternalWorkflowExecution;
          }
          else if (hashCode == StartChildWorkflowExecution_HASH)
          {
            return DecisionType::StartChildWorkflowExecution;
          }
          else if (hashCode == ScheduleLambdaFunction_HASH)
          {
            return DecisionType::ScheduleLambdaFunction;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DecisionType>(hashCode);
          }

          return DecisionType::NOT_SET;
        }

        Aws::String GetNameForDecisionType(DecisionType enumValue)
        {
          switch(enumValue)
          {
          case DecisionType::ScheduleActivityTask:
            return "ScheduleActivityTask";
          case DecisionType::RequestCancelActivityTask:
            return "RequestCancelActivityTask";
          case DecisionType::CompleteWorkflowExecution:
            return "CompleteWorkflowExecution";
          case DecisionType::FailWorkflowExecution:
            return "FailWorkflowExecution";
          case DecisionType::CancelWorkflowExecution:
            return "CancelWorkflowExecution";
          case DecisionType::ContinueAsNewWorkflowExecution:
            return "ContinueAsNewWorkflowExecution";
          case DecisionType::RecordMarker:
            return "RecordMarker";
          case DecisionType::StartTimer:
            return "StartTimer";
          case DecisionType::CancelTimer:
            return "CancelTimer";
          case DecisionType::SignalExternalWorkflowExecution:
            return "SignalExternalWorkflowExecution";
          case DecisionType::RequestCancelExternalWorkflowExecution:
            return "RequestCancelExternalWorkflowExecution";
          case DecisionType::StartChildWorkflowExecution:
            return "StartChildWorkflowExecution";
          case DecisionType::ScheduleLambdaFunction:
            return "ScheduleLambdaFunction";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace DecisionTypeMapper
    } // namespace Model
  } // namespace SWF
} // namespace Aws
