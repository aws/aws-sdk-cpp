/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/IsolineThresholds.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoRoutes
{
namespace Model
{

IsolineThresholds::IsolineThresholds(JsonView jsonValue)
{
  *this = jsonValue;
}

IsolineThresholds& IsolineThresholds::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Distance"))
  {
    Aws::Utils::Array<JsonView> distanceJsonList = jsonValue.GetArray("Distance");
    for(unsigned distanceIndex = 0; distanceIndex < distanceJsonList.GetLength(); ++distanceIndex)
    {
      m_distance.push_back(distanceJsonList[distanceIndex].AsInt64());
    }
    m_distanceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Time"))
  {
    Aws::Utils::Array<JsonView> timeJsonList = jsonValue.GetArray("Time");
    for(unsigned timeIndex = 0; timeIndex < timeJsonList.GetLength(); ++timeIndex)
    {
      m_time.push_back(timeJsonList[timeIndex].AsInt64());
    }
    m_timeHasBeenSet = true;
  }
  return *this;
}

JsonValue IsolineThresholds::Jsonize() const
{
  JsonValue payload;

  if(m_distanceHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> distanceJsonList(m_distance.size());
   for(unsigned distanceIndex = 0; distanceIndex < distanceJsonList.GetLength(); ++distanceIndex)
   {
     distanceJsonList[distanceIndex].AsInt64(m_distance[distanceIndex]);
   }
   payload.WithArray("Distance", std::move(distanceJsonList));

  }

  if(m_timeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> timeJsonList(m_time.size());
   for(unsigned timeIndex = 0; timeIndex < timeJsonList.GetLength(); ++timeIndex)
   {
     timeJsonList[timeIndex].AsInt64(m_time[timeIndex]);
   }
   payload.WithArray("Time", std::move(timeJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
