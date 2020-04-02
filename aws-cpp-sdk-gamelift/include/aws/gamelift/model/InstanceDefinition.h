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
#include <aws/gamelift/model/GameServerGroupInstanceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * groups, which is in preview release and is subject to change.</b> </p> <p>An
   * allowed instance type for your game server group. GameLift FleetIQ periodically
   * evaluates each defined instance type for viability. It then updates the Auto
   * Scaling group with the list of viable instance types.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/InstanceDefinition">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API InstanceDefinition
  {
  public:
    InstanceDefinition();
    InstanceDefinition(Aws::Utils::Json::JsonView jsonValue);
    InstanceDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An EC2 instance type designation.</p>
     */
    inline const GameServerGroupInstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>An EC2 instance type designation.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>An EC2 instance type designation.</p>
     */
    inline void SetInstanceType(const GameServerGroupInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>An EC2 instance type designation.</p>
     */
    inline void SetInstanceType(GameServerGroupInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>An EC2 instance type designation.</p>
     */
    inline InstanceDefinition& WithInstanceType(const GameServerGroupInstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>An EC2 instance type designation.</p>
     */
    inline InstanceDefinition& WithInstanceType(GameServerGroupInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>Instance weighting that indicates how much this instance type contributes to
     * the total capacity of a game server group. Instance weights are used by GameLift
     * FleetIQ to calculate the instance type's cost per unit hour and better identify
     * the most cost-effective options. For detailed information on weighting instance
     * capacity, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">Instance
     * Weighting</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>. Default value is
     * "1".</p>
     */
    inline const Aws::String& GetWeightedCapacity() const{ return m_weightedCapacity; }

    /**
     * <p>Instance weighting that indicates how much this instance type contributes to
     * the total capacity of a game server group. Instance weights are used by GameLift
     * FleetIQ to calculate the instance type's cost per unit hour and better identify
     * the most cost-effective options. For detailed information on weighting instance
     * capacity, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">Instance
     * Weighting</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>. Default value is
     * "1".</p>
     */
    inline bool WeightedCapacityHasBeenSet() const { return m_weightedCapacityHasBeenSet; }

    /**
     * <p>Instance weighting that indicates how much this instance type contributes to
     * the total capacity of a game server group. Instance weights are used by GameLift
     * FleetIQ to calculate the instance type's cost per unit hour and better identify
     * the most cost-effective options. For detailed information on weighting instance
     * capacity, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">Instance
     * Weighting</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>. Default value is
     * "1".</p>
     */
    inline void SetWeightedCapacity(const Aws::String& value) { m_weightedCapacityHasBeenSet = true; m_weightedCapacity = value; }

    /**
     * <p>Instance weighting that indicates how much this instance type contributes to
     * the total capacity of a game server group. Instance weights are used by GameLift
     * FleetIQ to calculate the instance type's cost per unit hour and better identify
     * the most cost-effective options. For detailed information on weighting instance
     * capacity, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">Instance
     * Weighting</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>. Default value is
     * "1".</p>
     */
    inline void SetWeightedCapacity(Aws::String&& value) { m_weightedCapacityHasBeenSet = true; m_weightedCapacity = std::move(value); }

    /**
     * <p>Instance weighting that indicates how much this instance type contributes to
     * the total capacity of a game server group. Instance weights are used by GameLift
     * FleetIQ to calculate the instance type's cost per unit hour and better identify
     * the most cost-effective options. For detailed information on weighting instance
     * capacity, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">Instance
     * Weighting</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>. Default value is
     * "1".</p>
     */
    inline void SetWeightedCapacity(const char* value) { m_weightedCapacityHasBeenSet = true; m_weightedCapacity.assign(value); }

    /**
     * <p>Instance weighting that indicates how much this instance type contributes to
     * the total capacity of a game server group. Instance weights are used by GameLift
     * FleetIQ to calculate the instance type's cost per unit hour and better identify
     * the most cost-effective options. For detailed information on weighting instance
     * capacity, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">Instance
     * Weighting</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>. Default value is
     * "1".</p>
     */
    inline InstanceDefinition& WithWeightedCapacity(const Aws::String& value) { SetWeightedCapacity(value); return *this;}

    /**
     * <p>Instance weighting that indicates how much this instance type contributes to
     * the total capacity of a game server group. Instance weights are used by GameLift
     * FleetIQ to calculate the instance type's cost per unit hour and better identify
     * the most cost-effective options. For detailed information on weighting instance
     * capacity, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">Instance
     * Weighting</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>. Default value is
     * "1".</p>
     */
    inline InstanceDefinition& WithWeightedCapacity(Aws::String&& value) { SetWeightedCapacity(std::move(value)); return *this;}

    /**
     * <p>Instance weighting that indicates how much this instance type contributes to
     * the total capacity of a game server group. Instance weights are used by GameLift
     * FleetIQ to calculate the instance type's cost per unit hour and better identify
     * the most cost-effective options. For detailed information on weighting instance
     * capacity, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-weighting.html">Instance
     * Weighting</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>. Default value is
     * "1".</p>
     */
    inline InstanceDefinition& WithWeightedCapacity(const char* value) { SetWeightedCapacity(value); return *this;}

  private:

    GameServerGroupInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet;

    Aws::String m_weightedCapacity;
    bool m_weightedCapacityHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
