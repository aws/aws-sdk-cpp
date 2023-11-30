/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-zonal-shift/model/PracticeRunConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ARCZonalShift
{
namespace Model
{

PracticeRunConfiguration::PracticeRunConfiguration() : 
    m_blockedDatesHasBeenSet(false),
    m_blockedWindowsHasBeenSet(false),
    m_blockingAlarmsHasBeenSet(false),
    m_outcomeAlarmsHasBeenSet(false)
{
}

PracticeRunConfiguration::PracticeRunConfiguration(JsonView jsonValue) : 
    m_blockedDatesHasBeenSet(false),
    m_blockedWindowsHasBeenSet(false),
    m_blockingAlarmsHasBeenSet(false),
    m_outcomeAlarmsHasBeenSet(false)
{
  *this = jsonValue;
}

PracticeRunConfiguration& PracticeRunConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("blockedDates"))
  {
    Aws::Utils::Array<JsonView> blockedDatesJsonList = jsonValue.GetArray("blockedDates");
    for(unsigned blockedDatesIndex = 0; blockedDatesIndex < blockedDatesJsonList.GetLength(); ++blockedDatesIndex)
    {
      m_blockedDates.push_back(blockedDatesJsonList[blockedDatesIndex].AsString());
    }
    m_blockedDatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("blockedWindows"))
  {
    Aws::Utils::Array<JsonView> blockedWindowsJsonList = jsonValue.GetArray("blockedWindows");
    for(unsigned blockedWindowsIndex = 0; blockedWindowsIndex < blockedWindowsJsonList.GetLength(); ++blockedWindowsIndex)
    {
      m_blockedWindows.push_back(blockedWindowsJsonList[blockedWindowsIndex].AsString());
    }
    m_blockedWindowsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("blockingAlarms"))
  {
    Aws::Utils::Array<JsonView> blockingAlarmsJsonList = jsonValue.GetArray("blockingAlarms");
    for(unsigned blockingAlarmsIndex = 0; blockingAlarmsIndex < blockingAlarmsJsonList.GetLength(); ++blockingAlarmsIndex)
    {
      m_blockingAlarms.push_back(blockingAlarmsJsonList[blockingAlarmsIndex].AsObject());
    }
    m_blockingAlarmsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outcomeAlarms"))
  {
    Aws::Utils::Array<JsonView> outcomeAlarmsJsonList = jsonValue.GetArray("outcomeAlarms");
    for(unsigned outcomeAlarmsIndex = 0; outcomeAlarmsIndex < outcomeAlarmsJsonList.GetLength(); ++outcomeAlarmsIndex)
    {
      m_outcomeAlarms.push_back(outcomeAlarmsJsonList[outcomeAlarmsIndex].AsObject());
    }
    m_outcomeAlarmsHasBeenSet = true;
  }

  return *this;
}

JsonValue PracticeRunConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_blockedDatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> blockedDatesJsonList(m_blockedDates.size());
   for(unsigned blockedDatesIndex = 0; blockedDatesIndex < blockedDatesJsonList.GetLength(); ++blockedDatesIndex)
   {
     blockedDatesJsonList[blockedDatesIndex].AsString(m_blockedDates[blockedDatesIndex]);
   }
   payload.WithArray("blockedDates", std::move(blockedDatesJsonList));

  }

  if(m_blockedWindowsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> blockedWindowsJsonList(m_blockedWindows.size());
   for(unsigned blockedWindowsIndex = 0; blockedWindowsIndex < blockedWindowsJsonList.GetLength(); ++blockedWindowsIndex)
   {
     blockedWindowsJsonList[blockedWindowsIndex].AsString(m_blockedWindows[blockedWindowsIndex]);
   }
   payload.WithArray("blockedWindows", std::move(blockedWindowsJsonList));

  }

  if(m_blockingAlarmsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> blockingAlarmsJsonList(m_blockingAlarms.size());
   for(unsigned blockingAlarmsIndex = 0; blockingAlarmsIndex < blockingAlarmsJsonList.GetLength(); ++blockingAlarmsIndex)
   {
     blockingAlarmsJsonList[blockingAlarmsIndex].AsObject(m_blockingAlarms[blockingAlarmsIndex].Jsonize());
   }
   payload.WithArray("blockingAlarms", std::move(blockingAlarmsJsonList));

  }

  if(m_outcomeAlarmsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outcomeAlarmsJsonList(m_outcomeAlarms.size());
   for(unsigned outcomeAlarmsIndex = 0; outcomeAlarmsIndex < outcomeAlarmsJsonList.GetLength(); ++outcomeAlarmsIndex)
   {
     outcomeAlarmsJsonList[outcomeAlarmsIndex].AsObject(m_outcomeAlarms[outcomeAlarmsIndex].Jsonize());
   }
   payload.WithArray("outcomeAlarms", std::move(outcomeAlarmsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
