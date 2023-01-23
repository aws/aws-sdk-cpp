/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/DirectConnectGatewayAssociation.h>
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

DirectConnectGatewayAssociation::DirectConnectGatewayAssociation() : 
    m_directConnectGatewayIdHasBeenSet(false),
    m_directConnectGatewayOwnerAccountHasBeenSet(false),
    m_associationState(DirectConnectGatewayAssociationState::NOT_SET),
    m_associationStateHasBeenSet(false),
    m_stateChangeErrorHasBeenSet(false),
    m_associatedGatewayHasBeenSet(false),
    m_associationIdHasBeenSet(false),
    m_allowedPrefixesToDirectConnectGatewayHasBeenSet(false),
    m_virtualGatewayIdHasBeenSet(false),
    m_virtualGatewayRegionHasBeenSet(false),
    m_virtualGatewayOwnerAccountHasBeenSet(false)
{
}

DirectConnectGatewayAssociation::DirectConnectGatewayAssociation(JsonView jsonValue) : 
    m_directConnectGatewayIdHasBeenSet(false),
    m_directConnectGatewayOwnerAccountHasBeenSet(false),
    m_associationState(DirectConnectGatewayAssociationState::NOT_SET),
    m_associationStateHasBeenSet(false),
    m_stateChangeErrorHasBeenSet(false),
    m_associatedGatewayHasBeenSet(false),
    m_associationIdHasBeenSet(false),
    m_allowedPrefixesToDirectConnectGatewayHasBeenSet(false),
    m_virtualGatewayIdHasBeenSet(false),
    m_virtualGatewayRegionHasBeenSet(false),
    m_virtualGatewayOwnerAccountHasBeenSet(false)
{
  *this = jsonValue;
}

DirectConnectGatewayAssociation& DirectConnectGatewayAssociation::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("associationState"))
  {
    m_associationState = DirectConnectGatewayAssociationStateMapper::GetDirectConnectGatewayAssociationStateForName(jsonValue.GetString("associationState"));

    m_associationStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stateChangeError"))
  {
    m_stateChangeError = jsonValue.GetString("stateChangeError");

    m_stateChangeErrorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("associatedGateway"))
  {
    m_associatedGateway = jsonValue.GetObject("associatedGateway");

    m_associatedGatewayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("associationId"))
  {
    m_associationId = jsonValue.GetString("associationId");

    m_associationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("allowedPrefixesToDirectConnectGateway"))
  {
    Aws::Utils::Array<JsonView> allowedPrefixesToDirectConnectGatewayJsonList = jsonValue.GetArray("allowedPrefixesToDirectConnectGateway");
    for(unsigned allowedPrefixesToDirectConnectGatewayIndex = 0; allowedPrefixesToDirectConnectGatewayIndex < allowedPrefixesToDirectConnectGatewayJsonList.GetLength(); ++allowedPrefixesToDirectConnectGatewayIndex)
    {
      m_allowedPrefixesToDirectConnectGateway.push_back(allowedPrefixesToDirectConnectGatewayJsonList[allowedPrefixesToDirectConnectGatewayIndex].AsObject());
    }
    m_allowedPrefixesToDirectConnectGatewayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("virtualGatewayId"))
  {
    m_virtualGatewayId = jsonValue.GetString("virtualGatewayId");

    m_virtualGatewayIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("virtualGatewayRegion"))
  {
    m_virtualGatewayRegion = jsonValue.GetString("virtualGatewayRegion");

    m_virtualGatewayRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("virtualGatewayOwnerAccount"))
  {
    m_virtualGatewayOwnerAccount = jsonValue.GetString("virtualGatewayOwnerAccount");

    m_virtualGatewayOwnerAccountHasBeenSet = true;
  }

  return *this;
}

JsonValue DirectConnectGatewayAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_directConnectGatewayIdHasBeenSet)
  {
   payload.WithString("directConnectGatewayId", m_directConnectGatewayId);

  }

  if(m_directConnectGatewayOwnerAccountHasBeenSet)
  {
   payload.WithString("directConnectGatewayOwnerAccount", m_directConnectGatewayOwnerAccount);

  }

  if(m_associationStateHasBeenSet)
  {
   payload.WithString("associationState", DirectConnectGatewayAssociationStateMapper::GetNameForDirectConnectGatewayAssociationState(m_associationState));
  }

  if(m_stateChangeErrorHasBeenSet)
  {
   payload.WithString("stateChangeError", m_stateChangeError);

  }

  if(m_associatedGatewayHasBeenSet)
  {
   payload.WithObject("associatedGateway", m_associatedGateway.Jsonize());

  }

  if(m_associationIdHasBeenSet)
  {
   payload.WithString("associationId", m_associationId);

  }

  if(m_allowedPrefixesToDirectConnectGatewayHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedPrefixesToDirectConnectGatewayJsonList(m_allowedPrefixesToDirectConnectGateway.size());
   for(unsigned allowedPrefixesToDirectConnectGatewayIndex = 0; allowedPrefixesToDirectConnectGatewayIndex < allowedPrefixesToDirectConnectGatewayJsonList.GetLength(); ++allowedPrefixesToDirectConnectGatewayIndex)
   {
     allowedPrefixesToDirectConnectGatewayJsonList[allowedPrefixesToDirectConnectGatewayIndex].AsObject(m_allowedPrefixesToDirectConnectGateway[allowedPrefixesToDirectConnectGatewayIndex].Jsonize());
   }
   payload.WithArray("allowedPrefixesToDirectConnectGateway", std::move(allowedPrefixesToDirectConnectGatewayJsonList));

  }

  if(m_virtualGatewayIdHasBeenSet)
  {
   payload.WithString("virtualGatewayId", m_virtualGatewayId);

  }

  if(m_virtualGatewayRegionHasBeenSet)
  {
   payload.WithString("virtualGatewayRegion", m_virtualGatewayRegion);

  }

  if(m_virtualGatewayOwnerAccountHasBeenSet)
  {
   payload.WithString("virtualGatewayOwnerAccount", m_virtualGatewayOwnerAccount);

  }

  return payload;
}

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
