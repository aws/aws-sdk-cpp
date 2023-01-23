/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/GetPositionEstimateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetPositionEstimateRequest::GetPositionEstimateRequest() : 
    m_wiFiAccessPointsHasBeenSet(false),
    m_cellTowersHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_gnssHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
}

Aws::String GetPositionEstimateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_wiFiAccessPointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> wiFiAccessPointsJsonList(m_wiFiAccessPoints.size());
   for(unsigned wiFiAccessPointsIndex = 0; wiFiAccessPointsIndex < wiFiAccessPointsJsonList.GetLength(); ++wiFiAccessPointsIndex)
   {
     wiFiAccessPointsJsonList[wiFiAccessPointsIndex].AsObject(m_wiFiAccessPoints[wiFiAccessPointsIndex].Jsonize());
   }
   payload.WithArray("WiFiAccessPoints", std::move(wiFiAccessPointsJsonList));

  }

  if(m_cellTowersHasBeenSet)
  {
   payload.WithObject("CellTowers", m_cellTowers.Jsonize());

  }

  if(m_ipHasBeenSet)
  {
   payload.WithObject("Ip", m_ip.Jsonize());

  }

  if(m_gnssHasBeenSet)
  {
   payload.WithObject("Gnss", m_gnss.Jsonize());

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  return payload.View().WriteReadable();
}




