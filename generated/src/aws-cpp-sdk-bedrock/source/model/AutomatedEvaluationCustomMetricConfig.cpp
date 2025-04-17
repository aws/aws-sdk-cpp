/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedEvaluationCustomMetricConfig.h>
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

AutomatedEvaluationCustomMetricConfig::AutomatedEvaluationCustomMetricConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedEvaluationCustomMetricConfig& AutomatedEvaluationCustomMetricConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("customMetrics"))
  {
    Aws::Utils::Array<JsonView> customMetricsJsonList = jsonValue.GetArray("customMetrics");
    for(unsigned customMetricsIndex = 0; customMetricsIndex < customMetricsJsonList.GetLength(); ++customMetricsIndex)
    {
      m_customMetrics.push_back(customMetricsJsonList[customMetricsIndex].AsObject());
    }
    m_customMetricsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("evaluatorModelConfig"))
  {
    m_evaluatorModelConfig = jsonValue.GetObject("evaluatorModelConfig");
    m_evaluatorModelConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedEvaluationCustomMetricConfig::Jsonize() const
{
  JsonValue payload;

  if(m_customMetricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customMetricsJsonList(m_customMetrics.size());
   for(unsigned customMetricsIndex = 0; customMetricsIndex < customMetricsJsonList.GetLength(); ++customMetricsIndex)
   {
     customMetricsJsonList[customMetricsIndex].AsObject(m_customMetrics[customMetricsIndex].Jsonize());
   }
   payload.WithArray("customMetrics", std::move(customMetricsJsonList));

  }

  if(m_evaluatorModelConfigHasBeenSet)
  {
   payload.WithObject("evaluatorModelConfig", m_evaluatorModelConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
