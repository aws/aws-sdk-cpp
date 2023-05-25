/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/EvaluatedRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

EvaluatedRule::EvaluatedRule() : 
    m_ruleIdHasBeenSet(false),
    m_ruleVersionHasBeenSet(false),
    m_expressionHasBeenSet(false),
    m_expressionWithValuesHasBeenSet(false),
    m_outcomesHasBeenSet(false),
    m_evaluated(false),
    m_evaluatedHasBeenSet(false),
    m_matched(false),
    m_matchedHasBeenSet(false)
{
}

EvaluatedRule::EvaluatedRule(JsonView jsonValue) : 
    m_ruleIdHasBeenSet(false),
    m_ruleVersionHasBeenSet(false),
    m_expressionHasBeenSet(false),
    m_expressionWithValuesHasBeenSet(false),
    m_outcomesHasBeenSet(false),
    m_evaluated(false),
    m_evaluatedHasBeenSet(false),
    m_matched(false),
    m_matchedHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluatedRule& EvaluatedRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ruleId"))
  {
    m_ruleId = jsonValue.GetString("ruleId");

    m_ruleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ruleVersion"))
  {
    m_ruleVersion = jsonValue.GetString("ruleVersion");

    m_ruleVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expression"))
  {
    m_expression = jsonValue.GetString("expression");

    m_expressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expressionWithValues"))
  {
    m_expressionWithValues = jsonValue.GetString("expressionWithValues");

    m_expressionWithValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outcomes"))
  {
    Aws::Utils::Array<JsonView> outcomesJsonList = jsonValue.GetArray("outcomes");
    for(unsigned outcomesIndex = 0; outcomesIndex < outcomesJsonList.GetLength(); ++outcomesIndex)
    {
      m_outcomes.push_back(outcomesJsonList[outcomesIndex].AsString());
    }
    m_outcomesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("evaluated"))
  {
    m_evaluated = jsonValue.GetBool("evaluated");

    m_evaluatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("matched"))
  {
    m_matched = jsonValue.GetBool("matched");

    m_matchedHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluatedRule::Jsonize() const
{
  JsonValue payload;

  if(m_ruleIdHasBeenSet)
  {
   payload.WithString("ruleId", m_ruleId);

  }

  if(m_ruleVersionHasBeenSet)
  {
   payload.WithString("ruleVersion", m_ruleVersion);

  }

  if(m_expressionHasBeenSet)
  {
   payload.WithString("expression", m_expression);

  }

  if(m_expressionWithValuesHasBeenSet)
  {
   payload.WithString("expressionWithValues", m_expressionWithValues);

  }

  if(m_outcomesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outcomesJsonList(m_outcomes.size());
   for(unsigned outcomesIndex = 0; outcomesIndex < outcomesJsonList.GetLength(); ++outcomesIndex)
   {
     outcomesJsonList[outcomesIndex].AsString(m_outcomes[outcomesIndex]);
   }
   payload.WithArray("outcomes", std::move(outcomesJsonList));

  }

  if(m_evaluatedHasBeenSet)
  {
   payload.WithBool("evaluated", m_evaluated);

  }

  if(m_matchedHasBeenSet)
  {
   payload.WithBool("matched", m_matched);

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
