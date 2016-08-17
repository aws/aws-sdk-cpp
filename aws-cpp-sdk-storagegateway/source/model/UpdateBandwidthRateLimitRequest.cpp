/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/storagegateway/model/UpdateBandwidthRateLimitRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateBandwidthRateLimitRequest::UpdateBandwidthRateLimitRequest() : 
    m_gatewayARNHasBeenSet(false),
    m_averageUploadRateLimitInBitsPerSec(0),
    m_averageUploadRateLimitInBitsPerSecHasBeenSet(false),
    m_averageDownloadRateLimitInBitsPerSec(0),
    m_averageDownloadRateLimitInBitsPerSecHasBeenSet(false)
{
}

Aws::String UpdateBandwidthRateLimitRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gatewayARNHasBeenSet)
  {
   payload.WithString("GatewayARN", m_gatewayARN);

  }

  if(m_averageUploadRateLimitInBitsPerSecHasBeenSet)
  {
   payload.WithInt64("AverageUploadRateLimitInBitsPerSec", m_averageUploadRateLimitInBitsPerSec);

  }

  if(m_averageDownloadRateLimitInBitsPerSecHasBeenSet)
  {
   payload.WithInt64("AverageDownloadRateLimitInBitsPerSec", m_averageDownloadRateLimitInBitsPerSec);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateBandwidthRateLimitRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.UpdateBandwidthRateLimit"));
  return headers;

}



