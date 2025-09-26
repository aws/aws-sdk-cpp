/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/NodeDependencyEvent.h>
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

NodeDependencyEvent::NodeDependencyEvent(JsonView jsonValue)
{
  *this = jsonValue;
}

NodeDependencyEvent& NodeDependencyEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("nodeName"))
  {
    m_nodeName = jsonValue.GetString("nodeName");
    m_nodeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetString("timestamp");
    m_timestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("traceElements"))
  {
    m_traceElements = jsonValue.GetObject("traceElements");
    m_traceElementsHasBeenSet = true;
  }
  return *this;
}

JsonValue NodeDependencyEvent::Jsonize() const
{
  JsonValue payload;

  if(m_nodeNameHasBeenSet)
  {
   payload.WithString("nodeName", m_nodeName);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithString("timestamp", m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_traceElementsHasBeenSet)
  {
   payload.WithObject("traceElements", m_traceElements.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
