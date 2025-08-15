/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/FlowNode.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/bedrock-agent/model/FlowNodeConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

FlowNode::FlowNode(JsonView jsonValue)
{
  *this = jsonValue;
}

FlowNode& FlowNode::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = FlowNodeTypeMapper::GetFlowNodeTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("configuration"))
  {
    m_configuration = Aws::MakeShared<FlowNodeConfiguration>("FlowNode", jsonValue.GetObject("configuration"));
    m_configurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputs"))
  {
    Aws::Utils::Array<JsonView> inputsJsonList = jsonValue.GetArray("inputs");
    for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
    {
      m_inputs.push_back(inputsJsonList[inputsIndex].AsObject());
    }
    m_inputsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputs"))
  {
    Aws::Utils::Array<JsonView> outputsJsonList = jsonValue.GetArray("outputs");
    for(unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex)
    {
      m_outputs.push_back(outputsJsonList[outputsIndex].AsObject());
    }
    m_outputsHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowNode::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", FlowNodeTypeMapper::GetNameForFlowNodeType(m_type));
  }

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration->Jsonize());

  }

  if(m_inputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputsJsonList(m_inputs.size());
   for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
   {
     inputsJsonList[inputsIndex].AsObject(m_inputs[inputsIndex].Jsonize());
   }
   payload.WithArray("inputs", std::move(inputsJsonList));

  }

  if(m_outputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputsJsonList(m_outputs.size());
   for(unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex)
   {
     outputsJsonList[outputsIndex].AsObject(m_outputs[outputsIndex].Jsonize());
   }
   payload.WithArray("outputs", std::move(outputsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
