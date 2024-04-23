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

AutomatedEvaluationConfig::AutomatedEvaluationConfig() : 
    m_datasetMetricConfigsHasBeenSet(false)
{
}

AutomatedEvaluationConfig::AutomatedEvaluationConfig(JsonView jsonValue) : 
    m_datasetMetricConfigsHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
