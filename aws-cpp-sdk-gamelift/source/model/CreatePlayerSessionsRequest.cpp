﻿/*
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
   Array<JsonValue> playerIdsJsonList(m_playerIds.size());
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




