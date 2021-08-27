/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/VpcPeeringConnection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

VpcPeeringConnection::VpcPeeringConnection() : 
    m_fleetIdHasBeenSet(false),
    m_fleetArnHasBeenSet(false),
    m_ipV4CidrBlockHasBeenSet(false),
    m_vpcPeeringConnectionIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_peerVpcIdHasBeenSet(false),
    m_gameLiftVpcIdHasBeenSet(false)
{
}

VpcPeeringConnection::VpcPeeringConnection(JsonView jsonValue) : 
    m_fleetIdHasBeenSet(false),
    m_fleetArnHasBeenSet(false),
    m_ipV4CidrBlockHasBeenSet(false),
    m_vpcPeeringConnectionIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_peerVpcIdHasBeenSet(false),
    m_gameLiftVpcIdHasBeenSet(false)
{
  *this = jsonValue;
}

VpcPeeringConnection& VpcPeeringConnection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FleetId"))
  {
    m_fleetId = jsonValue.GetString("FleetId");

    m_fleetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FleetArn"))
  {
    m_fleetArn = jsonValue.GetString("FleetArn");

    m_fleetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpV4CidrBlock"))
  {
    m_ipV4CidrBlock = jsonValue.GetString("IpV4CidrBlock");

    m_ipV4CidrBlockHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcPeeringConnectionId"))
  {
    m_vpcPeeringConnectionId = jsonValue.GetString("VpcPeeringConnectionId");

    m_vpcPeeringConnectionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PeerVpcId"))
  {
    m_peerVpcId = jsonValue.GetString("PeerVpcId");

    m_peerVpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GameLiftVpcId"))
  {
    m_gameLiftVpcId = jsonValue.GetString("GameLiftVpcId");

    m_gameLiftVpcIdHasBeenSet = true;
  }

  return *this;
}

JsonValue VpcPeeringConnection::Jsonize() const
{
  JsonValue payload;

  if(m_fleetIdHasBeenSet)
  {
   payload.WithString("FleetId", m_fleetId);

  }

  if(m_fleetArnHasBeenSet)
  {
   payload.WithString("FleetArn", m_fleetArn);

  }

  if(m_ipV4CidrBlockHasBeenSet)
  {
   payload.WithString("IpV4CidrBlock", m_ipV4CidrBlock);

  }

  if(m_vpcPeeringConnectionIdHasBeenSet)
  {
   payload.WithString("VpcPeeringConnectionId", m_vpcPeeringConnectionId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("Status", m_status.Jsonize());

  }

  if(m_peerVpcIdHasBeenSet)
  {
   payload.WithString("PeerVpcId", m_peerVpcId);

  }

  if(m_gameLiftVpcIdHasBeenSet)
  {
   payload.WithString("GameLiftVpcId", m_gameLiftVpcId);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
