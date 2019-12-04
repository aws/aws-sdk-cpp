/*
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

#include <aws/rekognition/model/ProjectVersionDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

ProjectVersionDescription::ProjectVersionDescription() : 
    m_projectVersionArnHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_minInferenceUnits(0),
    m_minInferenceUnitsHasBeenSet(false),
    m_status(ProjectVersionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_billableTrainingTimeInSeconds(0),
    m_billableTrainingTimeInSecondsHasBeenSet(false),
    m_trainingEndTimestampHasBeenSet(false),
    m_outputConfigHasBeenSet(false),
    m_trainingDataResultHasBeenSet(false),
    m_testingDataResultHasBeenSet(false),
    m_evaluationResultHasBeenSet(false)
{
}

ProjectVersionDescription::ProjectVersionDescription(JsonView jsonValue) : 
    m_projectVersionArnHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_minInferenceUnits(0),
    m_minInferenceUnitsHasBeenSet(false),
    m_status(ProjectVersionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_billableTrainingTimeInSeconds(0),
    m_billableTrainingTimeInSecondsHasBeenSet(false),
    m_trainingEndTimestampHasBeenSet(false),
    m_outputConfigHasBeenSet(false),
    m_trainingDataResultHasBeenSet(false),
    m_testingDataResultHasBeenSet(false),
    m_evaluationResultHasBeenSet(false)
{
  *this = jsonValue;
}

ProjectVersionDescription& ProjectVersionDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProjectVersionArn"))
  {
    m_projectVersionArn = jsonValue.GetString("ProjectVersionArn");

    m_projectVersionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetDouble("CreationTimestamp");

    m_creationTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinInferenceUnits"))
  {
    m_minInferenceUnits = jsonValue.GetInteger("MinInferenceUnits");

    m_minInferenceUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ProjectVersionStatusMapper::GetProjectVersionStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BillableTrainingTimeInSeconds"))
  {
    m_billableTrainingTimeInSeconds = jsonValue.GetInt64("BillableTrainingTimeInSeconds");

    m_billableTrainingTimeInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrainingEndTimestamp"))
  {
    m_trainingEndTimestamp = jsonValue.GetDouble("TrainingEndTimestamp");

    m_trainingEndTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputConfig"))
  {
    m_outputConfig = jsonValue.GetObject("OutputConfig");

    m_outputConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrainingDataResult"))
  {
    m_trainingDataResult = jsonValue.GetObject("TrainingDataResult");

    m_trainingDataResultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TestingDataResult"))
  {
    m_testingDataResult = jsonValue.GetObject("TestingDataResult");

    m_testingDataResultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluationResult"))
  {
    m_evaluationResult = jsonValue.GetObject("EvaluationResult");

    m_evaluationResultHasBeenSet = true;
  }

  return *this;
}

JsonValue ProjectVersionDescription::Jsonize() const
{
  JsonValue payload;

  if(m_projectVersionArnHasBeenSet)
  {
   payload.WithString("ProjectVersionArn", m_projectVersionArn);

  }

  if(m_creationTimestampHasBeenSet)
  {
   payload.WithDouble("CreationTimestamp", m_creationTimestamp.SecondsWithMSPrecision());
  }

  if(m_minInferenceUnitsHasBeenSet)
  {
   payload.WithInteger("MinInferenceUnits", m_minInferenceUnits);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ProjectVersionStatusMapper::GetNameForProjectVersionStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_billableTrainingTimeInSecondsHasBeenSet)
  {
   payload.WithInt64("BillableTrainingTimeInSeconds", m_billableTrainingTimeInSeconds);

  }

  if(m_trainingEndTimestampHasBeenSet)
  {
   payload.WithDouble("TrainingEndTimestamp", m_trainingEndTimestamp.SecondsWithMSPrecision());
  }

  if(m_outputConfigHasBeenSet)
  {
   payload.WithObject("OutputConfig", m_outputConfig.Jsonize());

  }

  if(m_trainingDataResultHasBeenSet)
  {
   payload.WithObject("TrainingDataResult", m_trainingDataResult.Jsonize());

  }

  if(m_testingDataResultHasBeenSet)
  {
   payload.WithObject("TestingDataResult", m_testingDataResult.Jsonize());

  }

  if(m_evaluationResultHasBeenSet)
  {
   payload.WithObject("EvaluationResult", m_evaluationResult.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
