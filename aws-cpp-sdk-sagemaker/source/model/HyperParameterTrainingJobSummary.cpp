﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/sagemaker/model/HyperParameterTrainingJobSummary.h>
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

HyperParameterTrainingJobSummary::HyperParameterTrainingJobSummary() : 
    m_trainingJobNameHasBeenSet(false),
    m_trainingJobArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_trainingStartTimeHasBeenSet(false),
    m_trainingEndTimeHasBeenSet(false),
    m_trainingJobStatus(TrainingJobStatus::NOT_SET),
    m_trainingJobStatusHasBeenSet(false),
    m_tunedHyperParametersHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_finalHyperParameterTuningJobObjectiveMetricHasBeenSet(false),
    m_objectiveStatus(ObjectiveStatus::NOT_SET),
    m_objectiveStatusHasBeenSet(false)
{
}

HyperParameterTrainingJobSummary::HyperParameterTrainingJobSummary(JsonView jsonValue) : 
    m_trainingJobNameHasBeenSet(false),
    m_trainingJobArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_trainingStartTimeHasBeenSet(false),
    m_trainingEndTimeHasBeenSet(false),
    m_trainingJobStatus(TrainingJobStatus::NOT_SET),
    m_trainingJobStatusHasBeenSet(false),
    m_tunedHyperParametersHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_finalHyperParameterTuningJobObjectiveMetricHasBeenSet(false),
    m_objectiveStatus(ObjectiveStatus::NOT_SET),
    m_objectiveStatusHasBeenSet(false)
{
  *this = jsonValue;
}

HyperParameterTrainingJobSummary& HyperParameterTrainingJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TrainingJobName"))
  {
    m_trainingJobName = jsonValue.GetString("TrainingJobName");

    m_trainingJobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrainingJobArn"))
  {
    m_trainingJobArn = jsonValue.GetString("TrainingJobArn");

    m_trainingJobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrainingStartTime"))
  {
    m_trainingStartTime = jsonValue.GetDouble("TrainingStartTime");

    m_trainingStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrainingEndTime"))
  {
    m_trainingEndTime = jsonValue.GetDouble("TrainingEndTime");

    m_trainingEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrainingJobStatus"))
  {
    m_trainingJobStatus = TrainingJobStatusMapper::GetTrainingJobStatusForName(jsonValue.GetString("TrainingJobStatus"));

    m_trainingJobStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TunedHyperParameters"))
  {
    Aws::Map<Aws::String, JsonView> tunedHyperParametersJsonMap = jsonValue.GetObject("TunedHyperParameters").GetAllObjects();
    for(auto& tunedHyperParametersItem : tunedHyperParametersJsonMap)
    {
      m_tunedHyperParameters[tunedHyperParametersItem.first] = tunedHyperParametersItem.second.AsString();
    }
    m_tunedHyperParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FinalHyperParameterTuningJobObjectiveMetric"))
  {
    m_finalHyperParameterTuningJobObjectiveMetric = jsonValue.GetObject("FinalHyperParameterTuningJobObjectiveMetric");

    m_finalHyperParameterTuningJobObjectiveMetricHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectiveStatus"))
  {
    m_objectiveStatus = ObjectiveStatusMapper::GetObjectiveStatusForName(jsonValue.GetString("ObjectiveStatus"));

    m_objectiveStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue HyperParameterTrainingJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_trainingJobNameHasBeenSet)
  {
   payload.WithString("TrainingJobName", m_trainingJobName);

  }

  if(m_trainingJobArnHasBeenSet)
  {
   payload.WithString("TrainingJobArn", m_trainingJobArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_trainingStartTimeHasBeenSet)
  {
   payload.WithDouble("TrainingStartTime", m_trainingStartTime.SecondsWithMSPrecision());
  }

  if(m_trainingEndTimeHasBeenSet)
  {
   payload.WithDouble("TrainingEndTime", m_trainingEndTime.SecondsWithMSPrecision());
  }

  if(m_trainingJobStatusHasBeenSet)
  {
   payload.WithString("TrainingJobStatus", TrainingJobStatusMapper::GetNameForTrainingJobStatus(m_trainingJobStatus));
  }

  if(m_tunedHyperParametersHasBeenSet)
  {
   JsonValue tunedHyperParametersJsonMap;
   for(auto& tunedHyperParametersItem : m_tunedHyperParameters)
   {
     tunedHyperParametersJsonMap.WithString(tunedHyperParametersItem.first, tunedHyperParametersItem.second);
   }
   payload.WithObject("TunedHyperParameters", std::move(tunedHyperParametersJsonMap));

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  if(m_finalHyperParameterTuningJobObjectiveMetricHasBeenSet)
  {
   payload.WithObject("FinalHyperParameterTuningJobObjectiveMetric", m_finalHyperParameterTuningJobObjectiveMetric.Jsonize());

  }

  if(m_objectiveStatusHasBeenSet)
  {
   payload.WithString("ObjectiveStatus", ObjectiveStatusMapper::GetNameForObjectiveStatus(m_objectiveStatus));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
