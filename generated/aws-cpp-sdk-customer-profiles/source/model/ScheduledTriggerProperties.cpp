/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/ScheduledTriggerProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

ScheduledTriggerProperties::ScheduledTriggerProperties() : 
    m_scheduleExpressionHasBeenSet(false),
    m_dataPullMode(DataPullMode::NOT_SET),
    m_dataPullModeHasBeenSet(false),
    m_scheduleStartTimeHasBeenSet(false),
    m_scheduleEndTimeHasBeenSet(false),
    m_timezoneHasBeenSet(false),
    m_scheduleOffset(0),
    m_scheduleOffsetHasBeenSet(false),
    m_firstExecutionFromHasBeenSet(false)
{
}

ScheduledTriggerProperties::ScheduledTriggerProperties(JsonView jsonValue) : 
    m_scheduleExpressionHasBeenSet(false),
    m_dataPullMode(DataPullMode::NOT_SET),
    m_dataPullModeHasBeenSet(false),
    m_scheduleStartTimeHasBeenSet(false),
    m_scheduleEndTimeHasBeenSet(false),
    m_timezoneHasBeenSet(false),
    m_scheduleOffset(0),
    m_scheduleOffsetHasBeenSet(false),
    m_firstExecutionFromHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduledTriggerProperties& ScheduledTriggerProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ScheduleExpression"))
  {
    m_scheduleExpression = jsonValue.GetString("ScheduleExpression");

    m_scheduleExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataPullMode"))
  {
    m_dataPullMode = DataPullModeMapper::GetDataPullModeForName(jsonValue.GetString("DataPullMode"));

    m_dataPullModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScheduleStartTime"))
  {
    m_scheduleStartTime = jsonValue.GetDouble("ScheduleStartTime");

    m_scheduleStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScheduleEndTime"))
  {
    m_scheduleEndTime = jsonValue.GetDouble("ScheduleEndTime");

    m_scheduleEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timezone"))
  {
    m_timezone = jsonValue.GetString("Timezone");

    m_timezoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScheduleOffset"))
  {
    m_scheduleOffset = jsonValue.GetInt64("ScheduleOffset");

    m_scheduleOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirstExecutionFrom"))
  {
    m_firstExecutionFrom = jsonValue.GetDouble("FirstExecutionFrom");

    m_firstExecutionFromHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduledTriggerProperties::Jsonize() const
{
  JsonValue payload;

  if(m_scheduleExpressionHasBeenSet)
  {
   payload.WithString("ScheduleExpression", m_scheduleExpression);

  }

  if(m_dataPullModeHasBeenSet)
  {
   payload.WithString("DataPullMode", DataPullModeMapper::GetNameForDataPullMode(m_dataPullMode));
  }

  if(m_scheduleStartTimeHasBeenSet)
  {
   payload.WithDouble("ScheduleStartTime", m_scheduleStartTime.SecondsWithMSPrecision());
  }

  if(m_scheduleEndTimeHasBeenSet)
  {
   payload.WithDouble("ScheduleEndTime", m_scheduleEndTime.SecondsWithMSPrecision());
  }

  if(m_timezoneHasBeenSet)
  {
   payload.WithString("Timezone", m_timezone);

  }

  if(m_scheduleOffsetHasBeenSet)
  {
   payload.WithInt64("ScheduleOffset", m_scheduleOffset);

  }

  if(m_firstExecutionFromHasBeenSet)
  {
   payload.WithDouble("FirstExecutionFrom", m_firstExecutionFrom.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
