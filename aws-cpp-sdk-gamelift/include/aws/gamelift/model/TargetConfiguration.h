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
   * including the target value. </p> <ul> <li> <p> <a>DescribeFleetCapacity</a> </p>
   * </li> <li> <p> <a>UpdateFleetCapacity</a> </p> </li> <li> <p>
   * <a>DescribeEC2InstanceLimits</a> </p> </li> <li> <p>Manage scaling policies:</p>
   * <ul> <li> <p> <a>PutScalingPolicy</a> (auto-scaling)</p> </li> <li> <p>
   * <a>DescribeScalingPolicies</a> (auto-scaling)</p> </li> <li> <p>
   * <a>DeleteScalingPolicy</a> (auto-scaling)</p> </li> </ul> </li> <li> <p>Manage
   * fleet actions:</p> <ul> <li> <p> <a>StartFleetActions</a> </p> </li> <li> <p>
   * <a>StopFleetActions</a> </p> </li> </ul> </li> </ul><p><h3>See Also:</h3>   <a
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
