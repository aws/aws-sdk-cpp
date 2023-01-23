/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/StartMatchBackfillRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartMatchBackfillRequest::StartMatchBackfillRequest() : 
    m_ticketIdHasBeenSet(false),
    m_configurationNameHasBeenSet(false),
    m_gameSessionArnHasBeenSet(false),
    m_playersHasBeenSet(false)
{
}

Aws::String StartMatchBackfillRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ticketIdHasBeenSet)
  {
   payload.WithString("TicketId", m_ticketId);

  }

  if(m_configurationNameHasBeenSet)
  {
   payload.WithString("ConfigurationName", m_configurationName);

  }

  if(m_gameSessionArnHasBeenSet)
  {
   payload.WithString("GameSessionArn", m_gameSessionArn);

  }

  if(m_playersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> playersJsonList(m_players.size());
   for(unsigned playersIndex = 0; playersIndex < playersJsonList.GetLength(); ++playersIndex)
   {
     playersJsonList[playersIndex].AsObject(m_players[playersIndex].Jsonize());
   }
   payload.WithArray("Players", std::move(playersJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartMatchBackfillRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.StartMatchBackfill"));
  return headers;

}




