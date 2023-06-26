/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/DescribeDirectConnectGatewayAssociationProposalsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeDirectConnectGatewayAssociationProposalsRequest::DescribeDirectConnectGatewayAssociationProposalsRequest() : 
    m_directConnectGatewayIdHasBeenSet(false),
    m_proposalIdHasBeenSet(false),
    m_associatedGatewayIdHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeDirectConnectGatewayAssociationProposalsRequest::SerializePayload() const
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

  if(m_associatedGatewayIdHasBeenSet)
  {
   payload.WithString("associatedGatewayId", m_associatedGatewayId);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeDirectConnectGatewayAssociationProposalsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.DescribeDirectConnectGatewayAssociationProposals"));
  return headers;

}




