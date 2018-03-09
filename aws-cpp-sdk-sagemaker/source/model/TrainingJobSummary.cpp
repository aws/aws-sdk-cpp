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

#include <aws/sagemaker/model/TrainingJobSummary.h>
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

TrainingJobSummary::TrainingJobSummary() : 
    m_trainingJobNameHasBeenSet(false),
    m_trainingJobArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_trainingEndTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_trainingJobStatus(TrainingJobStatus::NOT_SET),
    m_trainingJobStatusHasBeenSet(false)
{
}

TrainingJobSummary::TrainingJobSummary(const JsonValue& jsonValue) : 
    m_trainingJobNameHasBeenSet(false),
    m_trainingJobArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_trainingEndTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_trainingJobStatus(TrainingJobStatus::NOT_SET),
    m_trainingJobStatusHasBeenSet(false)
{
  *this = jsonValue;
}

TrainingJobSummary& TrainingJobSummary::operator =(const JsonValue& jsonValue)
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

  if(jsonValue.ValueExists("TrainingEndTime"))
  {
    m_trainingEndTime = jsonValue.GetDouble("TrainingEndTime");

    m_trainingEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrainingJobStatus"))
  {
    m_trainingJobStatus = TrainingJobStatusMapper::GetTrainingJobStatusForName(jsonValue.GetString("TrainingJobStatus"));

    m_trainingJobStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue TrainingJobSummary::Jsonize() const
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

  if(m_trainingEndTimeHasBeenSet)
  {
   payload.WithDouble("TrainingEndTime", m_trainingEndTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_trainingJobStatusHasBeenSet)
  {
   payload.WithString("TrainingJobStatus", TrainingJobStatusMapper::GetNameForTrainingJobStatus(m_trainingJobStatus));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
