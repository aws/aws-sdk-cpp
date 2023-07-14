/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/GameServerGroupAutoScalingPolicy.h>
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

GameServerGroupAutoScalingPolicy::GameServerGroupAutoScalingPolicy() : 
    m_estimatedInstanceWarmup(0),
    m_estimatedInstanceWarmupHasBeenSet(false),
    m_targetTrackingConfigurationHasBeenSet(false)
{
}

GameServerGroupAutoScalingPolicy::GameServerGroupAutoScalingPolicy(JsonView jsonValue) : 
    m_estimatedInstanceWarmup(0),
    m_estimatedInstanceWarmupHasBeenSet(false),
    m_targetTrackingConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

GameServerGroupAutoScalingPolicy& GameServerGroupAutoScalingPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EstimatedInstanceWarmup"))
  {
    m_estimatedInstanceWarmup = jsonValue.GetInteger("EstimatedInstanceWarmup");

    m_estimatedInstanceWarmupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetTrackingConfiguration"))
  {
    m_targetTrackingConfiguration = jsonValue.GetObject("TargetTrackingConfiguration");

    m_targetTrackingConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue GameServerGroupAutoScalingPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_estimatedInstanceWarmupHasBeenSet)
  {
   payload.WithInteger("EstimatedInstanceWarmup", m_estimatedInstanceWarmup);

  }

  if(m_targetTrackingConfigurationHasBeenSet)
  {
   payload.WithObject("TargetTrackingConfiguration", m_targetTrackingConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
