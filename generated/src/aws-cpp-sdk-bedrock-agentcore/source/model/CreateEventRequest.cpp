/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/CreateEventRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateEventRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actorIdHasBeenSet)
  {
   payload.WithString("actorId", m_actorId);

  }

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("sessionId", m_sessionId);

  }

  if(m_eventTimestampHasBeenSet)
  {
   payload.WithDouble("eventTimestamp", m_eventTimestamp.SecondsWithMSPrecision());
  }

  if(m_payloadHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> payloadJsonList(m_payload.size());
   for(unsigned payloadIndex = 0; payloadIndex < payloadJsonList.GetLength(); ++payloadIndex)
   {
     payloadJsonList[payloadIndex].AsObject(m_payload[payloadIndex].Jsonize());
   }
   payload.WithArray("payload", std::move(payloadJsonList));

  }

  if(m_branchHasBeenSet)
  {
   payload.WithObject("branch", m_branch.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




