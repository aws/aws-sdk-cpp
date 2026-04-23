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

#include <aws/directconnect/model/AcceptDirectConnectGatewayAssociationProposalRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AcceptDirectConnectGatewayAssociationProposalRequest::AcceptDirectConnectGatewayAssociationProposalRequest() : 
    m_directConnectGatewayIdHasBeenSet(false),
    m_proposalIdHasBeenSet(false),
    m_associatedGatewayOwnerAccountHasBeenSet(false),
    m_overrideAllowedPrefixesToDirectConnectGatewayHasBeenSet(false)
{
}

Aws::String AcceptDirectConnectGatewayAssociationProposalRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directConnectGatewayIdHasBeenSet)
  {
   payload.WithString("directConnectGatewayId", m_directConnectGatewayId);

  }

  if(m_proposalIdHasBeenSet)
  {
   payload.WithString("proposalId", m_proposalId);

  }

  if(m_associatedGatewayOwnerAccountHasBeenSet)
  {
   payload.WithString("associatedGatewayOwnerAccount", m_associatedGatewayOwnerAccount);

  }

  if(m_overrideAllowedPrefixesToDirectConnectGatewayHasBeenSet)
  {
   Array<JsonValue> overrideAllowedPrefixesToDirectConnectGatewayJsonList(m_overrideAllowedPrefixesToDirectConnectGateway.size());
   for(unsigned overrideAllowedPrefixesToDirectConnectGatewayIndex = 0; overrideAllowedPrefixesToDirectConnectGatewayIndex < overrideAllowedPrefixesToDirectConnectGatewayJsonList.GetLength(); ++overrideAllowedPrefixesToDirectConnectGatewayIndex)
   {
     overrideAllowedPrefixesToDirectConnectGatewayJsonList[overrideAllowedPrefixesToDirectConnectGatewayIndex].AsObject(m_overrideAllowedPrefixesToDirectConnectGateway[overrideAllowedPrefixesToDirectConnectGatewayIndex].Jsonize());
   }
   payload.WithArray("overrideAllowedPrefixesToDirectConnectGateway", std::move(overrideAllowedPrefixesToDirectConnectGatewayJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AcceptDirectConnectGatewayAssociationProposalRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.AcceptDirectConnectGatewayAssociationProposal"));
  return headers;

}




