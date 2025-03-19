/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/FlowTraceEvent.h>
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

FlowTraceEvent::FlowTraceEvent(JsonView jsonValue)
{
  *this = jsonValue;
}

FlowTraceEvent& FlowTraceEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("trace"))
  {
    m_trace = jsonValue.GetObject("trace");
    m_traceHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowTraceEvent::Jsonize() const
{
  JsonValue payload;

  if(m_traceHasBeenSet)
  {
   payload.WithObject("trace", m_trace.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
