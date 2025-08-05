/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyScenario.h>
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

AutomatedReasoningPolicyScenario::AutomatedReasoningPolicyScenario(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedReasoningPolicyScenario& AutomatedReasoningPolicyScenario::operator =(JsonView jsonValue)
{
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
  if(jsonValue.ValueExists("ruleIds"))
  {
    Aws::Utils::Array<JsonView> ruleIdsJsonList = jsonValue.GetArray("ruleIds");
    for(unsigned ruleIdsIndex = 0; ruleIdsIndex < ruleIdsJsonList.GetLength(); ++ruleIdsIndex)
    {
      m_ruleIds.push_back(ruleIdsJsonList[ruleIdsIndex].AsString());
    }
    m_ruleIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("expectedResult"))
  {
    m_expectedResult = AutomatedReasoningCheckResultMapper::GetAutomatedReasoningCheckResultForName(jsonValue.GetString("expectedResult"));
    m_expectedResultHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyScenario::Jsonize() const
{
  JsonValue payload;

  if(m_expressionHasBeenSet)
  {
   payload.WithString("expression", m_expression);

  }

  if(m_alternateExpressionHasBeenSet)
  {
   payload.WithString("alternateExpression", m_alternateExpression);

  }

  if(m_ruleIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ruleIdsJsonList(m_ruleIds.size());
   for(unsigned ruleIdsIndex = 0; ruleIdsIndex < ruleIdsJsonList.GetLength(); ++ruleIdsIndex)
   {
     ruleIdsJsonList[ruleIdsIndex].AsString(m_ruleIds[ruleIdsIndex]);
   }
   payload.WithArray("ruleIds", std::move(ruleIdsJsonList));

  }

  if(m_expectedResultHasBeenSet)
  {
   payload.WithString("expectedResult", AutomatedReasoningCheckResultMapper::GetNameForAutomatedReasoningCheckResult(m_expectedResult));
  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
