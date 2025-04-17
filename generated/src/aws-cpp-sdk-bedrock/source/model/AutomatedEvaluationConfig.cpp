/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedEvaluationConfig.h>
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

AutomatedEvaluationConfig::AutomatedEvaluationConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedEvaluationConfig& AutomatedEvaluationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("datasetMetricConfigs"))
  {
    Aws::Utils::Array<JsonView> datasetMetricConfigsJsonList = jsonValue.GetArray("datasetMetricConfigs");
    for(unsigned datasetMetricConfigsIndex = 0; datasetMetricConfigsIndex < datasetMetricConfigsJsonList.GetLength(); ++datasetMetricConfigsIndex)
    {
      m_datasetMetricConfigs.push_back(datasetMetricConfigsJsonList[datasetMetricConfigsIndex].AsObject());
    }
    m_datasetMetricConfigsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("evaluatorModelConfig"))
  {
    m_evaluatorModelConfig = jsonValue.GetObject("evaluatorModelConfig");
    m_evaluatorModelConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customMetricConfig"))
  {
    m_customMetricConfig = jsonValue.GetObject("customMetricConfig");
    m_customMetricConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedEvaluationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_datasetMetricConfigsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> datasetMetricConfigsJsonList(m_datasetMetricConfigs.size());
   for(unsigned datasetMetricConfigsIndex = 0; datasetMetricConfigsIndex < datasetMetricConfigsJsonList.GetLength(); ++datasetMetricConfigsIndex)
   {
     datasetMetricConfigsJsonList[datasetMetricConfigsIndex].AsObject(m_datasetMetricConfigs[datasetMetricConfigsIndex].Jsonize());
   }
   payload.WithArray("datasetMetricConfigs", std::move(datasetMetricConfigsJsonList));

  }

  if(m_evaluatorModelConfigHasBeenSet)
  {
   payload.WithObject("evaluatorModelConfig", m_evaluatorModelConfig.Jsonize());

  }

  if(m_customMetricConfigHasBeenSet)
  {
   payload.WithObject("customMetricConfig", m_customMetricConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
