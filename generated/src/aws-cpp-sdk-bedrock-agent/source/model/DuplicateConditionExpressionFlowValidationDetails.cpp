/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/DuplicateConditionExpressionFlowValidationDetails.h>
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

DuplicateConditionExpressionFlowValidationDetails::DuplicateConditionExpressionFlowValidationDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

DuplicateConditionExpressionFlowValidationDetails& DuplicateConditionExpressionFlowValidationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("node"))
  {
    m_node = jsonValue.GetString("node");
    m_nodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("expression"))
  {
    m_expression = jsonValue.GetString("expression");
    m_expressionHasBeenSet = true;
  }
  return *this;
}

JsonValue DuplicateConditionExpressionFlowValidationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nodeHasBeenSet)
  {
   payload.WithString("node", m_node);

  }

  if(m_expressionHasBeenSet)
  {
   payload.WithString("expression", m_expression);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
