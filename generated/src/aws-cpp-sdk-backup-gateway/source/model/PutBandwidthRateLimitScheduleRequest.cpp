/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/model/PutBandwidthRateLimitScheduleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BackupGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutBandwidthRateLimitScheduleRequest::PutBandwidthRateLimitScheduleRequest() : 
    m_bandwidthRateLimitIntervalsHasBeenSet(false),
    m_gatewayArnHasBeenSet(false)
{
}

Aws::String PutBandwidthRateLimitScheduleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_bandwidthRateLimitIntervalsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> bandwidthRateLimitIntervalsJsonList(m_bandwidthRateLimitIntervals.size());
   for(unsigned bandwidthRateLimitIntervalsIndex = 0; bandwidthRateLimitIntervalsIndex < bandwidthRateLimitIntervalsJsonList.GetLength(); ++bandwidthRateLimitIntervalsIndex)
   {
     bandwidthRateLimitIntervalsJsonList[bandwidthRateLimitIntervalsIndex].AsObject(m_bandwidthRateLimitIntervals[bandwidthRateLimitIntervalsIndex].Jsonize());
   }
   payload.WithArray("BandwidthRateLimitIntervals", std::move(bandwidthRateLimitIntervalsJsonList));

  }

  if(m_gatewayArnHasBeenSet)
  {
   payload.WithString("GatewayArn", m_gatewayArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutBandwidthRateLimitScheduleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "BackupOnPremises_v20210101.PutBandwidthRateLimitSchedule"));
  return headers;

}




