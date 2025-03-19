/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/IpamResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/IpamComplianceStatus.h>
#include <aws/ec2/model/IpamManagementState.h>
#include <aws/ec2/model/IpamOverlapStatus.h>
#include <aws/ec2/model/IpamResourceTag.h>
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
   * <p>The CIDR for an IPAM resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamResourceCidr">AWS
   * API Reference</a></p>
   */
  class IpamResourceCidr
  {
  public:
    AWS_EC2_API IpamResourceCidr() = default;
    AWS_EC2_API IpamResourceCidr(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpamResourceCidr& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The IPAM ID for an IPAM resource.</p>
     */
    inline const Aws::String& GetIpamId() const { return m_ipamId; }
    inline bool IpamIdHasBeenSet() const { return m_ipamIdHasBeenSet; }
    template<typename IpamIdT = Aws::String>
    void SetIpamId(IpamIdT&& value) { m_ipamIdHasBeenSet = true; m_ipamId = std::forward<IpamIdT>(value); }
    template<typename IpamIdT = Aws::String>
    IpamResourceCidr& WithIpamId(IpamIdT&& value) { SetIpamId(std::forward<IpamIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scope ID for an IPAM resource.</p>
     */
    inline const Aws::String& GetIpamScopeId() const { return m_ipamScopeId; }
    inline bool IpamScopeIdHasBeenSet() const { return m_ipamScopeIdHasBeenSet; }
    template<typename IpamScopeIdT = Aws::String>
    void SetIpamScopeId(IpamScopeIdT&& value) { m_ipamScopeIdHasBeenSet = true; m_ipamScopeId = std::forward<IpamScopeIdT>(value); }
    template<typename IpamScopeIdT = Aws::String>
    IpamResourceCidr& WithIpamScopeId(IpamScopeIdT&& value) { SetIpamScopeId(std::forward<IpamScopeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pool ID for an IPAM resource.</p>
     */
    inline const Aws::String& GetIpamPoolId() const { return m_ipamPoolId; }
    inline bool IpamPoolIdHasBeenSet() const { return m_ipamPoolIdHasBeenSet; }
    template<typename IpamPoolIdT = Aws::String>
    void SetIpamPoolId(IpamPoolIdT&& value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId = std::forward<IpamPoolIdT>(value); }
    template<typename IpamPoolIdT = Aws::String>
    IpamResourceCidr& WithIpamPoolId(IpamPoolIdT&& value) { SetIpamPoolId(std::forward<IpamPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region for an IPAM resource.</p>
     */
    inline const Aws::String& GetResourceRegion() const { return m_resourceRegion; }
    inline bool ResourceRegionHasBeenSet() const { return m_resourceRegionHasBeenSet; }
    template<typename ResourceRegionT = Aws::String>
    void SetResourceRegion(ResourceRegionT&& value) { m_resourceRegionHasBeenSet = true; m_resourceRegion = std::forward<ResourceRegionT>(value); }
    template<typename ResourceRegionT = Aws::String>
    IpamResourceCidr& WithResourceRegion(ResourceRegionT&& value) { SetResourceRegion(std::forward<ResourceRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account number of the owner of an IPAM resource.</p>
     */
    inline const Aws::String& GetResourceOwnerId() const { return m_resourceOwnerId; }
    inline bool ResourceOwnerIdHasBeenSet() const { return m_resourceOwnerIdHasBeenSet; }
    template<typename ResourceOwnerIdT = Aws::String>
    void SetResourceOwnerId(ResourceOwnerIdT&& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = std::forward<ResourceOwnerIdT>(value); }
    template<typename ResourceOwnerIdT = Aws::String>
    IpamResourceCidr& WithResourceOwnerId(ResourceOwnerIdT&& value) { SetResourceOwnerId(std::forward<ResourceOwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of an IPAM resource.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    IpamResourceCidr& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an IPAM resource.</p>
     */
    inline const Aws::String& GetResourceName() const { return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    template<typename ResourceNameT = Aws::String>
    void SetResourceName(ResourceNameT&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::forward<ResourceNameT>(value); }
    template<typename ResourceNameT = Aws::String>
    IpamResourceCidr& WithResourceName(ResourceNameT&& value) { SetResourceName(std::forward<ResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIDR for an IPAM resource.</p>
     */
    inline const Aws::String& GetResourceCidr() const { return m_resourceCidr; }
    inline bool ResourceCidrHasBeenSet() const { return m_resourceCidrHasBeenSet; }
    template<typename ResourceCidrT = Aws::String>
    void SetResourceCidr(ResourceCidrT&& value) { m_resourceCidrHasBeenSet = true; m_resourceCidr = std::forward<ResourceCidrT>(value); }
    template<typename ResourceCidrT = Aws::String>
    IpamResourceCidr& WithResourceCidr(ResourceCidrT&& value) { SetResourceCidr(std::forward<ResourceCidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of IPAM resource.</p>
     */
    inline IpamResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(IpamResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline IpamResourceCidr& WithResourceType(IpamResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for an IPAM resource.</p>
     */
    inline const Aws::Vector<IpamResourceTag>& GetResourceTags() const { return m_resourceTags; }
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
    template<typename ResourceTagsT = Aws::Vector<IpamResourceTag>>
    void SetResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::forward<ResourceTagsT>(value); }
    template<typename ResourceTagsT = Aws::Vector<IpamResourceTag>>
    IpamResourceCidr& WithResourceTags(ResourceTagsT&& value) { SetResourceTags(std::forward<ResourceTagsT>(value)); return *this;}
    template<typename ResourceTagsT = IpamResourceTag>
    IpamResourceCidr& AddResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace_back(std::forward<ResourceTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The percentage of IP address space in use. To convert the decimal to a
     * percentage, multiply the decimal by 100. Note the following:</p> <ul> <li>
     * <p>For resources that are VPCs, this is the percentage of IP address space in
     * the VPC that's taken up by subnet CIDRs. </p> </li> <li> <p>For resources that
     * are subnets, if the subnet has an IPv4 CIDR provisioned to it, this is the
     * percentage of IPv4 address space in the subnet that's in use. If the subnet has
     * an IPv6 CIDR provisioned to it, the percentage of IPv6 address space in use is
     * not represented. The percentage of IPv6 address space in use cannot currently be
     * calculated. </p> </li> <li> <p>For resources that are public IPv4 pools, this is
     * the percentage of IP address space in the pool that's been allocated to Elastic
     * IP addresses (EIPs). </p> </li> </ul>
     */
    inline double GetIpUsage() const { return m_ipUsage; }
    inline bool IpUsageHasBeenSet() const { return m_ipUsageHasBeenSet; }
    inline void SetIpUsage(double value) { m_ipUsageHasBeenSet = true; m_ipUsage = value; }
    inline IpamResourceCidr& WithIpUsage(double value) { SetIpUsage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compliance status of the IPAM resource. For more information on
     * compliance statuses, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline IpamComplianceStatus GetComplianceStatus() const { return m_complianceStatus; }
    inline bool ComplianceStatusHasBeenSet() const { return m_complianceStatusHasBeenSet; }
    inline void SetComplianceStatus(IpamComplianceStatus value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = value; }
    inline IpamResourceCidr& WithComplianceStatus(IpamComplianceStatus value) { SetComplianceStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The management state of the resource. For more information about management
     * states, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline IpamManagementState GetManagementState() const { return m_managementState; }
    inline bool ManagementStateHasBeenSet() const { return m_managementStateHasBeenSet; }
    inline void SetManagementState(IpamManagementState value) { m_managementStateHasBeenSet = true; m_managementState = value; }
    inline IpamResourceCidr& WithManagementState(IpamManagementState value) { SetManagementState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The overlap status of an IPAM resource. The overlap status tells you if the
     * CIDR for a resource overlaps with another CIDR in the scope. For more
     * information on overlap statuses, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline IpamOverlapStatus GetOverlapStatus() const { return m_overlapStatus; }
    inline bool OverlapStatusHasBeenSet() const { return m_overlapStatusHasBeenSet; }
    inline void SetOverlapStatus(IpamOverlapStatus value) { m_overlapStatusHasBeenSet = true; m_overlapStatus = value; }
    inline IpamResourceCidr& WithOverlapStatus(IpamOverlapStatus value) { SetOverlapStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a VPC.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    IpamResourceCidr& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone ID.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    IpamResourceCidr& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ipamId;
    bool m_ipamIdHasBeenSet = false;

    Aws::String m_ipamScopeId;
    bool m_ipamScopeIdHasBeenSet = false;

    Aws::String m_ipamPoolId;
    bool m_ipamPoolIdHasBeenSet = false;

    Aws::String m_resourceRegion;
    bool m_resourceRegionHasBeenSet = false;

    Aws::String m_resourceOwnerId;
    bool m_resourceOwnerIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    Aws::String m_resourceCidr;
    bool m_resourceCidrHasBeenSet = false;

    IpamResourceType m_resourceType{IpamResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<IpamResourceTag> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;

    double m_ipUsage{0.0};
    bool m_ipUsageHasBeenSet = false;

    IpamComplianceStatus m_complianceStatus{IpamComplianceStatus::NOT_SET};
    bool m_complianceStatusHasBeenSet = false;

    IpamManagementState m_managementState{IpamManagementState::NOT_SET};
    bool m_managementStateHasBeenSet = false;

    IpamOverlapStatus m_overlapStatus{IpamOverlapStatus::NOT_SET};
    bool m_overlapStatusHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
