/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/TracePart.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

TracePart::TracePart(JsonView jsonValue)
{
  *this = jsonValue;
}

TracePart& TracePart::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agentAliasId"))
  {
    m_agentAliasId = jsonValue.GetString("agentAliasId");
    m_agentAliasIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("agentId"))
  {
    m_agentId = jsonValue.GetString("agentId");
    m_agentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("agentVersion"))
  {
    m_agentVersion = jsonValue.GetString("agentVersion");
    m_agentVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("callerChain"))
  {
    Aws::Utils::Array<JsonView> callerChainJsonList = jsonValue.GetArray("callerChain");
    for(unsigned callerChainIndex = 0; callerChainIndex < callerChainJsonList.GetLength(); ++callerChainIndex)
    {
      m_callerChain.push_back(callerChainJsonList[callerChainIndex].AsObject());
    }
    m_callerChainHasBeenSet = true;
  }
  if(jsonValue.ValueExists("collaboratorName"))
  {
    m_collaboratorName = jsonValue.GetString("collaboratorName");
    m_collaboratorNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventTime"))
  {
    m_eventTime = jsonValue.GetString("eventTime");
    m_eventTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sessionId"))
  {
    m_sessionId = jsonValue.GetString("sessionId");
    m_sessionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("trace"))
  {
    m_trace = jsonValue.GetObject("trace");
    m_traceHasBeenSet = true;
  }
  return *this;
}

JsonValue TracePart::Jsonize() const
{
  JsonValue payload;

  if(m_agentAliasIdHasBeenSet)
  {
   payload.WithString("agentAliasId", m_agentAliasId);

  }

  if(m_agentIdHasBeenSet)
  {
   payload.WithString("agentId", m_agentId);

  }

  if(m_agentVersionHasBeenSet)
  {
   payload.WithString("agentVersion", m_agentVersion);

  }

  if(m_callerChainHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> callerChainJsonList(m_callerChain.size());
   for(unsigned callerChainIndex = 0; callerChainIndex < callerChainJsonList.GetLength(); ++callerChainIndex)
   {
     callerChainJsonList[callerChainIndex].AsObject(m_callerChain[callerChainIndex].Jsonize());
   }
   payload.WithArray("callerChain", std::move(callerChainJsonList));

  }

  if(m_collaboratorNameHasBeenSet)
  {
   payload.WithString("collaboratorName", m_collaboratorName);

  }

  if(m_eventTimeHasBeenSet)
  {
   payload.WithString("eventTime", m_eventTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("sessionId", m_sessionId);

  }

  if(m_traceHasBeenSet)
  {
   payload.WithObject("trace", m_trace.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
