/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/CalculateRouteRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

CalculateRouteRequest::CalculateRouteRequest() : 
    m_arrivalTimeHasBeenSet(false),
    m_calculatorNameHasBeenSet(false),
    m_carModeOptionsHasBeenSet(false),
    m_departNow(false),
    m_departNowHasBeenSet(false),
    m_departurePositionHasBeenSet(false),
    m_departureTimeHasBeenSet(false),
    m_destinationPositionHasBeenSet(false),
    m_distanceUnit(DistanceUnit::NOT_SET),
    m_distanceUnitHasBeenSet(false),
    m_includeLegGeometry(false),
    m_includeLegGeometryHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_optimizeFor(OptimizationMode::NOT_SET),
    m_optimizeForHasBeenSet(false),
    m_travelMode(TravelMode::NOT_SET),
    m_travelModeHasBeenSet(false),
    m_truckModeOptionsHasBeenSet(false),
    m_waypointPositionsHasBeenSet(false)
{
}

Aws::String CalculateRouteRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_arrivalTimeHasBeenSet)
  {
   payload.WithString("ArrivalTime", m_arrivalTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_carModeOptionsHasBeenSet)
  {
   payload.WithObject("CarModeOptions", m_carModeOptions.Jsonize());

  }

  if(m_departNowHasBeenSet)
  {
   payload.WithBool("DepartNow", m_departNow);

  }

  if(m_departurePositionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> departurePositionJsonList(m_departurePosition.size());
   for(unsigned departurePositionIndex = 0; departurePositionIndex < departurePositionJsonList.GetLength(); ++departurePositionIndex)
   {
     departurePositionJsonList[departurePositionIndex].AsDouble(m_departurePosition[departurePositionIndex]);
   }
   payload.WithArray("DeparturePosition", std::move(departurePositionJsonList));

  }

  if(m_departureTimeHasBeenSet)
  {
   payload.WithString("DepartureTime", m_departureTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_destinationPositionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> destinationPositionJsonList(m_destinationPosition.size());
   for(unsigned destinationPositionIndex = 0; destinationPositionIndex < destinationPositionJsonList.GetLength(); ++destinationPositionIndex)
   {
     destinationPositionJsonList[destinationPositionIndex].AsDouble(m_destinationPosition[destinationPositionIndex]);
   }
   payload.WithArray("DestinationPosition", std::move(destinationPositionJsonList));

  }

  if(m_distanceUnitHasBeenSet)
  {
   payload.WithString("DistanceUnit", DistanceUnitMapper::GetNameForDistanceUnit(m_distanceUnit));
  }

  if(m_includeLegGeometryHasBeenSet)
  {
   payload.WithBool("IncludeLegGeometry", m_includeLegGeometry);

  }

  if(m_optimizeForHasBeenSet)
  {
   payload.WithString("OptimizeFor", OptimizationModeMapper::GetNameForOptimizationMode(m_optimizeFor));
  }

  if(m_travelModeHasBeenSet)
  {
   payload.WithString("TravelMode", TravelModeMapper::GetNameForTravelMode(m_travelMode));
  }

  if(m_truckModeOptionsHasBeenSet)
  {
   payload.WithObject("TruckModeOptions", m_truckModeOptions.Jsonize());

  }

  if(m_waypointPositionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> waypointPositionsJsonList(m_waypointPositions.size());
   for(unsigned waypointPositionsIndex = 0; waypointPositionsIndex < waypointPositionsJsonList.GetLength(); ++waypointPositionsIndex)
   {
     Aws::Utils::Array<JsonValue> positionJsonList(m_waypointPositions[waypointPositionsIndex].size());
     for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
     {
       positionJsonList[positionIndex].AsDouble(m_waypointPositions[waypointPositionsIndex][positionIndex]);
     }
     waypointPositionsJsonList[waypointPositionsIndex].AsArray(std::move(positionJsonList));
   }
   payload.WithArray("WaypointPositions", std::move(waypointPositionsJsonList));

  }

  return payload.View().WriteReadable();
}

void CalculateRouteRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_keyHasBeenSet)
    {
      ss << m_key;
      uri.AddQueryStringParameter("key", ss.str());
      ss.str("");
    }

}



