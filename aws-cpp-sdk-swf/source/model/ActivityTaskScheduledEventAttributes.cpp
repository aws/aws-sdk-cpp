/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/ActivityTaskScheduledEventAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SWF
{
namespace Model
{

ActivityTaskScheduledEventAttributes::ActivityTaskScheduledEventAttributes() : 
    m_activityTypeHasBeenSet(false),
    m_activityIdHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_controlHasBeenSet(false),
    m_scheduleToStartTimeoutHasBeenSet(false),
    m_scheduleToCloseTimeoutHasBeenSet(false),
    m_startToCloseTimeoutHasBeenSet(false),
    m_taskListHasBeenSet(false),
    m_taskPriorityHasBeenSet(false),
    m_decisionTaskCompletedEventId(0),
    m_decisionTaskCompletedEventIdHasBeenSet(false),
    m_heartbeatTimeoutHasBeenSet(false)
{
}

ActivityTaskScheduledEventAttributes::ActivityTaskScheduledEventAttributes(JsonView jsonValue) : 
    m_activityTypeHasBeenSet(false),
    m_activityIdHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_controlHasBeenSet(false),
    m_scheduleToStartTimeoutHasBeenSet(false),
    m_scheduleToCloseTimeoutHasBeenSet(false),
    m_startToCloseTimeoutHasBeenSet(false),
    m_taskListHasBeenSet(false),
    m_taskPriorityHasBeenSet(false),
    m_decisionTaskCompletedEventId(0),
    m_decisionTaskCompletedEventIdHasBeenSet(false),
    m_heartbeatTimeoutHasBeenSet(false)
{
  *this = jsonValue;
}

ActivityTaskScheduledEventAttributes& ActivityTaskScheduledEventAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("activityType"))
  {
    m_activityType = jsonValue.GetObject("activityType");

    m_activityTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activityId"))
  {
    m_activityId = jsonValue.GetString("activityId");

    m_activityIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("input"))
  {
    m_input = jsonValue.GetString("input");

    m_inputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("control"))
  {
    m_control = jsonValue.GetString("control");

    m_controlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scheduleToStartTimeout"))
  {
    m_scheduleToStartTimeout = jsonValue.GetString("scheduleToStartTimeout");

    m_scheduleToStartTimeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scheduleToCloseTimeout"))
  {
    m_scheduleToCloseTimeout = jsonValue.GetString("scheduleToCloseTimeout");

    m_scheduleToCloseTimeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startToCloseTimeout"))
  {
    m_startToCloseTimeout = jsonValue.GetString("startToCloseTimeout");

    m_startToCloseTimeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskList"))
  {
    m_taskList = jsonValue.GetObject("taskList");

    m_taskListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskPriority"))
  {
    m_taskPriority = jsonValue.GetString("taskPriority");

    m_taskPriorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("decisionTaskCompletedEventId"))
  {
    m_decisionTaskCompletedEventId = jsonValue.GetInt64("decisionTaskCompletedEventId");

    m_decisionTaskCompletedEventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("heartbeatTimeout"))
  {
    m_heartbeatTimeout = jsonValue.GetString("heartbeatTimeout");

    m_heartbeatTimeoutHasBeenSet = true;
  }

  return *this;
}

JsonValue ActivityTaskScheduledEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_activityTypeHasBeenSet)
  {
   payload.WithObject("activityType", m_activityType.Jsonize());

  }

  if(m_activityIdHasBeenSet)
  {
   payload.WithString("activityId", m_activityId);

  }

  if(m_inputHasBeenSet)
  {
   payload.WithString("input", m_input);

  }

  if(m_controlHasBeenSet)
  {
   payload.WithString("control", m_control);

  }

  if(m_scheduleToStartTimeoutHasBeenSet)
  {
   payload.WithString("scheduleToStartTimeout", m_scheduleToStartTimeout);

  }

  if(m_scheduleToCloseTimeoutHasBeenSet)
  {
   payload.WithString("scheduleToCloseTimeout", m_scheduleToCloseTimeout);

  }

  if(m_startToCloseTimeoutHasBeenSet)
  {
   payload.WithString("startToCloseTimeout", m_startToCloseTimeout);

  }

  if(m_taskListHasBeenSet)
  {
   payload.WithObject("taskList", m_taskList.Jsonize());

  }

  if(m_taskPriorityHasBeenSet)
  {
   payload.WithString("taskPriority", m_taskPriority);

  }

  if(m_decisionTaskCompletedEventIdHasBeenSet)
  {
   payload.WithInt64("decisionTaskCompletedEventId", m_decisionTaskCompletedEventId);

  }

  if(m_heartbeatTimeoutHasBeenSet)
  {
   payload.WithString("heartbeatTimeout", m_heartbeatTimeout);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
