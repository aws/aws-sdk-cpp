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

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/TargetTrackingConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p> <b>This data type is part of Amazon GameLift FleetIQ with game server
   * groups, which is in preview release and is subject to change.</b> </p>
   * <p>Configuration settings for intelligent autoscaling that uses target tracking.
   * An autoscaling policy can be specified when a new game server group is created
   * with <a>CreateGameServerGroup</a>. If a group has an autoscaling policy, the
   * Auto Scaling group takes action based on this policy, in addition to (and
   * potentially in conflict with) any other autoscaling policies that are separately
   * applied to the Auto Scaling group. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GameServerGroupAutoScalingPolicy">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API GameServerGroupAutoScalingPolicy
  {
  public:
    GameServerGroupAutoScalingPolicy();
    GameServerGroupAutoScalingPolicy(Aws::Utils::Json::JsonView jsonValue);
    GameServerGroupAutoScalingPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Length of time, in seconds, it takes for a new instance to start new game
     * server processes and register with GameLift FleetIQ. Specifying a warm-up time
     * can be useful, particularly with game servers that take a long time to start up,
     * because it avoids prematurely starting new instances </p>
     */
    inline int GetEstimatedInstanceWarmup() const{ return m_estimatedInstanceWarmup; }

    /**
     * <p>Length of time, in seconds, it takes for a new instance to start new game
     * server processes and register with GameLift FleetIQ. Specifying a warm-up time
     * can be useful, particularly with game servers that take a long time to start up,
     * because it avoids prematurely starting new instances </p>
     */
    inline bool EstimatedInstanceWarmupHasBeenSet() const { return m_estimatedInstanceWarmupHasBeenSet; }

    /**
     * <p>Length of time, in seconds, it takes for a new instance to start new game
     * server processes and register with GameLift FleetIQ. Specifying a warm-up time
     * can be useful, particularly with game servers that take a long time to start up,
     * because it avoids prematurely starting new instances </p>
     */
    inline void SetEstimatedInstanceWarmup(int value) { m_estimatedInstanceWarmupHasBeenSet = true; m_estimatedInstanceWarmup = value; }

    /**
     * <p>Length of time, in seconds, it takes for a new instance to start new game
     * server processes and register with GameLift FleetIQ. Specifying a warm-up time
     * can be useful, particularly with game servers that take a long time to start up,
     * because it avoids prematurely starting new instances </p>
     */
    inline GameServerGroupAutoScalingPolicy& WithEstimatedInstanceWarmup(int value) { SetEstimatedInstanceWarmup(value); return *this;}


    /**
     * <p>Settings for a target-based scaling policy applied to Auto Scaling group.
     * These settings are used to create a target-based policy that tracks the GameLift
     * FleetIQ metric "PercentUtilizedGameServers" and specifies a target value for the
     * metric. As player usage changes, the policy triggers to adjust the game server
     * group capacity so that the metric returns to the target value. </p>
     */
    inline const TargetTrackingConfiguration& GetTargetTrackingConfiguration() const{ return m_targetTrackingConfiguration; }

    /**
     * <p>Settings for a target-based scaling policy applied to Auto Scaling group.
     * These settings are used to create a target-based policy that tracks the GameLift
     * FleetIQ metric "PercentUtilizedGameServers" and specifies a target value for the
     * metric. As player usage changes, the policy triggers to adjust the game server
     * group capacity so that the metric returns to the target value. </p>
     */
    inline bool TargetTrackingConfigurationHasBeenSet() const { return m_targetTrackingConfigurationHasBeenSet; }

    /**
     * <p>Settings for a target-based scaling policy applied to Auto Scaling group.
     * These settings are used to create a target-based policy that tracks the GameLift
     * FleetIQ metric "PercentUtilizedGameServers" and specifies a target value for the
     * metric. As player usage changes, the policy triggers to adjust the game server
     * group capacity so that the metric returns to the target value. </p>
     */
    inline void SetTargetTrackingConfiguration(const TargetTrackingConfiguration& value) { m_targetTrackingConfigurationHasBeenSet = true; m_targetTrackingConfiguration = value; }

    /**
     * <p>Settings for a target-based scaling policy applied to Auto Scaling group.
     * These settings are used to create a target-based policy that tracks the GameLift
     * FleetIQ metric "PercentUtilizedGameServers" and specifies a target value for the
     * metric. As player usage changes, the policy triggers to adjust the game server
     * group capacity so that the metric returns to the target value. </p>
     */
    inline void SetTargetTrackingConfiguration(TargetTrackingConfiguration&& value) { m_targetTrackingConfigurationHasBeenSet = true; m_targetTrackingConfiguration = std::move(value); }

    /**
     * <p>Settings for a target-based scaling policy applied to Auto Scaling group.
     * These settings are used to create a target-based policy that tracks the GameLift
     * FleetIQ metric "PercentUtilizedGameServers" and specifies a target value for the
     * metric. As player usage changes, the policy triggers to adjust the game server
     * group capacity so that the metric returns to the target value. </p>
     */
    inline GameServerGroupAutoScalingPolicy& WithTargetTrackingConfiguration(const TargetTrackingConfiguration& value) { SetTargetTrackingConfiguration(value); return *this;}

    /**
     * <p>Settings for a target-based scaling policy applied to Auto Scaling group.
     * These settings are used to create a target-based policy that tracks the GameLift
     * FleetIQ metric "PercentUtilizedGameServers" and specifies a target value for the
     * metric. As player usage changes, the policy triggers to adjust the game server
     * group capacity so that the metric returns to the target value. </p>
     */
    inline GameServerGroupAutoScalingPolicy& WithTargetTrackingConfiguration(TargetTrackingConfiguration&& value) { SetTargetTrackingConfiguration(std::move(value)); return *this;}

  private:

    int m_estimatedInstanceWarmup;
    bool m_estimatedInstanceWarmupHasBeenSet;

    TargetTrackingConfiguration m_targetTrackingConfiguration;
    bool m_targetTrackingConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
