﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ManagedScaling.h>
#include <aws/ecs/model/ManagedTerminationProtection.h>
#include <aws/ecs/model/ManagedDraining.h>
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
  class AutoScalingGroupProviderUpdate
  {
  public:
    AWS_ECS_API AutoScalingGroupProviderUpdate();
    AWS_ECS_API AutoScalingGroupProviderUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API AutoScalingGroupProviderUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The managed scaling settings for the Auto Scaling group capacity
     * provider.</p>
     */
    inline const ManagedScaling& GetManagedScaling() const{ return m_managedScaling; }
    inline bool ManagedScalingHasBeenSet() const { return m_managedScalingHasBeenSet; }
    inline void SetManagedScaling(const ManagedScaling& value) { m_managedScalingHasBeenSet = true; m_managedScaling = value; }
    inline void SetManagedScaling(ManagedScaling&& value) { m_managedScalingHasBeenSet = true; m_managedScaling = std::move(value); }
    inline AutoScalingGroupProviderUpdate& WithManagedScaling(const ManagedScaling& value) { SetManagedScaling(value); return *this;}
    inline AutoScalingGroupProviderUpdate& WithManagedScaling(ManagedScaling&& value) { SetManagedScaling(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The managed termination protection setting to use for the Auto Scaling group
     * capacity provider. This determines whether the Auto Scaling group has managed
     * termination protection.</p>  <p>When using managed termination
     * protection, managed scaling must also be used otherwise managed termination
     * protection doesn't work.</p>  <p>When managed termination protection
     * is on, Amazon ECS prevents the Amazon EC2 instances in an Auto Scaling group
     * that contain tasks from being terminated during a scale-in action. The Auto
     * Scaling group and each instance in the Auto Scaling group must have instance
     * protection from scale-in actions on. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html#instance-protection">Instance
     * Protection</a> in the <i>Auto Scaling User Guide</i>.</p> <p>When managed
     * termination protection is off, your Amazon EC2 instances aren't protected from
     * termination when the Auto Scaling group scales in.</p>
     */
    inline const ManagedTerminationProtection& GetManagedTerminationProtection() const{ return m_managedTerminationProtection; }
    inline bool ManagedTerminationProtectionHasBeenSet() const { return m_managedTerminationProtectionHasBeenSet; }
    inline void SetManagedTerminationProtection(const ManagedTerminationProtection& value) { m_managedTerminationProtectionHasBeenSet = true; m_managedTerminationProtection = value; }
    inline void SetManagedTerminationProtection(ManagedTerminationProtection&& value) { m_managedTerminationProtectionHasBeenSet = true; m_managedTerminationProtection = std::move(value); }
    inline AutoScalingGroupProviderUpdate& WithManagedTerminationProtection(const ManagedTerminationProtection& value) { SetManagedTerminationProtection(value); return *this;}
    inline AutoScalingGroupProviderUpdate& WithManagedTerminationProtection(ManagedTerminationProtection&& value) { SetManagedTerminationProtection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The managed draining option for the Auto Scaling group capacity provider.
     * When you enable this, Amazon ECS manages and gracefully drains the EC2 container
     * instances that are in the Auto Scaling group capacity provider.</p>
     */
    inline const ManagedDraining& GetManagedDraining() const{ return m_managedDraining; }
    inline bool ManagedDrainingHasBeenSet() const { return m_managedDrainingHasBeenSet; }
    inline void SetManagedDraining(const ManagedDraining& value) { m_managedDrainingHasBeenSet = true; m_managedDraining = value; }
    inline void SetManagedDraining(ManagedDraining&& value) { m_managedDrainingHasBeenSet = true; m_managedDraining = std::move(value); }
    inline AutoScalingGroupProviderUpdate& WithManagedDraining(const ManagedDraining& value) { SetManagedDraining(value); return *this;}
    inline AutoScalingGroupProviderUpdate& WithManagedDraining(ManagedDraining&& value) { SetManagedDraining(std::move(value)); return *this;}
    ///@}
  private:

    ManagedScaling m_managedScaling;
    bool m_managedScalingHasBeenSet = false;

    ManagedTerminationProtection m_managedTerminationProtection;
    bool m_managedTerminationProtectionHasBeenSet = false;

    ManagedDraining m_managedDraining;
    bool m_managedDrainingHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
