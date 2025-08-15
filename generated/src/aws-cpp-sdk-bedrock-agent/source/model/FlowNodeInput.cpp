/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/FlowNodeInput.h>
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

FlowNodeInput::FlowNodeInput(JsonView jsonValue)
{
  *this = jsonValue;
}

FlowNodeInput& FlowNodeInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = FlowNodeIODataTypeMapper::GetFlowNodeIODataTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("expression"))
  {
    m_expression = jsonValue.GetString("expression");
    m_expressionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("category"))
  {
    m_category = FlowNodeInputCategoryMapper::GetFlowNodeInputCategoryForName(jsonValue.GetString("category"));
    m_categoryHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowNodeInput::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", FlowNodeIODataTypeMapper::GetNameForFlowNodeIODataType(m_type));
  }

  if(m_expressionHasBeenSet)
  {
   payload.WithString("expression", m_expression);

  }

  if(m_categoryHasBeenSet)
  {
   payload.WithString("category", FlowNodeInputCategoryMapper::GetNameForFlowNodeInputCategory(m_category));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
