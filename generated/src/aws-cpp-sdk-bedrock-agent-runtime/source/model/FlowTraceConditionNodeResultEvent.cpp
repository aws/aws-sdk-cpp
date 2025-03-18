/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/FlowTraceConditionNodeResultEvent.h>
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

FlowTraceConditionNodeResultEvent::FlowTraceConditionNodeResultEvent(JsonView jsonValue)
{
  *this = jsonValue;
}

FlowTraceConditionNodeResultEvent& FlowTraceConditionNodeResultEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("nodeName"))
  {
    m_nodeName = jsonValue.GetString("nodeName");
    m_nodeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("satisfiedConditions"))
  {
    Aws::Utils::Array<JsonView> satisfiedConditionsJsonList = jsonValue.GetArray("satisfiedConditions");
    for(unsigned satisfiedConditionsIndex = 0; satisfiedConditionsIndex < satisfiedConditionsJsonList.GetLength(); ++satisfiedConditionsIndex)
    {
      m_satisfiedConditions.push_back(satisfiedConditionsJsonList[satisfiedConditionsIndex].AsObject());
    }
    m_satisfiedConditionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetString("timestamp");
    m_timestampHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowTraceConditionNodeResultEvent::Jsonize() const
{
  JsonValue payload;

  if(m_nodeNameHasBeenSet)
  {
   payload.WithString("nodeName", m_nodeName);

  }

  if(m_satisfiedConditionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> satisfiedConditionsJsonList(m_satisfiedConditions.size());
   for(unsigned satisfiedConditionsIndex = 0; satisfiedConditionsIndex < satisfiedConditionsJsonList.GetLength(); ++satisfiedConditionsIndex)
   {
     satisfiedConditionsJsonList[satisfiedConditionsIndex].AsObject(m_satisfiedConditions[satisfiedConditionsIndex].Jsonize());
   }
   payload.WithArray("satisfiedConditions", std::move(satisfiedConditionsJsonList));

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithString("timestamp", m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
