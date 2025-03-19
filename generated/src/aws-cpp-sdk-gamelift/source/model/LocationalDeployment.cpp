/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/LocationalDeployment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

LocationalDeployment::LocationalDeployment(JsonView jsonValue)
{
  *this = jsonValue;
}

LocationalDeployment& LocationalDeployment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeploymentStatus"))
  {
    m_deploymentStatus = DeploymentStatusMapper::GetDeploymentStatusForName(jsonValue.GetString("DeploymentStatus"));
    m_deploymentStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue LocationalDeployment::Jsonize() const
{
  JsonValue payload;

  if(m_deploymentStatusHasBeenSet)
  {
   payload.WithString("DeploymentStatus", DeploymentStatusMapper::GetNameForDeploymentStatus(m_deploymentStatus));
  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
