/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTThingsGraph
{
namespace Model
{
  enum class FlowExecutionEventType
  {
    NOT_SET,
    EXECUTION_STARTED,
    EXECUTION_FAILED,
    EXECUTION_ABORTED,
    EXECUTION_SUCCEEDED,
    STEP_STARTED,
    STEP_FAILED,
    STEP_SUCCEEDED,
    ACTIVITY_SCHEDULED,
    ACTIVITY_STARTED,
    ACTIVITY_FAILED,
    ACTIVITY_SUCCEEDED,
    START_FLOW_EXECUTION_TASK,
    SCHEDULE_NEXT_READY_STEPS_TASK,
    THING_ACTION_TASK,
    THING_ACTION_TASK_FAILED,
    THING_ACTION_TASK_SUCCEEDED,
    ACKNOWLEDGE_TASK_MESSAGE
  };

namespace FlowExecutionEventTypeMapper
{
AWS_IOTTHINGSGRAPH_API FlowExecutionEventType GetFlowExecutionEventTypeForName(const Aws::String& name);

AWS_IOTTHINGSGRAPH_API Aws::String GetNameForFlowExecutionEventType(FlowExecutionEventType value);
} // namespace FlowExecutionEventTypeMapper
} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
