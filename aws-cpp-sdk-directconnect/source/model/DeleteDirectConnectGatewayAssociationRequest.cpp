/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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




