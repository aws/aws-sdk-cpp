/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DeleteBandwidthRateLimitRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteBandwidthRateLimitRequest::DeleteBandwidthRateLimitRequest() : 
    m_gatewayARNHasBeenSet(false),
    m_bandwidthTypeHasBeenSet(false)
{
}

Aws::String DeleteBandwidthRateLimitRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gatewayARNHasBeenSet)
  {
   payload.WithString("GatewayARN", m_gatewayARN);

  }

  if(m_bandwidthTypeHasBeenSet)
  {
   payload.WithString("BandwidthType", m_bandwidthType);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteBandwidthRateLimitRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.DeleteBandwidthRateLimit"));
  return headers;

}




