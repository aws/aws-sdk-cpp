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

#include <aws/networkmanager/model/CustomerGatewayAssociation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

CustomerGatewayAssociation::CustomerGatewayAssociation() : 
    m_customerGatewayArnHasBeenSet(false),
    m_globalNetworkIdHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_linkIdHasBeenSet(false),
    m_state(CustomerGatewayAssociationState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

CustomerGatewayAssociation::CustomerGatewayAssociation(JsonView jsonValue) : 
    m_customerGatewayArnHasBeenSet(false),
    m_globalNetworkIdHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_linkIdHasBeenSet(false),
    m_state(CustomerGatewayAssociationState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

CustomerGatewayAssociation& CustomerGatewayAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CustomerGatewayArn"))
  {
    m_customerGatewayArn = jsonValue.GetString("CustomerGatewayArn");

    m_customerGatewayArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GlobalNetworkId"))
  {
    m_globalNetworkId = jsonValue.GetString("GlobalNetworkId");

    m_globalNetworkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceId"))
  {
    m_deviceId = jsonValue.GetString("DeviceId");

    m_deviceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LinkId"))
  {
    m_linkId = jsonValue.GetString("LinkId");

    m_linkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = CustomerGatewayAssociationStateMapper::GetCustomerGatewayAssociationStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomerGatewayAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_customerGatewayArnHasBeenSet)
  {
   payload.WithString("CustomerGatewayArn", m_customerGatewayArn);

  }

  if(m_globalNetworkIdHasBeenSet)
  {
   payload.WithString("GlobalNetworkId", m_globalNetworkId);

  }

  if(m_deviceIdHasBeenSet)
  {
   payload.WithString("DeviceId", m_deviceId);

  }

  if(m_linkIdHasBeenSet)
  {
   payload.WithString("LinkId", m_linkId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", CustomerGatewayAssociationStateMapper::GetNameForCustomerGatewayAssociationState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
