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

Schedule::Schedule(const JsonValue& jsonValue) : 
    m_scheduleExpressionHasBeenSet(false),
    m_state(ScheduleState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

Schedule& Schedule::operator =(const JsonValue& jsonValue)
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
