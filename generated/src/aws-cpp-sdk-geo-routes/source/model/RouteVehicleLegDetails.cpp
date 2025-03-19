/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteVehicleLegDetails.h>
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

RouteVehicleLegDetails::RouteVehicleLegDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteVehicleLegDetails& RouteVehicleLegDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arrival"))
  {
    m_arrival = jsonValue.GetObject("Arrival");
    m_arrivalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Departure"))
  {
    m_departure = jsonValue.GetObject("Departure");
    m_departureHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Incidents"))
  {
    Aws::Utils::Array<JsonView> incidentsJsonList = jsonValue.GetArray("Incidents");
    for(unsigned incidentsIndex = 0; incidentsIndex < incidentsJsonList.GetLength(); ++incidentsIndex)
    {
      m_incidents.push_back(incidentsJsonList[incidentsIndex].AsObject());
    }
    m_incidentsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Notices"))
  {
    Aws::Utils::Array<JsonView> noticesJsonList = jsonValue.GetArray("Notices");
    for(unsigned noticesIndex = 0; noticesIndex < noticesJsonList.GetLength(); ++noticesIndex)
    {
      m_notices.push_back(noticesJsonList[noticesIndex].AsObject());
    }
    m_noticesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PassThroughWaypoints"))
  {
    Aws::Utils::Array<JsonView> passThroughWaypointsJsonList = jsonValue.GetArray("PassThroughWaypoints");
    for(unsigned passThroughWaypointsIndex = 0; passThroughWaypointsIndex < passThroughWaypointsJsonList.GetLength(); ++passThroughWaypointsIndex)
    {
      m_passThroughWaypoints.push_back(passThroughWaypointsJsonList[passThroughWaypointsIndex].AsObject());
    }
    m_passThroughWaypointsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Spans"))
  {
    Aws::Utils::Array<JsonView> spansJsonList = jsonValue.GetArray("Spans");
    for(unsigned spansIndex = 0; spansIndex < spansJsonList.GetLength(); ++spansIndex)
    {
      m_spans.push_back(spansJsonList[spansIndex].AsObject());
    }
    m_spansHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Summary"))
  {
    m_summary = jsonValue.GetObject("Summary");
    m_summaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tolls"))
  {
    Aws::Utils::Array<JsonView> tollsJsonList = jsonValue.GetArray("Tolls");
    for(unsigned tollsIndex = 0; tollsIndex < tollsJsonList.GetLength(); ++tollsIndex)
    {
      m_tolls.push_back(tollsJsonList[tollsIndex].AsObject());
    }
    m_tollsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TollSystems"))
  {
    Aws::Utils::Array<JsonView> tollSystemsJsonList = jsonValue.GetArray("TollSystems");
    for(unsigned tollSystemsIndex = 0; tollSystemsIndex < tollSystemsJsonList.GetLength(); ++tollSystemsIndex)
    {
      m_tollSystems.push_back(tollSystemsJsonList[tollSystemsIndex].AsObject());
    }
    m_tollSystemsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TravelSteps"))
  {
    Aws::Utils::Array<JsonView> travelStepsJsonList = jsonValue.GetArray("TravelSteps");
    for(unsigned travelStepsIndex = 0; travelStepsIndex < travelStepsJsonList.GetLength(); ++travelStepsIndex)
    {
      m_travelSteps.push_back(travelStepsJsonList[travelStepsIndex].AsObject());
    }
    m_travelStepsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TruckRoadTypes"))
  {
    Aws::Utils::Array<JsonView> truckRoadTypesJsonList = jsonValue.GetArray("TruckRoadTypes");
    for(unsigned truckRoadTypesIndex = 0; truckRoadTypesIndex < truckRoadTypesJsonList.GetLength(); ++truckRoadTypesIndex)
    {
      m_truckRoadTypes.push_back(truckRoadTypesJsonList[truckRoadTypesIndex].AsString());
    }
    m_truckRoadTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Zones"))
  {
    Aws::Utils::Array<JsonView> zonesJsonList = jsonValue.GetArray("Zones");
    for(unsigned zonesIndex = 0; zonesIndex < zonesJsonList.GetLength(); ++zonesIndex)
    {
      m_zones.push_back(zonesJsonList[zonesIndex].AsObject());
    }
    m_zonesHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteVehicleLegDetails::Jsonize() const
{
  JsonValue payload;

  if(m_arrivalHasBeenSet)
  {
   payload.WithObject("Arrival", m_arrival.Jsonize());

  }

  if(m_departureHasBeenSet)
  {
   payload.WithObject("Departure", m_departure.Jsonize());

  }

  if(m_incidentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> incidentsJsonList(m_incidents.size());
   for(unsigned incidentsIndex = 0; incidentsIndex < incidentsJsonList.GetLength(); ++incidentsIndex)
   {
     incidentsJsonList[incidentsIndex].AsObject(m_incidents[incidentsIndex].Jsonize());
   }
   payload.WithArray("Incidents", std::move(incidentsJsonList));

  }

  if(m_noticesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> noticesJsonList(m_notices.size());
   for(unsigned noticesIndex = 0; noticesIndex < noticesJsonList.GetLength(); ++noticesIndex)
   {
     noticesJsonList[noticesIndex].AsObject(m_notices[noticesIndex].Jsonize());
   }
   payload.WithArray("Notices", std::move(noticesJsonList));

  }

  if(m_passThroughWaypointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> passThroughWaypointsJsonList(m_passThroughWaypoints.size());
   for(unsigned passThroughWaypointsIndex = 0; passThroughWaypointsIndex < passThroughWaypointsJsonList.GetLength(); ++passThroughWaypointsIndex)
   {
     passThroughWaypointsJsonList[passThroughWaypointsIndex].AsObject(m_passThroughWaypoints[passThroughWaypointsIndex].Jsonize());
   }
   payload.WithArray("PassThroughWaypoints", std::move(passThroughWaypointsJsonList));

  }

  if(m_spansHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> spansJsonList(m_spans.size());
   for(unsigned spansIndex = 0; spansIndex < spansJsonList.GetLength(); ++spansIndex)
   {
     spansJsonList[spansIndex].AsObject(m_spans[spansIndex].Jsonize());
   }
   payload.WithArray("Spans", std::move(spansJsonList));

  }

  if(m_summaryHasBeenSet)
  {
   payload.WithObject("Summary", m_summary.Jsonize());

  }

  if(m_tollsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tollsJsonList(m_tolls.size());
   for(unsigned tollsIndex = 0; tollsIndex < tollsJsonList.GetLength(); ++tollsIndex)
   {
     tollsJsonList[tollsIndex].AsObject(m_tolls[tollsIndex].Jsonize());
   }
   payload.WithArray("Tolls", std::move(tollsJsonList));

  }

  if(m_tollSystemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tollSystemsJsonList(m_tollSystems.size());
   for(unsigned tollSystemsIndex = 0; tollSystemsIndex < tollSystemsJsonList.GetLength(); ++tollSystemsIndex)
   {
     tollSystemsJsonList[tollSystemsIndex].AsObject(m_tollSystems[tollSystemsIndex].Jsonize());
   }
   payload.WithArray("TollSystems", std::move(tollSystemsJsonList));

  }

  if(m_travelStepsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> travelStepsJsonList(m_travelSteps.size());
   for(unsigned travelStepsIndex = 0; travelStepsIndex < travelStepsJsonList.GetLength(); ++travelStepsIndex)
   {
     travelStepsJsonList[travelStepsIndex].AsObject(m_travelSteps[travelStepsIndex].Jsonize());
   }
   payload.WithArray("TravelSteps", std::move(travelStepsJsonList));

  }

  if(m_truckRoadTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> truckRoadTypesJsonList(m_truckRoadTypes.size());
   for(unsigned truckRoadTypesIndex = 0; truckRoadTypesIndex < truckRoadTypesJsonList.GetLength(); ++truckRoadTypesIndex)
   {
     truckRoadTypesJsonList[truckRoadTypesIndex].AsString(m_truckRoadTypes[truckRoadTypesIndex]);
   }
   payload.WithArray("TruckRoadTypes", std::move(truckRoadTypesJsonList));

  }

  if(m_zonesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> zonesJsonList(m_zones.size());
   for(unsigned zonesIndex = 0; zonesIndex < zonesJsonList.GetLength(); ++zonesIndex)
   {
     zonesJsonList[zonesIndex].AsObject(m_zones[zonesIndex].Jsonize());
   }
   payload.WithArray("Zones", std::move(zonesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
