/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/MismatchedNodeOutputTypeFlowValidationDetails.h>
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

MismatchedNodeOutputTypeFlowValidationDetails::MismatchedNodeOutputTypeFlowValidationDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

MismatchedNodeOutputTypeFlowValidationDetails& MismatchedNodeOutputTypeFlowValidationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("node"))
  {
    m_node = jsonValue.GetString("node");
    m_nodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("output"))
  {
    m_output = jsonValue.GetString("output");
    m_outputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("expectedType"))
  {
    m_expectedType = FlowNodeIODataTypeMapper::GetFlowNodeIODataTypeForName(jsonValue.GetString("expectedType"));
    m_expectedTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue MismatchedNodeOutputTypeFlowValidationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nodeHasBeenSet)
  {
   payload.WithString("node", m_node);

  }

  if(m_outputHasBeenSet)
  {
   payload.WithString("output", m_output);

  }

  if(m_expectedTypeHasBeenSet)
  {
   payload.WithString("expectedType", FlowNodeIODataTypeMapper::GetNameForFlowNodeIODataType(m_expectedType));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
