/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/UpdateDirectConnectGatewayRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDirectConnectGatewayRequest::UpdateDirectConnectGatewayRequest() : 
    m_directConnectGatewayIdHasBeenSet(false),
    m_newDirectConnectGatewayNameHasBeenSet(false)
{
}

Aws::String UpdateDirectConnectGatewayRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directConnectGatewayIdHasBeenSet)
  {
   payload.WithString("directConnectGatewayId", m_directConnectGatewayId);

  }

  if(m_newDirectConnectGatewayNameHasBeenSet)
  {
   payload.WithString("newDirectConnectGatewayName", m_newDirectConnectGatewayName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDirectConnectGatewayRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.UpdateDirectConnectGateway"));
  return headers;

}




