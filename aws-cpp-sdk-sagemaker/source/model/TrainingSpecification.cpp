/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrainingSpecification.h>
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

TrainingSpecification::TrainingSpecification() : 
    m_trainingImageHasBeenSet(false),
    m_trainingImageDigestHasBeenSet(false),
    m_supportedHyperParametersHasBeenSet(false),
    m_supportedTrainingInstanceTypesHasBeenSet(false),
    m_supportsDistributedTraining(false),
    m_supportsDistributedTrainingHasBeenSet(false),
    m_metricDefinitionsHasBeenSet(false),
    m_trainingChannelsHasBeenSet(false),
    m_supportedTuningJobObjectiveMetricsHasBeenSet(false)
{
}

TrainingSpecification::TrainingSpecification(JsonView jsonValue) : 
    m_trainingImageHasBeenSet(false),
    m_trainingImageDigestHasBeenSet(false),
    m_supportedHyperParametersHasBeenSet(false),
    m_supportedTrainingInstanceTypesHasBeenSet(false),
    m_supportsDistributedTraining(false),
    m_supportsDistributedTrainingHasBeenSet(false),
    m_metricDefinitionsHasBeenSet(false),
    m_trainingChannelsHasBeenSet(false),
    m_supportedTuningJobObjectiveMetricsHasBeenSet(false)
{
  *this = jsonValue;
}

TrainingSpecification& TrainingSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TrainingImage"))
  {
    m_trainingImage = jsonValue.GetString("TrainingImage");

    m_trainingImageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrainingImageDigest"))
  {
    m_trainingImageDigest = jsonValue.GetString("TrainingImageDigest");

    m_trainingImageDigestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportedHyperParameters"))
  {
    Aws::Utils::Array<JsonView> supportedHyperParametersJsonList = jsonValue.GetArray("SupportedHyperParameters");
    for(unsigned supportedHyperParametersIndex = 0; supportedHyperParametersIndex < supportedHyperParametersJsonList.GetLength(); ++supportedHyperParametersIndex)
    {
      m_supportedHyperParameters.push_back(supportedHyperParametersJsonList[supportedHyperParametersIndex].AsObject());
    }
    m_supportedHyperParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportedTrainingInstanceTypes"))
  {
    Aws::Utils::Array<JsonView> supportedTrainingInstanceTypesJsonList = jsonValue.GetArray("SupportedTrainingInstanceTypes");
    for(unsigned supportedTrainingInstanceTypesIndex = 0; supportedTrainingInstanceTypesIndex < supportedTrainingInstanceTypesJsonList.GetLength(); ++supportedTrainingInstanceTypesIndex)
    {
      m_supportedTrainingInstanceTypes.push_back(TrainingInstanceTypeMapper::GetTrainingInstanceTypeForName(supportedTrainingInstanceTypesJsonList[supportedTrainingInstanceTypesIndex].AsString()));
    }
    m_supportedTrainingInstanceTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportsDistributedTraining"))
  {
    m_supportsDistributedTraining = jsonValue.GetBool("SupportsDistributedTraining");

    m_supportsDistributedTrainingHasBeenSet = true;
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

  if(jsonValue.ValueExists("TrainingChannels"))
  {
    Aws::Utils::Array<JsonView> trainingChannelsJsonList = jsonValue.GetArray("TrainingChannels");
    for(unsigned trainingChannelsIndex = 0; trainingChannelsIndex < trainingChannelsJsonList.GetLength(); ++trainingChannelsIndex)
    {
      m_trainingChannels.push_back(trainingChannelsJsonList[trainingChannelsIndex].AsObject());
    }
    m_trainingChannelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportedTuningJobObjectiveMetrics"))
  {
    Aws::Utils::Array<JsonView> supportedTuningJobObjectiveMetricsJsonList = jsonValue.GetArray("SupportedTuningJobObjectiveMetrics");
    for(unsigned supportedTuningJobObjectiveMetricsIndex = 0; supportedTuningJobObjectiveMetricsIndex < supportedTuningJobObjectiveMetricsJsonList.GetLength(); ++supportedTuningJobObjectiveMetricsIndex)
    {
      m_supportedTuningJobObjectiveMetrics.push_back(supportedTuningJobObjectiveMetricsJsonList[supportedTuningJobObjectiveMetricsIndex].AsObject());
    }
    m_supportedTuningJobObjectiveMetricsHasBeenSet = true;
  }

  return *this;
}

JsonValue TrainingSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_trainingImageHasBeenSet)
  {
   payload.WithString("TrainingImage", m_trainingImage);

  }

  if(m_trainingImageDigestHasBeenSet)
  {
   payload.WithString("TrainingImageDigest", m_trainingImageDigest);

  }

  if(m_supportedHyperParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedHyperParametersJsonList(m_supportedHyperParameters.size());
   for(unsigned supportedHyperParametersIndex = 0; supportedHyperParametersIndex < supportedHyperParametersJsonList.GetLength(); ++supportedHyperParametersIndex)
   {
     supportedHyperParametersJsonList[supportedHyperParametersIndex].AsObject(m_supportedHyperParameters[supportedHyperParametersIndex].Jsonize());
   }
   payload.WithArray("SupportedHyperParameters", std::move(supportedHyperParametersJsonList));

  }

  if(m_supportedTrainingInstanceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedTrainingInstanceTypesJsonList(m_supportedTrainingInstanceTypes.size());
   for(unsigned supportedTrainingInstanceTypesIndex = 0; supportedTrainingInstanceTypesIndex < supportedTrainingInstanceTypesJsonList.GetLength(); ++supportedTrainingInstanceTypesIndex)
   {
     supportedTrainingInstanceTypesJsonList[supportedTrainingInstanceTypesIndex].AsString(TrainingInstanceTypeMapper::GetNameForTrainingInstanceType(m_supportedTrainingInstanceTypes[supportedTrainingInstanceTypesIndex]));
   }
   payload.WithArray("SupportedTrainingInstanceTypes", std::move(supportedTrainingInstanceTypesJsonList));

  }

  if(m_supportsDistributedTrainingHasBeenSet)
  {
   payload.WithBool("SupportsDistributedTraining", m_supportsDistributedTraining);

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

  if(m_trainingChannelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> trainingChannelsJsonList(m_trainingChannels.size());
   for(unsigned trainingChannelsIndex = 0; trainingChannelsIndex < trainingChannelsJsonList.GetLength(); ++trainingChannelsIndex)
   {
     trainingChannelsJsonList[trainingChannelsIndex].AsObject(m_trainingChannels[trainingChannelsIndex].Jsonize());
   }
   payload.WithArray("TrainingChannels", std::move(trainingChannelsJsonList));

  }

  if(m_supportedTuningJobObjectiveMetricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedTuningJobObjectiveMetricsJsonList(m_supportedTuningJobObjectiveMetrics.size());
   for(unsigned supportedTuningJobObjectiveMetricsIndex = 0; supportedTuningJobObjectiveMetricsIndex < supportedTuningJobObjectiveMetricsJsonList.GetLength(); ++supportedTuningJobObjectiveMetricsIndex)
   {
     supportedTuningJobObjectiveMetricsJsonList[supportedTuningJobObjectiveMetricsIndex].AsObject(m_supportedTuningJobObjectiveMetrics[supportedTuningJobObjectiveMetricsIndex].Jsonize());
   }
   payload.WithArray("SupportedTuningJobObjectiveMetrics", std::move(supportedTuningJobObjectiveMetricsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
