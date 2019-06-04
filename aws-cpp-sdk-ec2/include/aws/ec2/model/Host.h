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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/AutoPlacement.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AvailableCapacity.h>
#include <aws/ec2/model/HostProperties.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/AllocationState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/HostRecovery.h>
#include <aws/ec2/model/HostInstance.h>
#include <aws/ec2/model/Tag.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the properties of the Dedicated Host.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Host">AWS API
   * Reference</a></p>
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
     * <p>Whether auto-placement is on or off.</p>
     */
    inline const AutoPlacement& GetAutoPlacement() const{ return m_autoPlacement; }

    /**
     * <p>Whether auto-placement is on or off.</p>
     */
    inline bool AutoPlacementHasBeenSet() const { return m_autoPlacementHasBeenSet; }

    /**
     * <p>Whether auto-placement is on or off.</p>
     */
    inline void SetAutoPlacement(const AutoPlacement& value) { m_autoPlacementHasBeenSet = true; m_autoPlacement = value; }

    /**
     * <p>Whether auto-placement is on or off.</p>
     */
    inline void SetAutoPlacement(AutoPlacement&& value) { m_autoPlacementHasBeenSet = true; m_autoPlacement = std::move(value); }

    /**
     * <p>Whether auto-placement is on or off.</p>
     */
    inline Host& WithAutoPlacement(const AutoPlacement& value) { SetAutoPlacement(value); return *this;}

    /**
     * <p>Whether auto-placement is on or off.</p>
     */
    inline Host& WithAutoPlacement(AutoPlacement&& value) { SetAutoPlacement(std::move(value)); return *this;}


    /**
     * <p>The Availability Zone of the Dedicated Host.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone of the Dedicated Host.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone of the Dedicated Host.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone of the Dedicated Host.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone of the Dedicated Host.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone of the Dedicated Host.</p>
     */
    inline Host& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone of the Dedicated Host.</p>
     */
    inline Host& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone of the Dedicated Host.</p>
     */
    inline Host& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The number of new instances that can be launched onto the Dedicated Host.</p>
     */
    inline const AvailableCapacity& GetAvailableCapacity() const{ return m_availableCapacity; }

    /**
     * <p>The number of new instances that can be launched onto the Dedicated Host.</p>
     */
    inline bool AvailableCapacityHasBeenSet() const { return m_availableCapacityHasBeenSet; }

    /**
     * <p>The number of new instances that can be launched onto the Dedicated Host.</p>
     */
    inline void SetAvailableCapacity(const AvailableCapacity& value) { m_availableCapacityHasBeenSet = true; m_availableCapacity = value; }

    /**
     * <p>The number of new instances that can be launched onto the Dedicated Host.</p>
     */
    inline void SetAvailableCapacity(AvailableCapacity&& value) { m_availableCapacityHasBeenSet = true; m_availableCapacity = std::move(value); }

    /**
     * <p>The number of new instances that can be launched onto the Dedicated Host.</p>
     */
    inline Host& WithAvailableCapacity(const AvailableCapacity& value) { SetAvailableCapacity(value); return *this;}

    /**
     * <p>The number of new instances that can be launched onto the Dedicated Host.</p>
     */
    inline Host& WithAvailableCapacity(AvailableCapacity&& value) { SetAvailableCapacity(std::move(value)); return *this;}


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline Host& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline Host& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline Host& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The ID of the Dedicated Host.</p>
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }

    /**
     * <p>The ID of the Dedicated Host.</p>
     */
    inline bool HostIdHasBeenSet() const { return m_hostIdHasBeenSet; }

    /**
     * <p>The ID of the Dedicated Host.</p>
     */
    inline void SetHostId(const Aws::String& value) { m_hostIdHasBeenSet = true; m_hostId = value; }

    /**
     * <p>The ID of the Dedicated Host.</p>
     */
    inline void SetHostId(Aws::String&& value) { m_hostIdHasBeenSet = true; m_hostId = std::move(value); }

    /**
     * <p>The ID of the Dedicated Host.</p>
     */
    inline void SetHostId(const char* value) { m_hostIdHasBeenSet = true; m_hostId.assign(value); }

    /**
     * <p>The ID of the Dedicated Host.</p>
     */
    inline Host& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}

    /**
     * <p>The ID of the Dedicated Host.</p>
     */
    inline Host& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Dedicated Host.</p>
     */
    inline Host& WithHostId(const char* value) { SetHostId(value); return *this;}


    /**
     * <p>The hardware specifications of the Dedicated Host.</p>
     */
    inline const HostProperties& GetHostProperties() const{ return m_hostProperties; }

    /**
     * <p>The hardware specifications of the Dedicated Host.</p>
     */
    inline bool HostPropertiesHasBeenSet() const { return m_hostPropertiesHasBeenSet; }

    /**
     * <p>The hardware specifications of the Dedicated Host.</p>
     */
    inline void SetHostProperties(const HostProperties& value) { m_hostPropertiesHasBeenSet = true; m_hostProperties = value; }

    /**
     * <p>The hardware specifications of the Dedicated Host.</p>
     */
    inline void SetHostProperties(HostProperties&& value) { m_hostPropertiesHasBeenSet = true; m_hostProperties = std::move(value); }

    /**
     * <p>The hardware specifications of the Dedicated Host.</p>
     */
    inline Host& WithHostProperties(const HostProperties& value) { SetHostProperties(value); return *this;}

    /**
     * <p>The hardware specifications of the Dedicated Host.</p>
     */
    inline Host& WithHostProperties(HostProperties&& value) { SetHostProperties(std::move(value)); return *this;}


    /**
     * <p>The reservation ID of the Dedicated Host. This returns a <code>null</code>
     * response if the Dedicated Host doesn't have an associated reservation.</p>
     */
    inline const Aws::String& GetHostReservationId() const{ return m_hostReservationId; }

    /**
     * <p>The reservation ID of the Dedicated Host. This returns a <code>null</code>
     * response if the Dedicated Host doesn't have an associated reservation.</p>
     */
    inline bool HostReservationIdHasBeenSet() const { return m_hostReservationIdHasBeenSet; }

    /**
     * <p>The reservation ID of the Dedicated Host. This returns a <code>null</code>
     * response if the Dedicated Host doesn't have an associated reservation.</p>
     */
    inline void SetHostReservationId(const Aws::String& value) { m_hostReservationIdHasBeenSet = true; m_hostReservationId = value; }

    /**
     * <p>The reservation ID of the Dedicated Host. This returns a <code>null</code>
     * response if the Dedicated Host doesn't have an associated reservation.</p>
     */
    inline void SetHostReservationId(Aws::String&& value) { m_hostReservationIdHasBeenSet = true; m_hostReservationId = std::move(value); }

    /**
     * <p>The reservation ID of the Dedicated Host. This returns a <code>null</code>
     * response if the Dedicated Host doesn't have an associated reservation.</p>
     */
    inline void SetHostReservationId(const char* value) { m_hostReservationIdHasBeenSet = true; m_hostReservationId.assign(value); }

    /**
     * <p>The reservation ID of the Dedicated Host. This returns a <code>null</code>
     * response if the Dedicated Host doesn't have an associated reservation.</p>
     */
    inline Host& WithHostReservationId(const Aws::String& value) { SetHostReservationId(value); return *this;}

    /**
     * <p>The reservation ID of the Dedicated Host. This returns a <code>null</code>
     * response if the Dedicated Host doesn't have an associated reservation.</p>
     */
    inline Host& WithHostReservationId(Aws::String&& value) { SetHostReservationId(std::move(value)); return *this;}

    /**
     * <p>The reservation ID of the Dedicated Host. This returns a <code>null</code>
     * response if the Dedicated Host doesn't have an associated reservation.</p>
     */
    inline Host& WithHostReservationId(const char* value) { SetHostReservationId(value); return *this;}


    /**
     * <p>The IDs and instance type that are currently running on the Dedicated
     * Host.</p>
     */
    inline const Aws::Vector<HostInstance>& GetInstances() const{ return m_instances; }

    /**
     * <p>The IDs and instance type that are currently running on the Dedicated
     * Host.</p>
     */
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }

    /**
     * <p>The IDs and instance type that are currently running on the Dedicated
     * Host.</p>
     */
    inline void SetInstances(const Aws::Vector<HostInstance>& value) { m_instancesHasBeenSet = true; m_instances = value; }

    /**
     * <p>The IDs and instance type that are currently running on the Dedicated
     * Host.</p>
     */
    inline void SetInstances(Aws::Vector<HostInstance>&& value) { m_instancesHasBeenSet = true; m_instances = std::move(value); }

    /**
     * <p>The IDs and instance type that are currently running on the Dedicated
     * Host.</p>
     */
    inline Host& WithInstances(const Aws::Vector<HostInstance>& value) { SetInstances(value); return *this;}

    /**
     * <p>The IDs and instance type that are currently running on the Dedicated
     * Host.</p>
     */
    inline Host& WithInstances(Aws::Vector<HostInstance>&& value) { SetInstances(std::move(value)); return *this;}

    /**
     * <p>The IDs and instance type that are currently running on the Dedicated
     * Host.</p>
     */
    inline Host& AddInstances(const HostInstance& value) { m_instancesHasBeenSet = true; m_instances.push_back(value); return *this; }

    /**
     * <p>The IDs and instance type that are currently running on the Dedicated
     * Host.</p>
     */
    inline Host& AddInstances(HostInstance&& value) { m_instancesHasBeenSet = true; m_instances.push_back(std::move(value)); return *this; }


    /**
     * <p>The Dedicated Host's state.</p>
     */
    inline const AllocationState& GetState() const{ return m_state; }

    /**
     * <p>The Dedicated Host's state.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The Dedicated Host's state.</p>
     */
    inline void SetState(const AllocationState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The Dedicated Host's state.</p>
     */
    inline void SetState(AllocationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The Dedicated Host's state.</p>
     */
    inline Host& WithState(const AllocationState& value) { SetState(value); return *this;}

    /**
     * <p>The Dedicated Host's state.</p>
     */
    inline Host& WithState(AllocationState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The time that the Dedicated Host was allocated.</p>
     */
    inline const Aws::Utils::DateTime& GetAllocationTime() const{ return m_allocationTime; }

    /**
     * <p>The time that the Dedicated Host was allocated.</p>
     */
    inline bool AllocationTimeHasBeenSet() const { return m_allocationTimeHasBeenSet; }

    /**
     * <p>The time that the Dedicated Host was allocated.</p>
     */
    inline void SetAllocationTime(const Aws::Utils::DateTime& value) { m_allocationTimeHasBeenSet = true; m_allocationTime = value; }

    /**
     * <p>The time that the Dedicated Host was allocated.</p>
     */
    inline void SetAllocationTime(Aws::Utils::DateTime&& value) { m_allocationTimeHasBeenSet = true; m_allocationTime = std::move(value); }

    /**
     * <p>The time that the Dedicated Host was allocated.</p>
     */
    inline Host& WithAllocationTime(const Aws::Utils::DateTime& value) { SetAllocationTime(value); return *this;}

    /**
     * <p>The time that the Dedicated Host was allocated.</p>
     */
    inline Host& WithAllocationTime(Aws::Utils::DateTime&& value) { SetAllocationTime(std::move(value)); return *this;}


    /**
     * <p>The time that the Dedicated Host was released.</p>
     */
    inline const Aws::Utils::DateTime& GetReleaseTime() const{ return m_releaseTime; }

    /**
     * <p>The time that the Dedicated Host was released.</p>
     */
    inline bool ReleaseTimeHasBeenSet() const { return m_releaseTimeHasBeenSet; }

    /**
     * <p>The time that the Dedicated Host was released.</p>
     */
    inline void SetReleaseTime(const Aws::Utils::DateTime& value) { m_releaseTimeHasBeenSet = true; m_releaseTime = value; }

    /**
     * <p>The time that the Dedicated Host was released.</p>
     */
    inline void SetReleaseTime(Aws::Utils::DateTime&& value) { m_releaseTimeHasBeenSet = true; m_releaseTime = std::move(value); }

    /**
     * <p>The time that the Dedicated Host was released.</p>
     */
    inline Host& WithReleaseTime(const Aws::Utils::DateTime& value) { SetReleaseTime(value); return *this;}

    /**
     * <p>The time that the Dedicated Host was released.</p>
     */
    inline Host& WithReleaseTime(Aws::Utils::DateTime&& value) { SetReleaseTime(std::move(value)); return *this;}


    /**
     * <p>Any tags assigned to the Dedicated Host.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the Dedicated Host.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Any tags assigned to the Dedicated Host.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to the Dedicated Host.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags assigned to the Dedicated Host.</p>
     */
    inline Host& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the Dedicated Host.</p>
     */
    inline Host& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the Dedicated Host.</p>
     */
    inline Host& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the Dedicated Host.</p>
     */
    inline Host& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether host recovery is enabled or disabled for the Dedicated
     * Host.</p>
     */
    inline const HostRecovery& GetHostRecovery() const{ return m_hostRecovery; }

    /**
     * <p>Indicates whether host recovery is enabled or disabled for the Dedicated
     * Host.</p>
     */
    inline bool HostRecoveryHasBeenSet() const { return m_hostRecoveryHasBeenSet; }

    /**
     * <p>Indicates whether host recovery is enabled or disabled for the Dedicated
     * Host.</p>
     */
    inline void SetHostRecovery(const HostRecovery& value) { m_hostRecoveryHasBeenSet = true; m_hostRecovery = value; }

    /**
     * <p>Indicates whether host recovery is enabled or disabled for the Dedicated
     * Host.</p>
     */
    inline void SetHostRecovery(HostRecovery&& value) { m_hostRecoveryHasBeenSet = true; m_hostRecovery = std::move(value); }

    /**
     * <p>Indicates whether host recovery is enabled or disabled for the Dedicated
     * Host.</p>
     */
    inline Host& WithHostRecovery(const HostRecovery& value) { SetHostRecovery(value); return *this;}

    /**
     * <p>Indicates whether host recovery is enabled or disabled for the Dedicated
     * Host.</p>
     */
    inline Host& WithHostRecovery(HostRecovery&& value) { SetHostRecovery(std::move(value)); return *this;}

  private:

    AutoPlacement m_autoPlacement;
    bool m_autoPlacementHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    AvailableCapacity m_availableCapacity;
    bool m_availableCapacityHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::String m_hostId;
    bool m_hostIdHasBeenSet;

    HostProperties m_hostProperties;
    bool m_hostPropertiesHasBeenSet;

    Aws::String m_hostReservationId;
    bool m_hostReservationIdHasBeenSet;

    Aws::Vector<HostInstance> m_instances;
    bool m_instancesHasBeenSet;

    AllocationState m_state;
    bool m_stateHasBeenSet;

    Aws::Utils::DateTime m_allocationTime;
    bool m_allocationTimeHasBeenSet;

    Aws::Utils::DateTime m_releaseTime;
    bool m_releaseTimeHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    HostRecovery m_hostRecovery;
    bool m_hostRecoveryHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
