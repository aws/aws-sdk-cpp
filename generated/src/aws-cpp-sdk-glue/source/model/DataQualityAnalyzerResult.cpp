/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DataQualityAnalyzerResult.h>
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

DataQualityAnalyzerResult::DataQualityAnalyzerResult() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_evaluationMessageHasBeenSet(false),
    m_evaluatedMetricsHasBeenSet(false)
{
}

DataQualityAnalyzerResult::DataQualityAnalyzerResult(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_evaluationMessageHasBeenSet(false),
    m_evaluatedMetricsHasBeenSet(false)
{
  *this = jsonValue;
}

DataQualityAnalyzerResult& DataQualityAnalyzerResult::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("EvaluatedMetrics"))
  {
    Aws::Map<Aws::String, JsonView> evaluatedMetricsJsonMap = jsonValue.GetObject("EvaluatedMetrics").GetAllObjects();
    for(auto& evaluatedMetricsItem : evaluatedMetricsJsonMap)
    {
      m_evaluatedMetrics[evaluatedMetricsItem.first] = evaluatedMetricsItem.second.AsDouble();
    }
    m_evaluatedMetricsHasBeenSet = true;
  }

  return *this;
}

JsonValue DataQualityAnalyzerResult::Jsonize() const
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

  if(m_evaluatedMetricsHasBeenSet)
  {
   JsonValue evaluatedMetricsJsonMap;
   for(auto& evaluatedMetricsItem : m_evaluatedMetrics)
   {
     evaluatedMetricsJsonMap.WithDouble(evaluatedMetricsItem.first, evaluatedMetricsItem.second);
   }
   payload.WithObject("EvaluatedMetrics", std::move(evaluatedMetricsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
