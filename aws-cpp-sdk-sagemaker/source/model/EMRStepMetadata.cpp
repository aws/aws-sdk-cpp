/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EMRStepMetadata.h>
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

EMRStepMetadata::EMRStepMetadata() : 
    m_clusterIdHasBeenSet(false),
    m_stepIdHasBeenSet(false),
    m_stepNameHasBeenSet(false),
    m_logFilePathHasBeenSet(false)
{
}

EMRStepMetadata::EMRStepMetadata(JsonView jsonValue) : 
    m_clusterIdHasBeenSet(false),
    m_stepIdHasBeenSet(false),
    m_stepNameHasBeenSet(false),
    m_logFilePathHasBeenSet(false)
{
  *this = jsonValue;
}

EMRStepMetadata& EMRStepMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClusterId"))
  {
    m_clusterId = jsonValue.GetString("ClusterId");

    m_clusterIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StepId"))
  {
    m_stepId = jsonValue.GetString("StepId");

    m_stepIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StepName"))
  {
    m_stepName = jsonValue.GetString("StepName");

    m_stepNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogFilePath"))
  {
    m_logFilePath = jsonValue.GetString("LogFilePath");

    m_logFilePathHasBeenSet = true;
  }

  return *this;
}

JsonValue EMRStepMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_clusterIdHasBeenSet)
  {
   payload.WithString("ClusterId", m_clusterId);

  }

  if(m_stepIdHasBeenSet)
  {
   payload.WithString("StepId", m_stepId);

  }

  if(m_stepNameHasBeenSet)
  {
   payload.WithString("StepName", m_stepName);

  }

  if(m_logFilePathHasBeenSet)
  {
   payload.WithString("LogFilePath", m_logFilePath);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
