/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   Aws::Utils::Array<JsonValue> overrideAllowedPrefixesToDirectConnectGatewayJsonList(m_overrideAllowedPrefixesToDirectConnectGateway.size());
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




