/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/CalculateRouteMatrixRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CalculateRouteMatrixRequest::CalculateRouteMatrixRequest() : 
    m_calculatorNameHasBeenSet(false),
    m_carModeOptionsHasBeenSet(false),
    m_departNow(false),
    m_departNowHasBeenSet(false),
    m_departurePositionsHasBeenSet(false),
    m_departureTimeHasBeenSet(false),
    m_destinationPositionsHasBeenSet(false),
    m_distanceUnit(DistanceUnit::NOT_SET),
    m_distanceUnitHasBeenSet(false),
    m_travelMode(TravelMode::NOT_SET),
    m_travelModeHasBeenSet(false),
    m_truckModeOptionsHasBeenSet(false)
{
}

Aws::String CalculateRouteMatrixRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_carModeOptionsHasBeenSet)
  {
   payload.WithObject("CarModeOptions", m_carModeOptions.Jsonize());

  }

  if(m_departNowHasBeenSet)
  {
   payload.WithBool("DepartNow", m_departNow);

  }

  if(m_departurePositionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> departurePositionsJsonList(m_departurePositions.size());
   for(unsigned departurePositionsIndex = 0; departurePositionsIndex < departurePositionsJsonList.GetLength(); ++departurePositionsIndex)
   {
     Aws::Utils::Array<JsonValue> positionJsonList(m_departurePositions[departurePositionsIndex].size());
     for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
     {
       positionJsonList[positionIndex].AsDouble(m_departurePositions[departurePositionsIndex][positionIndex]);
     }
     departurePositionsJsonList[departurePositionsIndex].AsArray(std::move(positionJsonList));
   }
   payload.WithArray("DeparturePositions", std::move(departurePositionsJsonList));

  }

  if(m_departureTimeHasBeenSet)
  {
   payload.WithString("DepartureTime", m_departureTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_destinationPositionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> destinationPositionsJsonList(m_destinationPositions.size());
   for(unsigned destinationPositionsIndex = 0; destinationPositionsIndex < destinationPositionsJsonList.GetLength(); ++destinationPositionsIndex)
   {
     Aws::Utils::Array<JsonValue> positionJsonList(m_destinationPositions[destinationPositionsIndex].size());
     for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
     {
       positionJsonList[positionIndex].AsDouble(m_destinationPositions[destinationPositionsIndex][positionIndex]);
     }
     destinationPositionsJsonList[destinationPositionsIndex].AsArray(std::move(positionJsonList));
   }
   payload.WithArray("DestinationPositions", std::move(destinationPositionsJsonList));

  }

  if(m_distanceUnitHasBeenSet)
  {
   payload.WithString("DistanceUnit", DistanceUnitMapper::GetNameForDistanceUnit(m_distanceUnit));
  }

  if(m_travelModeHasBeenSet)
  {
   payload.WithString("TravelMode", TravelModeMapper::GetNameForTravelMode(m_travelMode));
  }

  if(m_truckModeOptionsHasBeenSet)
  {
   payload.WithObject("TruckModeOptions", m_truckModeOptions.Jsonize());

  }

  return payload.View().WriteReadable();
}




