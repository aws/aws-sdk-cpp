/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>

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
   * groups.</b> </p> <p>Settings for a target-based scaling policy as part of a <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_GameServerGroupAutoScalingPolicy.html">GameServerGroupAutoScalingPolicy</a>
   * . These settings are used to create a target-based policy that tracks the Amazon
   * GameLift FleetIQ metric <code>"PercentUtilizedGameServers"</code> and specifies
   * a target value for the metric. As player usage changes, the policy triggers to
   * adjust the game server group capacity so that the metric returns to the target
   * value. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/TargetTrackingConfiguration">AWS
   * API Reference</a></p>
   */
  class TargetTrackingConfiguration
  {
  public:
    AWS_GAMELIFT_API TargetTrackingConfiguration();
    AWS_GAMELIFT_API TargetTrackingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API TargetTrackingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Desired value to use with a game server group target-based scaling policy.
     * </p>
     */
    inline double GetTargetValue() const{ return m_targetValue; }

    /**
     * <p>Desired value to use with a game server group target-based scaling policy.
     * </p>
     */
    inline bool TargetValueHasBeenSet() const { return m_targetValueHasBeenSet; }

    /**
     * <p>Desired value to use with a game server group target-based scaling policy.
     * </p>
     */
    inline void SetTargetValue(double value) { m_targetValueHasBeenSet = true; m_targetValue = value; }

    /**
     * <p>Desired value to use with a game server group target-based scaling policy.
     * </p>
     */
    inline TargetTrackingConfiguration& WithTargetValue(double value) { SetTargetValue(value); return *this;}

  private:

    double m_targetValue;
    bool m_targetValueHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
