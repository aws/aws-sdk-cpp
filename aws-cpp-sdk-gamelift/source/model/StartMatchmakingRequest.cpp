/*
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

#include <aws/gamelift/model/StartMatchmakingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartMatchmakingRequest::StartMatchmakingRequest() : 
    m_ticketIdHasBeenSet(false),
    m_configurationNameHasBeenSet(false),
    m_playersHasBeenSet(false)
{
}

Aws::String StartMatchmakingRequest::SerializePayload() const
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

  if(m_playersHasBeenSet)
  {
   Array<JsonValue> playersJsonList(m_players.size());
   for(unsigned playersIndex = 0; playersIndex < playersJsonList.GetLength(); ++playersIndex)
   {
     playersJsonList[playersIndex].AsObject(m_players[playersIndex].Jsonize());
   }
   payload.WithArray("Players", std::move(playersJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection StartMatchmakingRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.StartMatchmaking"));
  return headers;

}




