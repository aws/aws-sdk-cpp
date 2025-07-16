/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/Event.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCore
{
namespace Model
{

Event::Event(JsonView jsonValue)
{
  *this = jsonValue;
}

Event& Event::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("memoryId"))
  {
    m_memoryId = jsonValue.GetString("memoryId");
    m_memoryIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actorId"))
  {
    m_actorId = jsonValue.GetString("actorId");
    m_actorIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sessionId"))
  {
    m_sessionId = jsonValue.GetString("sessionId");
    m_sessionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventId"))
  {
    m_eventId = jsonValue.GetString("eventId");
    m_eventIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventTimestamp"))
  {
    m_eventTimestamp = jsonValue.GetDouble("eventTimestamp");
    m_eventTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("payload"))
  {
    Aws::Utils::Array<JsonView> payloadJsonList = jsonValue.GetArray("payload");
    for(unsigned payloadIndex = 0; payloadIndex < payloadJsonList.GetLength(); ++payloadIndex)
    {
      m_payload.push_back(payloadJsonList[payloadIndex].AsObject());
    }
    m_payloadHasBeenSet = true;
  }
  if(jsonValue.ValueExists("branch"))
  {
    m_branch = jsonValue.GetObject("branch");
    m_branchHasBeenSet = true;
  }
  return *this;
}

JsonValue Event::Jsonize() const
{
  JsonValue payload;

  if(m_memoryIdHasBeenSet)
  {
   payload.WithString("memoryId", m_memoryId);

  }

  if(m_actorIdHasBeenSet)
  {
   payload.WithString("actorId", m_actorId);

  }

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("sessionId", m_sessionId);

  }

  if(m_eventIdHasBeenSet)
  {
   payload.WithString("eventId", m_eventId);

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

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
