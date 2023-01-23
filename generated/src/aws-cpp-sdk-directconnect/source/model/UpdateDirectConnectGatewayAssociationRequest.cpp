/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/UpdateDirectConnectGatewayAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDirectConnectGatewayAssociationRequest::UpdateDirectConnectGatewayAssociationRequest() : 
    m_associationIdHasBeenSet(false),
    m_addAllowedPrefixesToDirectConnectGatewayHasBeenSet(false),
    m_removeAllowedPrefixesToDirectConnectGatewayHasBeenSet(false)
{
}

Aws::String UpdateDirectConnectGatewayAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_associationIdHasBeenSet)
  {
   payload.WithString("associationId", m_associationId);

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

  if(m_removeAllowedPrefixesToDirectConnectGatewayHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> removeAllowedPrefixesToDirectConnectGatewayJsonList(m_removeAllowedPrefixesToDirectConnectGateway.size());
   for(unsigned removeAllowedPrefixesToDirectConnectGatewayIndex = 0; removeAllowedPrefixesToDirectConnectGatewayIndex < removeAllowedPrefixesToDirectConnectGatewayJsonList.GetLength(); ++removeAllowedPrefixesToDirectConnectGatewayIndex)
   {
     removeAllowedPrefixesToDirectConnectGatewayJsonList[removeAllowedPrefixesToDirectConnectGatewayIndex].AsObject(m_removeAllowedPrefixesToDirectConnectGateway[removeAllowedPrefixesToDirectConnectGatewayIndex].Jsonize());
   }
   payload.WithArray("removeAllowedPrefixesToDirectConnectGateway", std::move(removeAllowedPrefixesToDirectConnectGatewayJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDirectConnectGatewayAssociationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.UpdateDirectConnectGatewayAssociation"));
  return headers;

}




