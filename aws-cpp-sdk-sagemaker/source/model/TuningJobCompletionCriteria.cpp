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

#include <aws/sagemaker/model/TuningJobCompletionCriteria.h>
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

TuningJobCompletionCriteria::TuningJobCompletionCriteria() : 
    m_targetObjectiveMetricValue(0.0),
    m_targetObjectiveMetricValueHasBeenSet(false)
{
}

TuningJobCompletionCriteria::TuningJobCompletionCriteria(JsonView jsonValue) : 
    m_targetObjectiveMetricValue(0.0),
    m_targetObjectiveMetricValueHasBeenSet(false)
{
  *this = jsonValue;
}

TuningJobCompletionCriteria& TuningJobCompletionCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TargetObjectiveMetricValue"))
  {
    m_targetObjectiveMetricValue = jsonValue.GetDouble("TargetObjectiveMetricValue");

    m_targetObjectiveMetricValueHasBeenSet = true;
  }

  return *this;
}

JsonValue TuningJobCompletionCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_targetObjectiveMetricValueHasBeenSet)
  {
   payload.WithDouble("TargetObjectiveMetricValue", m_targetObjectiveMetricValue);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
