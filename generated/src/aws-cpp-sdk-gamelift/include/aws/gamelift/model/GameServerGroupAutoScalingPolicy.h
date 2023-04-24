/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p> <b>This data type is used with the Amazon GameLift FleetIQ and game server
   * groups.</b> </p> <p>Configuration settings for intelligent automatic scaling
   * that uses target tracking. These settings are used to add an Auto Scaling policy
   * when creating the corresponding Auto Scaling group. After the Auto Scaling group
   * is created, all updates to Auto Scaling policies, including changing this policy
   * and adding or removing other policies, is done directly on the Auto Scaling
   * group. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GameServerGroupAutoScalingPolicy">AWS
   * API Reference</a></p>
   */
  class GameServerGroupAutoScalingPolicy
  {
  public:
    AWS_GAMELIFT_API GameServerGroupAutoScalingPolicy();
    AWS_GAMELIFT_API GameServerGroupAutoScalingPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API GameServerGroupAutoScalingPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Length of time, in seconds, it takes for a new instance to start new game
     * server processes and register with Amazon GameLift FleetIQ. Specifying a warm-up
     * time can be useful, particularly with game servers that take a long time to
     * start up, because it avoids prematurely starting new instances. </p>
     */
    inline int GetEstimatedInstanceWarmup() const{ return m_estimatedInstanceWarmup; }

    /**
     * <p>Length of time, in seconds, it takes for a new instance to start new game
     * server processes and register with Amazon GameLift FleetIQ. Specifying a warm-up
     * time can be useful, particularly with game servers that take a long time to
     * start up, because it avoids prematurely starting new instances. </p>
     */
    inline bool EstimatedInstanceWarmupHasBeenSet() const { return m_estimatedInstanceWarmupHasBeenSet; }

    /**
     * <p>Length of time, in seconds, it takes for a new instance to start new game
     * server processes and register with Amazon GameLift FleetIQ. Specifying a warm-up
     * time can be useful, particularly with game servers that take a long time to
     * start up, because it avoids prematurely starting new instances. </p>
     */
    inline void SetEstimatedInstanceWarmup(int value) { m_estimatedInstanceWarmupHasBeenSet = true; m_estimatedInstanceWarmup = value; }

    /**
     * <p>Length of time, in seconds, it takes for a new instance to start new game
     * server processes and register with Amazon GameLift FleetIQ. Specifying a warm-up
     * time can be useful, particularly with game servers that take a long time to
     * start up, because it avoids prematurely starting new instances. </p>
     */
    inline GameServerGroupAutoScalingPolicy& WithEstimatedInstanceWarmup(int value) { SetEstimatedInstanceWarmup(value); return *this;}


    /**
     * <p>Settings for a target-based scaling policy applied to Auto Scaling group.
     * These settings are used to create a target-based policy that tracks the Amazon
     * GameLift FleetIQ metric <code>"PercentUtilizedGameServers"</code> and specifies
     * a target value for the metric. As player usage changes, the policy triggers to
     * adjust the game server group capacity so that the metric returns to the target
     * value. </p>
     */
    inline const TargetTrackingConfiguration& GetTargetTrackingConfiguration() const{ return m_targetTrackingConfiguration; }

    /**
     * <p>Settings for a target-based scaling policy applied to Auto Scaling group.
     * These settings are used to create a target-based policy that tracks the Amazon
     * GameLift FleetIQ metric <code>"PercentUtilizedGameServers"</code> and specifies
     * a target value for the metric. As player usage changes, the policy triggers to
     * adjust the game server group capacity so that the metric returns to the target
     * value. </p>
     */
    inline bool TargetTrackingConfigurationHasBeenSet() const { return m_targetTrackingConfigurationHasBeenSet; }

    /**
     * <p>Settings for a target-based scaling policy applied to Auto Scaling group.
     * These settings are used to create a target-based policy that tracks the Amazon
     * GameLift FleetIQ metric <code>"PercentUtilizedGameServers"</code> and specifies
     * a target value for the metric. As player usage changes, the policy triggers to
     * adjust the game server group capacity so that the metric returns to the target
     * value. </p>
     */
    inline void SetTargetTrackingConfiguration(const TargetTrackingConfiguration& value) { m_targetTrackingConfigurationHasBeenSet = true; m_targetTrackingConfiguration = value; }

    /**
     * <p>Settings for a target-based scaling policy applied to Auto Scaling group.
     * These settings are used to create a target-based policy that tracks the Amazon
     * GameLift FleetIQ metric <code>"PercentUtilizedGameServers"</code> and specifies
     * a target value for the metric. As player usage changes, the policy triggers to
     * adjust the game server group capacity so that the metric returns to the target
     * value. </p>
     */
    inline void SetTargetTrackingConfiguration(TargetTrackingConfiguration&& value) { m_targetTrackingConfigurationHasBeenSet = true; m_targetTrackingConfiguration = std::move(value); }

    /**
     * <p>Settings for a target-based scaling policy applied to Auto Scaling group.
     * These settings are used to create a target-based policy that tracks the Amazon
     * GameLift FleetIQ metric <code>"PercentUtilizedGameServers"</code> and specifies
     * a target value for the metric. As player usage changes, the policy triggers to
     * adjust the game server group capacity so that the metric returns to the target
     * value. </p>
     */
    inline GameServerGroupAutoScalingPolicy& WithTargetTrackingConfiguration(const TargetTrackingConfiguration& value) { SetTargetTrackingConfiguration(value); return *this;}

    /**
     * <p>Settings for a target-based scaling policy applied to Auto Scaling group.
     * These settings are used to create a target-based policy that tracks the Amazon
     * GameLift FleetIQ metric <code>"PercentUtilizedGameServers"</code> and specifies
     * a target value for the metric. As player usage changes, the policy triggers to
     * adjust the game server group capacity so that the metric returns to the target
     * value. </p>
     */
    inline GameServerGroupAutoScalingPolicy& WithTargetTrackingConfiguration(TargetTrackingConfiguration&& value) { SetTargetTrackingConfiguration(std::move(value)); return *this;}

  private:

    int m_estimatedInstanceWarmup;
    bool m_estimatedInstanceWarmupHasBeenSet = false;

    TargetTrackingConfiguration m_targetTrackingConfiguration;
    bool m_targetTrackingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
