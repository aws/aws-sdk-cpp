/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_ecsTargetHasBeenSet(false),
    m_cloudFormationTargetHasBeenSet(false)
{
}

DeploymentTarget::DeploymentTarget(JsonView jsonValue) : 
    m_deploymentTargetType(DeploymentTargetType::NOT_SET),
    m_deploymentTargetTypeHasBeenSet(false),
    m_instanceTargetHasBeenSet(false),
    m_lambdaTargetHasBeenSet(false),
    m_ecsTargetHasBeenSet(false),
    m_cloudFormationTargetHasBeenSet(false)
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

  if(jsonValue.ValueExists("cloudFormationTarget"))
  {
    m_cloudFormationTarget = jsonValue.GetObject("cloudFormationTarget");

    m_cloudFormationTargetHasBeenSet = true;
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

  if(m_cloudFormationTargetHasBeenSet)
  {
   payload.WithObject("cloudFormationTarget", m_cloudFormationTarget.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
