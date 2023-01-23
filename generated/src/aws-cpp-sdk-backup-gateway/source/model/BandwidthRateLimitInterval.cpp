/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/model/BandwidthRateLimitInterval.h>
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

BandwidthRateLimitInterval::BandwidthRateLimitInterval() : 
    m_averageUploadRateLimitInBitsPerSec(0),
    m_averageUploadRateLimitInBitsPerSecHasBeenSet(false),
    m_daysOfWeekHasBeenSet(false),
    m_endHourOfDay(0),
    m_endHourOfDayHasBeenSet(false),
    m_endMinuteOfHour(0),
    m_endMinuteOfHourHasBeenSet(false),
    m_startHourOfDay(0),
    m_startHourOfDayHasBeenSet(false),
    m_startMinuteOfHour(0),
    m_startMinuteOfHourHasBeenSet(false)
{
}

BandwidthRateLimitInterval::BandwidthRateLimitInterval(JsonView jsonValue) : 
    m_averageUploadRateLimitInBitsPerSec(0),
    m_averageUploadRateLimitInBitsPerSecHasBeenSet(false),
    m_daysOfWeekHasBeenSet(false),
    m_endHourOfDay(0),
    m_endHourOfDayHasBeenSet(false),
    m_endMinuteOfHour(0),
    m_endMinuteOfHourHasBeenSet(false),
    m_startHourOfDay(0),
    m_startHourOfDayHasBeenSet(false),
    m_startMinuteOfHour(0),
    m_startMinuteOfHourHasBeenSet(false)
{
  *this = jsonValue;
}

BandwidthRateLimitInterval& BandwidthRateLimitInterval::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AverageUploadRateLimitInBitsPerSec"))
  {
    m_averageUploadRateLimitInBitsPerSec = jsonValue.GetInt64("AverageUploadRateLimitInBitsPerSec");

    m_averageUploadRateLimitInBitsPerSecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DaysOfWeek"))
  {
    Aws::Utils::Array<JsonView> daysOfWeekJsonList = jsonValue.GetArray("DaysOfWeek");
    for(unsigned daysOfWeekIndex = 0; daysOfWeekIndex < daysOfWeekJsonList.GetLength(); ++daysOfWeekIndex)
    {
      m_daysOfWeek.push_back(daysOfWeekJsonList[daysOfWeekIndex].AsInteger());
    }
    m_daysOfWeekHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndHourOfDay"))
  {
    m_endHourOfDay = jsonValue.GetInteger("EndHourOfDay");

    m_endHourOfDayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndMinuteOfHour"))
  {
    m_endMinuteOfHour = jsonValue.GetInteger("EndMinuteOfHour");

    m_endMinuteOfHourHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartHourOfDay"))
  {
    m_startHourOfDay = jsonValue.GetInteger("StartHourOfDay");

    m_startHourOfDayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartMinuteOfHour"))
  {
    m_startMinuteOfHour = jsonValue.GetInteger("StartMinuteOfHour");

    m_startMinuteOfHourHasBeenSet = true;
  }

  return *this;
}

JsonValue BandwidthRateLimitInterval::Jsonize() const
{
  JsonValue payload;

  if(m_averageUploadRateLimitInBitsPerSecHasBeenSet)
  {
   payload.WithInt64("AverageUploadRateLimitInBitsPerSec", m_averageUploadRateLimitInBitsPerSec);

  }

  if(m_daysOfWeekHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> daysOfWeekJsonList(m_daysOfWeek.size());
   for(unsigned daysOfWeekIndex = 0; daysOfWeekIndex < daysOfWeekJsonList.GetLength(); ++daysOfWeekIndex)
   {
     daysOfWeekJsonList[daysOfWeekIndex].AsInteger(m_daysOfWeek[daysOfWeekIndex]);
   }
   payload.WithArray("DaysOfWeek", std::move(daysOfWeekJsonList));

  }

  if(m_endHourOfDayHasBeenSet)
  {
   payload.WithInteger("EndHourOfDay", m_endHourOfDay);

  }

  if(m_endMinuteOfHourHasBeenSet)
  {
   payload.WithInteger("EndMinuteOfHour", m_endMinuteOfHour);

  }

  if(m_startHourOfDayHasBeenSet)
  {
   payload.WithInteger("StartHourOfDay", m_startHourOfDay);

  }

  if(m_startMinuteOfHourHasBeenSet)
  {
   payload.WithInteger("StartMinuteOfHour", m_startMinuteOfHour);

  }

  return payload;
}

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
