/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RoutePedestrianSpan.h>
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

RoutePedestrianSpan::RoutePedestrianSpan(JsonView jsonValue)
{
  *this = jsonValue;
}

RoutePedestrianSpan& RoutePedestrianSpan::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BestCaseDuration"))
  {
    m_bestCaseDuration = jsonValue.GetInt64("BestCaseDuration");
    m_bestCaseDurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Country"))
  {
    m_country = jsonValue.GetString("Country");
    m_countryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Distance"))
  {
    m_distance = jsonValue.GetInt64("Distance");
    m_distanceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Duration"))
  {
    m_duration = jsonValue.GetInt64("Duration");
    m_durationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DynamicSpeed"))
  {
    m_dynamicSpeed = jsonValue.GetObject("DynamicSpeed");
    m_dynamicSpeedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FunctionalClassification"))
  {
    m_functionalClassification = jsonValue.GetInteger("FunctionalClassification");
    m_functionalClassificationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GeometryOffset"))
  {
    m_geometryOffset = jsonValue.GetInteger("GeometryOffset");
    m_geometryOffsetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Incidents"))
  {
    Aws::Utils::Array<JsonView> incidentsJsonList = jsonValue.GetArray("Incidents");
    for(unsigned incidentsIndex = 0; incidentsIndex < incidentsJsonList.GetLength(); ++incidentsIndex)
    {
      m_incidents.push_back(incidentsJsonList[incidentsIndex].AsInteger());
    }
    m_incidentsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Names"))
  {
    Aws::Utils::Array<JsonView> namesJsonList = jsonValue.GetArray("Names");
    for(unsigned namesIndex = 0; namesIndex < namesJsonList.GetLength(); ++namesIndex)
    {
      m_names.push_back(namesJsonList[namesIndex].AsObject());
    }
    m_namesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PedestrianAccess"))
  {
    Aws::Utils::Array<JsonView> pedestrianAccessJsonList = jsonValue.GetArray("PedestrianAccess");
    for(unsigned pedestrianAccessIndex = 0; pedestrianAccessIndex < pedestrianAccessJsonList.GetLength(); ++pedestrianAccessIndex)
    {
      m_pedestrianAccess.push_back(RouteSpanPedestrianAccessAttributeMapper::GetRouteSpanPedestrianAccessAttributeForName(pedestrianAccessJsonList[pedestrianAccessIndex].AsString()));
    }
    m_pedestrianAccessHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoadAttributes"))
  {
    Aws::Utils::Array<JsonView> roadAttributesJsonList = jsonValue.GetArray("RoadAttributes");
    for(unsigned roadAttributesIndex = 0; roadAttributesIndex < roadAttributesJsonList.GetLength(); ++roadAttributesIndex)
    {
      m_roadAttributes.push_back(RouteSpanRoadAttributeMapper::GetRouteSpanRoadAttributeForName(roadAttributesJsonList[roadAttributesIndex].AsString()));
    }
    m_roadAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RouteNumbers"))
  {
    Aws::Utils::Array<JsonView> routeNumbersJsonList = jsonValue.GetArray("RouteNumbers");
    for(unsigned routeNumbersIndex = 0; routeNumbersIndex < routeNumbersJsonList.GetLength(); ++routeNumbersIndex)
    {
      m_routeNumbers.push_back(routeNumbersJsonList[routeNumbersIndex].AsObject());
    }
    m_routeNumbersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SpeedLimit"))
  {
    m_speedLimit = jsonValue.GetObject("SpeedLimit");
    m_speedLimitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TypicalDuration"))
  {
    m_typicalDuration = jsonValue.GetInt64("TypicalDuration");
    m_typicalDurationHasBeenSet = true;
  }
  return *this;
}

JsonValue RoutePedestrianSpan::Jsonize() const
{
  JsonValue payload;

  if(m_bestCaseDurationHasBeenSet)
  {
   payload.WithInt64("BestCaseDuration", m_bestCaseDuration);

  }

  if(m_countryHasBeenSet)
  {
   payload.WithString("Country", m_country);

  }

  if(m_distanceHasBeenSet)
  {
   payload.WithInt64("Distance", m_distance);

  }

  if(m_durationHasBeenSet)
  {
   payload.WithInt64("Duration", m_duration);

  }

  if(m_dynamicSpeedHasBeenSet)
  {
   payload.WithObject("DynamicSpeed", m_dynamicSpeed.Jsonize());

  }

  if(m_functionalClassificationHasBeenSet)
  {
   payload.WithInteger("FunctionalClassification", m_functionalClassification);

  }

  if(m_geometryOffsetHasBeenSet)
  {
   payload.WithInteger("GeometryOffset", m_geometryOffset);

  }

  if(m_incidentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> incidentsJsonList(m_incidents.size());
   for(unsigned incidentsIndex = 0; incidentsIndex < incidentsJsonList.GetLength(); ++incidentsIndex)
   {
     incidentsJsonList[incidentsIndex].AsInteger(m_incidents[incidentsIndex]);
   }
   payload.WithArray("Incidents", std::move(incidentsJsonList));

  }

  if(m_namesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> namesJsonList(m_names.size());
   for(unsigned namesIndex = 0; namesIndex < namesJsonList.GetLength(); ++namesIndex)
   {
     namesJsonList[namesIndex].AsObject(m_names[namesIndex].Jsonize());
   }
   payload.WithArray("Names", std::move(namesJsonList));

  }

  if(m_pedestrianAccessHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pedestrianAccessJsonList(m_pedestrianAccess.size());
   for(unsigned pedestrianAccessIndex = 0; pedestrianAccessIndex < pedestrianAccessJsonList.GetLength(); ++pedestrianAccessIndex)
   {
     pedestrianAccessJsonList[pedestrianAccessIndex].AsString(RouteSpanPedestrianAccessAttributeMapper::GetNameForRouteSpanPedestrianAccessAttribute(m_pedestrianAccess[pedestrianAccessIndex]));
   }
   payload.WithArray("PedestrianAccess", std::move(pedestrianAccessJsonList));

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_roadAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> roadAttributesJsonList(m_roadAttributes.size());
   for(unsigned roadAttributesIndex = 0; roadAttributesIndex < roadAttributesJsonList.GetLength(); ++roadAttributesIndex)
   {
     roadAttributesJsonList[roadAttributesIndex].AsString(RouteSpanRoadAttributeMapper::GetNameForRouteSpanRoadAttribute(m_roadAttributes[roadAttributesIndex]));
   }
   payload.WithArray("RoadAttributes", std::move(roadAttributesJsonList));

  }

  if(m_routeNumbersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> routeNumbersJsonList(m_routeNumbers.size());
   for(unsigned routeNumbersIndex = 0; routeNumbersIndex < routeNumbersJsonList.GetLength(); ++routeNumbersIndex)
   {
     routeNumbersJsonList[routeNumbersIndex].AsObject(m_routeNumbers[routeNumbersIndex].Jsonize());
   }
   payload.WithArray("RouteNumbers", std::move(routeNumbersJsonList));

  }

  if(m_speedLimitHasBeenSet)
  {
   payload.WithObject("SpeedLimit", m_speedLimit.Jsonize());

  }

  if(m_typicalDurationHasBeenSet)
  {
   payload.WithInt64("TypicalDuration", m_typicalDuration);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
