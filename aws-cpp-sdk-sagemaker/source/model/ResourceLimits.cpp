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

#include <aws/sagemaker/model/ResourceLimits.h>
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

ResourceLimits::ResourceLimits() : 
    m_maxNumberOfTrainingJobs(0),
    m_maxNumberOfTrainingJobsHasBeenSet(false),
    m_maxParallelTrainingJobs(0),
    m_maxParallelTrainingJobsHasBeenSet(false)
{
}

ResourceLimits::ResourceLimits(JsonView jsonValue) : 
    m_maxNumberOfTrainingJobs(0),
    m_maxNumberOfTrainingJobsHasBeenSet(false),
    m_maxParallelTrainingJobs(0),
    m_maxParallelTrainingJobsHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceLimits& ResourceLimits::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxNumberOfTrainingJobs"))
  {
    m_maxNumberOfTrainingJobs = jsonValue.GetInteger("MaxNumberOfTrainingJobs");

    m_maxNumberOfTrainingJobsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxParallelTrainingJobs"))
  {
    m_maxParallelTrainingJobs = jsonValue.GetInteger("MaxParallelTrainingJobs");

    m_maxParallelTrainingJobsHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceLimits::Jsonize() const
{
  JsonValue payload;

  if(m_maxNumberOfTrainingJobsHasBeenSet)
  {
   payload.WithInteger("MaxNumberOfTrainingJobs", m_maxNumberOfTrainingJobs);

  }

  if(m_maxParallelTrainingJobsHasBeenSet)
  {
   payload.WithInteger("MaxParallelTrainingJobs", m_maxParallelTrainingJobs);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
