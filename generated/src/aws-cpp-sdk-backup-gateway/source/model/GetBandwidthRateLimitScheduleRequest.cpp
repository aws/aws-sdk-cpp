/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/model/GetBandwidthRateLimitScheduleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BackupGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetBandwidthRateLimitScheduleRequest::GetBandwidthRateLimitScheduleRequest() : 
    m_gatewayArnHasBeenSet(false)
{
}

Aws::String GetBandwidthRateLimitScheduleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gatewayArnHasBeenSet)
  {
   payload.WithString("GatewayArn", m_gatewayArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetBandwidthRateLimitScheduleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "BackupOnPremises_v20210101.GetBandwidthRateLimitSchedule"));
  return headers;

}




