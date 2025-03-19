/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/OptimizeWaypointsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GeoRoutes::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String OptimizeWaypointsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_avoidHasBeenSet)
  {
   payload.WithObject("Avoid", m_avoid.Jsonize());

  }

  if(m_clusteringHasBeenSet)
  {
   payload.WithObject("Clustering", m_clustering.Jsonize());

  }

  if(m_departureTimeHasBeenSet)
  {
   payload.WithString("DepartureTime", m_departureTime);

  }

  if(m_destinationHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> destinationJsonList(m_destination.size());
   for(unsigned destinationIndex = 0; destinationIndex < destinationJsonList.GetLength(); ++destinationIndex)
   {
     destinationJsonList[destinationIndex].AsDouble(m_destination[destinationIndex]);
   }
   payload.WithArray("Destination", std::move(destinationJsonList));

  }

  if(m_destinationOptionsHasBeenSet)
  {
   payload.WithObject("DestinationOptions", m_destinationOptions.Jsonize());

  }

  if(m_driverHasBeenSet)
  {
   payload.WithObject("Driver", m_driver.Jsonize());

  }

  if(m_excludeHasBeenSet)
  {
   payload.WithObject("Exclude", m_exclude.Jsonize());

  }

  if(m_optimizeSequencingForHasBeenSet)
  {
   payload.WithString("OptimizeSequencingFor", WaypointOptimizationSequencingObjectiveMapper::GetNameForWaypointOptimizationSequencingObjective(m_optimizeSequencingFor));
  }

  if(m_originHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> originJsonList(m_origin.size());
   for(unsigned originIndex = 0; originIndex < originJsonList.GetLength(); ++originIndex)
   {
     originJsonList[originIndex].AsDouble(m_origin[originIndex]);
   }
   payload.WithArray("Origin", std::move(originJsonList));

  }

  if(m_originOptionsHasBeenSet)
  {
   payload.WithObject("OriginOptions", m_originOptions.Jsonize());

  }

  if(m_trafficHasBeenSet)
  {
   payload.WithObject("Traffic", m_traffic.Jsonize());

  }

  if(m_travelModeHasBeenSet)
  {
   payload.WithString("TravelMode", WaypointOptimizationTravelModeMapper::GetNameForWaypointOptimizationTravelMode(m_travelMode));
  }

  if(m_travelModeOptionsHasBeenSet)
  {
   payload.WithObject("TravelModeOptions", m_travelModeOptions.Jsonize());

  }

  if(m_waypointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> waypointsJsonList(m_waypoints.size());
   for(unsigned waypointsIndex = 0; waypointsIndex < waypointsJsonList.GetLength(); ++waypointsIndex)
   {
     waypointsJsonList[waypointsIndex].AsObject(m_waypoints[waypointsIndex].Jsonize());
   }
   payload.WithArray("Waypoints", std::move(waypointsJsonList));

  }

  return payload.View().WriteReadable();
}

void OptimizeWaypointsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_keyHasBeenSet)
    {
      ss << m_key;
      uri.AddQueryStringParameter("key", ss.str());
      ss.str("");
    }

}



