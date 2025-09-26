/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/TraceElements.h>
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

TraceElements::TraceElements(JsonView jsonValue)
{
  *this = jsonValue;
}

TraceElements& TraceElements::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agentTraces"))
  {
    Aws::Utils::Array<JsonView> agentTracesJsonList = jsonValue.GetArray("agentTraces");
    for(unsigned agentTracesIndex = 0; agentTracesIndex < agentTracesJsonList.GetLength(); ++agentTracesIndex)
    {
      m_agentTraces.push_back(agentTracesJsonList[agentTracesIndex].AsObject());
    }
    m_agentTracesHasBeenSet = true;
  }
  return *this;
}

JsonValue TraceElements::Jsonize() const
{
  JsonValue payload;

  if(m_agentTracesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> agentTracesJsonList(m_agentTraces.size());
   for(unsigned agentTracesIndex = 0; agentTracesIndex < agentTracesJsonList.GetLength(); ++agentTracesIndex)
   {
     agentTracesJsonList[agentTracesIndex].AsObject(m_agentTraces[agentTracesIndex].Jsonize());
   }
   payload.WithArray("agentTraces", std::move(agentTracesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
