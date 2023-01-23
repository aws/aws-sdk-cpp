/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/DeploymentStyle.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

DeploymentStyle::DeploymentStyle() : 
    m_deploymentType(DeploymentType::NOT_SET),
    m_deploymentTypeHasBeenSet(false),
    m_deploymentOption(DeploymentOption::NOT_SET),
    m_deploymentOptionHasBeenSet(false)
{
}

DeploymentStyle::DeploymentStyle(JsonView jsonValue) : 
    m_deploymentType(DeploymentType::NOT_SET),
    m_deploymentTypeHasBeenSet(false),
    m_deploymentOption(DeploymentOption::NOT_SET),
    m_deploymentOptionHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentStyle& DeploymentStyle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deploymentType"))
  {
    m_deploymentType = DeploymentTypeMapper::GetDeploymentTypeForName(jsonValue.GetString("deploymentType"));

    m_deploymentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentOption"))
  {
    m_deploymentOption = DeploymentOptionMapper::GetDeploymentOptionForName(jsonValue.GetString("deploymentOption"));

    m_deploymentOptionHasBeenSet = true;
  }

  return *this;
}

JsonValue DeploymentStyle::Jsonize() const
{
  JsonValue payload;

  if(m_deploymentTypeHasBeenSet)
  {
   payload.WithString("deploymentType", DeploymentTypeMapper::GetNameForDeploymentType(m_deploymentType));
  }

  if(m_deploymentOptionHasBeenSet)
  {
   payload.WithString("deploymentOption", DeploymentOptionMapper::GetNameForDeploymentOption(m_deploymentOption));
  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
