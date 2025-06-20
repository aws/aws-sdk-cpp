/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DataQualityRuleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

DataQualityRuleResult::DataQualityRuleResult(JsonView jsonValue)
{
  *this = jsonValue;
}

DataQualityRuleResult& DataQualityRuleResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EvaluationMessage"))
  {
    m_evaluationMessage = jsonValue.GetString("EvaluationMessage");
    m_evaluationMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Result"))
  {
    m_result = DataQualityRuleResultStatusMapper::GetDataQualityRuleResultStatusForName(jsonValue.GetString("Result"));
    m_resultHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EvaluatedMetrics"))
  {
    Aws::Map<Aws::String, JsonView> evaluatedMetricsJsonMap = jsonValue.GetObject("EvaluatedMetrics").GetAllObjects();
    for(auto& evaluatedMetricsItem : evaluatedMetricsJsonMap)
    {
      m_evaluatedMetrics[evaluatedMetricsItem.first] = evaluatedMetricsItem.second.AsDouble();
    }
    m_evaluatedMetricsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EvaluatedRule"))
  {
    m_evaluatedRule = jsonValue.GetString("EvaluatedRule");
    m_evaluatedRuleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RuleMetrics"))
  {
    Aws::Map<Aws::String, JsonView> ruleMetricsJsonMap = jsonValue.GetObject("RuleMetrics").GetAllObjects();
    for(auto& ruleMetricsItem : ruleMetricsJsonMap)
    {
      m_ruleMetrics[ruleMetricsItem.first] = ruleMetricsItem.second.AsDouble();
    }
    m_ruleMetricsHasBeenSet = true;
  }
  return *this;
}

JsonValue DataQualityRuleResult::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_evaluationMessageHasBeenSet)
  {
   payload.WithString("EvaluationMessage", m_evaluationMessage);

  }

  if(m_resultHasBeenSet)
  {
   payload.WithString("Result", DataQualityRuleResultStatusMapper::GetNameForDataQualityRuleResultStatus(m_result));
  }

  if(m_evaluatedMetricsHasBeenSet)
  {
   JsonValue evaluatedMetricsJsonMap;
   for(auto& evaluatedMetricsItem : m_evaluatedMetrics)
   {
     evaluatedMetricsJsonMap.WithDouble(evaluatedMetricsItem.first, evaluatedMetricsItem.second);
   }
   payload.WithObject("EvaluatedMetrics", std::move(evaluatedMetricsJsonMap));

  }

  if(m_evaluatedRuleHasBeenSet)
  {
   payload.WithString("EvaluatedRule", m_evaluatedRule);

  }

  if(m_ruleMetricsHasBeenSet)
  {
   JsonValue ruleMetricsJsonMap;
   for(auto& ruleMetricsItem : m_ruleMetrics)
   {
     ruleMetricsJsonMap.WithDouble(ruleMetricsItem.first, ruleMetricsItem.second);
   }
   payload.WithObject("RuleMetrics", std::move(ruleMetricsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
