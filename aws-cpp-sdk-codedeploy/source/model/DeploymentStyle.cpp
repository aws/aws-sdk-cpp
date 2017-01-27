/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

DeploymentStyle::DeploymentStyle(const JsonValue& jsonValue) : 
    m_deploymentType(DeploymentType::NOT_SET),
    m_deploymentTypeHasBeenSet(false),
    m_deploymentOption(DeploymentOption::NOT_SET),
    m_deploymentOptionHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentStyle& DeploymentStyle::operator =(const JsonValue& jsonValue)
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