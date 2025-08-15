/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/LoopIncompatibleNodeTypeFlowValidationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

LoopIncompatibleNodeTypeFlowValidationDetails::LoopIncompatibleNodeTypeFlowValidationDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

LoopIncompatibleNodeTypeFlowValidationDetails& LoopIncompatibleNodeTypeFlowValidationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("node"))
  {
    m_node = jsonValue.GetString("node");
    m_nodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("incompatibleNodeType"))
  {
    m_incompatibleNodeType = IncompatibleLoopNodeTypeMapper::GetIncompatibleLoopNodeTypeForName(jsonValue.GetString("incompatibleNodeType"));
    m_incompatibleNodeTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("incompatibleNodeName"))
  {
    m_incompatibleNodeName = jsonValue.GetString("incompatibleNodeName");
    m_incompatibleNodeNameHasBeenSet = true;
  }
  return *this;
}

JsonValue LoopIncompatibleNodeTypeFlowValidationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nodeHasBeenSet)
  {
   payload.WithString("node", m_node);

  }

  if(m_incompatibleNodeTypeHasBeenSet)
  {
   payload.WithString("incompatibleNodeType", IncompatibleLoopNodeTypeMapper::GetNameForIncompatibleLoopNodeType(m_incompatibleNodeType));
  }

  if(m_incompatibleNodeNameHasBeenSet)
  {
   payload.WithString("incompatibleNodeName", m_incompatibleNodeName);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
