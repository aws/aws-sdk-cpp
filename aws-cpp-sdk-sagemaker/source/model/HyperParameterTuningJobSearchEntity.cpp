/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HyperParameterTuningJobSearchEntity.h>
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

HyperParameterTuningJobSearchEntity::HyperParameterTuningJobSearchEntity() : 
    m_hyperParameterTuningJobNameHasBeenSet(false),
    m_hyperParameterTuningJobArnHasBeenSet(false),
    m_hyperParameterTuningJobConfigHasBeenSet(false),
    m_trainingJobDefinitionHasBeenSet(false),
    m_trainingJobDefinitionsHasBeenSet(false),
    m_hyperParameterTuningJobStatus(HyperParameterTuningJobStatus::NOT_SET),
    m_hyperParameterTuningJobStatusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_hyperParameterTuningEndTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_trainingJobStatusCountersHasBeenSet(false),
    m_objectiveStatusCountersHasBeenSet(false),
    m_bestTrainingJobHasBeenSet(false),
    m_overallBestTrainingJobHasBeenSet(false),
    m_warmStartConfigHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

HyperParameterTuningJobSearchEntity::HyperParameterTuningJobSearchEntity(JsonView jsonValue) : 
    m_hyperParameterTuningJobNameHasBeenSet(false),
    m_hyperParameterTuningJobArnHasBeenSet(false),
    m_hyperParameterTuningJobConfigHasBeenSet(false),
    m_trainingJobDefinitionHasBeenSet(false),
    m_trainingJobDefinitionsHasBeenSet(false),
    m_hyperParameterTuningJobStatus(HyperParameterTuningJobStatus::NOT_SET),
    m_hyperParameterTuningJobStatusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_hyperParameterTuningEndTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_trainingJobStatusCountersHasBeenSet(false),
    m_objectiveStatusCountersHasBeenSet(false),
    m_bestTrainingJobHasBeenSet(false),
    m_overallBestTrainingJobHasBeenSet(false),
    m_warmStartConfigHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

HyperParameterTuningJobSearchEntity& HyperParameterTuningJobSearchEntity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HyperParameterTuningJobName"))
  {
    m_hyperParameterTuningJobName = jsonValue.GetString("HyperParameterTuningJobName");

    m_hyperParameterTuningJobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HyperParameterTuningJobArn"))
  {
    m_hyperParameterTuningJobArn = jsonValue.GetString("HyperParameterTuningJobArn");

    m_hyperParameterTuningJobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HyperParameterTuningJobConfig"))
  {
    m_hyperParameterTuningJobConfig = jsonValue.GetObject("HyperParameterTuningJobConfig");

    m_hyperParameterTuningJobConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrainingJobDefinition"))
  {
    m_trainingJobDefinition = jsonValue.GetObject("TrainingJobDefinition");

    m_trainingJobDefinitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrainingJobDefinitions"))
  {
    Aws::Utils::Array<JsonView> trainingJobDefinitionsJsonList = jsonValue.GetArray("TrainingJobDefinitions");
    for(unsigned trainingJobDefinitionsIndex = 0; trainingJobDefinitionsIndex < trainingJobDefinitionsJsonList.GetLength(); ++trainingJobDefinitionsIndex)
    {
      m_trainingJobDefinitions.push_back(trainingJobDefinitionsJsonList[trainingJobDefinitionsIndex].AsObject());
    }
    m_trainingJobDefinitionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HyperParameterTuningJobStatus"))
  {
    m_hyperParameterTuningJobStatus = HyperParameterTuningJobStatusMapper::GetHyperParameterTuningJobStatusForName(jsonValue.GetString("HyperParameterTuningJobStatus"));

    m_hyperParameterTuningJobStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HyperParameterTuningEndTime"))
  {
    m_hyperParameterTuningEndTime = jsonValue.GetDouble("HyperParameterTuningEndTime");

    m_hyperParameterTuningEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrainingJobStatusCounters"))
  {
    m_trainingJobStatusCounters = jsonValue.GetObject("TrainingJobStatusCounters");

    m_trainingJobStatusCountersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectiveStatusCounters"))
  {
    m_objectiveStatusCounters = jsonValue.GetObject("ObjectiveStatusCounters");

    m_objectiveStatusCountersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BestTrainingJob"))
  {
    m_bestTrainingJob = jsonValue.GetObject("BestTrainingJob");

    m_bestTrainingJobHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OverallBestTrainingJob"))
  {
    m_overallBestTrainingJob = jsonValue.GetObject("OverallBestTrainingJob");

    m_overallBestTrainingJobHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WarmStartConfig"))
  {
    m_warmStartConfig = jsonValue.GetObject("WarmStartConfig");

    m_warmStartConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue HyperParameterTuningJobSearchEntity::Jsonize() const
{
  JsonValue payload;

  if(m_hyperParameterTuningJobNameHasBeenSet)
  {
   payload.WithString("HyperParameterTuningJobName", m_hyperParameterTuningJobName);

  }

  if(m_hyperParameterTuningJobArnHasBeenSet)
  {
   payload.WithString("HyperParameterTuningJobArn", m_hyperParameterTuningJobArn);

  }

  if(m_hyperParameterTuningJobConfigHasBeenSet)
  {
   payload.WithObject("HyperParameterTuningJobConfig", m_hyperParameterTuningJobConfig.Jsonize());

  }

  if(m_trainingJobDefinitionHasBeenSet)
  {
   payload.WithObject("TrainingJobDefinition", m_trainingJobDefinition.Jsonize());

  }

  if(m_trainingJobDefinitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> trainingJobDefinitionsJsonList(m_trainingJobDefinitions.size());
   for(unsigned trainingJobDefinitionsIndex = 0; trainingJobDefinitionsIndex < trainingJobDefinitionsJsonList.GetLength(); ++trainingJobDefinitionsIndex)
   {
     trainingJobDefinitionsJsonList[trainingJobDefinitionsIndex].AsObject(m_trainingJobDefinitions[trainingJobDefinitionsIndex].Jsonize());
   }
   payload.WithArray("TrainingJobDefinitions", std::move(trainingJobDefinitionsJsonList));

  }

  if(m_hyperParameterTuningJobStatusHasBeenSet)
  {
   payload.WithString("HyperParameterTuningJobStatus", HyperParameterTuningJobStatusMapper::GetNameForHyperParameterTuningJobStatus(m_hyperParameterTuningJobStatus));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_hyperParameterTuningEndTimeHasBeenSet)
  {
   payload.WithDouble("HyperParameterTuningEndTime", m_hyperParameterTuningEndTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_trainingJobStatusCountersHasBeenSet)
  {
   payload.WithObject("TrainingJobStatusCounters", m_trainingJobStatusCounters.Jsonize());

  }

  if(m_objectiveStatusCountersHasBeenSet)
  {
   payload.WithObject("ObjectiveStatusCounters", m_objectiveStatusCounters.Jsonize());

  }

  if(m_bestTrainingJobHasBeenSet)
  {
   payload.WithObject("BestTrainingJob", m_bestTrainingJob.Jsonize());

  }

  if(m_overallBestTrainingJobHasBeenSet)
  {
   payload.WithObject("OverallBestTrainingJob", m_overallBestTrainingJob.Jsonize());

  }

  if(m_warmStartConfigHasBeenSet)
  {
   payload.WithObject("WarmStartConfig", m_warmStartConfig.Jsonize());

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
