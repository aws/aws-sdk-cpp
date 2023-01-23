/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/GameServer.h>
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

GameServer::GameServer() : 
    m_gameServerGroupNameHasBeenSet(false),
    m_gameServerGroupArnHasBeenSet(false),
    m_gameServerIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_connectionInfoHasBeenSet(false),
    m_gameServerDataHasBeenSet(false),
    m_claimStatus(GameServerClaimStatus::NOT_SET),
    m_claimStatusHasBeenSet(false),
    m_utilizationStatus(GameServerUtilizationStatus::NOT_SET),
    m_utilizationStatusHasBeenSet(false),
    m_registrationTimeHasBeenSet(false),
    m_lastClaimTimeHasBeenSet(false),
    m_lastHealthCheckTimeHasBeenSet(false)
{
}

GameServer::GameServer(JsonView jsonValue) : 
    m_gameServerGroupNameHasBeenSet(false),
    m_gameServerGroupArnHasBeenSet(false),
    m_gameServerIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_connectionInfoHasBeenSet(false),
    m_gameServerDataHasBeenSet(false),
    m_claimStatus(GameServerClaimStatus::NOT_SET),
    m_claimStatusHasBeenSet(false),
    m_utilizationStatus(GameServerUtilizationStatus::NOT_SET),
    m_utilizationStatusHasBeenSet(false),
    m_registrationTimeHasBeenSet(false),
    m_lastClaimTimeHasBeenSet(false),
    m_lastHealthCheckTimeHasBeenSet(false)
{
  *this = jsonValue;
}

GameServer& GameServer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GameServerGroupName"))
  {
    m_gameServerGroupName = jsonValue.GetString("GameServerGroupName");

    m_gameServerGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GameServerGroupArn"))
  {
    m_gameServerGroupArn = jsonValue.GetString("GameServerGroupArn");

    m_gameServerGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GameServerId"))
  {
    m_gameServerId = jsonValue.GetString("GameServerId");

    m_gameServerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionInfo"))
  {
    m_connectionInfo = jsonValue.GetString("ConnectionInfo");

    m_connectionInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GameServerData"))
  {
    m_gameServerData = jsonValue.GetString("GameServerData");

    m_gameServerDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClaimStatus"))
  {
    m_claimStatus = GameServerClaimStatusMapper::GetGameServerClaimStatusForName(jsonValue.GetString("ClaimStatus"));

    m_claimStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UtilizationStatus"))
  {
    m_utilizationStatus = GameServerUtilizationStatusMapper::GetGameServerUtilizationStatusForName(jsonValue.GetString("UtilizationStatus"));

    m_utilizationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegistrationTime"))
  {
    m_registrationTime = jsonValue.GetDouble("RegistrationTime");

    m_registrationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastClaimTime"))
  {
    m_lastClaimTime = jsonValue.GetDouble("LastClaimTime");

    m_lastClaimTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastHealthCheckTime"))
  {
    m_lastHealthCheckTime = jsonValue.GetDouble("LastHealthCheckTime");

    m_lastHealthCheckTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue GameServer::Jsonize() const
{
  JsonValue payload;

  if(m_gameServerGroupNameHasBeenSet)
  {
   payload.WithString("GameServerGroupName", m_gameServerGroupName);

  }

  if(m_gameServerGroupArnHasBeenSet)
  {
   payload.WithString("GameServerGroupArn", m_gameServerGroupArn);

  }

  if(m_gameServerIdHasBeenSet)
  {
   payload.WithString("GameServerId", m_gameServerId);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_connectionInfoHasBeenSet)
  {
   payload.WithString("ConnectionInfo", m_connectionInfo);

  }

  if(m_gameServerDataHasBeenSet)
  {
   payload.WithString("GameServerData", m_gameServerData);

  }

  if(m_claimStatusHasBeenSet)
  {
   payload.WithString("ClaimStatus", GameServerClaimStatusMapper::GetNameForGameServerClaimStatus(m_claimStatus));
  }

  if(m_utilizationStatusHasBeenSet)
  {
   payload.WithString("UtilizationStatus", GameServerUtilizationStatusMapper::GetNameForGameServerUtilizationStatus(m_utilizationStatus));
  }

  if(m_registrationTimeHasBeenSet)
  {
   payload.WithDouble("RegistrationTime", m_registrationTime.SecondsWithMSPrecision());
  }

  if(m_lastClaimTimeHasBeenSet)
  {
   payload.WithDouble("LastClaimTime", m_lastClaimTime.SecondsWithMSPrecision());
  }

  if(m_lastHealthCheckTimeHasBeenSet)
  {
   payload.WithDouble("LastHealthCheckTime", m_lastHealthCheckTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
