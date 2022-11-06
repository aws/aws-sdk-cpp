/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AlgorithmSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

AlgorithmSpecification::AlgorithmSpecification() : 
    m_trainingImageHasBeenSet(false),
    m_algorithmNameHasBeenSet(false),
    m_trainingInputMode(TrainingInputMode::NOT_SET),
    m_trainingInputModeHasBeenSet(false),
    m_metricDefinitionsHasBeenSet(false),
    m_enableSageMakerMetricsTimeSeries(false),
    m_enableSageMakerMetricsTimeSeriesHasBeenSet(false),
    m_containerEntrypointHasBeenSet(false),
    m_containerArgumentsHasBeenSet(false)
{
}

AlgorithmSpecification::AlgorithmSpecification(JsonView jsonValue) : 
    m_trainingImageHasBeenSet(false),
    m_algorithmNameHasBeenSet(false),
    m_trainingInputMode(TrainingInputMode::NOT_SET),
    m_trainingInputModeHasBeenSet(false),
    m_metricDefinitionsHasBeenSet(false),
    m_enableSageMakerMetricsTimeSeries(false),
    m_enableSageMakerMetricsTimeSeriesHasBeenSet(false),
    m_containerEntrypointHasBeenSet(false),
    m_containerArgumentsHasBeenSet(false)
{
  *this = jsonValue;
}

AlgorithmSpecification& AlgorithmSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TrainingImage"))
  {
    m_trainingImage = jsonValue.GetString("TrainingImage");

    m_trainingImageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlgorithmName"))
  {
    m_algorithmName = jsonValue.GetString("AlgorithmName");

    m_algorithmNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrainingInputMode"))
  {
    m_trainingInputMode = TrainingInputModeMapper::GetTrainingInputModeForName(jsonValue.GetString("TrainingInputMode"));

    m_trainingInputModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricDefinitions"))
  {
    Aws::Utils::Array<JsonView> metricDefinitionsJsonList = jsonValue.GetArray("MetricDefinitions");
    for(unsigned metricDefinitionsIndex = 0; metricDefinitionsIndex < metricDefinitionsJsonList.GetLength(); ++metricDefinitionsIndex)
    {
      m_metricDefinitions.push_back(metricDefinitionsJsonList[metricDefinitionsIndex].AsObject());
    }
    m_metricDefinitionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableSageMakerMetricsTimeSeries"))
  {
    m_enableSageMakerMetricsTimeSeries = jsonValue.GetBool("EnableSageMakerMetricsTimeSeries");

    m_enableSageMakerMetricsTimeSeriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContainerEntrypoint"))
  {
    Aws::Utils::Array<JsonView> containerEntrypointJsonList = jsonValue.GetArray("ContainerEntrypoint");
    for(unsigned containerEntrypointIndex = 0; containerEntrypointIndex < containerEntrypointJsonList.GetLength(); ++containerEntrypointIndex)
    {
      m_containerEntrypoint.push_back(containerEntrypointJsonList[containerEntrypointIndex].AsString());
    }
    m_containerEntrypointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContainerArguments"))
  {
    Aws::Utils::Array<JsonView> containerArgumentsJsonList = jsonValue.GetArray("ContainerArguments");
    for(unsigned containerArgumentsIndex = 0; containerArgumentsIndex < containerArgumentsJsonList.GetLength(); ++containerArgumentsIndex)
    {
      m_containerArguments.push_back(containerArgumentsJsonList[containerArgumentsIndex].AsString());
    }
    m_containerArgumentsHasBeenSet = true;
  }

  return *this;
}

JsonValue AlgorithmSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_trainingImageHasBeenSet)
  {
   payload.WithString("TrainingImage", m_trainingImage);

  }

  if(m_algorithmNameHasBeenSet)
  {
   payload.WithString("AlgorithmName", m_algorithmName);

  }

  if(m_trainingInputModeHasBeenSet)
  {
   payload.WithString("TrainingInputMode", TrainingInputModeMapper::GetNameForTrainingInputMode(m_trainingInputMode));
  }

  if(m_metricDefinitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricDefinitionsJsonList(m_metricDefinitions.size());
   for(unsigned metricDefinitionsIndex = 0; metricDefinitionsIndex < metricDefinitionsJsonList.GetLength(); ++metricDefinitionsIndex)
   {
     metricDefinitionsJsonList[metricDefinitionsIndex].AsObject(m_metricDefinitions[metricDefinitionsIndex].Jsonize());
   }
   payload.WithArray("MetricDefinitions", std::move(metricDefinitionsJsonList));

  }

  if(m_enableSageMakerMetricsTimeSeriesHasBeenSet)
  {
   payload.WithBool("EnableSageMakerMetricsTimeSeries", m_enableSageMakerMetricsTimeSeries);

  }

  if(m_containerEntrypointHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> containerEntrypointJsonList(m_containerEntrypoint.size());
   for(unsigned containerEntrypointIndex = 0; containerEntrypointIndex < containerEntrypointJsonList.GetLength(); ++containerEntrypointIndex)
   {
     containerEntrypointJsonList[containerEntrypointIndex].AsString(m_containerEntrypoint[containerEntrypointIndex]);
   }
   payload.WithArray("ContainerEntrypoint", std::move(containerEntrypointJsonList));

  }

  if(m_containerArgumentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> containerArgumentsJsonList(m_containerArguments.size());
   for(unsigned containerArgumentsIndex = 0; containerArgumentsIndex < containerArgumentsJsonList.GetLength(); ++containerArgumentsIndex)
   {
     containerArgumentsJsonList[containerArgumentsIndex].AsString(m_containerArguments[containerArgumentsIndex]);
   }
   payload.WithArray("ContainerArguments", std::move(containerArgumentsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
