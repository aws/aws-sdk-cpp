/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Tenancy.h>
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
   * <p>Describes the placement of an instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchTemplatePlacement">AWS
   * API Reference</a></p>
   */
  class LaunchTemplatePlacement
  {
  public:
    AWS_EC2_API LaunchTemplatePlacement() = default;
    AWS_EC2_API LaunchTemplatePlacement(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LaunchTemplatePlacement& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Availability Zone of the instance.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    LaunchTemplatePlacement& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Availability Zone of the instance.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    LaunchTemplatePlacement& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The affinity setting for the instance on the Dedicated Host.</p>
     */
    inline const Aws::String& GetAffinity() const { return m_affinity; }
    inline bool AffinityHasBeenSet() const { return m_affinityHasBeenSet; }
    template<typename AffinityT = Aws::String>
    void SetAffinity(AffinityT&& value) { m_affinityHasBeenSet = true; m_affinity = std::forward<AffinityT>(value); }
    template<typename AffinityT = Aws::String>
    LaunchTemplatePlacement& WithAffinity(AffinityT&& value) { SetAffinity(std::forward<AffinityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the placement group for the instance.</p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    LaunchTemplatePlacement& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Dedicated Host for the instance.</p>
     */
    inline const Aws::String& GetHostId() const { return m_hostId; }
    inline bool HostIdHasBeenSet() const { return m_hostIdHasBeenSet; }
    template<typename HostIdT = Aws::String>
    void SetHostId(HostIdT&& value) { m_hostIdHasBeenSet = true; m_hostId = std::forward<HostIdT>(value); }
    template<typename HostIdT = Aws::String>
    LaunchTemplatePlacement& WithHostId(HostIdT&& value) { SetHostId(std::forward<HostIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tenancy of the instance. An instance with a tenancy of
     * <code>dedicated</code> runs on single-tenant hardware. </p>
     */
    inline Tenancy GetTenancy() const { return m_tenancy; }
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }
    inline void SetTenancy(Tenancy value) { m_tenancyHasBeenSet = true; m_tenancy = value; }
    inline LaunchTemplatePlacement& WithTenancy(Tenancy value) { SetTenancy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetSpreadDomain() const { return m_spreadDomain; }
    inline bool SpreadDomainHasBeenSet() const { return m_spreadDomainHasBeenSet; }
    template<typename SpreadDomainT = Aws::String>
    void SetSpreadDomain(SpreadDomainT&& value) { m_spreadDomainHasBeenSet = true; m_spreadDomain = std::forward<SpreadDomainT>(value); }
    template<typename SpreadDomainT = Aws::String>
    LaunchTemplatePlacement& WithSpreadDomain(SpreadDomainT&& value) { SetSpreadDomain(std::forward<SpreadDomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the host resource group in which to launch the instances. </p>
     */
    inline const Aws::String& GetHostResourceGroupArn() const { return m_hostResourceGroupArn; }
    inline bool HostResourceGroupArnHasBeenSet() const { return m_hostResourceGroupArnHasBeenSet; }
    template<typename HostResourceGroupArnT = Aws::String>
    void SetHostResourceGroupArn(HostResourceGroupArnT&& value) { m_hostResourceGroupArnHasBeenSet = true; m_hostResourceGroupArn = std::forward<HostResourceGroupArnT>(value); }
    template<typename HostResourceGroupArnT = Aws::String>
    LaunchTemplatePlacement& WithHostResourceGroupArn(HostResourceGroupArnT&& value) { SetHostResourceGroupArn(std::forward<HostResourceGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of the partition the instance should launch in. Valid only if the
     * placement group strategy is set to <code>partition</code>.</p>
     */
    inline int GetPartitionNumber() const { return m_partitionNumber; }
    inline bool PartitionNumberHasBeenSet() const { return m_partitionNumberHasBeenSet; }
    inline void SetPartitionNumber(int value) { m_partitionNumberHasBeenSet = true; m_partitionNumber = value; }
    inline LaunchTemplatePlacement& WithPartitionNumber(int value) { SetPartitionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Group ID of the placement group. You must specify the Placement Group
     * <b>Group ID</b> to launch an instance in a shared placement group.</p>
     */
    inline const Aws::String& GetGroupId() const { return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    template<typename GroupIdT = Aws::String>
    void SetGroupId(GroupIdT&& value) { m_groupIdHasBeenSet = true; m_groupId = std::forward<GroupIdT>(value); }
    template<typename GroupIdT = Aws::String>
    LaunchTemplatePlacement& WithGroupId(GroupIdT&& value) { SetGroupId(std::forward<GroupIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    Aws::String m_affinity;
    bool m_affinityHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_hostId;
    bool m_hostIdHasBeenSet = false;

    Tenancy m_tenancy{Tenancy::NOT_SET};
    bool m_tenancyHasBeenSet = false;

    Aws::String m_spreadDomain;
    bool m_spreadDomainHasBeenSet = false;

    Aws::String m_hostResourceGroupArn;
    bool m_hostResourceGroupArnHasBeenSet = false;

    int m_partitionNumber{0};
    bool m_partitionNumberHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
