/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/ScheduledTriggerProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

ScheduledTriggerProperties::ScheduledTriggerProperties() : 
    m_scheduleExpressionHasBeenSet(false),
    m_dataPullMode(DataPullMode::NOT_SET),
    m_dataPullModeHasBeenSet(false),
    m_scheduleStartTimeHasBeenSet(false),
    m_scheduleEndTimeHasBeenSet(false),
    m_timezoneHasBeenSet(false)
{
}

ScheduledTriggerProperties::ScheduledTriggerProperties(JsonView jsonValue) : 
    m_scheduleExpressionHasBeenSet(false),
    m_dataPullMode(DataPullMode::NOT_SET),
    m_dataPullModeHasBeenSet(false),
    m_scheduleStartTimeHasBeenSet(false),
    m_scheduleEndTimeHasBeenSet(false),
    m_timezoneHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduledTriggerProperties& ScheduledTriggerProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scheduleExpression"))
  {
    m_scheduleExpression = jsonValue.GetString("scheduleExpression");

    m_scheduleExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataPullMode"))
  {
    m_dataPullMode = DataPullModeMapper::GetDataPullModeForName(jsonValue.GetString("dataPullMode"));

    m_dataPullModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scheduleStartTime"))
  {
    m_scheduleStartTime = jsonValue.GetDouble("scheduleStartTime");

    m_scheduleStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scheduleEndTime"))
  {
    m_scheduleEndTime = jsonValue.GetDouble("scheduleEndTime");

    m_scheduleEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timezone"))
  {
    m_timezone = jsonValue.GetString("timezone");

    m_timezoneHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduledTriggerProperties::Jsonize() const
{
  JsonValue payload;

  if(m_scheduleExpressionHasBeenSet)
  {
   payload.WithString("scheduleExpression", m_scheduleExpression);

  }

  if(m_dataPullModeHasBeenSet)
  {
   payload.WithString("dataPullMode", DataPullModeMapper::GetNameForDataPullMode(m_dataPullMode));
  }

  if(m_scheduleStartTimeHasBeenSet)
  {
   payload.WithDouble("scheduleStartTime", m_scheduleStartTime.SecondsWithMSPrecision());
  }

  if(m_scheduleEndTimeHasBeenSet)
  {
   payload.WithDouble("scheduleEndTime", m_scheduleEndTime.SecondsWithMSPrecision());
  }

  if(m_timezoneHasBeenSet)
  {
   payload.WithString("timezone", m_timezone);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
