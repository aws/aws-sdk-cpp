/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/GameSessionPlacement.h>
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

GameSessionPlacement::GameSessionPlacement() : 
    m_placementIdHasBeenSet(false),
    m_gameSessionQueueNameHasBeenSet(false),
    m_status(GameSessionPlacementState::NOT_SET),
    m_statusHasBeenSet(false),
    m_gamePropertiesHasBeenSet(false),
    m_maximumPlayerSessionCount(0),
    m_maximumPlayerSessionCountHasBeenSet(false),
    m_gameSessionNameHasBeenSet(false),
    m_gameSessionIdHasBeenSet(false),
    m_gameSessionArnHasBeenSet(false),
    m_gameSessionRegionHasBeenSet(false),
    m_playerLatenciesHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_dnsNameHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_placedPlayerSessionsHasBeenSet(false),
    m_gameSessionDataHasBeenSet(false),
    m_matchmakerDataHasBeenSet(false)
{
}

GameSessionPlacement::GameSessionPlacement(JsonView jsonValue) : 
    m_placementIdHasBeenSet(false),
    m_gameSessionQueueNameHasBeenSet(false),
    m_status(GameSessionPlacementState::NOT_SET),
    m_statusHasBeenSet(false),
    m_gamePropertiesHasBeenSet(false),
    m_maximumPlayerSessionCount(0),
    m_maximumPlayerSessionCountHasBeenSet(false),
    m_gameSessionNameHasBeenSet(false),
    m_gameSessionIdHasBeenSet(false),
    m_gameSessionArnHasBeenSet(false),
    m_gameSessionRegionHasBeenSet(false),
    m_playerLatenciesHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_dnsNameHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_placedPlayerSessionsHasBeenSet(false),
    m_gameSessionDataHasBeenSet(false),
    m_matchmakerDataHasBeenSet(false)
{
  *this = jsonValue;
}

GameSessionPlacement& GameSessionPlacement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PlacementId"))
  {
    m_placementId = jsonValue.GetString("PlacementId");

    m_placementIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GameSessionQueueName"))
  {
    m_gameSessionQueueName = jsonValue.GetString("GameSessionQueueName");

    m_gameSessionQueueNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = GameSessionPlacementStateMapper::GetGameSessionPlacementStateForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
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

  if(jsonValue.ValueExists("MaximumPlayerSessionCount"))
  {
    m_maximumPlayerSessionCount = jsonValue.GetInteger("MaximumPlayerSessionCount");

    m_maximumPlayerSessionCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GameSessionName"))
  {
    m_gameSessionName = jsonValue.GetString("GameSessionName");

    m_gameSessionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GameSessionId"))
  {
    m_gameSessionId = jsonValue.GetString("GameSessionId");

    m_gameSessionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GameSessionArn"))
  {
    m_gameSessionArn = jsonValue.GetString("GameSessionArn");

    m_gameSessionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GameSessionRegion"))
  {
    m_gameSessionRegion = jsonValue.GetString("GameSessionRegion");

    m_gameSessionRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlayerLatencies"))
  {
    Aws::Utils::Array<JsonView> playerLatenciesJsonList = jsonValue.GetArray("PlayerLatencies");
    for(unsigned playerLatenciesIndex = 0; playerLatenciesIndex < playerLatenciesJsonList.GetLength(); ++playerLatenciesIndex)
    {
      m_playerLatencies.push_back(playerLatenciesJsonList[playerLatenciesIndex].AsObject());
    }
    m_playerLatenciesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
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

  if(jsonValue.ValueExists("PlacedPlayerSessions"))
  {
    Aws::Utils::Array<JsonView> placedPlayerSessionsJsonList = jsonValue.GetArray("PlacedPlayerSessions");
    for(unsigned placedPlayerSessionsIndex = 0; placedPlayerSessionsIndex < placedPlayerSessionsJsonList.GetLength(); ++placedPlayerSessionsIndex)
    {
      m_placedPlayerSessions.push_back(placedPlayerSessionsJsonList[placedPlayerSessionsIndex].AsObject());
    }
    m_placedPlayerSessionsHasBeenSet = true;
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

  return *this;
}

JsonValue GameSessionPlacement::Jsonize() const
{
  JsonValue payload;

  if(m_placementIdHasBeenSet)
  {
   payload.WithString("PlacementId", m_placementId);

  }

  if(m_gameSessionQueueNameHasBeenSet)
  {
   payload.WithString("GameSessionQueueName", m_gameSessionQueueName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", GameSessionPlacementStateMapper::GetNameForGameSessionPlacementState(m_status));
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

  if(m_maximumPlayerSessionCountHasBeenSet)
  {
   payload.WithInteger("MaximumPlayerSessionCount", m_maximumPlayerSessionCount);

  }

  if(m_gameSessionNameHasBeenSet)
  {
   payload.WithString("GameSessionName", m_gameSessionName);

  }

  if(m_gameSessionIdHasBeenSet)
  {
   payload.WithString("GameSessionId", m_gameSessionId);

  }

  if(m_gameSessionArnHasBeenSet)
  {
   payload.WithString("GameSessionArn", m_gameSessionArn);

  }

  if(m_gameSessionRegionHasBeenSet)
  {
   payload.WithString("GameSessionRegion", m_gameSessionRegion);

  }

  if(m_playerLatenciesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> playerLatenciesJsonList(m_playerLatencies.size());
   for(unsigned playerLatenciesIndex = 0; playerLatenciesIndex < playerLatenciesJsonList.GetLength(); ++playerLatenciesIndex)
   {
     playerLatenciesJsonList[playerLatenciesIndex].AsObject(m_playerLatencies[playerLatenciesIndex].Jsonize());
   }
   payload.WithArray("PlayerLatencies", std::move(playerLatenciesJsonList));

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
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

  if(m_placedPlayerSessionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> placedPlayerSessionsJsonList(m_placedPlayerSessions.size());
   for(unsigned placedPlayerSessionsIndex = 0; placedPlayerSessionsIndex < placedPlayerSessionsJsonList.GetLength(); ++placedPlayerSessionsIndex)
   {
     placedPlayerSessionsJsonList[placedPlayerSessionsIndex].AsObject(m_placedPlayerSessions[placedPlayerSessionsIndex].Jsonize());
   }
   payload.WithArray("PlacedPlayerSessions", std::move(placedPlayerSessionsJsonList));

  }

  if(m_gameSessionDataHasBeenSet)
  {
   payload.WithString("GameSessionData", m_gameSessionData);

  }

  if(m_matchmakerDataHasBeenSet)
  {
   payload.WithString("MatchmakerData", m_matchmakerData);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
