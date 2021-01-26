/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/UpdateGatewayInformationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateGatewayInformationRequest::UpdateGatewayInformationRequest() : 
    m_gatewayARNHasBeenSet(false),
    m_gatewayNameHasBeenSet(false),
    m_gatewayTimezoneHasBeenSet(false),
    m_cloudWatchLogGroupARNHasBeenSet(false)
{
}

Aws::String UpdateGatewayInformationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gatewayARNHasBeenSet)
  {
   payload.WithString("GatewayARN", m_gatewayARN);

  }

  if(m_gatewayNameHasBeenSet)
  {
   payload.WithString("GatewayName", m_gatewayName);

  }

  if(m_gatewayTimezoneHasBeenSet)
  {
   payload.WithString("GatewayTimezone", m_gatewayTimezone);

  }

  if(m_cloudWatchLogGroupARNHasBeenSet)
  {
   payload.WithString("CloudWatchLogGroupARN", m_cloudWatchLogGroupARN);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateGatewayInformationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.UpdateGatewayInformation"));
  return headers;

}




