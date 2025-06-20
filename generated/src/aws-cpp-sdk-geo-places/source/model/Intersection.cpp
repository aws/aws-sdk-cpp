/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/Intersection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoPlaces
{
namespace Model
{

Intersection::Intersection(JsonView jsonValue)
{
  *this = jsonValue;
}

Intersection& Intersection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PlaceId"))
  {
    m_placeId = jsonValue.GetString("PlaceId");
    m_placeIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");
    m_titleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Address"))
  {
    m_address = jsonValue.GetObject("Address");
    m_addressHasBeenSet = true;
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
  if(jsonValue.ValueExists("Distance"))
  {
    m_distance = jsonValue.GetInt64("Distance");
    m_distanceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RouteDistance"))
  {
    m_routeDistance = jsonValue.GetInt64("RouteDistance");
    m_routeDistanceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MapView"))
  {
    Aws::Utils::Array<JsonView> mapViewJsonList = jsonValue.GetArray("MapView");
    for(unsigned mapViewIndex = 0; mapViewIndex < mapViewJsonList.GetLength(); ++mapViewIndex)
    {
      m_mapView.push_back(mapViewJsonList[mapViewIndex].AsDouble());
    }
    m_mapViewHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AccessPoints"))
  {
    Aws::Utils::Array<JsonView> accessPointsJsonList = jsonValue.GetArray("AccessPoints");
    for(unsigned accessPointsIndex = 0; accessPointsIndex < accessPointsJsonList.GetLength(); ++accessPointsIndex)
    {
      m_accessPoints.push_back(accessPointsJsonList[accessPointsIndex].AsObject());
    }
    m_accessPointsHasBeenSet = true;
  }
  return *this;
}

JsonValue Intersection::Jsonize() const
{
  JsonValue payload;

  if(m_placeIdHasBeenSet)
  {
   payload.WithString("PlaceId", m_placeId);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_addressHasBeenSet)
  {
   payload.WithObject("Address", m_address.Jsonize());

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

  if(m_distanceHasBeenSet)
  {
   payload.WithInt64("Distance", m_distance);

  }

  if(m_routeDistanceHasBeenSet)
  {
   payload.WithInt64("RouteDistance", m_routeDistance);

  }

  if(m_mapViewHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mapViewJsonList(m_mapView.size());
   for(unsigned mapViewIndex = 0; mapViewIndex < mapViewJsonList.GetLength(); ++mapViewIndex)
   {
     mapViewJsonList[mapViewIndex].AsDouble(m_mapView[mapViewIndex]);
   }
   payload.WithArray("MapView", std::move(mapViewJsonList));

  }

  if(m_accessPointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accessPointsJsonList(m_accessPoints.size());
   for(unsigned accessPointsIndex = 0; accessPointsIndex < accessPointsJsonList.GetLength(); ++accessPointsIndex)
   {
     accessPointsJsonList[accessPointsIndex].AsObject(m_accessPoints[accessPointsIndex].Jsonize());
   }
   payload.WithArray("AccessPoints", std::move(accessPointsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
