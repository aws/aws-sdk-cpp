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
   * <p>Settings for a target-based scaling policy. A target-based policy tracks a
   * particular fleet metric specifies a target value for the metric. As player usage
   * changes, the policy triggers Amazon GameLift to adjust capacity so that the
   * metric returns to the target value. The target configuration specifies settings
   * as needed for the target based policy, including the target value.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/TargetConfiguration">AWS
   * API Reference</a></p>
   */
  class TargetConfiguration
  {
  public:
    AWS_GAMELIFT_API TargetConfiguration();
    AWS_GAMELIFT_API TargetConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API TargetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_targetValueHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
