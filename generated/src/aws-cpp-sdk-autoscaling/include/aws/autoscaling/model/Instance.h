/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling/model/LifecycleState.h>
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
   * <p>Describes an EC2 instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/Instance">AWS
   * API Reference</a></p>
   */
  class Instance
  {
  public:
    AWS_AUTOSCALING_API Instance();
    AWS_AUTOSCALING_API Instance(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API Instance& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline Instance& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline Instance& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline Instance& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type of the EC2 instance.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline Instance& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline Instance& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline Instance& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone in which the instance is running.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline Instance& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline Instance& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline Instance& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the current lifecycle state. The <code>Quarantined</code>
     * state is not used. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-lifecycle.html">Amazon
     * EC2 Auto Scaling instance lifecycle</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>. </p>
     */
    inline const LifecycleState& GetLifecycleState() const{ return m_lifecycleState; }
    inline bool LifecycleStateHasBeenSet() const { return m_lifecycleStateHasBeenSet; }
    inline void SetLifecycleState(const LifecycleState& value) { m_lifecycleStateHasBeenSet = true; m_lifecycleState = value; }
    inline void SetLifecycleState(LifecycleState&& value) { m_lifecycleStateHasBeenSet = true; m_lifecycleState = std::move(value); }
    inline Instance& WithLifecycleState(const LifecycleState& value) { SetLifecycleState(value); return *this;}
    inline Instance& WithLifecycleState(LifecycleState&& value) { SetLifecycleState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last reported health status of the instance. <code>Healthy</code> means
     * that the instance is healthy and should remain in service.
     * <code>Unhealthy</code> means that the instance is unhealthy and that Amazon EC2
     * Auto Scaling should terminate and replace it.</p>
     */
    inline const Aws::String& GetHealthStatus() const{ return m_healthStatus; }
    inline bool HealthStatusHasBeenSet() const { return m_healthStatusHasBeenSet; }
    inline void SetHealthStatus(const Aws::String& value) { m_healthStatusHasBeenSet = true; m_healthStatus = value; }
    inline void SetHealthStatus(Aws::String&& value) { m_healthStatusHasBeenSet = true; m_healthStatus = std::move(value); }
    inline void SetHealthStatus(const char* value) { m_healthStatusHasBeenSet = true; m_healthStatus.assign(value); }
    inline Instance& WithHealthStatus(const Aws::String& value) { SetHealthStatus(value); return *this;}
    inline Instance& WithHealthStatus(Aws::String&& value) { SetHealthStatus(std::move(value)); return *this;}
    inline Instance& WithHealthStatus(const char* value) { SetHealthStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch configuration associated with the instance.</p>
     */
    inline const Aws::String& GetLaunchConfigurationName() const{ return m_launchConfigurationName; }
    inline bool LaunchConfigurationNameHasBeenSet() const { return m_launchConfigurationNameHasBeenSet; }
    inline void SetLaunchConfigurationName(const Aws::String& value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName = value; }
    inline void SetLaunchConfigurationName(Aws::String&& value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName = std::move(value); }
    inline void SetLaunchConfigurationName(const char* value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName.assign(value); }
    inline Instance& WithLaunchConfigurationName(const Aws::String& value) { SetLaunchConfigurationName(value); return *this;}
    inline Instance& WithLaunchConfigurationName(Aws::String&& value) { SetLaunchConfigurationName(std::move(value)); return *this;}
    inline Instance& WithLaunchConfigurationName(const char* value) { SetLaunchConfigurationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch template for the instance.</p>
     */
    inline const LaunchTemplateSpecification& GetLaunchTemplate() const{ return m_launchTemplate; }
    inline bool LaunchTemplateHasBeenSet() const { return m_launchTemplateHasBeenSet; }
    inline void SetLaunchTemplate(const LaunchTemplateSpecification& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = value; }
    inline void SetLaunchTemplate(LaunchTemplateSpecification&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::move(value); }
    inline Instance& WithLaunchTemplate(const LaunchTemplateSpecification& value) { SetLaunchTemplate(value); return *this;}
    inline Instance& WithLaunchTemplate(LaunchTemplateSpecification&& value) { SetLaunchTemplate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the instance is protected from termination by Amazon EC2
     * Auto Scaling when scaling in.</p>
     */
    inline bool GetProtectedFromScaleIn() const{ return m_protectedFromScaleIn; }
    inline bool ProtectedFromScaleInHasBeenSet() const { return m_protectedFromScaleInHasBeenSet; }
    inline void SetProtectedFromScaleIn(bool value) { m_protectedFromScaleInHasBeenSet = true; m_protectedFromScaleIn = value; }
    inline Instance& WithProtectedFromScaleIn(bool value) { SetProtectedFromScaleIn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of capacity units contributed by the instance based on its
     * instance type.</p> <p>Valid Range: Minimum value of 1. Maximum value of 999.</p>
     */
    inline const Aws::String& GetWeightedCapacity() const{ return m_weightedCapacity; }
    inline bool WeightedCapacityHasBeenSet() const { return m_weightedCapacityHasBeenSet; }
    inline void SetWeightedCapacity(const Aws::String& value) { m_weightedCapacityHasBeenSet = true; m_weightedCapacity = value; }
    inline void SetWeightedCapacity(Aws::String&& value) { m_weightedCapacityHasBeenSet = true; m_weightedCapacity = std::move(value); }
    inline void SetWeightedCapacity(const char* value) { m_weightedCapacityHasBeenSet = true; m_weightedCapacity.assign(value); }
    inline Instance& WithWeightedCapacity(const Aws::String& value) { SetWeightedCapacity(value); return *this;}
    inline Instance& WithWeightedCapacity(Aws::String&& value) { SetWeightedCapacity(std::move(value)); return *this;}
    inline Instance& WithWeightedCapacity(const char* value) { SetWeightedCapacity(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    LifecycleState m_lifecycleState;
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
