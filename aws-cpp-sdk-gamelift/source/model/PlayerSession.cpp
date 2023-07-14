/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/PlayerSession.h>
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

PlayerSession::PlayerSession() : 
    m_playerSessionIdHasBeenSet(false),
    m_playerIdHasBeenSet(false),
    m_gameSessionIdHasBeenSet(false),
    m_fleetIdHasBeenSet(false),
    m_fleetArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_terminationTimeHasBeenSet(false),
    m_status(PlayerSessionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_dnsNameHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_playerDataHasBeenSet(false)
{
}

PlayerSession::PlayerSession(JsonView jsonValue) : 
    m_playerSessionIdHasBeenSet(false),
    m_playerIdHasBeenSet(false),
    m_gameSessionIdHasBeenSet(false),
    m_fleetIdHasBeenSet(false),
    m_fleetArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_terminationTimeHasBeenSet(false),
    m_status(PlayerSessionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_dnsNameHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_playerDataHasBeenSet(false)
{
  *this = jsonValue;
}

PlayerSession& PlayerSession::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PlayerSessionId"))
  {
    m_playerSessionId = jsonValue.GetString("PlayerSessionId");

    m_playerSessionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlayerId"))
  {
    m_playerId = jsonValue.GetString("PlayerId");

    m_playerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GameSessionId"))
  {
    m_gameSessionId = jsonValue.GetString("GameSessionId");

    m_gameSessionIdHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TerminationTime"))
  {
    m_terminationTime = jsonValue.GetDouble("TerminationTime");

    m_terminationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = PlayerSessionStatusMapper::GetPlayerSessionStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpAddress"))
  {
    m_ipAddress = jsonValue.GetString("IpAddress");

    m_ipAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DnsName"))
  {
    m_dnsName = jsonValue.GetString("DnsName");

    m_dnsNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetInteger("Port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlayerData"))
  {
    m_playerData = jsonValue.GetString("PlayerData");

    m_playerDataHasBeenSet = true;
  }

  return *this;
}

JsonValue PlayerSession::Jsonize() const
{
  JsonValue payload;

  if(m_playerSessionIdHasBeenSet)
  {
   payload.WithString("PlayerSessionId", m_playerSessionId);

  }

  if(m_playerIdHasBeenSet)
  {
   payload.WithString("PlayerId", m_playerId);

  }

  if(m_gameSessionIdHasBeenSet)
  {
   payload.WithString("GameSessionId", m_gameSessionId);

  }

  if(m_fleetIdHasBeenSet)
  {
   payload.WithString("FleetId", m_fleetId);

  }

  if(m_fleetArnHasBeenSet)
  {
   payload.WithString("FleetArn", m_fleetArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_terminationTimeHasBeenSet)
  {
   payload.WithDouble("TerminationTime", m_terminationTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", PlayerSessionStatusMapper::GetNameForPlayerSessionStatus(m_status));
  }

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("IpAddress", m_ipAddress);

  }

  if(m_dnsNameHasBeenSet)
  {
   payload.WithString("DnsName", m_dnsName);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  if(m_playerDataHasBeenSet)
  {
   payload.WithString("PlayerData", m_playerData);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
