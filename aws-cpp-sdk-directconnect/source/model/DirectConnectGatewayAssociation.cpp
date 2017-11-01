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
    m_virtualGatewayIdHasBeenSet(false),
    m_virtualGatewayRegionHasBeenSet(false),
    m_virtualGatewayOwnerAccountHasBeenSet(false),
    m_associationState(DirectConnectGatewayAssociationState::NOT_SET),
    m_associationStateHasBeenSet(false),
    m_stateChangeErrorHasBeenSet(false)
{
}

DirectConnectGatewayAssociation::DirectConnectGatewayAssociation(const JsonValue& jsonValue) : 
    m_directConnectGatewayIdHasBeenSet(false),
    m_virtualGatewayIdHasBeenSet(false),
    m_virtualGatewayRegionHasBeenSet(false),
    m_virtualGatewayOwnerAccountHasBeenSet(false),
    m_associationState(DirectConnectGatewayAssociationState::NOT_SET),
    m_associationStateHasBeenSet(false),
    m_stateChangeErrorHasBeenSet(false)
{
  *this = jsonValue;
}

DirectConnectGatewayAssociation& DirectConnectGatewayAssociation::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("directConnectGatewayId"))
  {
    m_directConnectGatewayId = jsonValue.GetString("directConnectGatewayId");

    m_directConnectGatewayIdHasBeenSet = true;
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

  return *this;
}

JsonValue DirectConnectGatewayAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_directConnectGatewayIdHasBeenSet)
  {
   payload.WithString("directConnectGatewayId", m_directConnectGatewayId);

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

  if(m_associationStateHasBeenSet)
  {
   payload.WithString("associationState", DirectConnectGatewayAssociationStateMapper::GetNameForDirectConnectGatewayAssociationState(m_associationState));
  }

  if(m_stateChangeErrorHasBeenSet)
  {
   payload.WithString("stateChangeError", m_stateChangeError);

  }

  return payload;
}

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
