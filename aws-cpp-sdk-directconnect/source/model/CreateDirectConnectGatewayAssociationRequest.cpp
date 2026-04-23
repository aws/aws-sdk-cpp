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
   Array<JsonValue> addAllowedPrefixesToDirectConnectGatewayJsonList(m_addAllowedPrefixesToDirectConnectGateway.size());
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




