/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/HumanEvaluationConfig.h>
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

HumanEvaluationConfig::HumanEvaluationConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

HumanEvaluationConfig& HumanEvaluationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("humanWorkflowConfig"))
  {
    m_humanWorkflowConfig = jsonValue.GetObject("humanWorkflowConfig");
    m_humanWorkflowConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customMetrics"))
  {
    Aws::Utils::Array<JsonView> customMetricsJsonList = jsonValue.GetArray("customMetrics");
    for(unsigned customMetricsIndex = 0; customMetricsIndex < customMetricsJsonList.GetLength(); ++customMetricsIndex)
    {
      m_customMetrics.push_back(customMetricsJsonList[customMetricsIndex].AsObject());
    }
    m_customMetricsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("datasetMetricConfigs"))
  {
    Aws::Utils::Array<JsonView> datasetMetricConfigsJsonList = jsonValue.GetArray("datasetMetricConfigs");
    for(unsigned datasetMetricConfigsIndex = 0; datasetMetricConfigsIndex < datasetMetricConfigsJsonList.GetLength(); ++datasetMetricConfigsIndex)
    {
      m_datasetMetricConfigs.push_back(datasetMetricConfigsJsonList[datasetMetricConfigsIndex].AsObject());
    }
    m_datasetMetricConfigsHasBeenSet = true;
  }
  return *this;
}

JsonValue HumanEvaluationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_humanWorkflowConfigHasBeenSet)
  {
   payload.WithObject("humanWorkflowConfig", m_humanWorkflowConfig.Jsonize());

  }

  if(m_customMetricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customMetricsJsonList(m_customMetrics.size());
   for(unsigned customMetricsIndex = 0; customMetricsIndex < customMetricsJsonList.GetLength(); ++customMetricsIndex)
   {
     customMetricsJsonList[customMetricsIndex].AsObject(m_customMetrics[customMetricsIndex].Jsonize());
   }
   payload.WithArray("customMetrics", std::move(customMetricsJsonList));

  }

  if(m_datasetMetricConfigsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> datasetMetricConfigsJsonList(m_datasetMetricConfigs.size());
   for(unsigned datasetMetricConfigsIndex = 0; datasetMetricConfigsIndex < datasetMetricConfigsJsonList.GetLength(); ++datasetMetricConfigsIndex)
   {
     datasetMetricConfigsJsonList[datasetMetricConfigsIndex].AsObject(m_datasetMetricConfigs[datasetMetricConfigsIndex].Jsonize());
   }
   payload.WithArray("datasetMetricConfigs", std::move(datasetMetricConfigsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
