/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/InlineAgentTracePart.h>
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

InlineAgentTracePart::InlineAgentTracePart() : 
    m_sessionIdHasBeenSet(false),
    m_traceHasBeenSet(false)
{
}

InlineAgentTracePart::InlineAgentTracePart(JsonView jsonValue)
  : InlineAgentTracePart()
{
  *this = jsonValue;
}

InlineAgentTracePart& InlineAgentTracePart::operator =(JsonView jsonValue)
{
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

JsonValue InlineAgentTracePart::Jsonize() const
{
  JsonValue payload;

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
