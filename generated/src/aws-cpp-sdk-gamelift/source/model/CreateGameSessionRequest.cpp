/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/CreateGameSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateGameSessionRequest::CreateGameSessionRequest() : 
    m_fleetIdHasBeenSet(false),
    m_aliasIdHasBeenSet(false),
    m_maximumPlayerSessionCount(0),
    m_maximumPlayerSessionCountHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_gamePropertiesHasBeenSet(false),
    m_creatorIdHasBeenSet(false),
    m_gameSessionIdHasBeenSet(false),
    m_idempotencyTokenHasBeenSet(false),
    m_gameSessionDataHasBeenSet(false),
    m_locationHasBeenSet(false)
{
}

Aws::String CreateGameSessionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fleetIdHasBeenSet)
  {
   payload.WithString("FleetId", m_fleetId);

  }

  if(m_aliasIdHasBeenSet)
  {
   payload.WithString("AliasId", m_aliasId);

  }

  if(m_maximumPlayerSessionCountHasBeenSet)
  {
   payload.WithInteger("MaximumPlayerSessionCount", m_maximumPlayerSessionCount);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

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

  if(m_creatorIdHasBeenSet)
  {
   payload.WithString("CreatorId", m_creatorId);

  }

  if(m_gameSessionIdHasBeenSet)
  {
   payload.WithString("GameSessionId", m_gameSessionId);

  }

  if(m_idempotencyTokenHasBeenSet)
  {
   payload.WithString("IdempotencyToken", m_idempotencyToken);

  }

  if(m_gameSessionDataHasBeenSet)
  {
   payload.WithString("GameSessionData", m_gameSessionData);

  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("Location", m_location);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateGameSessionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.CreateGameSession"));
  return headers;

}




