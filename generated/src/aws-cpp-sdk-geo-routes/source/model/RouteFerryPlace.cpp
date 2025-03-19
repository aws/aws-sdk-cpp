/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteFerryPlace.h>
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

RouteFerryPlace::RouteFerryPlace(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteFerryPlace& RouteFerryPlace::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OriginalPosition"))
  {
    Aws::Utils::Array<JsonView> originalPositionJsonList = jsonValue.GetArray("OriginalPosition");
    for(unsigned originalPositionIndex = 0; originalPositionIndex < originalPositionJsonList.GetLength(); ++originalPositionIndex)
    {
      m_originalPosition.push_back(originalPositionJsonList[originalPositionIndex].AsDouble());
    }
    m_originalPositionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Position"))
  {
    Aws::Utils::Array<JsonView> positionJsonList = jsonValue.GetArray("Position");
    for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
    {
      m_position.push_back(positionJsonList[positionIndex].AsDouble());
    }
    m_positionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WaypointIndex"))
  {
    m_waypointIndex = jsonValue.GetInteger("WaypointIndex");
    m_waypointIndexHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteFerryPlace::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_originalPositionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> originalPositionJsonList(m_originalPosition.size());
   for(unsigned originalPositionIndex = 0; originalPositionIndex < originalPositionJsonList.GetLength(); ++originalPositionIndex)
   {
     originalPositionJsonList[originalPositionIndex].AsDouble(m_originalPosition[originalPositionIndex]);
   }
   payload.WithArray("OriginalPosition", std::move(originalPositionJsonList));

  }

  if(m_positionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> positionJsonList(m_position.size());
   for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
   {
     positionJsonList[positionIndex].AsDouble(m_position[positionIndex]);
   }
   payload.WithArray("Position", std::move(positionJsonList));

  }

  if(m_waypointIndexHasBeenSet)
  {
   payload.WithInteger("WaypointIndex", m_waypointIndex);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
