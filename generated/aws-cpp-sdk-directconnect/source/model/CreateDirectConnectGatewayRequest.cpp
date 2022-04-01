/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/CreateDirectConnectGatewayRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDirectConnectGatewayRequest::CreateDirectConnectGatewayRequest() : 
    m_directConnectGatewayNameHasBeenSet(false),
    m_amazonSideAsn(0),
    m_amazonSideAsnHasBeenSet(false)
{
}

Aws::String CreateDirectConnectGatewayRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directConnectGatewayNameHasBeenSet)
  {
   payload.WithString("directConnectGatewayName", m_directConnectGatewayName);

  }

  if(m_amazonSideAsnHasBeenSet)
  {
   payload.WithInt64("amazonSideAsn", m_amazonSideAsn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDirectConnectGatewayRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.CreateDirectConnectGateway"));
  return headers;

}




