﻿/**
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
   * <p>Settings for a target-based scaling policy (see <a>ScalingPolicy</a>. A
   * target-based policy tracks a particular fleet metric specifies a target value
   * for the metric. As player usage changes, the policy triggers Amazon GameLift to
   * adjust capacity so that the metric returns to the target value. The target
   * configuration specifies settings as needed for the target based policy,
   * including the target value. </p> <p> <b>Related actions</b> </p> <p>
   * <a>DescribeFleetCapacity</a> | <a>UpdateFleetCapacity</a> |
   * <a>DescribeEC2InstanceLimits</a> | <a>PutScalingPolicy</a> |
   * <a>DescribeScalingPolicies</a> | <a>DeleteScalingPolicy</a> |
   * <a>StopFleetActions</a> | <a>StartFleetActions</a> | <a
   * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
   * APIs by task</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/TargetConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API TargetConfiguration
  {
  public:
    TargetConfiguration();
    TargetConfiguration(Aws::Utils::Json::JsonView jsonValue);
    TargetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Desired value to use with a target-based scaling policy. The value must be
     * relevant for whatever metric the scaling policy is using. For example, in a
     * policy using the metric PercentAvailableGameSessions, the target value should be
     * the preferred size of the fleet's buffer (the percent of capacity that should be
     * idle and ready for new game sessions).</p>
     */
    inline double GetTargetValue() const{ return m_targetValue; }

    /**
     * <p>Desired value to use with a target-based scaling policy. The value must be
     * relevant for whatever metric the scaling policy is using. For example, in a
     * policy using the metric PercentAvailableGameSessions, the target value should be
     * the preferred size of the fleet's buffer (the percent of capacity that should be
     * idle and ready for new game sessions).</p>
     */
    inline bool TargetValueHasBeenSet() const { return m_targetValueHasBeenSet; }

    /**
     * <p>Desired value to use with a target-based scaling policy. The value must be
     * relevant for whatever metric the scaling policy is using. For example, in a
     * policy using the metric PercentAvailableGameSessions, the target value should be
     * the preferred size of the fleet's buffer (the percent of capacity that should be
     * idle and ready for new game sessions).</p>
     */
    inline void SetTargetValue(double value) { m_targetValueHasBeenSet = true; m_targetValue = value; }

    /**
     * <p>Desired value to use with a target-based scaling policy. The value must be
     * relevant for whatever metric the scaling policy is using. For example, in a
     * policy using the metric PercentAvailableGameSessions, the target value should be
     * the preferred size of the fleet's buffer (the percent of capacity that should be
     * idle and ready for new game sessions).</p>
     */
    inline TargetConfiguration& WithTargetValue(double value) { SetTargetValue(value); return *this;}

  private:

    double m_targetValue;
    bool m_targetValueHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
