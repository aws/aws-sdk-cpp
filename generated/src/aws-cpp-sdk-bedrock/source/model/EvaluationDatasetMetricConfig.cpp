/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/EvaluationDatasetMetricConfig.h>
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

EvaluationDatasetMetricConfig::EvaluationDatasetMetricConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

EvaluationDatasetMetricConfig& EvaluationDatasetMetricConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("taskType"))
  {
    m_taskType = EvaluationTaskTypeMapper::GetEvaluationTaskTypeForName(jsonValue.GetString("taskType"));
    m_taskTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataset"))
  {
    m_dataset = jsonValue.GetObject("dataset");
    m_datasetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("metricNames"))
  {
    Aws::Utils::Array<JsonView> metricNamesJsonList = jsonValue.GetArray("metricNames");
    for(unsigned metricNamesIndex = 0; metricNamesIndex < metricNamesJsonList.GetLength(); ++metricNamesIndex)
    {
      m_metricNames.push_back(metricNamesJsonList[metricNamesIndex].AsString());
    }
    m_metricNamesHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationDatasetMetricConfig::Jsonize() const
{
  JsonValue payload;

  if(m_taskTypeHasBeenSet)
  {
   payload.WithString("taskType", EvaluationTaskTypeMapper::GetNameForEvaluationTaskType(m_taskType));
  }

  if(m_datasetHasBeenSet)
  {
   payload.WithObject("dataset", m_dataset.Jsonize());

  }

  if(m_metricNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricNamesJsonList(m_metricNames.size());
   for(unsigned metricNamesIndex = 0; metricNamesIndex < metricNamesJsonList.GetLength(); ++metricNamesIndex)
   {
     metricNamesJsonList[metricNamesIndex].AsString(m_metricNames[metricNamesIndex]);
   }
   payload.WithArray("metricNames", std::move(metricNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
