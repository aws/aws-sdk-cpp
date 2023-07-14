/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
