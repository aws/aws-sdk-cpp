/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/ForecastGeofenceEventsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ForecastGeofenceEventsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deviceStateHasBeenSet)
  {
   payload.WithObject("DeviceState", m_deviceState.Jsonize());

  }

  if(m_timeHorizonMinutesHasBeenSet)
  {
   payload.WithDouble("TimeHorizonMinutes", m_timeHorizonMinutes);

  }

  if(m_distanceUnitHasBeenSet)
  {
   payload.WithString("DistanceUnit", DistanceUnitMapper::GetNameForDistanceUnit(m_distanceUnit));
  }

  if(m_speedUnitHasBeenSet)
  {
   payload.WithString("SpeedUnit", SpeedUnitMapper::GetNameForSpeedUnit(m_speedUnit));
  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}




