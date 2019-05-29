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

#include <aws/iotthingsgraph/model/FlowExecutionEventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTThingsGraph
  {
    namespace Model
    {
      namespace FlowExecutionEventTypeMapper
      {

        static const int EXECUTION_STARTED_HASH = HashingUtils::HashString("EXECUTION_STARTED");
        static const int EXECUTION_FAILED_HASH = HashingUtils::HashString("EXECUTION_FAILED");
        static const int EXECUTION_ABORTED_HASH = HashingUtils::HashString("EXECUTION_ABORTED");
        static const int EXECUTION_SUCCEEDED_HASH = HashingUtils::HashString("EXECUTION_SUCCEEDED");
        static const int STEP_STARTED_HASH = HashingUtils::HashString("STEP_STARTED");
        static const int STEP_FAILED_HASH = HashingUtils::HashString("STEP_FAILED");
        static const int STEP_SUCCEEDED_HASH = HashingUtils::HashString("STEP_SUCCEEDED");
        static const int ACTIVITY_SCHEDULED_HASH = HashingUtils::HashString("ACTIVITY_SCHEDULED");
        static const int ACTIVITY_STARTED_HASH = HashingUtils::HashString("ACTIVITY_STARTED");
        static const int ACTIVITY_FAILED_HASH = HashingUtils::HashString("ACTIVITY_FAILED");
        static const int ACTIVITY_SUCCEEDED_HASH = HashingUtils::HashString("ACTIVITY_SUCCEEDED");
        static const int START_FLOW_EXECUTION_TASK_HASH = HashingUtils::HashString("START_FLOW_EXECUTION_TASK");
        static const int SCHEDULE_NEXT_READY_STEPS_TASK_HASH = HashingUtils::HashString("SCHEDULE_NEXT_READY_STEPS_TASK");
        static const int THING_ACTION_TASK_HASH = HashingUtils::HashString("THING_ACTION_TASK");
        static const int THING_ACTION_TASK_FAILED_HASH = HashingUtils::HashString("THING_ACTION_TASK_FAILED");
        static const int THING_ACTION_TASK_SUCCEEDED_HASH = HashingUtils::HashString("THING_ACTION_TASK_SUCCEEDED");
        static const int ACKNOWLEDGE_TASK_MESSAGE_HASH = HashingUtils::HashString("ACKNOWLEDGE_TASK_MESSAGE");


        FlowExecutionEventType GetFlowExecutionEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXECUTION_STARTED_HASH)
          {
            return FlowExecutionEventType::EXECUTION_STARTED;
          }
          else if (hashCode == EXECUTION_FAILED_HASH)
          {
            return FlowExecutionEventType::EXECUTION_FAILED;
          }
          else if (hashCode == EXECUTION_ABORTED_HASH)
          {
            return FlowExecutionEventType::EXECUTION_ABORTED;
          }
          else if (hashCode == EXECUTION_SUCCEEDED_HASH)
          {
            return FlowExecutionEventType::EXECUTION_SUCCEEDED;
          }
          else if (hashCode == STEP_STARTED_HASH)
          {
            return FlowExecutionEventType::STEP_STARTED;
          }
          else if (hashCode == STEP_FAILED_HASH)
          {
            return FlowExecutionEventType::STEP_FAILED;
          }
          else if (hashCode == STEP_SUCCEEDED_HASH)
          {
            return FlowExecutionEventType::STEP_SUCCEEDED;
          }
          else if (hashCode == ACTIVITY_SCHEDULED_HASH)
          {
            return FlowExecutionEventType::ACTIVITY_SCHEDULED;
          }
          else if (hashCode == ACTIVITY_STARTED_HASH)
          {
            return FlowExecutionEventType::ACTIVITY_STARTED;
          }
          else if (hashCode == ACTIVITY_FAILED_HASH)
          {
            return FlowExecutionEventType::ACTIVITY_FAILED;
          }
          else if (hashCode == ACTIVITY_SUCCEEDED_HASH)
          {
            return FlowExecutionEventType::ACTIVITY_SUCCEEDED;
          }
          else if (hashCode == START_FLOW_EXECUTION_TASK_HASH)
          {
            return FlowExecutionEventType::START_FLOW_EXECUTION_TASK;
          }
          else if (hashCode == SCHEDULE_NEXT_READY_STEPS_TASK_HASH)
          {
            return FlowExecutionEventType::SCHEDULE_NEXT_READY_STEPS_TASK;
          }
          else if (hashCode == THING_ACTION_TASK_HASH)
          {
            return FlowExecutionEventType::THING_ACTION_TASK;
          }
          else if (hashCode == THING_ACTION_TASK_FAILED_HASH)
          {
            return FlowExecutionEventType::THING_ACTION_TASK_FAILED;
          }
          else if (hashCode == THING_ACTION_TASK_SUCCEEDED_HASH)
          {
            return FlowExecutionEventType::THING_ACTION_TASK_SUCCEEDED;
          }
          else if (hashCode == ACKNOWLEDGE_TASK_MESSAGE_HASH)
          {
            return FlowExecutionEventType::ACKNOWLEDGE_TASK_MESSAGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FlowExecutionEventType>(hashCode);
          }

          return FlowExecutionEventType::NOT_SET;
        }

        Aws::String GetNameForFlowExecutionEventType(FlowExecutionEventType enumValue)
        {
          switch(enumValue)
          {
          case FlowExecutionEventType::EXECUTION_STARTED:
            return "EXECUTION_STARTED";
          case FlowExecutionEventType::EXECUTION_FAILED:
            return "EXECUTION_FAILED";
          case FlowExecutionEventType::EXECUTION_ABORTED:
            return "EXECUTION_ABORTED";
          case FlowExecutionEventType::EXECUTION_SUCCEEDED:
            return "EXECUTION_SUCCEEDED";
          case FlowExecutionEventType::STEP_STARTED:
            return "STEP_STARTED";
          case FlowExecutionEventType::STEP_FAILED:
            return "STEP_FAILED";
          case FlowExecutionEventType::STEP_SUCCEEDED:
            return "STEP_SUCCEEDED";
          case FlowExecutionEventType::ACTIVITY_SCHEDULED:
            return "ACTIVITY_SCHEDULED";
          case FlowExecutionEventType::ACTIVITY_STARTED:
            return "ACTIVITY_STARTED";
          case FlowExecutionEventType::ACTIVITY_FAILED:
            return "ACTIVITY_FAILED";
          case FlowExecutionEventType::ACTIVITY_SUCCEEDED:
            return "ACTIVITY_SUCCEEDED";
          case FlowExecutionEventType::START_FLOW_EXECUTION_TASK:
            return "START_FLOW_EXECUTION_TASK";
          case FlowExecutionEventType::SCHEDULE_NEXT_READY_STEPS_TASK:
            return "SCHEDULE_NEXT_READY_STEPS_TASK";
          case FlowExecutionEventType::THING_ACTION_TASK:
            return "THING_ACTION_TASK";
          case FlowExecutionEventType::THING_ACTION_TASK_FAILED:
            return "THING_ACTION_TASK_FAILED";
          case FlowExecutionEventType::THING_ACTION_TASK_SUCCEEDED:
            return "THING_ACTION_TASK_SUCCEEDED";
          case FlowExecutionEventType::ACKNOWLEDGE_TASK_MESSAGE:
            return "ACKNOWLEDGE_TASK_MESSAGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FlowExecutionEventTypeMapper
    } // namespace Model
  } // namespace IoTThingsGraph
} // namespace Aws
