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
    AWS_AUTOSCALING_API AutoScalingInstanceDetails() = default;
    AWS_AUTOSCALING_API AutoScalingInstanceDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API AutoScalingInstanceDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    AutoScalingInstanceDetails& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type of the EC2 instance.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    AutoScalingInstanceDetails& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Auto Scaling group for the instance.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const { return m_autoScalingGroupName; }
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }
    template<typename AutoScalingGroupNameT = Aws::String>
    void SetAutoScalingGroupName(AutoScalingGroupNameT&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::forward<AutoScalingGroupNameT>(value); }
    template<typename AutoScalingGroupNameT = Aws::String>
    AutoScalingInstanceDetails& WithAutoScalingGroupName(AutoScalingGroupNameT&& value) { SetAutoScalingGroupName(std::forward<AutoScalingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone for the instance.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    AutoScalingInstanceDetails& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle state for the instance. The <code>Quarantined</code> state is
     * not used. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-lifecycle.html">Amazon
     * EC2 Auto Scaling instance lifecycle</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>. </p> <p>Valid values: <code>Pending</code> |
     * <code>Pending:Wait</code> | <code>Pending:Proceed</code> |
     * <code>Quarantined</code> | <code>InService</code> | <code>Terminating</code> |
     * <code>Terminating:Wait</code> | <code>Terminating:Proceed</code> |
     * <code>Terminated</code> | <code>Detaching</code> | <code>Detached</code> |
     * <code>EnteringStandby</code> | <code>Standby</code> |
     * <code>Warmed:Pending</code> | <code>Warmed:Pending:Wait</code> |
     * <code>Warmed:Pending:Proceed</code> | <code>Warmed:Terminating</code> |
     * <code>Warmed:Terminating:Wait</code> | <code>Warmed:Terminating:Proceed</code> |
     * <code>Warmed:Terminated</code> | <code>Warmed:Stopped</code> |
     * <code>Warmed:Running</code> </p>
     */
    inline const Aws::String& GetLifecycleState() const { return m_lifecycleState; }
    inline bool LifecycleStateHasBeenSet() const { return m_lifecycleStateHasBeenSet; }
    template<typename LifecycleStateT = Aws::String>
    void SetLifecycleState(LifecycleStateT&& value) { m_lifecycleStateHasBeenSet = true; m_lifecycleState = std::forward<LifecycleStateT>(value); }
    template<typename LifecycleStateT = Aws::String>
    AutoScalingInstanceDetails& WithLifecycleState(LifecycleStateT&& value) { SetLifecycleState(std::forward<LifecycleStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last reported health status of this instance. <code>Healthy</code> means
     * that the instance is healthy and should remain in service.
     * <code>Unhealthy</code> means that the instance is unhealthy and Amazon EC2 Auto
     * Scaling should terminate and replace it.</p>
     */
    inline const Aws::String& GetHealthStatus() const { return m_healthStatus; }
    inline bool HealthStatusHasBeenSet() const { return m_healthStatusHasBeenSet; }
    template<typename HealthStatusT = Aws::String>
    void SetHealthStatus(HealthStatusT&& value) { m_healthStatusHasBeenSet = true; m_healthStatus = std::forward<HealthStatusT>(value); }
    template<typename HealthStatusT = Aws::String>
    AutoScalingInstanceDetails& WithHealthStatus(HealthStatusT&& value) { SetHealthStatus(std::forward<HealthStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch configuration used to launch the instance. This value is not
     * available if you attached the instance to the Auto Scaling group.</p>
     */
    inline const Aws::String& GetLaunchConfigurationName() const { return m_launchConfigurationName; }
    inline bool LaunchConfigurationNameHasBeenSet() const { return m_launchConfigurationNameHasBeenSet; }
    template<typename LaunchConfigurationNameT = Aws::String>
    void SetLaunchConfigurationName(LaunchConfigurationNameT&& value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName = std::forward<LaunchConfigurationNameT>(value); }
    template<typename LaunchConfigurationNameT = Aws::String>
    AutoScalingInstanceDetails& WithLaunchConfigurationName(LaunchConfigurationNameT&& value) { SetLaunchConfigurationName(std::forward<LaunchConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch template for the instance.</p>
     */
    inline const LaunchTemplateSpecification& GetLaunchTemplate() const { return m_launchTemplate; }
    inline bool LaunchTemplateHasBeenSet() const { return m_launchTemplateHasBeenSet; }
    template<typename LaunchTemplateT = LaunchTemplateSpecification>
    void SetLaunchTemplate(LaunchTemplateT&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::forward<LaunchTemplateT>(value); }
    template<typename LaunchTemplateT = LaunchTemplateSpecification>
    AutoScalingInstanceDetails& WithLaunchTemplate(LaunchTemplateT&& value) { SetLaunchTemplate(std::forward<LaunchTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the instance is protected from termination by Amazon EC2
     * Auto Scaling when scaling in.</p>
     */
    inline bool GetProtectedFromScaleIn() const { return m_protectedFromScaleIn; }
    inline bool ProtectedFromScaleInHasBeenSet() const { return m_protectedFromScaleInHasBeenSet; }
    inline void SetProtectedFromScaleIn(bool value) { m_protectedFromScaleInHasBeenSet = true; m_protectedFromScaleIn = value; }
    inline AutoScalingInstanceDetails& WithProtectedFromScaleIn(bool value) { SetProtectedFromScaleIn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of capacity units contributed by the instance based on its
     * instance type.</p> <p>Valid Range: Minimum value of 1. Maximum value of 999.</p>
     */
    inline const Aws::String& GetWeightedCapacity() const { return m_weightedCapacity; }
    inline bool WeightedCapacityHasBeenSet() const { return m_weightedCapacityHasBeenSet; }
    template<typename WeightedCapacityT = Aws::String>
    void SetWeightedCapacity(WeightedCapacityT&& value) { m_weightedCapacityHasBeenSet = true; m_weightedCapacity = std::forward<WeightedCapacityT>(value); }
    template<typename WeightedCapacityT = Aws::String>
    AutoScalingInstanceDetails& WithWeightedCapacity(WeightedCapacityT&& value) { SetWeightedCapacity(std::forward<WeightedCapacityT>(value)); return *this;}
    ///@}
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

    bool m_protectedFromScaleIn{false};
    bool m_protectedFromScaleInHasBeenSet = false;

    Aws::String m_weightedCapacity;
    bool m_weightedCapacityHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
