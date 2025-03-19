/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/OpenHours.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCampaignsV2
{
namespace Model
{

OpenHours::OpenHours(JsonView jsonValue)
{
  *this = jsonValue;
}

OpenHours& OpenHours::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dailyHours"))
  {
    Aws::Map<Aws::String, JsonView> dailyHoursJsonMap = jsonValue.GetObject("dailyHours").GetAllObjects();
    for(auto& dailyHoursItem : dailyHoursJsonMap)
    {
      Aws::Utils::Array<JsonView> timeRangeListJsonList = dailyHoursItem.second.AsArray();
      Aws::Vector<TimeRange> timeRangeListList;
      timeRangeListList.reserve((size_t)timeRangeListJsonList.GetLength());
      for(unsigned timeRangeListIndex = 0; timeRangeListIndex < timeRangeListJsonList.GetLength(); ++timeRangeListIndex)
      {
        timeRangeListList.push_back(timeRangeListJsonList[timeRangeListIndex].AsObject());
      }
      m_dailyHours[DayOfWeekMapper::GetDayOfWeekForName(dailyHoursItem.first)] = std::move(timeRangeListList);
    }
    m_dailyHoursHasBeenSet = true;
  }
  return *this;
}

JsonValue OpenHours::Jsonize() const
{
  JsonValue payload;

  if(m_dailyHoursHasBeenSet)
  {
   JsonValue dailyHoursJsonMap;
   for(auto& dailyHoursItem : m_dailyHours)
   {
     Aws::Utils::Array<JsonValue> timeRangeListJsonList(dailyHoursItem.second.size());
     for(unsigned timeRangeListIndex = 0; timeRangeListIndex < timeRangeListJsonList.GetLength(); ++timeRangeListIndex)
     {
       timeRangeListJsonList[timeRangeListIndex].AsObject(dailyHoursItem.second[timeRangeListIndex].Jsonize());
     }
     dailyHoursJsonMap.WithArray(DayOfWeekMapper::GetNameForDayOfWeek(dailyHoursItem.first), std::move(timeRangeListJsonList));
   }
   payload.WithObject("dailyHours", std::move(dailyHoursJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
