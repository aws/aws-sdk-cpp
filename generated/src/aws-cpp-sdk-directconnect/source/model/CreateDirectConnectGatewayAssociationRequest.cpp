/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/CreateDirectConnectGatewayAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDirectConnectGatewayAssociationRequest::CreateDirectConnectGatewayAssociationRequest() : 
    m_directConnectGatewayIdHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_addAllowedPrefixesToDirectConnectGatewayHasBeenSet(false),
    m_virtualGatewayIdHasBeenSet(false)
{
}

Aws::String CreateDirectConnectGatewayAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directConnectGatewayIdHasBeenSet)
  {
   payload.WithString("directConnectGatewayId", m_directConnectGatewayId);

  }

  if(m_gatewayIdHasBeenSet)
  {
   payload.WithString("gatewayId", m_gatewayId);

  }

  if(m_addAllowedPrefixesToDirectConnectGatewayHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addAllowedPrefixesToDirectConnectGatewayJsonList(m_addAllowedPrefixesToDirectConnectGateway.size());
   for(unsigned addAllowedPrefixesToDirectConnectGatewayIndex = 0; addAllowedPrefixesToDirectConnectGatewayIndex < addAllowedPrefixesToDirectConnectGatewayJsonList.GetLength(); ++addAllowedPrefixesToDirectConnectGatewayIndex)
   {
     addAllowedPrefixesToDirectConnectGatewayJsonList[addAllowedPrefixesToDirectConnectGatewayIndex].AsObject(m_addAllowedPrefixesToDirectConnectGateway[addAllowedPrefixesToDirectConnectGatewayIndex].Jsonize());
   }
   payload.WithArray("addAllowedPrefixesToDirectConnectGateway", std::move(addAllowedPrefixesToDirectConnectGatewayJsonList));

  }

  if(m_virtualGatewayIdHasBeenSet)
  {
   payload.WithString("virtualGatewayId", m_virtualGatewayId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDirectConnectGatewayAssociationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.CreateDirectConnectGatewayAssociation"));
  return headers;

}




