﻿/**
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
#include <aws/ec2/model/HostMaintenance.h>
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


    ///@{
    /**
     * <p>Whether auto-placement is on or off.</p>
     */
    inline const AutoPlacement& GetAutoPlacement() const{ return m_autoPlacement; }
    inline bool AutoPlacementHasBeenSet() const { return m_autoPlacementHasBeenSet; }
    inline void SetAutoPlacement(const AutoPlacement& value) { m_autoPlacementHasBeenSet = true; m_autoPlacement = value; }
    inline void SetAutoPlacement(AutoPlacement&& value) { m_autoPlacementHasBeenSet = true; m_autoPlacement = std::move(value); }
    inline Host& WithAutoPlacement(const AutoPlacement& value) { SetAutoPlacement(value); return *this;}
    inline Host& WithAutoPlacement(AutoPlacement&& value) { SetAutoPlacement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone of the Dedicated Host.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline Host& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline Host& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline Host& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the instances running on the Dedicated Host.</p>
     */
    inline const AvailableCapacity& GetAvailableCapacity() const{ return m_availableCapacity; }
    inline bool AvailableCapacityHasBeenSet() const { return m_availableCapacityHasBeenSet; }
    inline void SetAvailableCapacity(const AvailableCapacity& value) { m_availableCapacityHasBeenSet = true; m_availableCapacity = value; }
    inline void SetAvailableCapacity(AvailableCapacity&& value) { m_availableCapacityHasBeenSet = true; m_availableCapacity = std::move(value); }
    inline Host& WithAvailableCapacity(const AvailableCapacity& value) { SetAvailableCapacity(value); return *this;}
    inline Host& WithAvailableCapacity(AvailableCapacity&& value) { SetAvailableCapacity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline Host& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline Host& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline Host& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Dedicated Host.</p>
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }
    inline bool HostIdHasBeenSet() const { return m_hostIdHasBeenSet; }
    inline void SetHostId(const Aws::String& value) { m_hostIdHasBeenSet = true; m_hostId = value; }
    inline void SetHostId(Aws::String&& value) { m_hostIdHasBeenSet = true; m_hostId = std::move(value); }
    inline void SetHostId(const char* value) { m_hostIdHasBeenSet = true; m_hostId.assign(value); }
    inline Host& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}
    inline Host& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}
    inline Host& WithHostId(const char* value) { SetHostId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hardware specifications of the Dedicated Host.</p>
     */
    inline const HostProperties& GetHostProperties() const{ return m_hostProperties; }
    inline bool HostPropertiesHasBeenSet() const { return m_hostPropertiesHasBeenSet; }
    inline void SetHostProperties(const HostProperties& value) { m_hostPropertiesHasBeenSet = true; m_hostProperties = value; }
    inline void SetHostProperties(HostProperties&& value) { m_hostPropertiesHasBeenSet = true; m_hostProperties = std::move(value); }
    inline Host& WithHostProperties(const HostProperties& value) { SetHostProperties(value); return *this;}
    inline Host& WithHostProperties(HostProperties&& value) { SetHostProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reservation ID of the Dedicated Host. This returns a <code>null</code>
     * response if the Dedicated Host doesn't have an associated reservation.</p>
     */
    inline const Aws::String& GetHostReservationId() const{ return m_hostReservationId; }
    inline bool HostReservationIdHasBeenSet() const { return m_hostReservationIdHasBeenSet; }
    inline void SetHostReservationId(const Aws::String& value) { m_hostReservationIdHasBeenSet = true; m_hostReservationId = value; }
    inline void SetHostReservationId(Aws::String&& value) { m_hostReservationIdHasBeenSet = true; m_hostReservationId = std::move(value); }
    inline void SetHostReservationId(const char* value) { m_hostReservationIdHasBeenSet = true; m_hostReservationId.assign(value); }
    inline Host& WithHostReservationId(const Aws::String& value) { SetHostReservationId(value); return *this;}
    inline Host& WithHostReservationId(Aws::String&& value) { SetHostReservationId(std::move(value)); return *this;}
    inline Host& WithHostReservationId(const char* value) { SetHostReservationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs and instance type that are currently running on the Dedicated
     * Host.</p>
     */
    inline const Aws::Vector<HostInstance>& GetInstances() const{ return m_instances; }
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }
    inline void SetInstances(const Aws::Vector<HostInstance>& value) { m_instancesHasBeenSet = true; m_instances = value; }
    inline void SetInstances(Aws::Vector<HostInstance>&& value) { m_instancesHasBeenSet = true; m_instances = std::move(value); }
    inline Host& WithInstances(const Aws::Vector<HostInstance>& value) { SetInstances(value); return *this;}
    inline Host& WithInstances(Aws::Vector<HostInstance>&& value) { SetInstances(std::move(value)); return *this;}
    inline Host& AddInstances(const HostInstance& value) { m_instancesHasBeenSet = true; m_instances.push_back(value); return *this; }
    inline Host& AddInstances(HostInstance&& value) { m_instancesHasBeenSet = true; m_instances.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Dedicated Host's state.</p>
     */
    inline const AllocationState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const AllocationState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(AllocationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Host& WithState(const AllocationState& value) { SetState(value); return *this;}
    inline Host& WithState(AllocationState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the Dedicated Host was allocated.</p>
     */
    inline const Aws::Utils::DateTime& GetAllocationTime() const{ return m_allocationTime; }
    inline bool AllocationTimeHasBeenSet() const { return m_allocationTimeHasBeenSet; }
    inline void SetAllocationTime(const Aws::Utils::DateTime& value) { m_allocationTimeHasBeenSet = true; m_allocationTime = value; }
    inline void SetAllocationTime(Aws::Utils::DateTime&& value) { m_allocationTimeHasBeenSet = true; m_allocationTime = std::move(value); }
    inline Host& WithAllocationTime(const Aws::Utils::DateTime& value) { SetAllocationTime(value); return *this;}
    inline Host& WithAllocationTime(Aws::Utils::DateTime&& value) { SetAllocationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the Dedicated Host was released.</p>
     */
    inline const Aws::Utils::DateTime& GetReleaseTime() const{ return m_releaseTime; }
    inline bool ReleaseTimeHasBeenSet() const { return m_releaseTimeHasBeenSet; }
    inline void SetReleaseTime(const Aws::Utils::DateTime& value) { m_releaseTimeHasBeenSet = true; m_releaseTime = value; }
    inline void SetReleaseTime(Aws::Utils::DateTime&& value) { m_releaseTimeHasBeenSet = true; m_releaseTime = std::move(value); }
    inline Host& WithReleaseTime(const Aws::Utils::DateTime& value) { SetReleaseTime(value); return *this;}
    inline Host& WithReleaseTime(Aws::Utils::DateTime&& value) { SetReleaseTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the Dedicated Host.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Host& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline Host& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline Host& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline Host& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether host recovery is enabled or disabled for the Dedicated
     * Host.</p>
     */
    inline const HostRecovery& GetHostRecovery() const{ return m_hostRecovery; }
    inline bool HostRecoveryHasBeenSet() const { return m_hostRecoveryHasBeenSet; }
    inline void SetHostRecovery(const HostRecovery& value) { m_hostRecoveryHasBeenSet = true; m_hostRecovery = value; }
    inline void SetHostRecovery(HostRecovery&& value) { m_hostRecoveryHasBeenSet = true; m_hostRecovery = std::move(value); }
    inline Host& WithHostRecovery(const HostRecovery& value) { SetHostRecovery(value); return *this;}
    inline Host& WithHostRecovery(HostRecovery&& value) { SetHostRecovery(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the Dedicated Host supports multiple instance types of the
     * same instance family. If the value is <code>on</code>, the Dedicated Host
     * supports multiple instance types in the instance family. If the value is
     * <code>off</code>, the Dedicated Host supports a single instance type only.</p>
     */
    inline const AllowsMultipleInstanceTypes& GetAllowsMultipleInstanceTypes() const{ return m_allowsMultipleInstanceTypes; }
    inline bool AllowsMultipleInstanceTypesHasBeenSet() const { return m_allowsMultipleInstanceTypesHasBeenSet; }
    inline void SetAllowsMultipleInstanceTypes(const AllowsMultipleInstanceTypes& value) { m_allowsMultipleInstanceTypesHasBeenSet = true; m_allowsMultipleInstanceTypes = value; }
    inline void SetAllowsMultipleInstanceTypes(AllowsMultipleInstanceTypes&& value) { m_allowsMultipleInstanceTypesHasBeenSet = true; m_allowsMultipleInstanceTypes = std::move(value); }
    inline Host& WithAllowsMultipleInstanceTypes(const AllowsMultipleInstanceTypes& value) { SetAllowsMultipleInstanceTypes(value); return *this;}
    inline Host& WithAllowsMultipleInstanceTypes(AllowsMultipleInstanceTypes&& value) { SetAllowsMultipleInstanceTypes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the Dedicated Host.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline Host& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline Host& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline Host& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Availability Zone in which the Dedicated Host is allocated.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = value; }
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::move(value); }
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId.assign(value); }
    inline Host& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}
    inline Host& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}
    inline Host& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the Dedicated Host is in a host resource group. If
     * <b>memberOfServiceLinkedResourceGroup</b> is <code>true</code>, the host is in a
     * host resource group; otherwise, it is not.</p>
     */
    inline bool GetMemberOfServiceLinkedResourceGroup() const{ return m_memberOfServiceLinkedResourceGroup; }
    inline bool MemberOfServiceLinkedResourceGroupHasBeenSet() const { return m_memberOfServiceLinkedResourceGroupHasBeenSet; }
    inline void SetMemberOfServiceLinkedResourceGroup(bool value) { m_memberOfServiceLinkedResourceGroupHasBeenSet = true; m_memberOfServiceLinkedResourceGroup = value; }
    inline Host& WithMemberOfServiceLinkedResourceGroup(bool value) { SetMemberOfServiceLinkedResourceGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Outpost on which
     * the Dedicated Host is allocated.</p>
     */
    inline const Aws::String& GetOutpostArn() const{ return m_outpostArn; }
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }
    inline void SetOutpostArn(const Aws::String& value) { m_outpostArnHasBeenSet = true; m_outpostArn = value; }
    inline void SetOutpostArn(Aws::String&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::move(value); }
    inline void SetOutpostArn(const char* value) { m_outpostArnHasBeenSet = true; m_outpostArn.assign(value); }
    inline Host& WithOutpostArn(const Aws::String& value) { SetOutpostArn(value); return *this;}
    inline Host& WithOutpostArn(Aws::String&& value) { SetOutpostArn(std::move(value)); return *this;}
    inline Host& WithOutpostArn(const char* value) { SetOutpostArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether host maintenance is enabled or disabled for the Dedicated
     * Host.</p>
     */
    inline const HostMaintenance& GetHostMaintenance() const{ return m_hostMaintenance; }
    inline bool HostMaintenanceHasBeenSet() const { return m_hostMaintenanceHasBeenSet; }
    inline void SetHostMaintenance(const HostMaintenance& value) { m_hostMaintenanceHasBeenSet = true; m_hostMaintenance = value; }
    inline void SetHostMaintenance(HostMaintenance&& value) { m_hostMaintenanceHasBeenSet = true; m_hostMaintenance = std::move(value); }
    inline Host& WithHostMaintenance(const HostMaintenance& value) { SetHostMaintenance(value); return *this;}
    inline Host& WithHostMaintenance(HostMaintenance&& value) { SetHostMaintenance(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Outpost hardware asset on which the Dedicated Host is
     * allocated.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }
    inline Host& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}
    inline Host& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}
    inline Host& WithAssetId(const char* value) { SetAssetId(value); return *this;}
    ///@}
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

    HostMaintenance m_hostMaintenance;
    bool m_hostMaintenanceHasBeenSet = false;

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
