/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/NodeOutputField.h>
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

NodeOutputField::NodeOutputField(JsonView jsonValue)
{
  *this = jsonValue;
}

NodeOutputField& NodeOutputField::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("next"))
  {
    Aws::Utils::Array<JsonView> nextJsonList = jsonValue.GetArray("next");
    for(unsigned nextIndex = 0; nextIndex < nextJsonList.GetLength(); ++nextIndex)
    {
      m_next.push_back(nextJsonList[nextIndex].AsObject());
    }
    m_nextHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = FlowNodeIODataTypeMapper::GetFlowNodeIODataTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue NodeOutputField::Jsonize() const
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

  if(m_nextHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nextJsonList(m_next.size());
   for(unsigned nextIndex = 0; nextIndex < nextJsonList.GetLength(); ++nextIndex)
   {
     nextJsonList[nextIndex].AsObject(m_next[nextIndex].Jsonize());
   }
   payload.WithArray("next", std::move(nextJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", FlowNodeIODataTypeMapper::GetNameForFlowNodeIODataType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
