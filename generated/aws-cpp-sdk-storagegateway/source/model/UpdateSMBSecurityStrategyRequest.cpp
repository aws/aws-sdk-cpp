/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/UpdateSMBSecurityStrategyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSMBSecurityStrategyRequest::UpdateSMBSecurityStrategyRequest() : 
    m_gatewayARNHasBeenSet(false),
    m_sMBSecurityStrategy(SMBSecurityStrategy::NOT_SET),
    m_sMBSecurityStrategyHasBeenSet(false)
{
}

Aws::String UpdateSMBSecurityStrategyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gatewayARNHasBeenSet)
  {
   payload.WithString("GatewayARN", m_gatewayARN);

  }

  if(m_sMBSecurityStrategyHasBeenSet)
  {
   payload.WithString("SMBSecurityStrategy", SMBSecurityStrategyMapper::GetNameForSMBSecurityStrategy(m_sMBSecurityStrategy));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateSMBSecurityStrategyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.UpdateSMBSecurityStrategy"));
  return headers;

}




