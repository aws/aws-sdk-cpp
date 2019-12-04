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

#include <aws/sagemaker/model/SearchRecord.h>
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

SearchRecord::SearchRecord() : 
    m_trainingJobHasBeenSet(false),
    m_experimentHasBeenSet(false),
    m_trialHasBeenSet(false),
    m_trialComponentHasBeenSet(false)
{
}

SearchRecord::SearchRecord(JsonView jsonValue) : 
    m_trainingJobHasBeenSet(false),
    m_experimentHasBeenSet(false),
    m_trialHasBeenSet(false),
    m_trialComponentHasBeenSet(false)
{
  *this = jsonValue;
}

SearchRecord& SearchRecord::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TrainingJob"))
  {
    m_trainingJob = jsonValue.GetObject("TrainingJob");

    m_trainingJobHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Experiment"))
  {
    m_experiment = jsonValue.GetObject("Experiment");

    m_experimentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Trial"))
  {
    m_trial = jsonValue.GetObject("Trial");

    m_trialHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrialComponent"))
  {
    m_trialComponent = jsonValue.GetObject("TrialComponent");

    m_trialComponentHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchRecord::Jsonize() const
{
  JsonValue payload;

  if(m_trainingJobHasBeenSet)
  {
   payload.WithObject("TrainingJob", m_trainingJob.Jsonize());

  }

  if(m_experimentHasBeenSet)
  {
   payload.WithObject("Experiment", m_experiment.Jsonize());

  }

  if(m_trialHasBeenSet)
  {
   payload.WithObject("Trial", m_trial.Jsonize());

  }

  if(m_trialComponentHasBeenSet)
  {
   payload.WithObject("TrialComponent", m_trialComponent.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
