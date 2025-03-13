/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/FleetDeployment.h>
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

FleetDeployment::FleetDeployment(JsonView jsonValue)
{
  *this = jsonValue;
}

FleetDeployment& FleetDeployment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeploymentId"))
  {
    m_deploymentId = jsonValue.GetString("DeploymentId");
    m_deploymentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FleetId"))
  {
    m_fleetId = jsonValue.GetString("FleetId");
    m_fleetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GameServerBinaryArn"))
  {
    m_gameServerBinaryArn = jsonValue.GetString("GameServerBinaryArn");
    m_gameServerBinaryArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RollbackGameServerBinaryArn"))
  {
    m_rollbackGameServerBinaryArn = jsonValue.GetString("RollbackGameServerBinaryArn");
    m_rollbackGameServerBinaryArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PerInstanceBinaryArn"))
  {
    m_perInstanceBinaryArn = jsonValue.GetString("PerInstanceBinaryArn");
    m_perInstanceBinaryArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RollbackPerInstanceBinaryArn"))
  {
    m_rollbackPerInstanceBinaryArn = jsonValue.GetString("RollbackPerInstanceBinaryArn");
    m_rollbackPerInstanceBinaryArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeploymentStatus"))
  {
    m_deploymentStatus = DeploymentStatusMapper::GetDeploymentStatusForName(jsonValue.GetString("DeploymentStatus"));
    m_deploymentStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeploymentConfiguration"))
  {
    m_deploymentConfiguration = jsonValue.GetObject("DeploymentConfiguration");
    m_deploymentConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue FleetDeployment::Jsonize() const
{
  JsonValue payload;

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("DeploymentId", m_deploymentId);

  }

  if(m_fleetIdHasBeenSet)
  {
   payload.WithString("FleetId", m_fleetId);

  }

  if(m_gameServerBinaryArnHasBeenSet)
  {
   payload.WithString("GameServerBinaryArn", m_gameServerBinaryArn);

  }

  if(m_rollbackGameServerBinaryArnHasBeenSet)
  {
   payload.WithString("RollbackGameServerBinaryArn", m_rollbackGameServerBinaryArn);

  }

  if(m_perInstanceBinaryArnHasBeenSet)
  {
   payload.WithString("PerInstanceBinaryArn", m_perInstanceBinaryArn);

  }

  if(m_rollbackPerInstanceBinaryArnHasBeenSet)
  {
   payload.WithString("RollbackPerInstanceBinaryArn", m_rollbackPerInstanceBinaryArn);

  }

  if(m_deploymentStatusHasBeenSet)
  {
   payload.WithString("DeploymentStatus", DeploymentStatusMapper::GetNameForDeploymentStatus(m_deploymentStatus));
  }

  if(m_deploymentConfigurationHasBeenSet)
  {
   payload.WithObject("DeploymentConfiguration", m_deploymentConfiguration.Jsonize());

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
