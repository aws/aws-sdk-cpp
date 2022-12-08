/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/ManagedScaling.h>
#include <aws/ecs/model/ManagedTerminationProtection.h>
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
   * <p>The details of the Auto Scaling group for the capacity
   * provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/AutoScalingGroupProvider">AWS
   * API Reference</a></p>
   */
  class AutoScalingGroupProvider
  {
  public:
    AWS_ECS_API AutoScalingGroupProvider();
    AWS_ECS_API AutoScalingGroupProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API AutoScalingGroupProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) that identifies the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupArn() const{ return m_autoScalingGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the Auto Scaling group.</p>
     */
    inline bool AutoScalingGroupArnHasBeenSet() const { return m_autoScalingGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupArn(const Aws::String& value) { m_autoScalingGroupArnHasBeenSet = true; m_autoScalingGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupArn(Aws::String&& value) { m_autoScalingGroupArnHasBeenSet = true; m_autoScalingGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupArn(const char* value) { m_autoScalingGroupArnHasBeenSet = true; m_autoScalingGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the Auto Scaling group.</p>
     */
    inline AutoScalingGroupProvider& WithAutoScalingGroupArn(const Aws::String& value) { SetAutoScalingGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the Auto Scaling group.</p>
     */
    inline AutoScalingGroupProvider& WithAutoScalingGroupArn(Aws::String&& value) { SetAutoScalingGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the Auto Scaling group.</p>
     */
    inline AutoScalingGroupProvider& WithAutoScalingGroupArn(const char* value) { SetAutoScalingGroupArn(value); return *this;}


    /**
     * <p>The managed scaling settings for the Auto Scaling group capacity
     * provider.</p>
     */
    inline const ManagedScaling& GetManagedScaling() const{ return m_managedScaling; }

    /**
     * <p>The managed scaling settings for the Auto Scaling group capacity
     * provider.</p>
     */
    inline bool ManagedScalingHasBeenSet() const { return m_managedScalingHasBeenSet; }

    /**
     * <p>The managed scaling settings for the Auto Scaling group capacity
     * provider.</p>
     */
    inline void SetManagedScaling(const ManagedScaling& value) { m_managedScalingHasBeenSet = true; m_managedScaling = value; }

    /**
     * <p>The managed scaling settings for the Auto Scaling group capacity
     * provider.</p>
     */
    inline void SetManagedScaling(ManagedScaling&& value) { m_managedScalingHasBeenSet = true; m_managedScaling = std::move(value); }

    /**
     * <p>The managed scaling settings for the Auto Scaling group capacity
     * provider.</p>
     */
    inline AutoScalingGroupProvider& WithManagedScaling(const ManagedScaling& value) { SetManagedScaling(value); return *this;}

    /**
     * <p>The managed scaling settings for the Auto Scaling group capacity
     * provider.</p>
     */
    inline AutoScalingGroupProvider& WithManagedScaling(ManagedScaling&& value) { SetManagedScaling(std::move(value)); return *this;}


    /**
     * <p>The managed termination protection setting to use for the Auto Scaling group
     * capacity provider. This determines whether the Auto Scaling group has managed
     * termination protection. The default is disabled.</p>  <p>When using
     * managed termination protection, managed scaling must also be used otherwise
     * managed termination protection doesn't work.</p>  <p>When managed
     * termination protection is enabled, Amazon ECS prevents the Amazon EC2 instances
     * in an Auto Scaling group that contain tasks from being terminated during a
     * scale-in action. The Auto Scaling group and each instance in the Auto Scaling
     * group must have instance protection from scale-in actions enabled as well. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html#instance-protection">Instance
     * Protection</a> in the <i>Auto Scaling User Guide</i>.</p> <p>When managed
     * termination protection is disabled, your Amazon EC2 instances aren't protected
     * from termination when the Auto Scaling group scales in.</p>
     */
    inline const ManagedTerminationProtection& GetManagedTerminationProtection() const{ return m_managedTerminationProtection; }

    /**
     * <p>The managed termination protection setting to use for the Auto Scaling group
     * capacity provider. This determines whether the Auto Scaling group has managed
     * termination protection. The default is disabled.</p>  <p>When using
     * managed termination protection, managed scaling must also be used otherwise
     * managed termination protection doesn't work.</p>  <p>When managed
     * termination protection is enabled, Amazon ECS prevents the Amazon EC2 instances
     * in an Auto Scaling group that contain tasks from being terminated during a
     * scale-in action. The Auto Scaling group and each instance in the Auto Scaling
     * group must have instance protection from scale-in actions enabled as well. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html#instance-protection">Instance
     * Protection</a> in the <i>Auto Scaling User Guide</i>.</p> <p>When managed
     * termination protection is disabled, your Amazon EC2 instances aren't protected
     * from termination when the Auto Scaling group scales in.</p>
     */
    inline bool ManagedTerminationProtectionHasBeenSet() const { return m_managedTerminationProtectionHasBeenSet; }

    /**
     * <p>The managed termination protection setting to use for the Auto Scaling group
     * capacity provider. This determines whether the Auto Scaling group has managed
     * termination protection. The default is disabled.</p>  <p>When using
     * managed termination protection, managed scaling must also be used otherwise
     * managed termination protection doesn't work.</p>  <p>When managed
     * termination protection is enabled, Amazon ECS prevents the Amazon EC2 instances
     * in an Auto Scaling group that contain tasks from being terminated during a
     * scale-in action. The Auto Scaling group and each instance in the Auto Scaling
     * group must have instance protection from scale-in actions enabled as well. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html#instance-protection">Instance
     * Protection</a> in the <i>Auto Scaling User Guide</i>.</p> <p>When managed
     * termination protection is disabled, your Amazon EC2 instances aren't protected
     * from termination when the Auto Scaling group scales in.</p>
     */
    inline void SetManagedTerminationProtection(const ManagedTerminationProtection& value) { m_managedTerminationProtectionHasBeenSet = true; m_managedTerminationProtection = value; }

    /**
     * <p>The managed termination protection setting to use for the Auto Scaling group
     * capacity provider. This determines whether the Auto Scaling group has managed
     * termination protection. The default is disabled.</p>  <p>When using
     * managed termination protection, managed scaling must also be used otherwise
     * managed termination protection doesn't work.</p>  <p>When managed
     * termination protection is enabled, Amazon ECS prevents the Amazon EC2 instances
     * in an Auto Scaling group that contain tasks from being terminated during a
     * scale-in action. The Auto Scaling group and each instance in the Auto Scaling
     * group must have instance protection from scale-in actions enabled as well. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html#instance-protection">Instance
     * Protection</a> in the <i>Auto Scaling User Guide</i>.</p> <p>When managed
     * termination protection is disabled, your Amazon EC2 instances aren't protected
     * from termination when the Auto Scaling group scales in.</p>
     */
    inline void SetManagedTerminationProtection(ManagedTerminationProtection&& value) { m_managedTerminationProtectionHasBeenSet = true; m_managedTerminationProtection = std::move(value); }

    /**
     * <p>The managed termination protection setting to use for the Auto Scaling group
     * capacity provider. This determines whether the Auto Scaling group has managed
     * termination protection. The default is disabled.</p>  <p>When using
     * managed termination protection, managed scaling must also be used otherwise
     * managed termination protection doesn't work.</p>  <p>When managed
     * termination protection is enabled, Amazon ECS prevents the Amazon EC2 instances
     * in an Auto Scaling group that contain tasks from being terminated during a
     * scale-in action. The Auto Scaling group and each instance in the Auto Scaling
     * group must have instance protection from scale-in actions enabled as well. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html#instance-protection">Instance
     * Protection</a> in the <i>Auto Scaling User Guide</i>.</p> <p>When managed
     * termination protection is disabled, your Amazon EC2 instances aren't protected
     * from termination when the Auto Scaling group scales in.</p>
     */
    inline AutoScalingGroupProvider& WithManagedTerminationProtection(const ManagedTerminationProtection& value) { SetManagedTerminationProtection(value); return *this;}

    /**
     * <p>The managed termination protection setting to use for the Auto Scaling group
     * capacity provider. This determines whether the Auto Scaling group has managed
     * termination protection. The default is disabled.</p>  <p>When using
     * managed termination protection, managed scaling must also be used otherwise
     * managed termination protection doesn't work.</p>  <p>When managed
     * termination protection is enabled, Amazon ECS prevents the Amazon EC2 instances
     * in an Auto Scaling group that contain tasks from being terminated during a
     * scale-in action. The Auto Scaling group and each instance in the Auto Scaling
     * group must have instance protection from scale-in actions enabled as well. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html#instance-protection">Instance
     * Protection</a> in the <i>Auto Scaling User Guide</i>.</p> <p>When managed
     * termination protection is disabled, your Amazon EC2 instances aren't protected
     * from termination when the Auto Scaling group scales in.</p>
     */
    inline AutoScalingGroupProvider& WithManagedTerminationProtection(ManagedTerminationProtection&& value) { SetManagedTerminationProtection(std::move(value)); return *this;}

  private:

    Aws::String m_autoScalingGroupArn;
    bool m_autoScalingGroupArnHasBeenSet = false;

    ManagedScaling m_managedScaling;
    bool m_managedScalingHasBeenSet = false;

    ManagedTerminationProtection m_managedTerminationProtection;
    bool m_managedTerminationProtectionHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
