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
   * <p> <b>This data type is part of Amazon GameLift FleetIQ with game server
   * groups, which is in preview release and is subject to change.</b> </p>
   * <p>Settings for a target-based scaling policy applied to Auto Scaling group.
   * These settings are used to create a target-based policy that tracks the GameLift
   * FleetIQ metric "PercentUtilizedGameServers" and specifies a target value for the
   * metric. As player usage changes, the policy triggers to adjust the game server
   * group capacity so that the metric returns to the target value. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/TargetTrackingConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API TargetTrackingConfiguration
  {
  public:
    TargetTrackingConfiguration();
    TargetTrackingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    TargetTrackingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_targetValueHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
