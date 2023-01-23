/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/StopMatchmakingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopMatchmakingRequest::StopMatchmakingRequest() : 
    m_ticketIdHasBeenSet(false)
{
}

Aws::String StopMatchmakingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ticketIdHasBeenSet)
  {
   payload.WithString("TicketId", m_ticketId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopMatchmakingRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.StopMatchmaking"));
  return headers;

}




