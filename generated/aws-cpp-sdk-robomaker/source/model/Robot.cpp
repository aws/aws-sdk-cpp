/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/Robot.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

Robot::Robot() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_fleetArnHasBeenSet(false),
    m_status(RobotStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_greenGrassGroupIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_architecture(Architecture::NOT_SET),
    m_architectureHasBeenSet(false),
    m_lastDeploymentJobHasBeenSet(false),
    m_lastDeploymentTimeHasBeenSet(false)
{
}

Robot::Robot(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_fleetArnHasBeenSet(false),
    m_status(RobotStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_greenGrassGroupIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_architecture(Architecture::NOT_SET),
    m_architectureHasBeenSet(false),
    m_lastDeploymentJobHasBeenSet(false),
    m_lastDeploymentTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Robot& Robot::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fleetArn"))
  {
    m_fleetArn = jsonValue.GetString("fleetArn");

    m_fleetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = RobotStatusMapper::GetRobotStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("greenGrassGroupId"))
  {
    m_greenGrassGroupId = jsonValue.GetString("greenGrassGroupId");

    m_greenGrassGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("architecture"))
  {
    m_architecture = ArchitectureMapper::GetArchitectureForName(jsonValue.GetString("architecture"));

    m_architectureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastDeploymentJob"))
  {
    m_lastDeploymentJob = jsonValue.GetString("lastDeploymentJob");

    m_lastDeploymentJobHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastDeploymentTime"))
  {
    m_lastDeploymentTime = jsonValue.GetDouble("lastDeploymentTime");

    m_lastDeploymentTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue Robot::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_fleetArnHasBeenSet)
  {
   payload.WithString("fleetArn", m_fleetArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", RobotStatusMapper::GetNameForRobotStatus(m_status));
  }

  if(m_greenGrassGroupIdHasBeenSet)
  {
   payload.WithString("greenGrassGroupId", m_greenGrassGroupId);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_architectureHasBeenSet)
  {
   payload.WithString("architecture", ArchitectureMapper::GetNameForArchitecture(m_architecture));
  }

  if(m_lastDeploymentJobHasBeenSet)
  {
   payload.WithString("lastDeploymentJob", m_lastDeploymentJob);

  }

  if(m_lastDeploymentTimeHasBeenSet)
  {
   payload.WithDouble("lastDeploymentTime", m_lastDeploymentTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
