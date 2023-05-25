/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DescribeMatchmakingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeMatchmakingRequest::DescribeMatchmakingRequest() : 
    m_ticketIdsHasBeenSet(false)
{
}

Aws::String DescribeMatchmakingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ticketIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ticketIdsJsonList(m_ticketIds.size());
   for(unsigned ticketIdsIndex = 0; ticketIdsIndex < ticketIdsJsonList.GetLength(); ++ticketIdsIndex)
   {
     ticketIdsJsonList[ticketIdsIndex].AsString(m_ticketIds[ticketIdsIndex]);
   }
   payload.WithArray("TicketIds", std::move(ticketIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeMatchmakingRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.DescribeMatchmaking"));
  return headers;

}




