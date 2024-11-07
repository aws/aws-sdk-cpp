/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/MismatchedNodeInputTypeFlowValidationDetails.h>
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

MismatchedNodeInputTypeFlowValidationDetails::MismatchedNodeInputTypeFlowValidationDetails() : 
    m_expectedType(FlowNodeIODataType::NOT_SET),
    m_expectedTypeHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_nodeHasBeenSet(false)
{
}

MismatchedNodeInputTypeFlowValidationDetails::MismatchedNodeInputTypeFlowValidationDetails(JsonView jsonValue)
  : MismatchedNodeInputTypeFlowValidationDetails()
{
  *this = jsonValue;
}

MismatchedNodeInputTypeFlowValidationDetails& MismatchedNodeInputTypeFlowValidationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("expectedType"))
  {
    m_expectedType = FlowNodeIODataTypeMapper::GetFlowNodeIODataTypeForName(jsonValue.GetString("expectedType"));

    m_expectedTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("input"))
  {
    m_input = jsonValue.GetString("input");

    m_inputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("node"))
  {
    m_node = jsonValue.GetString("node");

    m_nodeHasBeenSet = true;
  }

  return *this;
}

JsonValue MismatchedNodeInputTypeFlowValidationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_expectedTypeHasBeenSet)
  {
   payload.WithString("expectedType", FlowNodeIODataTypeMapper::GetNameForFlowNodeIODataType(m_expectedType));
  }

  if(m_inputHasBeenSet)
  {
   payload.WithString("input", m_input);

  }

  if(m_nodeHasBeenSet)
  {
   payload.WithString("node", m_node);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
