/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/DeleteDirectConnectGatewayAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteDirectConnectGatewayAssociationRequest::DeleteDirectConnectGatewayAssociationRequest() : 
    m_associationIdHasBeenSet(false),
    m_directConnectGatewayIdHasBeenSet(false),
    m_virtualGatewayIdHasBeenSet(false)
{
}

Aws::String DeleteDirectConnectGatewayAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_associationIdHasBeenSet)
  {
   payload.WithString("associationId", m_associationId);

  }

  if(m_directConnectGatewayIdHasBeenSet)
  {
   payload.WithString("directConnectGatewayId", m_directConnectGatewayId);

  }

  if(m_virtualGatewayIdHasBeenSet)
  {
   payload.WithString("virtualGatewayId", m_virtualGatewayId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteDirectConnectGatewayAssociationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.DeleteDirectConnectGatewayAssociation"));
  return headers;

}




