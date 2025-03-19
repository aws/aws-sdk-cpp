/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/FlowMultiTurnInputRequestEvent.h>
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

FlowMultiTurnInputRequestEvent::FlowMultiTurnInputRequestEvent(JsonView jsonValue)
{
  *this = jsonValue;
}

FlowMultiTurnInputRequestEvent& FlowMultiTurnInputRequestEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("content"))
  {
    m_content = jsonValue.GetObject("content");
    m_contentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nodeName"))
  {
    m_nodeName = jsonValue.GetString("nodeName");
    m_nodeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nodeType"))
  {
    m_nodeType = NodeTypeMapper::GetNodeTypeForName(jsonValue.GetString("nodeType"));
    m_nodeTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowMultiTurnInputRequestEvent::Jsonize() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithObject("content", m_content.Jsonize());

  }

  if(m_nodeNameHasBeenSet)
  {
   payload.WithString("nodeName", m_nodeName);

  }

  if(m_nodeTypeHasBeenSet)
  {
   payload.WithString("nodeType", NodeTypeMapper::GetNameForNodeType(m_nodeType));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
