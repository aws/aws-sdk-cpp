/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/CalculateRoutesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GeoRoutes::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String CalculateRoutesRequest::SerializePayload() const
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

  if(m_driverHasBeenSet)
  {
   payload.WithObject("Driver", m_driver.Jsonize());

  }

  if(m_excludeHasBeenSet)
  {
   payload.WithObject("Exclude", m_exclude.Jsonize());

  }

  if(m_instructionsMeasurementSystemHasBeenSet)
  {
   payload.WithString("InstructionsMeasurementSystem", MeasurementSystemMapper::GetNameForMeasurementSystem(m_instructionsMeasurementSystem));
  }

  if(m_languagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> languagesJsonList(m_languages.size());
   for(unsigned languagesIndex = 0; languagesIndex < languagesJsonList.GetLength(); ++languagesIndex)
   {
     languagesJsonList[languagesIndex].AsString(m_languages[languagesIndex]);
   }
   payload.WithArray("Languages", std::move(languagesJsonList));

  }

  if(m_legAdditionalFeaturesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> legAdditionalFeaturesJsonList(m_legAdditionalFeatures.size());
   for(unsigned legAdditionalFeaturesIndex = 0; legAdditionalFeaturesIndex < legAdditionalFeaturesJsonList.GetLength(); ++legAdditionalFeaturesIndex)
   {
     legAdditionalFeaturesJsonList[legAdditionalFeaturesIndex].AsString(RouteLegAdditionalFeatureMapper::GetNameForRouteLegAdditionalFeature(m_legAdditionalFeatures[legAdditionalFeaturesIndex]));
   }
   payload.WithArray("LegAdditionalFeatures", std::move(legAdditionalFeaturesJsonList));

  }

  if(m_legGeometryFormatHasBeenSet)
  {
   payload.WithString("LegGeometryFormat", GeometryFormatMapper::GetNameForGeometryFormat(m_legGeometryFormat));
  }

  if(m_maxAlternativesHasBeenSet)
  {
   payload.WithInteger("MaxAlternatives", m_maxAlternatives);

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

  if(m_spanAdditionalFeaturesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> spanAdditionalFeaturesJsonList(m_spanAdditionalFeatures.size());
   for(unsigned spanAdditionalFeaturesIndex = 0; spanAdditionalFeaturesIndex < spanAdditionalFeaturesJsonList.GetLength(); ++spanAdditionalFeaturesIndex)
   {
     spanAdditionalFeaturesJsonList[spanAdditionalFeaturesIndex].AsString(RouteSpanAdditionalFeatureMapper::GetNameForRouteSpanAdditionalFeature(m_spanAdditionalFeatures[spanAdditionalFeaturesIndex]));
   }
   payload.WithArray("SpanAdditionalFeatures", std::move(spanAdditionalFeaturesJsonList));

  }

  if(m_tollsHasBeenSet)
  {
   payload.WithObject("Tolls", m_tolls.Jsonize());

  }

  if(m_trafficHasBeenSet)
  {
   payload.WithObject("Traffic", m_traffic.Jsonize());

  }

  if(m_travelModeHasBeenSet)
  {
   payload.WithString("TravelMode", RouteTravelModeMapper::GetNameForRouteTravelMode(m_travelMode));
  }

  if(m_travelModeOptionsHasBeenSet)
  {
   payload.WithObject("TravelModeOptions", m_travelModeOptions.Jsonize());

  }

  if(m_travelStepTypeHasBeenSet)
  {
   payload.WithString("TravelStepType", RouteTravelStepTypeMapper::GetNameForRouteTravelStepType(m_travelStepType));
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

void CalculateRoutesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_keyHasBeenSet)
    {
      ss << m_key;
      uri.AddQueryStringParameter("key", ss.str());
      ss.str("");
    }

}



