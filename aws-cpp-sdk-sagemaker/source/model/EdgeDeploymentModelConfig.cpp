/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EdgeDeploymentModelConfig.h>
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

EdgeDeploymentModelConfig::EdgeDeploymentModelConfig() : 
    m_modelHandleHasBeenSet(false),
    m_edgePackagingJobNameHasBeenSet(false)
{
}

EdgeDeploymentModelConfig::EdgeDeploymentModelConfig(JsonView jsonValue) : 
    m_modelHandleHasBeenSet(false),
    m_edgePackagingJobNameHasBeenSet(false)
{
  *this = jsonValue;
}

EdgeDeploymentModelConfig& EdgeDeploymentModelConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ModelHandle"))
  {
    m_modelHandle = jsonValue.GetString("ModelHandle");

    m_modelHandleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EdgePackagingJobName"))
  {
    m_edgePackagingJobName = jsonValue.GetString("EdgePackagingJobName");

    m_edgePackagingJobNameHasBeenSet = true;
  }

  return *this;
}

JsonValue EdgeDeploymentModelConfig::Jsonize() const
{
  JsonValue payload;

  if(m_modelHandleHasBeenSet)
  {
   payload.WithString("ModelHandle", m_modelHandle);

  }

  if(m_edgePackagingJobNameHasBeenSet)
  {
   payload.WithString("EdgePackagingJobName", m_edgePackagingJobName);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
