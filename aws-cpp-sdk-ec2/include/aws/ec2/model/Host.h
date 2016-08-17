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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AutoPlacement.h>
#include <aws/ec2/model/HostProperties.h>
#include <aws/ec2/model/AllocationState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/AvailableCapacity.h>
#include <aws/ec2/model/HostInstance.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the properties of the Dedicated host.</p>
   */
  class AWS_EC2_API Host
  {
  public:
    Host();
    Host(const Aws::Utils::Xml::XmlNode& xmlNode);
    Host& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The ID of the Dedicated host.</p>
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }

    /**
     * <p>The ID of the Dedicated host.</p>
     */
    inline void SetHostId(const Aws::String& value) { m_hostIdHasBeenSet = true; m_hostId = value; }

    /**
     * <p>The ID of the Dedicated host.</p>
     */
    inline void SetHostId(Aws::String&& value) { m_hostIdHasBeenSet = true; m_hostId = value; }

    /**
     * <p>The ID of the Dedicated host.</p>
     */
    inline void SetHostId(const char* value) { m_hostIdHasBeenSet = true; m_hostId.assign(value); }

    /**
     * <p>The ID of the Dedicated host.</p>
     */
    inline Host& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}

    /**
     * <p>The ID of the Dedicated host.</p>
     */
    inline Host& WithHostId(Aws::String&& value) { SetHostId(value); return *this;}

    /**
     * <p>The ID of the Dedicated host.</p>
     */
    inline Host& WithHostId(const char* value) { SetHostId(value); return *this;}

    /**
     * <p>Whether auto-placement is on or off.</p>
     */
    inline const AutoPlacement& GetAutoPlacement() const{ return m_autoPlacement; }

    /**
     * <p>Whether auto-placement is on or off.</p>
     */
    inline void SetAutoPlacement(const AutoPlacement& value) { m_autoPlacementHasBeenSet = true; m_autoPlacement = value; }

    /**
     * <p>Whether auto-placement is on or off.</p>
     */
    inline void SetAutoPlacement(AutoPlacement&& value) { m_autoPlacementHasBeenSet = true; m_autoPlacement = value; }

    /**
     * <p>Whether auto-placement is on or off.</p>
     */
    inline Host& WithAutoPlacement(const AutoPlacement& value) { SetAutoPlacement(value); return *this;}

    /**
     * <p>Whether auto-placement is on or off.</p>
     */
    inline Host& WithAutoPlacement(AutoPlacement&& value) { SetAutoPlacement(value); return *this;}

    /**
     * <p>The reservation ID of the Dedicated host. This returns a <code>null</code>
     * response if the Dedicated host doesn't have an associated reservation.</p>
     */
    inline const Aws::String& GetHostReservationId() const{ return m_hostReservationId; }

    /**
     * <p>The reservation ID of the Dedicated host. This returns a <code>null</code>
     * response if the Dedicated host doesn't have an associated reservation.</p>
     */
    inline void SetHostReservationId(const Aws::String& value) { m_hostReservationIdHasBeenSet = true; m_hostReservationId = value; }

    /**
     * <p>The reservation ID of the Dedicated host. This returns a <code>null</code>
     * response if the Dedicated host doesn't have an associated reservation.</p>
     */
    inline void SetHostReservationId(Aws::String&& value) { m_hostReservationIdHasBeenSet = true; m_hostReservationId = value; }

    /**
     * <p>The reservation ID of the Dedicated host. This returns a <code>null</code>
     * response if the Dedicated host doesn't have an associated reservation.</p>
     */
    inline void SetHostReservationId(const char* value) { m_hostReservationIdHasBeenSet = true; m_hostReservationId.assign(value); }

    /**
     * <p>The reservation ID of the Dedicated host. This returns a <code>null</code>
     * response if the Dedicated host doesn't have an associated reservation.</p>
     */
    inline Host& WithHostReservationId(const Aws::String& value) { SetHostReservationId(value); return *this;}

    /**
     * <p>The reservation ID of the Dedicated host. This returns a <code>null</code>
     * response if the Dedicated host doesn't have an associated reservation.</p>
     */
    inline Host& WithHostReservationId(Aws::String&& value) { SetHostReservationId(value); return *this;}

    /**
     * <p>The reservation ID of the Dedicated host. This returns a <code>null</code>
     * response if the Dedicated host doesn't have an associated reservation.</p>
     */
    inline Host& WithHostReservationId(const char* value) { SetHostReservationId(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.
     * </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.
     * </p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.
     * </p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.
     * </p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.
     * </p>
     */
    inline Host& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.
     * </p>
     */
    inline Host& WithClientToken(Aws::String&& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.
     * </p>
     */
    inline Host& WithClientToken(const char* value) { SetClientToken(value); return *this;}

    /**
     * <p>The hardware specifications of the Dedicated host.</p>
     */
    inline const HostProperties& GetHostProperties() const{ return m_hostProperties; }

    /**
     * <p>The hardware specifications of the Dedicated host.</p>
     */
    inline void SetHostProperties(const HostProperties& value) { m_hostPropertiesHasBeenSet = true; m_hostProperties = value; }

    /**
     * <p>The hardware specifications of the Dedicated host.</p>
     */
    inline void SetHostProperties(HostProperties&& value) { m_hostPropertiesHasBeenSet = true; m_hostProperties = value; }

    /**
     * <p>The hardware specifications of the Dedicated host.</p>
     */
    inline Host& WithHostProperties(const HostProperties& value) { SetHostProperties(value); return *this;}

    /**
     * <p>The hardware specifications of the Dedicated host.</p>
     */
    inline Host& WithHostProperties(HostProperties&& value) { SetHostProperties(value); return *this;}

    /**
     * <p>The Dedicated host's state.</p>
     */
    inline const AllocationState& GetState() const{ return m_state; }

    /**
     * <p>The Dedicated host's state.</p>
     */
    inline void SetState(const AllocationState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The Dedicated host's state.</p>
     */
    inline void SetState(AllocationState&& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The Dedicated host's state.</p>
     */
    inline Host& WithState(const AllocationState& value) { SetState(value); return *this;}

    /**
     * <p>The Dedicated host's state.</p>
     */
    inline Host& WithState(AllocationState&& value) { SetState(value); return *this;}

    /**
     * <p>The Availability Zone of the Dedicated host.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone of the Dedicated host.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone of the Dedicated host.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone of the Dedicated host.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone of the Dedicated host.</p>
     */
    inline Host& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone of the Dedicated host.</p>
     */
    inline Host& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone of the Dedicated host.</p>
     */
    inline Host& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The IDs and instance type that are currently running on the Dedicated
     * host.</p>
     */
    inline const Aws::Vector<HostInstance>& GetInstances() const{ return m_instances; }

    /**
     * <p>The IDs and instance type that are currently running on the Dedicated
     * host.</p>
     */
    inline void SetInstances(const Aws::Vector<HostInstance>& value) { m_instancesHasBeenSet = true; m_instances = value; }

    /**
     * <p>The IDs and instance type that are currently running on the Dedicated
     * host.</p>
     */
    inline void SetInstances(Aws::Vector<HostInstance>&& value) { m_instancesHasBeenSet = true; m_instances = value; }

    /**
     * <p>The IDs and instance type that are currently running on the Dedicated
     * host.</p>
     */
    inline Host& WithInstances(const Aws::Vector<HostInstance>& value) { SetInstances(value); return *this;}

    /**
     * <p>The IDs and instance type that are currently running on the Dedicated
     * host.</p>
     */
    inline Host& WithInstances(Aws::Vector<HostInstance>&& value) { SetInstances(value); return *this;}

    /**
     * <p>The IDs and instance type that are currently running on the Dedicated
     * host.</p>
     */
    inline Host& AddInstances(const HostInstance& value) { m_instancesHasBeenSet = true; m_instances.push_back(value); return *this; }

    /**
     * <p>The IDs and instance type that are currently running on the Dedicated
     * host.</p>
     */
    inline Host& AddInstances(HostInstance&& value) { m_instancesHasBeenSet = true; m_instances.push_back(value); return *this; }

    /**
     * <p>The number of new instances that can be launched onto the Dedicated host.</p>
     */
    inline const AvailableCapacity& GetAvailableCapacity() const{ return m_availableCapacity; }

    /**
     * <p>The number of new instances that can be launched onto the Dedicated host.</p>
     */
    inline void SetAvailableCapacity(const AvailableCapacity& value) { m_availableCapacityHasBeenSet = true; m_availableCapacity = value; }

    /**
     * <p>The number of new instances that can be launched onto the Dedicated host.</p>
     */
    inline void SetAvailableCapacity(AvailableCapacity&& value) { m_availableCapacityHasBeenSet = true; m_availableCapacity = value; }

    /**
     * <p>The number of new instances that can be launched onto the Dedicated host.</p>
     */
    inline Host& WithAvailableCapacity(const AvailableCapacity& value) { SetAvailableCapacity(value); return *this;}

    /**
     * <p>The number of new instances that can be launched onto the Dedicated host.</p>
     */
    inline Host& WithAvailableCapacity(AvailableCapacity&& value) { SetAvailableCapacity(value); return *this;}

  private:
    Aws::String m_hostId;
    bool m_hostIdHasBeenSet;
    AutoPlacement m_autoPlacement;
    bool m_autoPlacementHasBeenSet;
    Aws::String m_hostReservationId;
    bool m_hostReservationIdHasBeenSet;
    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
    HostProperties m_hostProperties;
    bool m_hostPropertiesHasBeenSet;
    AllocationState m_state;
    bool m_stateHasBeenSet;
    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;
    Aws::Vector<HostInstance> m_instances;
    bool m_instancesHasBeenSet;
    AvailableCapacity m_availableCapacity;
    bool m_availableCapacityHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
