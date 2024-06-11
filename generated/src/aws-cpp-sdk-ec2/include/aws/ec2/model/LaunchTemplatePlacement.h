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
    AWS_EC2_API LaunchTemplatePlacement();
    AWS_EC2_API LaunchTemplatePlacement(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LaunchTemplatePlacement& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Availability Zone of the instance.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline LaunchTemplatePlacement& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline LaunchTemplatePlacement& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline LaunchTemplatePlacement& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The affinity setting for the instance on the Dedicated Host.</p>
     */
    inline const Aws::String& GetAffinity() const{ return m_affinity; }
    inline bool AffinityHasBeenSet() const { return m_affinityHasBeenSet; }
    inline void SetAffinity(const Aws::String& value) { m_affinityHasBeenSet = true; m_affinity = value; }
    inline void SetAffinity(Aws::String&& value) { m_affinityHasBeenSet = true; m_affinity = std::move(value); }
    inline void SetAffinity(const char* value) { m_affinityHasBeenSet = true; m_affinity.assign(value); }
    inline LaunchTemplatePlacement& WithAffinity(const Aws::String& value) { SetAffinity(value); return *this;}
    inline LaunchTemplatePlacement& WithAffinity(Aws::String&& value) { SetAffinity(std::move(value)); return *this;}
    inline LaunchTemplatePlacement& WithAffinity(const char* value) { SetAffinity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the placement group for the instance.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }
    inline LaunchTemplatePlacement& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}
    inline LaunchTemplatePlacement& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}
    inline LaunchTemplatePlacement& WithGroupName(const char* value) { SetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Dedicated Host for the instance.</p>
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }
    inline bool HostIdHasBeenSet() const { return m_hostIdHasBeenSet; }
    inline void SetHostId(const Aws::String& value) { m_hostIdHasBeenSet = true; m_hostId = value; }
    inline void SetHostId(Aws::String&& value) { m_hostIdHasBeenSet = true; m_hostId = std::move(value); }
    inline void SetHostId(const char* value) { m_hostIdHasBeenSet = true; m_hostId.assign(value); }
    inline LaunchTemplatePlacement& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}
    inline LaunchTemplatePlacement& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}
    inline LaunchTemplatePlacement& WithHostId(const char* value) { SetHostId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tenancy of the instance. An instance with a tenancy of
     * <code>dedicated</code> runs on single-tenant hardware. </p>
     */
    inline const Tenancy& GetTenancy() const{ return m_tenancy; }
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }
    inline void SetTenancy(const Tenancy& value) { m_tenancyHasBeenSet = true; m_tenancy = value; }
    inline void SetTenancy(Tenancy&& value) { m_tenancyHasBeenSet = true; m_tenancy = std::move(value); }
    inline LaunchTemplatePlacement& WithTenancy(const Tenancy& value) { SetTenancy(value); return *this;}
    inline LaunchTemplatePlacement& WithTenancy(Tenancy&& value) { SetTenancy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetSpreadDomain() const{ return m_spreadDomain; }
    inline bool SpreadDomainHasBeenSet() const { return m_spreadDomainHasBeenSet; }
    inline void SetSpreadDomain(const Aws::String& value) { m_spreadDomainHasBeenSet = true; m_spreadDomain = value; }
    inline void SetSpreadDomain(Aws::String&& value) { m_spreadDomainHasBeenSet = true; m_spreadDomain = std::move(value); }
    inline void SetSpreadDomain(const char* value) { m_spreadDomainHasBeenSet = true; m_spreadDomain.assign(value); }
    inline LaunchTemplatePlacement& WithSpreadDomain(const Aws::String& value) { SetSpreadDomain(value); return *this;}
    inline LaunchTemplatePlacement& WithSpreadDomain(Aws::String&& value) { SetSpreadDomain(std::move(value)); return *this;}
    inline LaunchTemplatePlacement& WithSpreadDomain(const char* value) { SetSpreadDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the host resource group in which to launch the instances. </p>
     */
    inline const Aws::String& GetHostResourceGroupArn() const{ return m_hostResourceGroupArn; }
    inline bool HostResourceGroupArnHasBeenSet() const { return m_hostResourceGroupArnHasBeenSet; }
    inline void SetHostResourceGroupArn(const Aws::String& value) { m_hostResourceGroupArnHasBeenSet = true; m_hostResourceGroupArn = value; }
    inline void SetHostResourceGroupArn(Aws::String&& value) { m_hostResourceGroupArnHasBeenSet = true; m_hostResourceGroupArn = std::move(value); }
    inline void SetHostResourceGroupArn(const char* value) { m_hostResourceGroupArnHasBeenSet = true; m_hostResourceGroupArn.assign(value); }
    inline LaunchTemplatePlacement& WithHostResourceGroupArn(const Aws::String& value) { SetHostResourceGroupArn(value); return *this;}
    inline LaunchTemplatePlacement& WithHostResourceGroupArn(Aws::String&& value) { SetHostResourceGroupArn(std::move(value)); return *this;}
    inline LaunchTemplatePlacement& WithHostResourceGroupArn(const char* value) { SetHostResourceGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of the partition the instance should launch in. Valid only if the
     * placement group strategy is set to <code>partition</code>.</p>
     */
    inline int GetPartitionNumber() const{ return m_partitionNumber; }
    inline bool PartitionNumberHasBeenSet() const { return m_partitionNumberHasBeenSet; }
    inline void SetPartitionNumber(int value) { m_partitionNumberHasBeenSet = true; m_partitionNumber = value; }
    inline LaunchTemplatePlacement& WithPartitionNumber(int value) { SetPartitionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Group ID of the placement group. You must specify the Placement Group
     * <b>Group ID</b> to launch an instance in a shared placement group.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }
    inline LaunchTemplatePlacement& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}
    inline LaunchTemplatePlacement& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}
    inline LaunchTemplatePlacement& WithGroupId(const char* value) { SetGroupId(value); return *this;}
    ///@}
  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_affinity;
    bool m_affinityHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_hostId;
    bool m_hostIdHasBeenSet = false;

    Tenancy m_tenancy;
    bool m_tenancyHasBeenSet = false;

    Aws::String m_spreadDomain;
    bool m_spreadDomainHasBeenSet = false;

    Aws::String m_hostResourceGroupArn;
    bool m_hostResourceGroupArnHasBeenSet = false;

    int m_partitionNumber;
    bool m_partitionNumberHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
