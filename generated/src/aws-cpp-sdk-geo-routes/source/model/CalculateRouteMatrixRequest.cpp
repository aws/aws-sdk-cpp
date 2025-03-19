/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/CalculateRouteMatrixRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GeoRoutes::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String CalculateRouteMatrixRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_allowHasBeenSet)
  {
   payload.WithObject("Allow", m_allow.Jsonize());

  }

  if(m_avoidHasBeenSet)
  {
   payload.WithObject("Avoid", m_avoid.Jsonize());

  }

  if(m_departNowHasBeenSet)
  {
   payload.WithBool("DepartNow", m_departNow);

  }

  if(m_departureTimeHasBeenSet)
  {
   payload.WithString("DepartureTime", m_departureTime);

  }

  if(m_destinationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> destinationsJsonList(m_destinations.size());
   for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
   {
     destinationsJsonList[destinationsIndex].AsObject(m_destinations[destinationsIndex].Jsonize());
   }
   payload.WithArray("Destinations", std::move(destinationsJsonList));

  }

  if(m_excludeHasBeenSet)
  {
   payload.WithObject("Exclude", m_exclude.Jsonize());

  }

  if(m_optimizeRoutingForHasBeenSet)
  {
   payload.WithString("OptimizeRoutingFor", RoutingObjectiveMapper::GetNameForRoutingObjective(m_optimizeRoutingFor));
  }

  if(m_originsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> originsJsonList(m_origins.size());
   for(unsigned originsIndex = 0; originsIndex < originsJsonList.GetLength(); ++originsIndex)
   {
     originsJsonList[originsIndex].AsObject(m_origins[originsIndex].Jsonize());
   }
   payload.WithArray("Origins", std::move(originsJsonList));

  }

  if(m_routingBoundaryHasBeenSet)
  {
   payload.WithObject("RoutingBoundary", m_routingBoundary.Jsonize());

  }

  if(m_trafficHasBeenSet)
  {
   payload.WithObject("Traffic", m_traffic.Jsonize());

  }

  if(m_travelModeHasBeenSet)
  {
   payload.WithString("TravelMode", RouteMatrixTravelModeMapper::GetNameForRouteMatrixTravelMode(m_travelMode));
  }

  if(m_travelModeOptionsHasBeenSet)
  {
   payload.WithObject("TravelModeOptions", m_travelModeOptions.Jsonize());

  }

  return payload.View().WriteReadable();
}

void CalculateRouteMatrixRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_keyHasBeenSet)
    {
      ss << m_key;
      uri.AddQueryStringParameter("key", ss.str());
      ss.str("");
    }

}



