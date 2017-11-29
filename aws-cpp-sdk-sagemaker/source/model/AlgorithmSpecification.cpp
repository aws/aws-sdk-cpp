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
    m_trainingInputMode(TrainingInputMode::NOT_SET),
    m_trainingInputModeHasBeenSet(false)
{
}

AlgorithmSpecification::AlgorithmSpecification(const JsonValue& jsonValue) : 
    m_trainingImageHasBeenSet(false),
    m_trainingInputMode(TrainingInputMode::NOT_SET),
    m_trainingInputModeHasBeenSet(false)
{
  *this = jsonValue;
}

AlgorithmSpecification& AlgorithmSpecification::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("TrainingImage"))
  {
    m_trainingImage = jsonValue.GetString("TrainingImage");

    m_trainingImageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrainingInputMode"))
  {
    m_trainingInputMode = TrainingInputModeMapper::GetTrainingInputModeForName(jsonValue.GetString("TrainingInputMode"));

    m_trainingInputModeHasBeenSet = true;
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

  if(m_trainingInputModeHasBeenSet)
  {
   payload.WithString("TrainingInputMode", TrainingInputModeMapper::GetNameForTrainingInputMode(m_trainingInputMode));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
