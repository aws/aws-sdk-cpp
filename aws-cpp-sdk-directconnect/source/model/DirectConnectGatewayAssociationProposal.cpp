/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/DirectConnectGatewayAssociationProposal.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

DirectConnectGatewayAssociationProposal::DirectConnectGatewayAssociationProposal() : 
    m_proposalIdHasBeenSet(false),
    m_directConnectGatewayIdHasBeenSet(false),
    m_directConnectGatewayOwnerAccountHasBeenSet(false),
    m_proposalState(DirectConnectGatewayAssociationProposalState::NOT_SET),
    m_proposalStateHasBeenSet(false),
    m_associatedGatewayHasBeenSet(false),
    m_existingAllowedPrefixesToDirectConnectGatewayHasBeenSet(false),
    m_requestedAllowedPrefixesToDirectConnectGatewayHasBeenSet(false)
{
}

DirectConnectGatewayAssociationProposal::DirectConnectGatewayAssociationProposal(JsonView jsonValue) : 
    m_proposalIdHasBeenSet(false),
    m_directConnectGatewayIdHasBeenSet(false),
    m_directConnectGatewayOwnerAccountHasBeenSet(false),
    m_proposalState(DirectConnectGatewayAssociationProposalState::NOT_SET),
    m_proposalStateHasBeenSet(false),
    m_associatedGatewayHasBeenSet(false),
    m_existingAllowedPrefixesToDirectConnectGatewayHasBeenSet(false),
    m_requestedAllowedPrefixesToDirectConnectGatewayHasBeenSet(false)
{
  *this = jsonValue;
}

DirectConnectGatewayAssociationProposal& DirectConnectGatewayAssociationProposal::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("proposalId"))
  {
    m_proposalId = jsonValue.GetString("proposalId");

    m_proposalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("directConnectGatewayId"))
  {
    m_directConnectGatewayId = jsonValue.GetString("directConnectGatewayId");

    m_directConnectGatewayIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("directConnectGatewayOwnerAccount"))
  {
    m_directConnectGatewayOwnerAccount = jsonValue.GetString("directConnectGatewayOwnerAccount");

    m_directConnectGatewayOwnerAccountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("proposalState"))
  {
    m_proposalState = DirectConnectGatewayAssociationProposalStateMapper::GetDirectConnectGatewayAssociationProposalStateForName(jsonValue.GetString("proposalState"));

    m_proposalStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("associatedGateway"))
  {
    m_associatedGateway = jsonValue.GetObject("associatedGateway");

    m_associatedGatewayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("existingAllowedPrefixesToDirectConnectGateway"))
  {
    Aws::Utils::Array<JsonView> existingAllowedPrefixesToDirectConnectGatewayJsonList = jsonValue.GetArray("existingAllowedPrefixesToDirectConnectGateway");
    for(unsigned existingAllowedPrefixesToDirectConnectGatewayIndex = 0; existingAllowedPrefixesToDirectConnectGatewayIndex < existingAllowedPrefixesToDirectConnectGatewayJsonList.GetLength(); ++existingAllowedPrefixesToDirectConnectGatewayIndex)
    {
      m_existingAllowedPrefixesToDirectConnectGateway.push_back(existingAllowedPrefixesToDirectConnectGatewayJsonList[existingAllowedPrefixesToDirectConnectGatewayIndex].AsObject());
    }
    m_existingAllowedPrefixesToDirectConnectGatewayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requestedAllowedPrefixesToDirectConnectGateway"))
  {
    Aws::Utils::Array<JsonView> requestedAllowedPrefixesToDirectConnectGatewayJsonList = jsonValue.GetArray("requestedAllowedPrefixesToDirectConnectGateway");
    for(unsigned requestedAllowedPrefixesToDirectConnectGatewayIndex = 0; requestedAllowedPrefixesToDirectConnectGatewayIndex < requestedAllowedPrefixesToDirectConnectGatewayJsonList.GetLength(); ++requestedAllowedPrefixesToDirectConnectGatewayIndex)
    {
      m_requestedAllowedPrefixesToDirectConnectGateway.push_back(requestedAllowedPrefixesToDirectConnectGatewayJsonList[requestedAllowedPrefixesToDirectConnectGatewayIndex].AsObject());
    }
    m_requestedAllowedPrefixesToDirectConnectGatewayHasBeenSet = true;
  }

  return *this;
}

JsonValue DirectConnectGatewayAssociationProposal::Jsonize() const
{
  JsonValue payload;

  if(m_proposalIdHasBeenSet)
  {
   payload.WithString("proposalId", m_proposalId);

  }

  if(m_directConnectGatewayIdHasBeenSet)
  {
   payload.WithString("directConnectGatewayId", m_directConnectGatewayId);

  }

  if(m_directConnectGatewayOwnerAccountHasBeenSet)
  {
   payload.WithString("directConnectGatewayOwnerAccount", m_directConnectGatewayOwnerAccount);

  }

  if(m_proposalStateHasBeenSet)
  {
   payload.WithString("proposalState", DirectConnectGatewayAssociationProposalStateMapper::GetNameForDirectConnectGatewayAssociationProposalState(m_proposalState));
  }

  if(m_associatedGatewayHasBeenSet)
  {
   payload.WithObject("associatedGateway", m_associatedGateway.Jsonize());

  }

  if(m_existingAllowedPrefixesToDirectConnectGatewayHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> existingAllowedPrefixesToDirectConnectGatewayJsonList(m_existingAllowedPrefixesToDirectConnectGateway.size());
   for(unsigned existingAllowedPrefixesToDirectConnectGatewayIndex = 0; existingAllowedPrefixesToDirectConnectGatewayIndex < existingAllowedPrefixesToDirectConnectGatewayJsonList.GetLength(); ++existingAllowedPrefixesToDirectConnectGatewayIndex)
   {
     existingAllowedPrefixesToDirectConnectGatewayJsonList[existingAllowedPrefixesToDirectConnectGatewayIndex].AsObject(m_existingAllowedPrefixesToDirectConnectGateway[existingAllowedPrefixesToDirectConnectGatewayIndex].Jsonize());
   }
   payload.WithArray("existingAllowedPrefixesToDirectConnectGateway", std::move(existingAllowedPrefixesToDirectConnectGatewayJsonList));

  }

  if(m_requestedAllowedPrefixesToDirectConnectGatewayHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> requestedAllowedPrefixesToDirectConnectGatewayJsonList(m_requestedAllowedPrefixesToDirectConnectGateway.size());
   for(unsigned requestedAllowedPrefixesToDirectConnectGatewayIndex = 0; requestedAllowedPrefixesToDirectConnectGatewayIndex < requestedAllowedPrefixesToDirectConnectGatewayJsonList.GetLength(); ++requestedAllowedPrefixesToDirectConnectGatewayIndex)
   {
     requestedAllowedPrefixesToDirectConnectGatewayJsonList[requestedAllowedPrefixesToDirectConnectGatewayIndex].AsObject(m_requestedAllowedPrefixesToDirectConnectGateway[requestedAllowedPrefixesToDirectConnectGatewayIndex].Jsonize());
   }
   payload.WithArray("requestedAllowedPrefixesToDirectConnectGateway", std::move(requestedAllowedPrefixesToDirectConnectGatewayJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
