/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/model/MaintenanceStartTime.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BackupGateway
{
namespace Model
{

MaintenanceStartTime::MaintenanceStartTime() : 
    m_dayOfMonth(0),
    m_dayOfMonthHasBeenSet(false),
    m_dayOfWeek(0),
    m_dayOfWeekHasBeenSet(false),
    m_hourOfDay(0),
    m_hourOfDayHasBeenSet(false),
    m_minuteOfHour(0),
    m_minuteOfHourHasBeenSet(false)
{
}

MaintenanceStartTime::MaintenanceStartTime(JsonView jsonValue) : 
    m_dayOfMonth(0),
    m_dayOfMonthHasBeenSet(false),
    m_dayOfWeek(0),
    m_dayOfWeekHasBeenSet(false),
    m_hourOfDay(0),
    m_hourOfDayHasBeenSet(false),
    m_minuteOfHour(0),
    m_minuteOfHourHasBeenSet(false)
{
  *this = jsonValue;
}

MaintenanceStartTime& MaintenanceStartTime::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DayOfMonth"))
  {
    m_dayOfMonth = jsonValue.GetInteger("DayOfMonth");

    m_dayOfMonthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DayOfWeek"))
  {
    m_dayOfWeek = jsonValue.GetInteger("DayOfWeek");

    m_dayOfWeekHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HourOfDay"))
  {
    m_hourOfDay = jsonValue.GetInteger("HourOfDay");

    m_hourOfDayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinuteOfHour"))
  {
    m_minuteOfHour = jsonValue.GetInteger("MinuteOfHour");

    m_minuteOfHourHasBeenSet = true;
  }

  return *this;
}

JsonValue MaintenanceStartTime::Jsonize() const
{
  JsonValue payload;

  if(m_dayOfMonthHasBeenSet)
  {
   payload.WithInteger("DayOfMonth", m_dayOfMonth);

  }

  if(m_dayOfWeekHasBeenSet)
  {
   payload.WithInteger("DayOfWeek", m_dayOfWeek);

  }

  if(m_hourOfDayHasBeenSet)
  {
   payload.WithInteger("HourOfDay", m_hourOfDay);

  }

  if(m_minuteOfHourHasBeenSet)
  {
   payload.WithInteger("MinuteOfHour", m_minuteOfHour);

  }

  return payload;
}

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
