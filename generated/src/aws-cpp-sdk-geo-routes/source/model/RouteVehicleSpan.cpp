/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteVehicleSpan.h>
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

RouteVehicleSpan::RouteVehicleSpan(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteVehicleSpan& RouteVehicleSpan::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BestCaseDuration"))
  {
    m_bestCaseDuration = jsonValue.GetInt64("BestCaseDuration");
    m_bestCaseDurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CarAccess"))
  {
    Aws::Utils::Array<JsonView> carAccessJsonList = jsonValue.GetArray("CarAccess");
    for(unsigned carAccessIndex = 0; carAccessIndex < carAccessJsonList.GetLength(); ++carAccessIndex)
    {
      m_carAccess.push_back(RouteSpanCarAccessAttributeMapper::GetRouteSpanCarAccessAttributeForName(carAccessJsonList[carAccessIndex].AsString()));
    }
    m_carAccessHasBeenSet = true;
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
  if(jsonValue.ValueExists("Gate"))
  {
    m_gate = RouteSpanGateAttributeMapper::GetRouteSpanGateAttributeForName(jsonValue.GetString("Gate"));
    m_gateHasBeenSet = true;
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
  if(jsonValue.ValueExists("Notices"))
  {
    Aws::Utils::Array<JsonView> noticesJsonList = jsonValue.GetArray("Notices");
    for(unsigned noticesIndex = 0; noticesIndex < noticesJsonList.GetLength(); ++noticesIndex)
    {
      m_notices.push_back(noticesJsonList[noticesIndex].AsInteger());
    }
    m_noticesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RailwayCrossing"))
  {
    m_railwayCrossing = RouteSpanRailwayCrossingAttributeMapper::GetRouteSpanRailwayCrossingAttributeForName(jsonValue.GetString("RailwayCrossing"));
    m_railwayCrossingHasBeenSet = true;
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
  if(jsonValue.ValueExists("ScooterAccess"))
  {
    Aws::Utils::Array<JsonView> scooterAccessJsonList = jsonValue.GetArray("ScooterAccess");
    for(unsigned scooterAccessIndex = 0; scooterAccessIndex < scooterAccessJsonList.GetLength(); ++scooterAccessIndex)
    {
      m_scooterAccess.push_back(RouteSpanScooterAccessAttributeMapper::GetRouteSpanScooterAccessAttributeForName(scooterAccessJsonList[scooterAccessIndex].AsString()));
    }
    m_scooterAccessHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SpeedLimit"))
  {
    m_speedLimit = jsonValue.GetObject("SpeedLimit");
    m_speedLimitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TollSystems"))
  {
    Aws::Utils::Array<JsonView> tollSystemsJsonList = jsonValue.GetArray("TollSystems");
    for(unsigned tollSystemsIndex = 0; tollSystemsIndex < tollSystemsJsonList.GetLength(); ++tollSystemsIndex)
    {
      m_tollSystems.push_back(tollSystemsJsonList[tollSystemsIndex].AsInteger());
    }
    m_tollSystemsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TruckAccess"))
  {
    Aws::Utils::Array<JsonView> truckAccessJsonList = jsonValue.GetArray("TruckAccess");
    for(unsigned truckAccessIndex = 0; truckAccessIndex < truckAccessJsonList.GetLength(); ++truckAccessIndex)
    {
      m_truckAccess.push_back(RouteSpanTruckAccessAttributeMapper::GetRouteSpanTruckAccessAttributeForName(truckAccessJsonList[truckAccessIndex].AsString()));
    }
    m_truckAccessHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TruckRoadTypes"))
  {
    Aws::Utils::Array<JsonView> truckRoadTypesJsonList = jsonValue.GetArray("TruckRoadTypes");
    for(unsigned truckRoadTypesIndex = 0; truckRoadTypesIndex < truckRoadTypesJsonList.GetLength(); ++truckRoadTypesIndex)
    {
      m_truckRoadTypes.push_back(truckRoadTypesJsonList[truckRoadTypesIndex].AsInteger());
    }
    m_truckRoadTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TypicalDuration"))
  {
    m_typicalDuration = jsonValue.GetInt64("TypicalDuration");
    m_typicalDurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Zones"))
  {
    Aws::Utils::Array<JsonView> zonesJsonList = jsonValue.GetArray("Zones");
    for(unsigned zonesIndex = 0; zonesIndex < zonesJsonList.GetLength(); ++zonesIndex)
    {
      m_zones.push_back(zonesJsonList[zonesIndex].AsInteger());
    }
    m_zonesHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteVehicleSpan::Jsonize() const
{
  JsonValue payload;

  if(m_bestCaseDurationHasBeenSet)
  {
   payload.WithInt64("BestCaseDuration", m_bestCaseDuration);

  }

  if(m_carAccessHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> carAccessJsonList(m_carAccess.size());
   for(unsigned carAccessIndex = 0; carAccessIndex < carAccessJsonList.GetLength(); ++carAccessIndex)
   {
     carAccessJsonList[carAccessIndex].AsString(RouteSpanCarAccessAttributeMapper::GetNameForRouteSpanCarAccessAttribute(m_carAccess[carAccessIndex]));
   }
   payload.WithArray("CarAccess", std::move(carAccessJsonList));

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

  if(m_gateHasBeenSet)
  {
   payload.WithString("Gate", RouteSpanGateAttributeMapper::GetNameForRouteSpanGateAttribute(m_gate));
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

  if(m_noticesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> noticesJsonList(m_notices.size());
   for(unsigned noticesIndex = 0; noticesIndex < noticesJsonList.GetLength(); ++noticesIndex)
   {
     noticesJsonList[noticesIndex].AsInteger(m_notices[noticesIndex]);
   }
   payload.WithArray("Notices", std::move(noticesJsonList));

  }

  if(m_railwayCrossingHasBeenSet)
  {
   payload.WithString("RailwayCrossing", RouteSpanRailwayCrossingAttributeMapper::GetNameForRouteSpanRailwayCrossingAttribute(m_railwayCrossing));
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

  if(m_scooterAccessHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scooterAccessJsonList(m_scooterAccess.size());
   for(unsigned scooterAccessIndex = 0; scooterAccessIndex < scooterAccessJsonList.GetLength(); ++scooterAccessIndex)
   {
     scooterAccessJsonList[scooterAccessIndex].AsString(RouteSpanScooterAccessAttributeMapper::GetNameForRouteSpanScooterAccessAttribute(m_scooterAccess[scooterAccessIndex]));
   }
   payload.WithArray("ScooterAccess", std::move(scooterAccessJsonList));

  }

  if(m_speedLimitHasBeenSet)
  {
   payload.WithObject("SpeedLimit", m_speedLimit.Jsonize());

  }

  if(m_tollSystemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tollSystemsJsonList(m_tollSystems.size());
   for(unsigned tollSystemsIndex = 0; tollSystemsIndex < tollSystemsJsonList.GetLength(); ++tollSystemsIndex)
   {
     tollSystemsJsonList[tollSystemsIndex].AsInteger(m_tollSystems[tollSystemsIndex]);
   }
   payload.WithArray("TollSystems", std::move(tollSystemsJsonList));

  }

  if(m_truckAccessHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> truckAccessJsonList(m_truckAccess.size());
   for(unsigned truckAccessIndex = 0; truckAccessIndex < truckAccessJsonList.GetLength(); ++truckAccessIndex)
   {
     truckAccessJsonList[truckAccessIndex].AsString(RouteSpanTruckAccessAttributeMapper::GetNameForRouteSpanTruckAccessAttribute(m_truckAccess[truckAccessIndex]));
   }
   payload.WithArray("TruckAccess", std::move(truckAccessJsonList));

  }

  if(m_truckRoadTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> truckRoadTypesJsonList(m_truckRoadTypes.size());
   for(unsigned truckRoadTypesIndex = 0; truckRoadTypesIndex < truckRoadTypesJsonList.GetLength(); ++truckRoadTypesIndex)
   {
     truckRoadTypesJsonList[truckRoadTypesIndex].AsInteger(m_truckRoadTypes[truckRoadTypesIndex]);
   }
   payload.WithArray("TruckRoadTypes", std::move(truckRoadTypesJsonList));

  }

  if(m_typicalDurationHasBeenSet)
  {
   payload.WithInt64("TypicalDuration", m_typicalDuration);

  }

  if(m_zonesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> zonesJsonList(m_zones.size());
   for(unsigned zonesIndex = 0; zonesIndex < zonesJsonList.GetLength(); ++zonesIndex)
   {
     zonesJsonList[zonesIndex].AsInteger(m_zones[zonesIndex]);
   }
   payload.WithArray("Zones", std::move(zonesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
