/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyDefinitionRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

AutomatedReasoningPolicyDefinitionRule::AutomatedReasoningPolicyDefinitionRule(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedReasoningPolicyDefinitionRule& AutomatedReasoningPolicyDefinitionRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("expression"))
  {
    m_expression = jsonValue.GetString("expression");
    m_expressionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("alternateExpression"))
  {
    m_alternateExpression = jsonValue.GetString("alternateExpression");
    m_alternateExpressionHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyDefinitionRule::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_expressionHasBeenSet)
  {
   payload.WithString("expression", m_expression);

  }

  if(m_alternateExpressionHasBeenSet)
  {
   payload.WithString("alternateExpression", m_alternateExpression);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
