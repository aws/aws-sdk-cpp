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
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ManagedScalingStatus.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The managed scaling settings for the Auto Scaling group capacity
   * provider.</p> <p>When managed scaling is enabled, Amazon ECS manages the
   * scale-in and scale-out actions of the Auto Scaling group. Amazon ECS manages a
   * target tracking scaling policy using an Amazon ECS-managed CloudWatch metric
   * with the specified <code>targetCapacity</code> value as the target value for the
   * metric. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/asg-capacity-providers.html#asg-capacity-providers-managed-scaling">Using
   * Managed Scaling</a> in the <i>Amazon Elastic Container Service Developer
   * Guide</i>.</p> <p>If managed scaling is disabled, the user must manage the
   * scaling of the Auto Scaling group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ManagedScaling">AWS
   * API Reference</a></p>
   */
  class AWS_ECS_API ManagedScaling
  {
  public:
    ManagedScaling();
    ManagedScaling(Aws::Utils::Json::JsonView jsonValue);
    ManagedScaling& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether or not to enable managed scaling for the capacity provider.</p>
     */
    inline const ManagedScalingStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Whether or not to enable managed scaling for the capacity provider.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Whether or not to enable managed scaling for the capacity provider.</p>
     */
    inline void SetStatus(const ManagedScalingStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Whether or not to enable managed scaling for the capacity provider.</p>
     */
    inline void SetStatus(ManagedScalingStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Whether or not to enable managed scaling for the capacity provider.</p>
     */
    inline ManagedScaling& WithStatus(const ManagedScalingStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Whether or not to enable managed scaling for the capacity provider.</p>
     */
    inline ManagedScaling& WithStatus(ManagedScalingStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The target capacity value for the capacity provider. The specified value must
     * be greater than <code>0</code> and less than or equal to <code>100</code>. A
     * value of <code>100</code> will result in the Amazon EC2 instances in your Auto
     * Scaling group being completely utilized.</p>
     */
    inline int GetTargetCapacity() const{ return m_targetCapacity; }

    /**
     * <p>The target capacity value for the capacity provider. The specified value must
     * be greater than <code>0</code> and less than or equal to <code>100</code>. A
     * value of <code>100</code> will result in the Amazon EC2 instances in your Auto
     * Scaling group being completely utilized.</p>
     */
    inline bool TargetCapacityHasBeenSet() const { return m_targetCapacityHasBeenSet; }

    /**
     * <p>The target capacity value for the capacity provider. The specified value must
     * be greater than <code>0</code> and less than or equal to <code>100</code>. A
     * value of <code>100</code> will result in the Amazon EC2 instances in your Auto
     * Scaling group being completely utilized.</p>
     */
    inline void SetTargetCapacity(int value) { m_targetCapacityHasBeenSet = true; m_targetCapacity = value; }

    /**
     * <p>The target capacity value for the capacity provider. The specified value must
     * be greater than <code>0</code> and less than or equal to <code>100</code>. A
     * value of <code>100</code> will result in the Amazon EC2 instances in your Auto
     * Scaling group being completely utilized.</p>
     */
    inline ManagedScaling& WithTargetCapacity(int value) { SetTargetCapacity(value); return *this;}


    /**
     * <p>The minimum number of container instances that Amazon ECS will scale in or
     * scale out at one time. If this parameter is omitted, the default value of
     * <code>1</code> is used.</p>
     */
    inline int GetMinimumScalingStepSize() const{ return m_minimumScalingStepSize; }

    /**
     * <p>The minimum number of container instances that Amazon ECS will scale in or
     * scale out at one time. If this parameter is omitted, the default value of
     * <code>1</code> is used.</p>
     */
    inline bool MinimumScalingStepSizeHasBeenSet() const { return m_minimumScalingStepSizeHasBeenSet; }

    /**
     * <p>The minimum number of container instances that Amazon ECS will scale in or
     * scale out at one time. If this parameter is omitted, the default value of
     * <code>1</code> is used.</p>
     */
    inline void SetMinimumScalingStepSize(int value) { m_minimumScalingStepSizeHasBeenSet = true; m_minimumScalingStepSize = value; }

    /**
     * <p>The minimum number of container instances that Amazon ECS will scale in or
     * scale out at one time. If this parameter is omitted, the default value of
     * <code>1</code> is used.</p>
     */
    inline ManagedScaling& WithMinimumScalingStepSize(int value) { SetMinimumScalingStepSize(value); return *this;}


    /**
     * <p>The maximum number of container instances that Amazon ECS will scale in or
     * scale out at one time. If this parameter is omitted, the default value of
     * <code>10000</code> is used.</p>
     */
    inline int GetMaximumScalingStepSize() const{ return m_maximumScalingStepSize; }

    /**
     * <p>The maximum number of container instances that Amazon ECS will scale in or
     * scale out at one time. If this parameter is omitted, the default value of
     * <code>10000</code> is used.</p>
     */
    inline bool MaximumScalingStepSizeHasBeenSet() const { return m_maximumScalingStepSizeHasBeenSet; }

    /**
     * <p>The maximum number of container instances that Amazon ECS will scale in or
     * scale out at one time. If this parameter is omitted, the default value of
     * <code>10000</code> is used.</p>
     */
    inline void SetMaximumScalingStepSize(int value) { m_maximumScalingStepSizeHasBeenSet = true; m_maximumScalingStepSize = value; }

    /**
     * <p>The maximum number of container instances that Amazon ECS will scale in or
     * scale out at one time. If this parameter is omitted, the default value of
     * <code>10000</code> is used.</p>
     */
    inline ManagedScaling& WithMaximumScalingStepSize(int value) { SetMaximumScalingStepSize(value); return *this;}

  private:

    ManagedScalingStatus m_status;
    bool m_statusHasBeenSet;

    int m_targetCapacity;
    bool m_targetCapacityHasBeenSet;

    int m_minimumScalingStepSize;
    bool m_minimumScalingStepSizeHasBeenSet;

    int m_maximumScalingStepSize;
    bool m_maximumScalingStepSizeHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
