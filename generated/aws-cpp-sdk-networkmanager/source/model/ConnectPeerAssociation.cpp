/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/ConnectPeerAssociation.h>
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

ConnectPeerAssociation::ConnectPeerAssociation() : 
    m_connectPeerIdHasBeenSet(false),
    m_globalNetworkIdHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_linkIdHasBeenSet(false),
    m_state(ConnectPeerAssociationState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

ConnectPeerAssociation::ConnectPeerAssociation(JsonView jsonValue) : 
    m_connectPeerIdHasBeenSet(false),
    m_globalNetworkIdHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_linkIdHasBeenSet(false),
    m_state(ConnectPeerAssociationState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectPeerAssociation& ConnectPeerAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectPeerId"))
  {
    m_connectPeerId = jsonValue.GetString("ConnectPeerId");

    m_connectPeerIdHasBeenSet = true;
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
    m_state = ConnectPeerAssociationStateMapper::GetConnectPeerAssociationStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectPeerAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_connectPeerIdHasBeenSet)
  {
   payload.WithString("ConnectPeerId", m_connectPeerId);

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
   payload.WithString("State", ConnectPeerAssociationStateMapper::GetNameForConnectPeerAssociationState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
