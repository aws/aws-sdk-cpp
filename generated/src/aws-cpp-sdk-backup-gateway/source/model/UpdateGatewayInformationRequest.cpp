/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/model/UpdateGatewayInformationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BackupGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateGatewayInformationRequest::UpdateGatewayInformationRequest() : 
    m_gatewayArnHasBeenSet(false),
    m_gatewayDisplayNameHasBeenSet(false)
{
}

Aws::String UpdateGatewayInformationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gatewayArnHasBeenSet)
  {
   payload.WithString("GatewayArn", m_gatewayArn);

  }

  if(m_gatewayDisplayNameHasBeenSet)
  {
   payload.WithString("GatewayDisplayName", m_gatewayDisplayName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateGatewayInformationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "BackupOnPremises_v20210101.UpdateGatewayInformation"));
  return headers;

}




