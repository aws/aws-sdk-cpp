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

#include <aws/codedeploy/model/DeploymentTarget.h>
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

DeploymentTarget::DeploymentTarget() : 
    m_deploymentTargetType(DeploymentTargetType::NOT_SET),
    m_deploymentTargetTypeHasBeenSet(false),
    m_instanceTargetHasBeenSet(false),
    m_lambdaTargetHasBeenSet(false),
    m_ecsTargetHasBeenSet(false)
{
}

DeploymentTarget::DeploymentTarget(JsonView jsonValue) : 
    m_deploymentTargetType(DeploymentTargetType::NOT_SET),
    m_deploymentTargetTypeHasBeenSet(false),
    m_instanceTargetHasBeenSet(false),
    m_lambdaTargetHasBeenSet(false),
    m_ecsTargetHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentTarget& DeploymentTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deploymentTargetType"))
  {
    m_deploymentTargetType = DeploymentTargetTypeMapper::GetDeploymentTargetTypeForName(jsonValue.GetString("deploymentTargetType"));

    m_deploymentTargetTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceTarget"))
  {
    m_instanceTarget = jsonValue.GetObject("instanceTarget");

    m_instanceTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambdaTarget"))
  {
    m_lambdaTarget = jsonValue.GetObject("lambdaTarget");

    m_lambdaTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ecsTarget"))
  {
    m_ecsTarget = jsonValue.GetObject("ecsTarget");

    m_ecsTargetHasBeenSet = true;
  }

  return *this;
}

JsonValue DeploymentTarget::Jsonize() const
{
  JsonValue payload;

  if(m_deploymentTargetTypeHasBeenSet)
  {
   payload.WithString("deploymentTargetType", DeploymentTargetTypeMapper::GetNameForDeploymentTargetType(m_deploymentTargetType));
  }

  if(m_instanceTargetHasBeenSet)
  {
   payload.WithObject("instanceTarget", m_instanceTarget.Jsonize());

  }

  if(m_lambdaTargetHasBeenSet)
  {
   payload.WithObject("lambdaTarget", m_lambdaTarget.Jsonize());

  }

  if(m_ecsTargetHasBeenSet)
  {
   payload.WithObject("ecsTarget", m_ecsTarget.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
