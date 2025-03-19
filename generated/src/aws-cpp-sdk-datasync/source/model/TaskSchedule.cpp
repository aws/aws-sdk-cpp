/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/TaskSchedule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

TaskSchedule::TaskSchedule(JsonView jsonValue)
{
  *this = jsonValue;
}

TaskSchedule& TaskSchedule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ScheduleExpression"))
  {
    m_scheduleExpression = jsonValue.GetString("ScheduleExpression");
    m_scheduleExpressionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ScheduleStatusMapper::GetScheduleStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue TaskSchedule::Jsonize() const
{
  JsonValue payload;

  if(m_scheduleExpressionHasBeenSet)
  {
   payload.WithString("ScheduleExpression", m_scheduleExpression);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ScheduleStatusMapper::GetNameForScheduleStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
