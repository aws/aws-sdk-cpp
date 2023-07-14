/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ParallelismConfiguration.h>
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

ParallelismConfiguration::ParallelismConfiguration() : 
    m_maxParallelExecutionSteps(0),
    m_maxParallelExecutionStepsHasBeenSet(false)
{
}

ParallelismConfiguration::ParallelismConfiguration(JsonView jsonValue) : 
    m_maxParallelExecutionSteps(0),
    m_maxParallelExecutionStepsHasBeenSet(false)
{
  *this = jsonValue;
}

ParallelismConfiguration& ParallelismConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxParallelExecutionSteps"))
  {
    m_maxParallelExecutionSteps = jsonValue.GetInteger("MaxParallelExecutionSteps");

    m_maxParallelExecutionStepsHasBeenSet = true;
  }

  return *this;
}

JsonValue ParallelismConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_maxParallelExecutionStepsHasBeenSet)
  {
   payload.WithInteger("MaxParallelExecutionSteps", m_maxParallelExecutionSteps);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
