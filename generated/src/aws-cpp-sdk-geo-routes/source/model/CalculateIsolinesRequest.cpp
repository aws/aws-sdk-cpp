/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/CalculateIsolinesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GeoRoutes::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String CalculateIsolinesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_allowHasBeenSet)
  {
   payload.WithObject("Allow", m_allow.Jsonize());

  }

  if(m_arrivalTimeHasBeenSet)
  {
   payload.WithString("ArrivalTime", m_arrivalTime);

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

  if(m_isolineGeometryFormatHasBeenSet)
  {
   payload.WithString("IsolineGeometryFormat", GeometryFormatMapper::GetNameForGeometryFormat(m_isolineGeometryFormat));
  }

  if(m_isolineGranularityHasBeenSet)
  {
   payload.WithObject("IsolineGranularity", m_isolineGranularity.Jsonize());

  }

  if(m_optimizeIsolineForHasBeenSet)
  {
   payload.WithString("OptimizeIsolineFor", IsolineOptimizationObjectiveMapper::GetNameForIsolineOptimizationObjective(m_optimizeIsolineFor));
  }

  if(m_optimizeRoutingForHasBeenSet)
  {
   payload.WithString("OptimizeRoutingFor", RoutingObjectiveMapper::GetNameForRoutingObjective(m_optimizeRoutingFor));
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

  if(m_thresholdsHasBeenSet)
  {
   payload.WithObject("Thresholds", m_thresholds.Jsonize());

  }

  if(m_trafficHasBeenSet)
  {
   payload.WithObject("Traffic", m_traffic.Jsonize());

  }

  if(m_travelModeHasBeenSet)
  {
   payload.WithString("TravelMode", IsolineTravelModeMapper::GetNameForIsolineTravelMode(m_travelMode));
  }

  if(m_travelModeOptionsHasBeenSet)
  {
   payload.WithObject("TravelModeOptions", m_travelModeOptions.Jsonize());

  }

  return payload.View().WriteReadable();
}

void CalculateIsolinesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_keyHasBeenSet)
    {
      ss << m_key;
      uri.AddQueryStringParameter("key", ss.str());
      ss.str("");
    }

}



