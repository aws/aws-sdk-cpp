/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling/model/LaunchTemplateSpecification.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Describes an EC2 instance associated with an Auto Scaling
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/AutoScalingInstanceDetails">AWS
   * API Reference</a></p>
   */
  class AutoScalingInstanceDetails
  {
  public:
    AWS_AUTOSCALING_API AutoScalingInstanceDetails();
    AWS_AUTOSCALING_API AutoScalingInstanceDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API AutoScalingInstanceDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline AutoScalingInstanceDetails& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline AutoScalingInstanceDetails& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline AutoScalingInstanceDetails& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The instance type of the EC2 instance.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type of the EC2 instance.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type of the EC2 instance.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type of the EC2 instance.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type of the EC2 instance.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type of the EC2 instance.</p>
     */
    inline AutoScalingInstanceDetails& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type of the EC2 instance.</p>
     */
    inline AutoScalingInstanceDetails& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type of the EC2 instance.</p>
     */
    inline AutoScalingInstanceDetails& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The name of the Auto Scaling group for the instance.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }

    /**
     * <p>The name of the Auto Scaling group for the instance.</p>
     */
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }

    /**
     * <p>The name of the Auto Scaling group for the instance.</p>
     */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name of the Auto Scaling group for the instance.</p>
     */
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::move(value); }

    /**
     * <p>The name of the Auto Scaling group for the instance.</p>
     */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }

    /**
     * <p>The name of the Auto Scaling group for the instance.</p>
     */
    inline AutoScalingInstanceDetails& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group for the instance.</p>
     */
    inline AutoScalingInstanceDetails& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the Auto Scaling group for the instance.</p>
     */
    inline AutoScalingInstanceDetails& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}


    /**
     * <p>The Availability Zone for the instance.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone for the instance.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone for the instance.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone for the instance.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone for the instance.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone for the instance.</p>
     */
    inline AutoScalingInstanceDetails& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone for the instance.</p>
     */
    inline AutoScalingInstanceDetails& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone for the instance.</p>
     */
    inline AutoScalingInstanceDetails& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The lifecycle state for the instance. The <code>Quarantined</code> state is
     * not used. For information about lifecycle states, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/AutoScalingGroupLifecycle.html">Instance
     * lifecycle</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>. </p> <p>Valid
     * values: <code>Pending</code> | <code>Pending:Wait</code> |
     * <code>Pending:Proceed</code> | <code>Quarantined</code> | <code>InService</code>
     * | <code>Terminating</code> | <code>Terminating:Wait</code> |
     * <code>Terminating:Proceed</code> | <code>Terminated</code> |
     * <code>Detaching</code> | <code>Detached</code> | <code>EnteringStandby</code> |
     * <code>Standby</code> | <code>Warmed:Pending</code> |
     * <code>Warmed:Pending:Wait</code> | <code>Warmed:Pending:Proceed</code> |
     * <code>Warmed:Terminating</code> | <code>Warmed:Terminating:Wait</code> |
     * <code>Warmed:Terminating:Proceed</code> | <code>Warmed:Terminated</code> |
     * <code>Warmed:Stopped</code> | <code>Warmed:Running</code> </p>
     */
    inline const Aws::String& GetLifecycleState() const{ return m_lifecycleState; }

    /**
     * <p>The lifecycle state for the instance. The <code>Quarantined</code> state is
     * not used. For information about lifecycle states, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/AutoScalingGroupLifecycle.html">Instance
     * lifecycle</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>. </p> <p>Valid
     * values: <code>Pending</code> | <code>Pending:Wait</code> |
     * <code>Pending:Proceed</code> | <code>Quarantined</code> | <code>InService</code>
     * | <code>Terminating</code> | <code>Terminating:Wait</code> |
     * <code>Terminating:Proceed</code> | <code>Terminated</code> |
     * <code>Detaching</code> | <code>Detached</code> | <code>EnteringStandby</code> |
     * <code>Standby</code> | <code>Warmed:Pending</code> |
     * <code>Warmed:Pending:Wait</code> | <code>Warmed:Pending:Proceed</code> |
     * <code>Warmed:Terminating</code> | <code>Warmed:Terminating:Wait</code> |
     * <code>Warmed:Terminating:Proceed</code> | <code>Warmed:Terminated</code> |
     * <code>Warmed:Stopped</code> | <code>Warmed:Running</code> </p>
     */
    inline bool LifecycleStateHasBeenSet() const { return m_lifecycleStateHasBeenSet; }

    /**
     * <p>The lifecycle state for the instance. The <code>Quarantined</code> state is
     * not used. For information about lifecycle states, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/AutoScalingGroupLifecycle.html">Instance
     * lifecycle</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>. </p> <p>Valid
     * values: <code>Pending</code> | <code>Pending:Wait</code> |
     * <code>Pending:Proceed</code> | <code>Quarantined</code> | <code>InService</code>
     * | <code>Terminating</code> | <code>Terminating:Wait</code> |
     * <code>Terminating:Proceed</code> | <code>Terminated</code> |
     * <code>Detaching</code> | <code>Detached</code> | <code>EnteringStandby</code> |
     * <code>Standby</code> | <code>Warmed:Pending</code> |
     * <code>Warmed:Pending:Wait</code> | <code>Warmed:Pending:Proceed</code> |
     * <code>Warmed:Terminating</code> | <code>Warmed:Terminating:Wait</code> |
     * <code>Warmed:Terminating:Proceed</code> | <code>Warmed:Terminated</code> |
     * <code>Warmed:Stopped</code> | <code>Warmed:Running</code> </p>
     */
    inline void SetLifecycleState(const Aws::String& value) { m_lifecycleStateHasBeenSet = true; m_lifecycleState = value; }

    /**
     * <p>The lifecycle state for the instance. The <code>Quarantined</code> state is
     * not used. For information about lifecycle states, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/AutoScalingGroupLifecycle.html">Instance
     * lifecycle</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>. </p> <p>Valid
     * values: <code>Pending</code> | <code>Pending:Wait</code> |
     * <code>Pending:Proceed</code> | <code>Quarantined</code> | <code>InService</code>
     * | <code>Terminating</code> | <code>Terminating:Wait</code> |
     * <code>Terminating:Proceed</code> | <code>Terminated</code> |
     * <code>Detaching</code> | <code>Detached</code> | <code>EnteringStandby</code> |
     * <code>Standby</code> | <code>Warmed:Pending</code> |
     * <code>Warmed:Pending:Wait</code> | <code>Warmed:Pending:Proceed</code> |
     * <code>Warmed:Terminating</code> | <code>Warmed:Terminating:Wait</code> |
     * <code>Warmed:Terminating:Proceed</code> | <code>Warmed:Terminated</code> |
     * <code>Warmed:Stopped</code> | <code>Warmed:Running</code> </p>
     */
    inline void SetLifecycleState(Aws::String&& value) { m_lifecycleStateHasBeenSet = true; m_lifecycleState = std::move(value); }

    /**
     * <p>The lifecycle state for the instance. The <code>Quarantined</code> state is
     * not used. For information about lifecycle states, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/AutoScalingGroupLifecycle.html">Instance
     * lifecycle</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>. </p> <p>Valid
     * values: <code>Pending</code> | <code>Pending:Wait</code> |
     * <code>Pending:Proceed</code> | <code>Quarantined</code> | <code>InService</code>
     * | <code>Terminating</code> | <code>Terminating:Wait</code> |
     * <code>Terminating:Proceed</code> | <code>Terminated</code> |
     * <code>Detaching</code> | <code>Detached</code> | <code>EnteringStandby</code> |
     * <code>Standby</code> | <code>Warmed:Pending</code> |
     * <code>Warmed:Pending:Wait</code> | <code>Warmed:Pending:Proceed</code> |
     * <code>Warmed:Terminating</code> | <code>Warmed:Terminating:Wait</code> |
     * <code>Warmed:Terminating:Proceed</code> | <code>Warmed:Terminated</code> |
     * <code>Warmed:Stopped</code> | <code>Warmed:Running</code> </p>
     */
    inline void SetLifecycleState(const char* value) { m_lifecycleStateHasBeenSet = true; m_lifecycleState.assign(value); }

    /**
     * <p>The lifecycle state for the instance. The <code>Quarantined</code> state is
     * not used. For information about lifecycle states, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/AutoScalingGroupLifecycle.html">Instance
     * lifecycle</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>. </p> <p>Valid
     * values: <code>Pending</code> | <code>Pending:Wait</code> |
     * <code>Pending:Proceed</code> | <code>Quarantined</code> | <code>InService</code>
     * | <code>Terminating</code> | <code>Terminating:Wait</code> |
     * <code>Terminating:Proceed</code> | <code>Terminated</code> |
     * <code>Detaching</code> | <code>Detached</code> | <code>EnteringStandby</code> |
     * <code>Standby</code> | <code>Warmed:Pending</code> |
     * <code>Warmed:Pending:Wait</code> | <code>Warmed:Pending:Proceed</code> |
     * <code>Warmed:Terminating</code> | <code>Warmed:Terminating:Wait</code> |
     * <code>Warmed:Terminating:Proceed</code> | <code>Warmed:Terminated</code> |
     * <code>Warmed:Stopped</code> | <code>Warmed:Running</code> </p>
     */
    inline AutoScalingInstanceDetails& WithLifecycleState(const Aws::String& value) { SetLifecycleState(value); return *this;}

    /**
     * <p>The lifecycle state for the instance. The <code>Quarantined</code> state is
     * not used. For information about lifecycle states, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/AutoScalingGroupLifecycle.html">Instance
     * lifecycle</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>. </p> <p>Valid
     * values: <code>Pending</code> | <code>Pending:Wait</code> |
     * <code>Pending:Proceed</code> | <code>Quarantined</code> | <code>InService</code>
     * | <code>Terminating</code> | <code>Terminating:Wait</code> |
     * <code>Terminating:Proceed</code> | <code>Terminated</code> |
     * <code>Detaching</code> | <code>Detached</code> | <code>EnteringStandby</code> |
     * <code>Standby</code> | <code>Warmed:Pending</code> |
     * <code>Warmed:Pending:Wait</code> | <code>Warmed:Pending:Proceed</code> |
     * <code>Warmed:Terminating</code> | <code>Warmed:Terminating:Wait</code> |
     * <code>Warmed:Terminating:Proceed</code> | <code>Warmed:Terminated</code> |
     * <code>Warmed:Stopped</code> | <code>Warmed:Running</code> </p>
     */
    inline AutoScalingInstanceDetails& WithLifecycleState(Aws::String&& value) { SetLifecycleState(std::move(value)); return *this;}

    /**
     * <p>The lifecycle state for the instance. The <code>Quarantined</code> state is
     * not used. For information about lifecycle states, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/AutoScalingGroupLifecycle.html">Instance
     * lifecycle</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>. </p> <p>Valid
     * values: <code>Pending</code> | <code>Pending:Wait</code> |
     * <code>Pending:Proceed</code> | <code>Quarantined</code> | <code>InService</code>
     * | <code>Terminating</code> | <code>Terminating:Wait</code> |
     * <code>Terminating:Proceed</code> | <code>Terminated</code> |
     * <code>Detaching</code> | <code>Detached</code> | <code>EnteringStandby</code> |
     * <code>Standby</code> | <code>Warmed:Pending</code> |
     * <code>Warmed:Pending:Wait</code> | <code>Warmed:Pending:Proceed</code> |
     * <code>Warmed:Terminating</code> | <code>Warmed:Terminating:Wait</code> |
     * <code>Warmed:Terminating:Proceed</code> | <code>Warmed:Terminated</code> |
     * <code>Warmed:Stopped</code> | <code>Warmed:Running</code> </p>
     */
    inline AutoScalingInstanceDetails& WithLifecycleState(const char* value) { SetLifecycleState(value); return *this;}


    /**
     * <p>The last reported health status of this instance. "Healthy" means that the
     * instance is healthy and should remain in service. "Unhealthy" means that the
     * instance is unhealthy and Amazon EC2 Auto Scaling should terminate and replace
     * it.</p>
     */
    inline const Aws::String& GetHealthStatus() const{ return m_healthStatus; }

    /**
     * <p>The last reported health status of this instance. "Healthy" means that the
     * instance is healthy and should remain in service. "Unhealthy" means that the
     * instance is unhealthy and Amazon EC2 Auto Scaling should terminate and replace
     * it.</p>
     */
    inline bool HealthStatusHasBeenSet() const { return m_healthStatusHasBeenSet; }

    /**
     * <p>The last reported health status of this instance. "Healthy" means that the
     * instance is healthy and should remain in service. "Unhealthy" means that the
     * instance is unhealthy and Amazon EC2 Auto Scaling should terminate and replace
     * it.</p>
     */
    inline void SetHealthStatus(const Aws::String& value) { m_healthStatusHasBeenSet = true; m_healthStatus = value; }

    /**
     * <p>The last reported health status of this instance. "Healthy" means that the
     * instance is healthy and should remain in service. "Unhealthy" means that the
     * instance is unhealthy and Amazon EC2 Auto Scaling should terminate and replace
     * it.</p>
     */
    inline void SetHealthStatus(Aws::String&& value) { m_healthStatusHasBeenSet = true; m_healthStatus = std::move(value); }

    /**
     * <p>The last reported health status of this instance. "Healthy" means that the
     * instance is healthy and should remain in service. "Unhealthy" means that the
     * instance is unhealthy and Amazon EC2 Auto Scaling should terminate and replace
     * it.</p>
     */
    inline void SetHealthStatus(const char* value) { m_healthStatusHasBeenSet = true; m_healthStatus.assign(value); }

    /**
     * <p>The last reported health status of this instance. "Healthy" means that the
     * instance is healthy and should remain in service. "Unhealthy" means that the
     * instance is unhealthy and Amazon EC2 Auto Scaling should terminate and replace
     * it.</p>
     */
    inline AutoScalingInstanceDetails& WithHealthStatus(const Aws::String& value) { SetHealthStatus(value); return *this;}

    /**
     * <p>The last reported health status of this instance. "Healthy" means that the
     * instance is healthy and should remain in service. "Unhealthy" means that the
     * instance is unhealthy and Amazon EC2 Auto Scaling should terminate and replace
     * it.</p>
     */
    inline AutoScalingInstanceDetails& WithHealthStatus(Aws::String&& value) { SetHealthStatus(std::move(value)); return *this;}

    /**
     * <p>The last reported health status of this instance. "Healthy" means that the
     * instance is healthy and should remain in service. "Unhealthy" means that the
     * instance is unhealthy and Amazon EC2 Auto Scaling should terminate and replace
     * it.</p>
     */
    inline AutoScalingInstanceDetails& WithHealthStatus(const char* value) { SetHealthStatus(value); return *this;}


    /**
     * <p>The launch configuration used to launch the instance. This value is not
     * available if you attached the instance to the Auto Scaling group.</p>
     */
    inline const Aws::String& GetLaunchConfigurationName() const{ return m_launchConfigurationName; }

    /**
     * <p>The launch configuration used to launch the instance. This value is not
     * available if you attached the instance to the Auto Scaling group.</p>
     */
    inline bool LaunchConfigurationNameHasBeenSet() const { return m_launchConfigurationNameHasBeenSet; }

    /**
     * <p>The launch configuration used to launch the instance. This value is not
     * available if you attached the instance to the Auto Scaling group.</p>
     */
    inline void SetLaunchConfigurationName(const Aws::String& value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName = value; }

    /**
     * <p>The launch configuration used to launch the instance. This value is not
     * available if you attached the instance to the Auto Scaling group.</p>
     */
    inline void SetLaunchConfigurationName(Aws::String&& value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName = std::move(value); }

    /**
     * <p>The launch configuration used to launch the instance. This value is not
     * available if you attached the instance to the Auto Scaling group.</p>
     */
    inline void SetLaunchConfigurationName(const char* value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName.assign(value); }

    /**
     * <p>The launch configuration used to launch the instance. This value is not
     * available if you attached the instance to the Auto Scaling group.</p>
     */
    inline AutoScalingInstanceDetails& WithLaunchConfigurationName(const Aws::String& value) { SetLaunchConfigurationName(value); return *this;}

    /**
     * <p>The launch configuration used to launch the instance. This value is not
     * available if you attached the instance to the Auto Scaling group.</p>
     */
    inline AutoScalingInstanceDetails& WithLaunchConfigurationName(Aws::String&& value) { SetLaunchConfigurationName(std::move(value)); return *this;}

    /**
     * <p>The launch configuration used to launch the instance. This value is not
     * available if you attached the instance to the Auto Scaling group.</p>
     */
    inline AutoScalingInstanceDetails& WithLaunchConfigurationName(const char* value) { SetLaunchConfigurationName(value); return *this;}


    /**
     * <p>The launch template for the instance.</p>
     */
    inline const LaunchTemplateSpecification& GetLaunchTemplate() const{ return m_launchTemplate; }

    /**
     * <p>The launch template for the instance.</p>
     */
    inline bool LaunchTemplateHasBeenSet() const { return m_launchTemplateHasBeenSet; }

    /**
     * <p>The launch template for the instance.</p>
     */
    inline void SetLaunchTemplate(const LaunchTemplateSpecification& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = value; }

    /**
     * <p>The launch template for the instance.</p>
     */
    inline void SetLaunchTemplate(LaunchTemplateSpecification&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::move(value); }

    /**
     * <p>The launch template for the instance.</p>
     */
    inline AutoScalingInstanceDetails& WithLaunchTemplate(const LaunchTemplateSpecification& value) { SetLaunchTemplate(value); return *this;}

    /**
     * <p>The launch template for the instance.</p>
     */
    inline AutoScalingInstanceDetails& WithLaunchTemplate(LaunchTemplateSpecification&& value) { SetLaunchTemplate(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the instance is protected from termination by Amazon EC2
     * Auto Scaling when scaling in.</p>
     */
    inline bool GetProtectedFromScaleIn() const{ return m_protectedFromScaleIn; }

    /**
     * <p>Indicates whether the instance is protected from termination by Amazon EC2
     * Auto Scaling when scaling in.</p>
     */
    inline bool ProtectedFromScaleInHasBeenSet() const { return m_protectedFromScaleInHasBeenSet; }

    /**
     * <p>Indicates whether the instance is protected from termination by Amazon EC2
     * Auto Scaling when scaling in.</p>
     */
    inline void SetProtectedFromScaleIn(bool value) { m_protectedFromScaleInHasBeenSet = true; m_protectedFromScaleIn = value; }

    /**
     * <p>Indicates whether the instance is protected from termination by Amazon EC2
     * Auto Scaling when scaling in.</p>
     */
    inline AutoScalingInstanceDetails& WithProtectedFromScaleIn(bool value) { SetProtectedFromScaleIn(value); return *this;}


    /**
     * <p>The number of capacity units contributed by the instance based on its
     * instance type.</p> <p>Valid Range: Minimum value of 1. Maximum value of 999.</p>
     */
    inline const Aws::String& GetWeightedCapacity() const{ return m_weightedCapacity; }

    /**
     * <p>The number of capacity units contributed by the instance based on its
     * instance type.</p> <p>Valid Range: Minimum value of 1. Maximum value of 999.</p>
     */
    inline bool WeightedCapacityHasBeenSet() const { return m_weightedCapacityHasBeenSet; }

    /**
     * <p>The number of capacity units contributed by the instance based on its
     * instance type.</p> <p>Valid Range: Minimum value of 1. Maximum value of 999.</p>
     */
    inline void SetWeightedCapacity(const Aws::String& value) { m_weightedCapacityHasBeenSet = true; m_weightedCapacity = value; }

    /**
     * <p>The number of capacity units contributed by the instance based on its
     * instance type.</p> <p>Valid Range: Minimum value of 1. Maximum value of 999.</p>
     */
    inline void SetWeightedCapacity(Aws::String&& value) { m_weightedCapacityHasBeenSet = true; m_weightedCapacity = std::move(value); }

    /**
     * <p>The number of capacity units contributed by the instance based on its
     * instance type.</p> <p>Valid Range: Minimum value of 1. Maximum value of 999.</p>
     */
    inline void SetWeightedCapacity(const char* value) { m_weightedCapacityHasBeenSet = true; m_weightedCapacity.assign(value); }

    /**
     * <p>The number of capacity units contributed by the instance based on its
     * instance type.</p> <p>Valid Range: Minimum value of 1. Maximum value of 999.</p>
     */
    inline AutoScalingInstanceDetails& WithWeightedCapacity(const Aws::String& value) { SetWeightedCapacity(value); return *this;}

    /**
     * <p>The number of capacity units contributed by the instance based on its
     * instance type.</p> <p>Valid Range: Minimum value of 1. Maximum value of 999.</p>
     */
    inline AutoScalingInstanceDetails& WithWeightedCapacity(Aws::String&& value) { SetWeightedCapacity(std::move(value)); return *this;}

    /**
     * <p>The number of capacity units contributed by the instance based on its
     * instance type.</p> <p>Valid Range: Minimum value of 1. Maximum value of 999.</p>
     */
    inline AutoScalingInstanceDetails& WithWeightedCapacity(const char* value) { SetWeightedCapacity(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_lifecycleState;
    bool m_lifecycleStateHasBeenSet = false;

    Aws::String m_healthStatus;
    bool m_healthStatusHasBeenSet = false;

    Aws::String m_launchConfigurationName;
    bool m_launchConfigurationNameHasBeenSet = false;

    LaunchTemplateSpecification m_launchTemplate;
    bool m_launchTemplateHasBeenSet = false;

    bool m_protectedFromScaleIn;
    bool m_protectedFromScaleInHasBeenSet = false;

    Aws::String m_weightedCapacity;
    bool m_weightedCapacityHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
