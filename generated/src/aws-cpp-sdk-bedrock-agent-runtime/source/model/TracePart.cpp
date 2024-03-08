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

TracePart::TracePart() : 
    m_agentAliasIdHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_traceHasBeenSet(false)
{
}

TracePart::TracePart(JsonView jsonValue) : 
    m_agentAliasIdHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_traceHasBeenSet(false)
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
