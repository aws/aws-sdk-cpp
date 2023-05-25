/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/CreatePlayerSessionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePlayerSessionsRequest::CreatePlayerSessionsRequest() : 
    m_gameSessionIdHasBeenSet(false),
    m_playerIdsHasBeenSet(false),
    m_playerDataMapHasBeenSet(false)
{
}

Aws::String CreatePlayerSessionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gameSessionIdHasBeenSet)
  {
   payload.WithString("GameSessionId", m_gameSessionId);

  }

  if(m_playerIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> playerIdsJsonList(m_playerIds.size());
   for(unsigned playerIdsIndex = 0; playerIdsIndex < playerIdsJsonList.GetLength(); ++playerIdsIndex)
   {
     playerIdsJsonList[playerIdsIndex].AsString(m_playerIds[playerIdsIndex]);
   }
   payload.WithArray("PlayerIds", std::move(playerIdsJsonList));

  }

  if(m_playerDataMapHasBeenSet)
  {
   JsonValue playerDataMapJsonMap;
   for(auto& playerDataMapItem : m_playerDataMap)
   {
     playerDataMapJsonMap.WithString(playerDataMapItem.first, playerDataMapItem.second);
   }
   payload.WithObject("PlayerDataMap", std::move(playerDataMapJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreatePlayerSessionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.CreatePlayerSessions"));
  return headers;

}




