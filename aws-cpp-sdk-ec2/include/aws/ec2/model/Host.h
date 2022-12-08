/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/ec2/model/AllowsMultipleInstanceTypes.h>
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
  class Host
  {
  public:
    AWS_EC2_API Host();
    AWS_EC2_API Host(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Host& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
     * <p>Information about the instances running on the Dedicated Host.</p>
     */
    inline const AvailableCapacity& GetAvailableCapacity() const{ return m_availableCapacity; }

    /**
     * <p>Information about the instances running on the Dedicated Host.</p>
     */
    inline bool AvailableCapacityHasBeenSet() const { return m_availableCapacityHasBeenSet; }

    /**
     * <p>Information about the instances running on the Dedicated Host.</p>
     */
    inline void SetAvailableCapacity(const AvailableCapacity& value) { m_availableCapacityHasBeenSet = true; m_availableCapacity = value; }

    /**
     * <p>Information about the instances running on the Dedicated Host.</p>
     */
    inline void SetAvailableCapacity(AvailableCapacity&& value) { m_availableCapacityHasBeenSet = true; m_availableCapacity = std::move(value); }

    /**
     * <p>Information about the instances running on the Dedicated Host.</p>
     */
    inline Host& WithAvailableCapacity(const AvailableCapacity& value) { SetAvailableCapacity(value); return *this;}

    /**
     * <p>Information about the instances running on the Dedicated Host.</p>
     */
    inline Host& WithAvailableCapacity(AvailableCapacity&& value) { SetAvailableCapacity(std::move(value)); return *this;}


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline Host& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline Host& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
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


    /**
     * <p>Indicates whether the Dedicated Host supports multiple instance types of the
     * same instance family. If the value is <code>on</code>, the Dedicated Host
     * supports multiple instance types in the instance family. If the value is
     * <code>off</code>, the Dedicated Host supports a single instance type only.</p>
     */
    inline const AllowsMultipleInstanceTypes& GetAllowsMultipleInstanceTypes() const{ return m_allowsMultipleInstanceTypes; }

    /**
     * <p>Indicates whether the Dedicated Host supports multiple instance types of the
     * same instance family. If the value is <code>on</code>, the Dedicated Host
     * supports multiple instance types in the instance family. If the value is
     * <code>off</code>, the Dedicated Host supports a single instance type only.</p>
     */
    inline bool AllowsMultipleInstanceTypesHasBeenSet() const { return m_allowsMultipleInstanceTypesHasBeenSet; }

    /**
     * <p>Indicates whether the Dedicated Host supports multiple instance types of the
     * same instance family. If the value is <code>on</code>, the Dedicated Host
     * supports multiple instance types in the instance family. If the value is
     * <code>off</code>, the Dedicated Host supports a single instance type only.</p>
     */
    inline void SetAllowsMultipleInstanceTypes(const AllowsMultipleInstanceTypes& value) { m_allowsMultipleInstanceTypesHasBeenSet = true; m_allowsMultipleInstanceTypes = value; }

    /**
     * <p>Indicates whether the Dedicated Host supports multiple instance types of the
     * same instance family. If the value is <code>on</code>, the Dedicated Host
     * supports multiple instance types in the instance family. If the value is
     * <code>off</code>, the Dedicated Host supports a single instance type only.</p>
     */
    inline void SetAllowsMultipleInstanceTypes(AllowsMultipleInstanceTypes&& value) { m_allowsMultipleInstanceTypesHasBeenSet = true; m_allowsMultipleInstanceTypes = std::move(value); }

    /**
     * <p>Indicates whether the Dedicated Host supports multiple instance types of the
     * same instance family. If the value is <code>on</code>, the Dedicated Host
     * supports multiple instance types in the instance family. If the value is
     * <code>off</code>, the Dedicated Host supports a single instance type only.</p>
     */
    inline Host& WithAllowsMultipleInstanceTypes(const AllowsMultipleInstanceTypes& value) { SetAllowsMultipleInstanceTypes(value); return *this;}

    /**
     * <p>Indicates whether the Dedicated Host supports multiple instance types of the
     * same instance family. If the value is <code>on</code>, the Dedicated Host
     * supports multiple instance types in the instance family. If the value is
     * <code>off</code>, the Dedicated Host supports a single instance type only.</p>
     */
    inline Host& WithAllowsMultipleInstanceTypes(AllowsMultipleInstanceTypes&& value) { SetAllowsMultipleInstanceTypes(std::move(value)); return *this;}


    /**
     * <p>The ID of the Amazon Web Services account that owns the Dedicated Host.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the Dedicated Host.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the Dedicated Host.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the Dedicated Host.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the Dedicated Host.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the Dedicated Host.</p>
     */
    inline Host& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the Dedicated Host.</p>
     */
    inline Host& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the Dedicated Host.</p>
     */
    inline Host& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The ID of the Availability Zone in which the Dedicated Host is allocated.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }

    /**
     * <p>The ID of the Availability Zone in which the Dedicated Host is allocated.</p>
     */
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }

    /**
     * <p>The ID of the Availability Zone in which the Dedicated Host is allocated.</p>
     */
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = value; }

    /**
     * <p>The ID of the Availability Zone in which the Dedicated Host is allocated.</p>
     */
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::move(value); }

    /**
     * <p>The ID of the Availability Zone in which the Dedicated Host is allocated.</p>
     */
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId.assign(value); }

    /**
     * <p>The ID of the Availability Zone in which the Dedicated Host is allocated.</p>
     */
    inline Host& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}

    /**
     * <p>The ID of the Availability Zone in which the Dedicated Host is allocated.</p>
     */
    inline Host& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Availability Zone in which the Dedicated Host is allocated.</p>
     */
    inline Host& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}


    /**
     * <p>Indicates whether the Dedicated Host is in a host resource group. If
     * <b>memberOfServiceLinkedResourceGroup</b> is <code>true</code>, the host is in a
     * host resource group; otherwise, it is not.</p>
     */
    inline bool GetMemberOfServiceLinkedResourceGroup() const{ return m_memberOfServiceLinkedResourceGroup; }

    /**
     * <p>Indicates whether the Dedicated Host is in a host resource group. If
     * <b>memberOfServiceLinkedResourceGroup</b> is <code>true</code>, the host is in a
     * host resource group; otherwise, it is not.</p>
     */
    inline bool MemberOfServiceLinkedResourceGroupHasBeenSet() const { return m_memberOfServiceLinkedResourceGroupHasBeenSet; }

    /**
     * <p>Indicates whether the Dedicated Host is in a host resource group. If
     * <b>memberOfServiceLinkedResourceGroup</b> is <code>true</code>, the host is in a
     * host resource group; otherwise, it is not.</p>
     */
    inline void SetMemberOfServiceLinkedResourceGroup(bool value) { m_memberOfServiceLinkedResourceGroupHasBeenSet = true; m_memberOfServiceLinkedResourceGroup = value; }

    /**
     * <p>Indicates whether the Dedicated Host is in a host resource group. If
     * <b>memberOfServiceLinkedResourceGroup</b> is <code>true</code>, the host is in a
     * host resource group; otherwise, it is not.</p>
     */
    inline Host& WithMemberOfServiceLinkedResourceGroup(bool value) { SetMemberOfServiceLinkedResourceGroup(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Outpost on which
     * the Dedicated Host is allocated.</p>
     */
    inline const Aws::String& GetOutpostArn() const{ return m_outpostArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Outpost on which
     * the Dedicated Host is allocated.</p>
     */
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Outpost on which
     * the Dedicated Host is allocated.</p>
     */
    inline void SetOutpostArn(const Aws::String& value) { m_outpostArnHasBeenSet = true; m_outpostArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Outpost on which
     * the Dedicated Host is allocated.</p>
     */
    inline void SetOutpostArn(Aws::String&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Outpost on which
     * the Dedicated Host is allocated.</p>
     */
    inline void SetOutpostArn(const char* value) { m_outpostArnHasBeenSet = true; m_outpostArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Outpost on which
     * the Dedicated Host is allocated.</p>
     */
    inline Host& WithOutpostArn(const Aws::String& value) { SetOutpostArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Outpost on which
     * the Dedicated Host is allocated.</p>
     */
    inline Host& WithOutpostArn(Aws::String&& value) { SetOutpostArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Outpost on which
     * the Dedicated Host is allocated.</p>
     */
    inline Host& WithOutpostArn(const char* value) { SetOutpostArn(value); return *this;}

  private:

    AutoPlacement m_autoPlacement;
    bool m_autoPlacementHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    AvailableCapacity m_availableCapacity;
    bool m_availableCapacityHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_hostId;
    bool m_hostIdHasBeenSet = false;

    HostProperties m_hostProperties;
    bool m_hostPropertiesHasBeenSet = false;

    Aws::String m_hostReservationId;
    bool m_hostReservationIdHasBeenSet = false;

    Aws::Vector<HostInstance> m_instances;
    bool m_instancesHasBeenSet = false;

    AllocationState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_allocationTime;
    bool m_allocationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_releaseTime;
    bool m_releaseTimeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    HostRecovery m_hostRecovery;
    bool m_hostRecoveryHasBeenSet = false;

    AllowsMultipleInstanceTypes m_allowsMultipleInstanceTypes;
    bool m_allowsMultipleInstanceTypesHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    bool m_memberOfServiceLinkedResourceGroup;
    bool m_memberOfServiceLinkedResourceGroupHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
