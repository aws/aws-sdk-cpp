/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/CustomOrchestrationTrace.h>
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

CustomOrchestrationTrace::CustomOrchestrationTrace(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomOrchestrationTrace& CustomOrchestrationTrace::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("traceId"))
  {
    m_traceId = jsonValue.GetString("traceId");
    m_traceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("event"))
  {
    m_event = jsonValue.GetObject("event");
    m_eventHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomOrchestrationTrace::Jsonize() const
{
  JsonValue payload;

  if(m_traceIdHasBeenSet)
  {
   payload.WithString("traceId", m_traceId);

  }

  if(m_eventHasBeenSet)
  {
   payload.WithObject("event", m_event.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
