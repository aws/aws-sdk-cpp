/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/GameSession.h>
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

GameSession::GameSession(JsonView jsonValue)
{
  *this = jsonValue;
}

GameSession& GameSession::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GameSessionId"))
  {
    m_gameSessionId = jsonValue.GetString("GameSessionId");
    m_gameSessionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
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
  if(jsonValue.ValueExists("CurrentPlayerSessionCount"))
  {
    m_currentPlayerSessionCount = jsonValue.GetInteger("CurrentPlayerSessionCount");
    m_currentPlayerSessionCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaximumPlayerSessionCount"))
  {
    m_maximumPlayerSessionCount = jsonValue.GetInteger("MaximumPlayerSessionCount");
    m_maximumPlayerSessionCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = GameSessionStatusMapper::GetGameSessionStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = GameSessionStatusReasonMapper::GetGameSessionStatusReasonForName(jsonValue.GetString("StatusReason"));
    m_statusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GameProperties"))
  {
    Aws::Utils::Array<JsonView> gamePropertiesJsonList = jsonValue.GetArray("GameProperties");
    for(unsigned gamePropertiesIndex = 0; gamePropertiesIndex < gamePropertiesJsonList.GetLength(); ++gamePropertiesIndex)
    {
      m_gameProperties.push_back(gamePropertiesJsonList[gamePropertiesIndex].AsObject());
    }
    m_gamePropertiesHasBeenSet = true;
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
  if(jsonValue.ValueExists("PlayerSessionCreationPolicy"))
  {
    m_playerSessionCreationPolicy = PlayerSessionCreationPolicyMapper::GetPlayerSessionCreationPolicyForName(jsonValue.GetString("PlayerSessionCreationPolicy"));
    m_playerSessionCreationPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatorId"))
  {
    m_creatorId = jsonValue.GetString("CreatorId");
    m_creatorIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GameSessionData"))
  {
    m_gameSessionData = jsonValue.GetString("GameSessionData");
    m_gameSessionDataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MatchmakerData"))
  {
    m_matchmakerData = jsonValue.GetString("MatchmakerData");
    m_matchmakerDataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Location"))
  {
    m_location = jsonValue.GetString("Location");
    m_locationHasBeenSet = true;
  }
  return *this;
}

JsonValue GameSession::Jsonize() const
{
  JsonValue payload;

  if(m_gameSessionIdHasBeenSet)
  {
   payload.WithString("GameSessionId", m_gameSessionId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

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

  if(m_currentPlayerSessionCountHasBeenSet)
  {
   payload.WithInteger("CurrentPlayerSessionCount", m_currentPlayerSessionCount);

  }

  if(m_maximumPlayerSessionCountHasBeenSet)
  {
   payload.WithInteger("MaximumPlayerSessionCount", m_maximumPlayerSessionCount);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", GameSessionStatusMapper::GetNameForGameSessionStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("StatusReason", GameSessionStatusReasonMapper::GetNameForGameSessionStatusReason(m_statusReason));
  }

  if(m_gamePropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> gamePropertiesJsonList(m_gameProperties.size());
   for(unsigned gamePropertiesIndex = 0; gamePropertiesIndex < gamePropertiesJsonList.GetLength(); ++gamePropertiesIndex)
   {
     gamePropertiesJsonList[gamePropertiesIndex].AsObject(m_gameProperties[gamePropertiesIndex].Jsonize());
   }
   payload.WithArray("GameProperties", std::move(gamePropertiesJsonList));

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

  if(m_playerSessionCreationPolicyHasBeenSet)
  {
   payload.WithString("PlayerSessionCreationPolicy", PlayerSessionCreationPolicyMapper::GetNameForPlayerSessionCreationPolicy(m_playerSessionCreationPolicy));
  }

  if(m_creatorIdHasBeenSet)
  {
   payload.WithString("CreatorId", m_creatorId);

  }

  if(m_gameSessionDataHasBeenSet)
  {
   payload.WithString("GameSessionData", m_gameSessionData);

  }

  if(m_matchmakerDataHasBeenSet)
  {
   payload.WithString("MatchmakerData", m_matchmakerData);

  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("Location", m_location);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
