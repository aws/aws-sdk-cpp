/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/NodeInputField.h>
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

NodeInputField::NodeInputField(JsonView jsonValue)
{
  *this = jsonValue;
}

NodeInputField& NodeInputField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("content"))
  {
    m_content = jsonValue.GetObject("content");
    m_contentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetObject("source");
    m_sourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = FlowNodeIODataTypeMapper::GetFlowNodeIODataTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("category"))
  {
    m_category = FlowNodeInputCategoryMapper::GetFlowNodeInputCategoryForName(jsonValue.GetString("category"));
    m_categoryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionChain"))
  {
    Aws::Utils::Array<JsonView> executionChainJsonList = jsonValue.GetArray("executionChain");
    for(unsigned executionChainIndex = 0; executionChainIndex < executionChainJsonList.GetLength(); ++executionChainIndex)
    {
      m_executionChain.push_back(executionChainJsonList[executionChainIndex].AsObject());
    }
    m_executionChainHasBeenSet = true;
  }
  return *this;
}

JsonValue NodeInputField::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_contentHasBeenSet)
  {
   payload.WithObject("content", m_content.Jsonize());

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("source", m_source.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", FlowNodeIODataTypeMapper::GetNameForFlowNodeIODataType(m_type));
  }

  if(m_categoryHasBeenSet)
  {
   payload.WithString("category", FlowNodeInputCategoryMapper::GetNameForFlowNodeInputCategory(m_category));
  }

  if(m_executionChainHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> executionChainJsonList(m_executionChain.size());
   for(unsigned executionChainIndex = 0; executionChainIndex < executionChainJsonList.GetLength(); ++executionChainIndex)
   {
     executionChainJsonList[executionChainIndex].AsObject(m_executionChain[executionChainIndex].Jsonize());
   }
   payload.WithArray("executionChain", std::move(executionChainJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
