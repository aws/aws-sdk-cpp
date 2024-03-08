/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ScheduleConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

ScheduleConfiguration::ScheduleConfiguration() : 
    m_scheduleHasBeenSet(false),
    m_timezone(Timezone::NOT_SET),
    m_timezoneHasBeenSet(false)
{
}

ScheduleConfiguration::ScheduleConfiguration(JsonView jsonValue) : 
    m_scheduleHasBeenSet(false),
    m_timezone(Timezone::NOT_SET),
    m_timezoneHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduleConfiguration& ScheduleConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("schedule"))
  {
    m_schedule = jsonValue.GetString("schedule");

    m_scheduleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timezone"))
  {
    m_timezone = TimezoneMapper::GetTimezoneForName(jsonValue.GetString("timezone"));

    m_timezoneHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduleConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_scheduleHasBeenSet)
  {
   payload.WithString("schedule", m_schedule);

  }

  if(m_timezoneHasBeenSet)
  {
   payload.WithString("timezone", TimezoneMapper::GetNameForTimezone(m_timezone));
  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
