/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/DeleteDirectConnectGatewayAssociationProposalRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteDirectConnectGatewayAssociationProposalRequest::DeleteDirectConnectGatewayAssociationProposalRequest() : 
    m_proposalIdHasBeenSet(false)
{
}

Aws::String DeleteDirectConnectGatewayAssociationProposalRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_proposalIdHasBeenSet)
  {
   payload.WithString("proposalId", m_proposalId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteDirectConnectGatewayAssociationProposalRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.DeleteDirectConnectGatewayAssociationProposal"));
  return headers;

}




