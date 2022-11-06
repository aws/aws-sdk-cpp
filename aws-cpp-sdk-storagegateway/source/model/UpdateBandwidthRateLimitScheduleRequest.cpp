/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/UpdateBandwidthRateLimitScheduleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateBandwidthRateLimitScheduleRequest::UpdateBandwidthRateLimitScheduleRequest() : 
    m_gatewayARNHasBeenSet(false),
    m_bandwidthRateLimitIntervalsHasBeenSet(false)
{
}

Aws::String UpdateBandwidthRateLimitScheduleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gatewayARNHasBeenSet)
  {
   payload.WithString("GatewayARN", m_gatewayARN);

  }

  if(m_bandwidthRateLimitIntervalsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> bandwidthRateLimitIntervalsJsonList(m_bandwidthRateLimitIntervals.size());
   for(unsigned bandwidthRateLimitIntervalsIndex = 0; bandwidthRateLimitIntervalsIndex < bandwidthRateLimitIntervalsJsonList.GetLength(); ++bandwidthRateLimitIntervalsIndex)
   {
     bandwidthRateLimitIntervalsJsonList[bandwidthRateLimitIntervalsIndex].AsObject(m_bandwidthRateLimitIntervals[bandwidthRateLimitIntervalsIndex].Jsonize());
   }
   payload.WithArray("BandwidthRateLimitIntervals", std::move(bandwidthRateLimitIntervalsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateBandwidthRateLimitScheduleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.UpdateBandwidthRateLimitSchedule"));
  return headers;

}




