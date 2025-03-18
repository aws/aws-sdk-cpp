/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteRoad.h>
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

RouteRoad::RouteRoad(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteRoad& RouteRoad::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RoadName"))
  {
    Aws::Utils::Array<JsonView> roadNameJsonList = jsonValue.GetArray("RoadName");
    for(unsigned roadNameIndex = 0; roadNameIndex < roadNameJsonList.GetLength(); ++roadNameIndex)
    {
      m_roadName.push_back(roadNameJsonList[roadNameIndex].AsObject());
    }
    m_roadNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RouteNumber"))
  {
    Aws::Utils::Array<JsonView> routeNumberJsonList = jsonValue.GetArray("RouteNumber");
    for(unsigned routeNumberIndex = 0; routeNumberIndex < routeNumberJsonList.GetLength(); ++routeNumberIndex)
    {
      m_routeNumber.push_back(routeNumberJsonList[routeNumberIndex].AsObject());
    }
    m_routeNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Towards"))
  {
    Aws::Utils::Array<JsonView> towardsJsonList = jsonValue.GetArray("Towards");
    for(unsigned towardsIndex = 0; towardsIndex < towardsJsonList.GetLength(); ++towardsIndex)
    {
      m_towards.push_back(towardsJsonList[towardsIndex].AsObject());
    }
    m_towardsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = RouteRoadTypeMapper::GetRouteRoadTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteRoad::Jsonize() const
{
  JsonValue payload;

  if(m_roadNameHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> roadNameJsonList(m_roadName.size());
   for(unsigned roadNameIndex = 0; roadNameIndex < roadNameJsonList.GetLength(); ++roadNameIndex)
   {
     roadNameJsonList[roadNameIndex].AsObject(m_roadName[roadNameIndex].Jsonize());
   }
   payload.WithArray("RoadName", std::move(roadNameJsonList));

  }

  if(m_routeNumberHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> routeNumberJsonList(m_routeNumber.size());
   for(unsigned routeNumberIndex = 0; routeNumberIndex < routeNumberJsonList.GetLength(); ++routeNumberIndex)
   {
     routeNumberJsonList[routeNumberIndex].AsObject(m_routeNumber[routeNumberIndex].Jsonize());
   }
   payload.WithArray("RouteNumber", std::move(routeNumberJsonList));

  }

  if(m_towardsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> towardsJsonList(m_towards.size());
   for(unsigned towardsIndex = 0; towardsIndex < towardsJsonList.GetLength(); ++towardsIndex)
   {
     towardsJsonList[towardsIndex].AsObject(m_towards[towardsIndex].Jsonize());
   }
   payload.WithArray("Towards", std::move(towardsJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", RouteRoadTypeMapper::GetNameForRouteRoadType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
