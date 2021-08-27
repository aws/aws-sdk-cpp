/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
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
   * <p>The details of the Auto Scaling group capacity provider to
   * update.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/AutoScalingGroupProviderUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_ECS_API AutoScalingGroupProviderUpdate
  {
  public:
    AutoScalingGroupProviderUpdate();
    AutoScalingGroupProviderUpdate(Aws::Utils::Json::JsonView jsonValue);
    AutoScalingGroupProviderUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ManagedScaling& GetManagedScaling() const{ return m_managedScaling; }

    
    inline bool ManagedScalingHasBeenSet() const { return m_managedScalingHasBeenSet; }

    
    inline void SetManagedScaling(const ManagedScaling& value) { m_managedScalingHasBeenSet = true; m_managedScaling = value; }

    
    inline void SetManagedScaling(ManagedScaling&& value) { m_managedScalingHasBeenSet = true; m_managedScaling = std::move(value); }

    
    inline AutoScalingGroupProviderUpdate& WithManagedScaling(const ManagedScaling& value) { SetManagedScaling(value); return *this;}

    
    inline AutoScalingGroupProviderUpdate& WithManagedScaling(ManagedScaling&& value) { SetManagedScaling(std::move(value)); return *this;}


    /**
     * <p>The managed termination protection setting to use for the Auto Scaling group
     * capacity provider. This determines whether the Auto Scaling group has managed
     * termination protection.</p>  <p>When using managed termination
     * protection, managed scaling must also be used otherwise managed termination
     * protection will not work.</p>  <p>When managed termination
     * protection is enabled, Amazon ECS prevents the Amazon EC2 instances in an Auto
     * Scaling group that contain tasks from being terminated during a scale-in action.
     * The Auto Scaling group and each instance in the Auto Scaling group must have
     * instance protection from scale-in actions enabled as well. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html#instance-protection">Instance
     * Protection</a> in the <i>AWS Auto Scaling User Guide</i>.</p> <p>When managed
     * termination protection is disabled, your Amazon EC2 instances are not protected
     * from termination when the Auto Scaling group scales in.</p>
     */
    inline const ManagedTerminationProtection& GetManagedTerminationProtection() const{ return m_managedTerminationProtection; }

    /**
     * <p>The managed termination protection setting to use for the Auto Scaling group
     * capacity provider. This determines whether the Auto Scaling group has managed
     * termination protection.</p>  <p>When using managed termination
     * protection, managed scaling must also be used otherwise managed termination
     * protection will not work.</p>  <p>When managed termination
     * protection is enabled, Amazon ECS prevents the Amazon EC2 instances in an Auto
     * Scaling group that contain tasks from being terminated during a scale-in action.
     * The Auto Scaling group and each instance in the Auto Scaling group must have
     * instance protection from scale-in actions enabled as well. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html#instance-protection">Instance
     * Protection</a> in the <i>AWS Auto Scaling User Guide</i>.</p> <p>When managed
     * termination protection is disabled, your Amazon EC2 instances are not protected
     * from termination when the Auto Scaling group scales in.</p>
     */
    inline bool ManagedTerminationProtectionHasBeenSet() const { return m_managedTerminationProtectionHasBeenSet; }

    /**
     * <p>The managed termination protection setting to use for the Auto Scaling group
     * capacity provider. This determines whether the Auto Scaling group has managed
     * termination protection.</p>  <p>When using managed termination
     * protection, managed scaling must also be used otherwise managed termination
     * protection will not work.</p>  <p>When managed termination
     * protection is enabled, Amazon ECS prevents the Amazon EC2 instances in an Auto
     * Scaling group that contain tasks from being terminated during a scale-in action.
     * The Auto Scaling group and each instance in the Auto Scaling group must have
     * instance protection from scale-in actions enabled as well. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html#instance-protection">Instance
     * Protection</a> in the <i>AWS Auto Scaling User Guide</i>.</p> <p>When managed
     * termination protection is disabled, your Amazon EC2 instances are not protected
     * from termination when the Auto Scaling group scales in.</p>
     */
    inline void SetManagedTerminationProtection(const ManagedTerminationProtection& value) { m_managedTerminationProtectionHasBeenSet = true; m_managedTerminationProtection = value; }

    /**
     * <p>The managed termination protection setting to use for the Auto Scaling group
     * capacity provider. This determines whether the Auto Scaling group has managed
     * termination protection.</p>  <p>When using managed termination
     * protection, managed scaling must also be used otherwise managed termination
     * protection will not work.</p>  <p>When managed termination
     * protection is enabled, Amazon ECS prevents the Amazon EC2 instances in an Auto
     * Scaling group that contain tasks from being terminated during a scale-in action.
     * The Auto Scaling group and each instance in the Auto Scaling group must have
     * instance protection from scale-in actions enabled as well. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html#instance-protection">Instance
     * Protection</a> in the <i>AWS Auto Scaling User Guide</i>.</p> <p>When managed
     * termination protection is disabled, your Amazon EC2 instances are not protected
     * from termination when the Auto Scaling group scales in.</p>
     */
    inline void SetManagedTerminationProtection(ManagedTerminationProtection&& value) { m_managedTerminationProtectionHasBeenSet = true; m_managedTerminationProtection = std::move(value); }

    /**
     * <p>The managed termination protection setting to use for the Auto Scaling group
     * capacity provider. This determines whether the Auto Scaling group has managed
     * termination protection.</p>  <p>When using managed termination
     * protection, managed scaling must also be used otherwise managed termination
     * protection will not work.</p>  <p>When managed termination
     * protection is enabled, Amazon ECS prevents the Amazon EC2 instances in an Auto
     * Scaling group that contain tasks from being terminated during a scale-in action.
     * The Auto Scaling group and each instance in the Auto Scaling group must have
     * instance protection from scale-in actions enabled as well. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html#instance-protection">Instance
     * Protection</a> in the <i>AWS Auto Scaling User Guide</i>.</p> <p>When managed
     * termination protection is disabled, your Amazon EC2 instances are not protected
     * from termination when the Auto Scaling group scales in.</p>
     */
    inline AutoScalingGroupProviderUpdate& WithManagedTerminationProtection(const ManagedTerminationProtection& value) { SetManagedTerminationProtection(value); return *this;}

    /**
     * <p>The managed termination protection setting to use for the Auto Scaling group
     * capacity provider. This determines whether the Auto Scaling group has managed
     * termination protection.</p>  <p>When using managed termination
     * protection, managed scaling must also be used otherwise managed termination
     * protection will not work.</p>  <p>When managed termination
     * protection is enabled, Amazon ECS prevents the Amazon EC2 instances in an Auto
     * Scaling group that contain tasks from being terminated during a scale-in action.
     * The Auto Scaling group and each instance in the Auto Scaling group must have
     * instance protection from scale-in actions enabled as well. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html#instance-protection">Instance
     * Protection</a> in the <i>AWS Auto Scaling User Guide</i>.</p> <p>When managed
     * termination protection is disabled, your Amazon EC2 instances are not protected
     * from termination when the Auto Scaling group scales in.</p>
     */
    inline AutoScalingGroupProviderUpdate& WithManagedTerminationProtection(ManagedTerminationProtection&& value) { SetManagedTerminationProtection(std::move(value)); return *this;}

  private:

    ManagedScaling m_managedScaling;
    bool m_managedScalingHasBeenSet;

    ManagedTerminationProtection m_managedTerminationProtection;
    bool m_managedTerminationProtectionHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
