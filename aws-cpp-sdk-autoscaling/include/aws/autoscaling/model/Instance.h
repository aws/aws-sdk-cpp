/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling/model/LifecycleState.h>

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
   * <p>Describes an EC2 instance.</p>
   */
  class AWS_AUTOSCALING_API Instance
  {
  public:
    Instance();
    Instance(const Aws::Utils::Xml::XmlNode& xmlNode);
    Instance& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline Instance& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline Instance& WithInstanceId(Aws::String&& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline Instance& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    /**
     * <p>The Availability Zone in which the instance is running.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone in which the instance is running.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone in which the instance is running.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone in which the instance is running.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone in which the instance is running.</p>
     */
    inline Instance& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone in which the instance is running.</p>
     */
    inline Instance& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone in which the instance is running.</p>
     */
    inline Instance& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>A description of the current lifecycle state. Note that the
     * <code>Quarantined</code> state is not used.</p>
     */
    inline const LifecycleState& GetLifecycleState() const{ return m_lifecycleState; }

    /**
     * <p>A description of the current lifecycle state. Note that the
     * <code>Quarantined</code> state is not used.</p>
     */
    inline void SetLifecycleState(const LifecycleState& value) { m_lifecycleStateHasBeenSet = true; m_lifecycleState = value; }

    /**
     * <p>A description of the current lifecycle state. Note that the
     * <code>Quarantined</code> state is not used.</p>
     */
    inline void SetLifecycleState(LifecycleState&& value) { m_lifecycleStateHasBeenSet = true; m_lifecycleState = value; }

    /**
     * <p>A description of the current lifecycle state. Note that the
     * <code>Quarantined</code> state is not used.</p>
     */
    inline Instance& WithLifecycleState(const LifecycleState& value) { SetLifecycleState(value); return *this;}

    /**
     * <p>A description of the current lifecycle state. Note that the
     * <code>Quarantined</code> state is not used.</p>
     */
    inline Instance& WithLifecycleState(LifecycleState&& value) { SetLifecycleState(value); return *this;}

    /**
     * <p>The last reported health status of the instance. "Healthy" means that the
     * instance is healthy and should remain in service. "Unhealthy" means that the
     * instance is unhealthy and Auto Scaling should terminate and replace it.</p>
     */
    inline const Aws::String& GetHealthStatus() const{ return m_healthStatus; }

    /**
     * <p>The last reported health status of the instance. "Healthy" means that the
     * instance is healthy and should remain in service. "Unhealthy" means that the
     * instance is unhealthy and Auto Scaling should terminate and replace it.</p>
     */
    inline void SetHealthStatus(const Aws::String& value) { m_healthStatusHasBeenSet = true; m_healthStatus = value; }

    /**
     * <p>The last reported health status of the instance. "Healthy" means that the
     * instance is healthy and should remain in service. "Unhealthy" means that the
     * instance is unhealthy and Auto Scaling should terminate and replace it.</p>
     */
    inline void SetHealthStatus(Aws::String&& value) { m_healthStatusHasBeenSet = true; m_healthStatus = value; }

    /**
     * <p>The last reported health status of the instance. "Healthy" means that the
     * instance is healthy and should remain in service. "Unhealthy" means that the
     * instance is unhealthy and Auto Scaling should terminate and replace it.</p>
     */
    inline void SetHealthStatus(const char* value) { m_healthStatusHasBeenSet = true; m_healthStatus.assign(value); }

    /**
     * <p>The last reported health status of the instance. "Healthy" means that the
     * instance is healthy and should remain in service. "Unhealthy" means that the
     * instance is unhealthy and Auto Scaling should terminate and replace it.</p>
     */
    inline Instance& WithHealthStatus(const Aws::String& value) { SetHealthStatus(value); return *this;}

    /**
     * <p>The last reported health status of the instance. "Healthy" means that the
     * instance is healthy and should remain in service. "Unhealthy" means that the
     * instance is unhealthy and Auto Scaling should terminate and replace it.</p>
     */
    inline Instance& WithHealthStatus(Aws::String&& value) { SetHealthStatus(value); return *this;}

    /**
     * <p>The last reported health status of the instance. "Healthy" means that the
     * instance is healthy and should remain in service. "Unhealthy" means that the
     * instance is unhealthy and Auto Scaling should terminate and replace it.</p>
     */
    inline Instance& WithHealthStatus(const char* value) { SetHealthStatus(value); return *this;}

    /**
     * <p>The launch configuration associated with the instance.</p>
     */
    inline const Aws::String& GetLaunchConfigurationName() const{ return m_launchConfigurationName; }

    /**
     * <p>The launch configuration associated with the instance.</p>
     */
    inline void SetLaunchConfigurationName(const Aws::String& value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName = value; }

    /**
     * <p>The launch configuration associated with the instance.</p>
     */
    inline void SetLaunchConfigurationName(Aws::String&& value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName = value; }

    /**
     * <p>The launch configuration associated with the instance.</p>
     */
    inline void SetLaunchConfigurationName(const char* value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName.assign(value); }

    /**
     * <p>The launch configuration associated with the instance.</p>
     */
    inline Instance& WithLaunchConfigurationName(const Aws::String& value) { SetLaunchConfigurationName(value); return *this;}

    /**
     * <p>The launch configuration associated with the instance.</p>
     */
    inline Instance& WithLaunchConfigurationName(Aws::String&& value) { SetLaunchConfigurationName(value); return *this;}

    /**
     * <p>The launch configuration associated with the instance.</p>
     */
    inline Instance& WithLaunchConfigurationName(const char* value) { SetLaunchConfigurationName(value); return *this;}

    /**
     * <p>Indicates whether the instance is protected from termination by Auto Scaling
     * when scaling in.</p>
     */
    inline bool GetProtectedFromScaleIn() const{ return m_protectedFromScaleIn; }

    /**
     * <p>Indicates whether the instance is protected from termination by Auto Scaling
     * when scaling in.</p>
     */
    inline void SetProtectedFromScaleIn(bool value) { m_protectedFromScaleInHasBeenSet = true; m_protectedFromScaleIn = value; }

    /**
     * <p>Indicates whether the instance is protected from termination by Auto Scaling
     * when scaling in.</p>
     */
    inline Instance& WithProtectedFromScaleIn(bool value) { SetProtectedFromScaleIn(value); return *this;}

  private:
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;
    LifecycleState m_lifecycleState;
    bool m_lifecycleStateHasBeenSet;
    Aws::String m_healthStatus;
    bool m_healthStatusHasBeenSet;
    Aws::String m_launchConfigurationName;
    bool m_launchConfigurationNameHasBeenSet;
    bool m_protectedFromScaleIn;
    bool m_protectedFromScaleInHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
