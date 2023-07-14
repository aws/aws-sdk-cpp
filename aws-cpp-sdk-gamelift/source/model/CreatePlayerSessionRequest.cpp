/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/CreatePlayerSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePlayerSessionRequest::CreatePlayerSessionRequest() : 
    m_gameSessionIdHasBeenSet(false),
    m_playerIdHasBeenSet(false),
    m_playerDataHasBeenSet(false)
{
}

Aws::String CreatePlayerSessionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gameSessionIdHasBeenSet)
  {
   payload.WithString("GameSessionId", m_gameSessionId);

  }

  if(m_playerIdHasBeenSet)
  {
   payload.WithString("PlayerId", m_playerId);

  }

  if(m_playerDataHasBeenSet)
  {
   payload.WithString("PlayerData", m_playerData);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreatePlayerSessionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.CreatePlayerSession"));
  return headers;

}




