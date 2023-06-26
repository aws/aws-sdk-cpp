/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/model/AssociateGatewayToServerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BackupGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateGatewayToServerRequest::AssociateGatewayToServerRequest() : 
    m_gatewayArnHasBeenSet(false),
    m_serverArnHasBeenSet(false)
{
}

Aws::String AssociateGatewayToServerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gatewayArnHasBeenSet)
  {
   payload.WithString("GatewayArn", m_gatewayArn);

  }

  if(m_serverArnHasBeenSet)
  {
   payload.WithString("ServerArn", m_serverArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateGatewayToServerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "BackupOnPremises_v20210101.AssociateGatewayToServer"));
  return headers;

}




