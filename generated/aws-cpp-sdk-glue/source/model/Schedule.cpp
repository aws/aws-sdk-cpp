/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Schedule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

Schedule::Schedule() : 
    m_scheduleExpressionHasBeenSet(false),
    m_state(ScheduleState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

Schedule::Schedule(JsonView jsonValue) : 
    m_scheduleExpressionHasBeenSet(false),
    m_state(ScheduleState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

Schedule& Schedule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ScheduleExpression"))
  {
    m_scheduleExpression = jsonValue.GetString("ScheduleExpression");

    m_scheduleExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = ScheduleStateMapper::GetScheduleStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue Schedule::Jsonize() const
{
  JsonValue payload;

  if(m_scheduleExpressionHasBeenSet)
  {
   payload.WithString("ScheduleExpression", m_scheduleExpression);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ScheduleStateMapper::GetNameForScheduleState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
