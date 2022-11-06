/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/BandwidthRateLimitInterval.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

BandwidthRateLimitInterval::BandwidthRateLimitInterval() : 
    m_startHourOfDay(0),
    m_startHourOfDayHasBeenSet(false),
    m_startMinuteOfHour(0),
    m_startMinuteOfHourHasBeenSet(false),
    m_endHourOfDay(0),
    m_endHourOfDayHasBeenSet(false),
    m_endMinuteOfHour(0),
    m_endMinuteOfHourHasBeenSet(false),
    m_daysOfWeekHasBeenSet(false),
    m_averageUploadRateLimitInBitsPerSec(0),
    m_averageUploadRateLimitInBitsPerSecHasBeenSet(false),
    m_averageDownloadRateLimitInBitsPerSec(0),
    m_averageDownloadRateLimitInBitsPerSecHasBeenSet(false)
{
}

BandwidthRateLimitInterval::BandwidthRateLimitInterval(JsonView jsonValue) : 
    m_startHourOfDay(0),
    m_startHourOfDayHasBeenSet(false),
    m_startMinuteOfHour(0),
    m_startMinuteOfHourHasBeenSet(false),
    m_endHourOfDay(0),
    m_endHourOfDayHasBeenSet(false),
    m_endMinuteOfHour(0),
    m_endMinuteOfHourHasBeenSet(false),
    m_daysOfWeekHasBeenSet(false),
    m_averageUploadRateLimitInBitsPerSec(0),
    m_averageUploadRateLimitInBitsPerSecHasBeenSet(false),
    m_averageDownloadRateLimitInBitsPerSec(0),
    m_averageDownloadRateLimitInBitsPerSecHasBeenSet(false)
{
  *this = jsonValue;
}

BandwidthRateLimitInterval& BandwidthRateLimitInterval::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("DaysOfWeek"))
  {
    Aws::Utils::Array<JsonView> daysOfWeekJsonList = jsonValue.GetArray("DaysOfWeek");
    for(unsigned daysOfWeekIndex = 0; daysOfWeekIndex < daysOfWeekJsonList.GetLength(); ++daysOfWeekIndex)
    {
      m_daysOfWeek.push_back(daysOfWeekJsonList[daysOfWeekIndex].AsInteger());
    }
    m_daysOfWeekHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AverageUploadRateLimitInBitsPerSec"))
  {
    m_averageUploadRateLimitInBitsPerSec = jsonValue.GetInt64("AverageUploadRateLimitInBitsPerSec");

    m_averageUploadRateLimitInBitsPerSecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AverageDownloadRateLimitInBitsPerSec"))
  {
    m_averageDownloadRateLimitInBitsPerSec = jsonValue.GetInt64("AverageDownloadRateLimitInBitsPerSec");

    m_averageDownloadRateLimitInBitsPerSecHasBeenSet = true;
  }

  return *this;
}

JsonValue BandwidthRateLimitInterval::Jsonize() const
{
  JsonValue payload;

  if(m_startHourOfDayHasBeenSet)
  {
   payload.WithInteger("StartHourOfDay", m_startHourOfDay);

  }

  if(m_startMinuteOfHourHasBeenSet)
  {
   payload.WithInteger("StartMinuteOfHour", m_startMinuteOfHour);

  }

  if(m_endHourOfDayHasBeenSet)
  {
   payload.WithInteger("EndHourOfDay", m_endHourOfDay);

  }

  if(m_endMinuteOfHourHasBeenSet)
  {
   payload.WithInteger("EndMinuteOfHour", m_endMinuteOfHour);

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

  if(m_averageUploadRateLimitInBitsPerSecHasBeenSet)
  {
   payload.WithInt64("AverageUploadRateLimitInBitsPerSec", m_averageUploadRateLimitInBitsPerSec);

  }

  if(m_averageDownloadRateLimitInBitsPerSecHasBeenSet)
  {
   payload.WithInt64("AverageDownloadRateLimitInBitsPerSec", m_averageDownloadRateLimitInBitsPerSec);

  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
