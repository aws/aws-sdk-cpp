/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * provider.</p> <p>When managed scaling is turned on, Amazon ECS manages the
   * scale-in and scale-out actions of the Auto Scaling group. Amazon ECS manages a
   * target tracking scaling policy using an Amazon ECS managed CloudWatch metric
   * with the specified <code>targetCapacity</code> value as the target value for the
   * metric. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/asg-capacity-providers.html#asg-capacity-providers-managed-scaling">Using
   * managed scaling</a> in the <i>Amazon Elastic Container Service Developer
   * Guide</i>.</p> <p>If managed scaling is off, the user must manage the scaling of
   * the Auto Scaling group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ManagedScaling">AWS
   * API Reference</a></p>
   */
  class ManagedScaling
  {
  public:
    AWS_ECS_API ManagedScaling() = default;
    AWS_ECS_API ManagedScaling(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ManagedScaling& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines whether to use managed scaling for the capacity provider.</p>
     */
    inline ManagedScalingStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ManagedScalingStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ManagedScaling& WithStatus(ManagedScalingStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target capacity utilization as a percentage for the capacity provider.
     * The specified value must be greater than <code>0</code> and less than or equal
     * to <code>100</code>. For example, if you want the capacity provider to maintain
     * 10% spare capacity, then that means the utilization is 90%, so use a
     * <code>targetCapacity</code> of <code>90</code>. The default value of
     * <code>100</code> percent results in the Amazon EC2 instances in your Auto
     * Scaling group being completely used.</p>
     */
    inline int GetTargetCapacity() const { return m_targetCapacity; }
    inline bool TargetCapacityHasBeenSet() const { return m_targetCapacityHasBeenSet; }
    inline void SetTargetCapacity(int value) { m_targetCapacityHasBeenSet = true; m_targetCapacity = value; }
    inline ManagedScaling& WithTargetCapacity(int value) { SetTargetCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of Amazon EC2 instances that Amazon ECS will scale out at
     * one time. The scale in process is not affected by this parameter If this
     * parameter is omitted, the default value of <code>1</code> is used.</p> <p>When
     * additional capacity is required, Amazon ECS will scale up the minimum scaling
     * step size even if the actual demand is less than the minimum scaling step
     * size.</p>
     */
    inline int GetMinimumScalingStepSize() const { return m_minimumScalingStepSize; }
    inline bool MinimumScalingStepSizeHasBeenSet() const { return m_minimumScalingStepSizeHasBeenSet; }
    inline void SetMinimumScalingStepSize(int value) { m_minimumScalingStepSizeHasBeenSet = true; m_minimumScalingStepSize = value; }
    inline ManagedScaling& WithMinimumScalingStepSize(int value) { SetMinimumScalingStepSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of Amazon EC2 instances that Amazon ECS will scale out at
     * one time. If this parameter is omitted, the default value of <code>10000</code>
     * is used.</p>
     */
    inline int GetMaximumScalingStepSize() const { return m_maximumScalingStepSize; }
    inline bool MaximumScalingStepSizeHasBeenSet() const { return m_maximumScalingStepSizeHasBeenSet; }
    inline void SetMaximumScalingStepSize(int value) { m_maximumScalingStepSizeHasBeenSet = true; m_maximumScalingStepSize = value; }
    inline ManagedScaling& WithMaximumScalingStepSize(int value) { SetMaximumScalingStepSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The period of time, in seconds, after a newly launched Amazon EC2 instance
     * can contribute to CloudWatch metrics for Auto Scaling group. If this parameter
     * is omitted, the default value of <code>300</code> seconds is used.</p>
     */
    inline int GetInstanceWarmupPeriod() const { return m_instanceWarmupPeriod; }
    inline bool InstanceWarmupPeriodHasBeenSet() const { return m_instanceWarmupPeriodHasBeenSet; }
    inline void SetInstanceWarmupPeriod(int value) { m_instanceWarmupPeriodHasBeenSet = true; m_instanceWarmupPeriod = value; }
    inline ManagedScaling& WithInstanceWarmupPeriod(int value) { SetInstanceWarmupPeriod(value); return *this;}
    ///@}
  private:

    ManagedScalingStatus m_status{ManagedScalingStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    int m_targetCapacity{0};
    bool m_targetCapacityHasBeenSet = false;

    int m_minimumScalingStepSize{0};
    bool m_minimumScalingStepSizeHasBeenSet = false;

    int m_maximumScalingStepSize{0};
    bool m_maximumScalingStepSizeHasBeenSet = false;

    int m_instanceWarmupPeriod{0};
    bool m_instanceWarmupPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
