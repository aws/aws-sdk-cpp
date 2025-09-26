/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/FlowTraceNodeInputExecutionChainItem.h>
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

FlowTraceNodeInputExecutionChainItem::FlowTraceNodeInputExecutionChainItem(JsonView jsonValue)
{
  *this = jsonValue;
}

FlowTraceNodeInputExecutionChainItem& FlowTraceNodeInputExecutionChainItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("nodeName"))
  {
    m_nodeName = jsonValue.GetString("nodeName");
    m_nodeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("index"))
  {
    m_index = jsonValue.GetInteger("index");
    m_indexHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = FlowControlNodeTypeMapper::GetFlowControlNodeTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowTraceNodeInputExecutionChainItem::Jsonize() const
{
  JsonValue payload;

  if(m_nodeNameHasBeenSet)
  {
   payload.WithString("nodeName", m_nodeName);

  }

  if(m_indexHasBeenSet)
  {
   payload.WithInteger("index", m_index);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", FlowControlNodeTypeMapper::GetNameForFlowControlNodeType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
