/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/AcceptMatchRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AcceptMatchRequest::AcceptMatchRequest() : 
    m_ticketIdHasBeenSet(false),
    m_playerIdsHasBeenSet(false),
    m_acceptanceType(AcceptanceType::NOT_SET),
    m_acceptanceTypeHasBeenSet(false)
{
}

Aws::String AcceptMatchRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ticketIdHasBeenSet)
  {
   payload.WithString("TicketId", m_ticketId);

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

  if(m_acceptanceTypeHasBeenSet)
  {
   payload.WithString("AcceptanceType", AcceptanceTypeMapper::GetNameForAcceptanceType(m_acceptanceType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AcceptMatchRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.AcceptMatch"));
  return headers;

}




