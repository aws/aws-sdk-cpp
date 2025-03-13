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
    AWS_EC2_API Host() = default;
    AWS_EC2_API Host(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Host& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Whether auto-placement is on or off.</p>
     */
    inline AutoPlacement GetAutoPlacement() const { return m_autoPlacement; }
    inline bool AutoPlacementHasBeenSet() const { return m_autoPlacementHasBeenSet; }
    inline void SetAutoPlacement(AutoPlacement value) { m_autoPlacementHasBeenSet = true; m_autoPlacement = value; }
    inline Host& WithAutoPlacement(AutoPlacement value) { SetAutoPlacement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone of the Dedicated Host.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    Host& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the instances running on the Dedicated Host.</p>
     */
    inline const AvailableCapacity& GetAvailableCapacity() const { return m_availableCapacity; }
    inline bool AvailableCapacityHasBeenSet() const { return m_availableCapacityHasBeenSet; }
    template<typename AvailableCapacityT = AvailableCapacity>
    void SetAvailableCapacity(AvailableCapacityT&& value) { m_availableCapacityHasBeenSet = true; m_availableCapacity = std::forward<AvailableCapacityT>(value); }
    template<typename AvailableCapacityT = AvailableCapacity>
    Host& WithAvailableCapacity(AvailableCapacityT&& value) { SetAvailableCapacity(std::forward<AvailableCapacityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    Host& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Dedicated Host.</p>
     */
    inline const Aws::String& GetHostId() const { return m_hostId; }
    inline bool HostIdHasBeenSet() const { return m_hostIdHasBeenSet; }
    template<typename HostIdT = Aws::String>
    void SetHostId(HostIdT&& value) { m_hostIdHasBeenSet = true; m_hostId = std::forward<HostIdT>(value); }
    template<typename HostIdT = Aws::String>
    Host& WithHostId(HostIdT&& value) { SetHostId(std::forward<HostIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hardware specifications of the Dedicated Host.</p>
     */
    inline const HostProperties& GetHostProperties() const { return m_hostProperties; }
    inline bool HostPropertiesHasBeenSet() const { return m_hostPropertiesHasBeenSet; }
    template<typename HostPropertiesT = HostProperties>
    void SetHostProperties(HostPropertiesT&& value) { m_hostPropertiesHasBeenSet = true; m_hostProperties = std::forward<HostPropertiesT>(value); }
    template<typename HostPropertiesT = HostProperties>
    Host& WithHostProperties(HostPropertiesT&& value) { SetHostProperties(std::forward<HostPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reservation ID of the Dedicated Host. This returns a <code>null</code>
     * response if the Dedicated Host doesn't have an associated reservation.</p>
     */
    inline const Aws::String& GetHostReservationId() const { return m_hostReservationId; }
    inline bool HostReservationIdHasBeenSet() const { return m_hostReservationIdHasBeenSet; }
    template<typename HostReservationIdT = Aws::String>
    void SetHostReservationId(HostReservationIdT&& value) { m_hostReservationIdHasBeenSet = true; m_hostReservationId = std::forward<HostReservationIdT>(value); }
    template<typename HostReservationIdT = Aws::String>
    Host& WithHostReservationId(HostReservationIdT&& value) { SetHostReservationId(std::forward<HostReservationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs and instance type that are currently running on the Dedicated
     * Host.</p>
     */
    inline const Aws::Vector<HostInstance>& GetInstances() const { return m_instances; }
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }
    template<typename InstancesT = Aws::Vector<HostInstance>>
    void SetInstances(InstancesT&& value) { m_instancesHasBeenSet = true; m_instances = std::forward<InstancesT>(value); }
    template<typename InstancesT = Aws::Vector<HostInstance>>
    Host& WithInstances(InstancesT&& value) { SetInstances(std::forward<InstancesT>(value)); return *this;}
    template<typename InstancesT = HostInstance>
    Host& AddInstances(InstancesT&& value) { m_instancesHasBeenSet = true; m_instances.emplace_back(std::forward<InstancesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Dedicated Host's state.</p>
     */
    inline AllocationState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(AllocationState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Host& WithState(AllocationState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the Dedicated Host was allocated.</p>
     */
    inline const Aws::Utils::DateTime& GetAllocationTime() const { return m_allocationTime; }
    inline bool AllocationTimeHasBeenSet() const { return m_allocationTimeHasBeenSet; }
    template<typename AllocationTimeT = Aws::Utils::DateTime>
    void SetAllocationTime(AllocationTimeT&& value) { m_allocationTimeHasBeenSet = true; m_allocationTime = std::forward<AllocationTimeT>(value); }
    template<typename AllocationTimeT = Aws::Utils::DateTime>
    Host& WithAllocationTime(AllocationTimeT&& value) { SetAllocationTime(std::forward<AllocationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the Dedicated Host was released.</p>
     */
    inline const Aws::Utils::DateTime& GetReleaseTime() const { return m_releaseTime; }
    inline bool ReleaseTimeHasBeenSet() const { return m_releaseTimeHasBeenSet; }
    template<typename ReleaseTimeT = Aws::Utils::DateTime>
    void SetReleaseTime(ReleaseTimeT&& value) { m_releaseTimeHasBeenSet = true; m_releaseTime = std::forward<ReleaseTimeT>(value); }
    template<typename ReleaseTimeT = Aws::Utils::DateTime>
    Host& WithReleaseTime(ReleaseTimeT&& value) { SetReleaseTime(std::forward<ReleaseTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the Dedicated Host.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    Host& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Host& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether host recovery is enabled or disabled for the Dedicated
     * Host.</p>
     */
    inline HostRecovery GetHostRecovery() const { return m_hostRecovery; }
    inline bool HostRecoveryHasBeenSet() const { return m_hostRecoveryHasBeenSet; }
    inline void SetHostRecovery(HostRecovery value) { m_hostRecoveryHasBeenSet = true; m_hostRecovery = value; }
    inline Host& WithHostRecovery(HostRecovery value) { SetHostRecovery(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the Dedicated Host supports multiple instance types of the
     * same instance family. If the value is <code>on</code>, the Dedicated Host
     * supports multiple instance types in the instance family. If the value is
     * <code>off</code>, the Dedicated Host supports a single instance type only.</p>
     */
    inline AllowsMultipleInstanceTypes GetAllowsMultipleInstanceTypes() const { return m_allowsMultipleInstanceTypes; }
    inline bool AllowsMultipleInstanceTypesHasBeenSet() const { return m_allowsMultipleInstanceTypesHasBeenSet; }
    inline void SetAllowsMultipleInstanceTypes(AllowsMultipleInstanceTypes value) { m_allowsMultipleInstanceTypesHasBeenSet = true; m_allowsMultipleInstanceTypes = value; }
    inline Host& WithAllowsMultipleInstanceTypes(AllowsMultipleInstanceTypes value) { SetAllowsMultipleInstanceTypes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the Dedicated Host.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    Host& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Availability Zone in which the Dedicated Host is allocated.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    Host& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the Dedicated Host is in a host resource group. If
     * <b>memberOfServiceLinkedResourceGroup</b> is <code>true</code>, the host is in a
     * host resource group; otherwise, it is not.</p>
     */
    inline bool GetMemberOfServiceLinkedResourceGroup() const { return m_memberOfServiceLinkedResourceGroup; }
    inline bool MemberOfServiceLinkedResourceGroupHasBeenSet() const { return m_memberOfServiceLinkedResourceGroupHasBeenSet; }
    inline void SetMemberOfServiceLinkedResourceGroup(bool value) { m_memberOfServiceLinkedResourceGroupHasBeenSet = true; m_memberOfServiceLinkedResourceGroup = value; }
    inline Host& WithMemberOfServiceLinkedResourceGroup(bool value) { SetMemberOfServiceLinkedResourceGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Outpost on which
     * the Dedicated Host is allocated.</p>
     */
    inline const Aws::String& GetOutpostArn() const { return m_outpostArn; }
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }
    template<typename OutpostArnT = Aws::String>
    void SetOutpostArn(OutpostArnT&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::forward<OutpostArnT>(value); }
    template<typename OutpostArnT = Aws::String>
    Host& WithOutpostArn(OutpostArnT&& value) { SetOutpostArn(std::forward<OutpostArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether host maintenance is enabled or disabled for the Dedicated
     * Host.</p>
     */
    inline HostMaintenance GetHostMaintenance() const { return m_hostMaintenance; }
    inline bool HostMaintenanceHasBeenSet() const { return m_hostMaintenanceHasBeenSet; }
    inline void SetHostMaintenance(HostMaintenance value) { m_hostMaintenanceHasBeenSet = true; m_hostMaintenance = value; }
    inline Host& WithHostMaintenance(HostMaintenance value) { SetHostMaintenance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Outpost hardware asset on which the Dedicated Host is
     * allocated.</p>
     */
    inline const Aws::String& GetAssetId() const { return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    template<typename AssetIdT = Aws::String>
    void SetAssetId(AssetIdT&& value) { m_assetIdHasBeenSet = true; m_assetId = std::forward<AssetIdT>(value); }
    template<typename AssetIdT = Aws::String>
    Host& WithAssetId(AssetIdT&& value) { SetAssetId(std::forward<AssetIdT>(value)); return *this;}
    ///@}
  private:

    AutoPlacement m_autoPlacement{AutoPlacement::NOT_SET};
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

    AllocationState m_state{AllocationState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_allocationTime{};
    bool m_allocationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_releaseTime{};
    bool m_releaseTimeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    HostRecovery m_hostRecovery{HostRecovery::NOT_SET};
    bool m_hostRecoveryHasBeenSet = false;

    AllowsMultipleInstanceTypes m_allowsMultipleInstanceTypes{AllowsMultipleInstanceTypes::NOT_SET};
    bool m_allowsMultipleInstanceTypesHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    bool m_memberOfServiceLinkedResourceGroup{false};
    bool m_memberOfServiceLinkedResourceGroupHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    HostMaintenance m_hostMaintenance{HostMaintenance::NOT_SET};
    bool m_hostMaintenanceHasBeenSet = false;

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
