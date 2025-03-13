/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/IpamResourceCidrIpSource.h>
#include <aws/ec2/model/IpamResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/IpamNetworkInterfaceAttachmentStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>An IPAM discovered resource CIDR. A discovered resource is a resource CIDR
   * monitored under a resource discovery. The following resources can be discovered:
   * VPCs, Public IPv4 pools, VPC subnets, and Elastic IP addresses. The discovered
   * resource CIDR is the IP address range in CIDR notation that is associated with
   * the resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamDiscoveredResourceCidr">AWS
   * API Reference</a></p>
   */
  class IpamDiscoveredResourceCidr
  {
  public:
    AWS_EC2_API IpamDiscoveredResourceCidr() = default;
    AWS_EC2_API IpamDiscoveredResourceCidr(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpamDiscoveredResourceCidr& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The resource discovery ID.</p>
     */
    inline const Aws::String& GetIpamResourceDiscoveryId() const { return m_ipamResourceDiscoveryId; }
    inline bool IpamResourceDiscoveryIdHasBeenSet() const { return m_ipamResourceDiscoveryIdHasBeenSet; }
    template<typename IpamResourceDiscoveryIdT = Aws::String>
    void SetIpamResourceDiscoveryId(IpamResourceDiscoveryIdT&& value) { m_ipamResourceDiscoveryIdHasBeenSet = true; m_ipamResourceDiscoveryId = std::forward<IpamResourceDiscoveryIdT>(value); }
    template<typename IpamResourceDiscoveryIdT = Aws::String>
    IpamDiscoveredResourceCidr& WithIpamResourceDiscoveryId(IpamResourceDiscoveryIdT&& value) { SetIpamResourceDiscoveryId(std::forward<IpamResourceDiscoveryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource Region.</p>
     */
    inline const Aws::String& GetResourceRegion() const { return m_resourceRegion; }
    inline bool ResourceRegionHasBeenSet() const { return m_resourceRegionHasBeenSet; }
    template<typename ResourceRegionT = Aws::String>
    void SetResourceRegion(ResourceRegionT&& value) { m_resourceRegionHasBeenSet = true; m_resourceRegion = std::forward<ResourceRegionT>(value); }
    template<typename ResourceRegionT = Aws::String>
    IpamDiscoveredResourceCidr& WithResourceRegion(ResourceRegionT&& value) { SetResourceRegion(std::forward<ResourceRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ID.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    IpamDiscoveredResourceCidr& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource owner ID.</p>
     */
    inline const Aws::String& GetResourceOwnerId() const { return m_resourceOwnerId; }
    inline bool ResourceOwnerIdHasBeenSet() const { return m_resourceOwnerIdHasBeenSet; }
    template<typename ResourceOwnerIdT = Aws::String>
    void SetResourceOwnerId(ResourceOwnerIdT&& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = std::forward<ResourceOwnerIdT>(value); }
    template<typename ResourceOwnerIdT = Aws::String>
    IpamDiscoveredResourceCidr& WithResourceOwnerId(ResourceOwnerIdT&& value) { SetResourceOwnerId(std::forward<ResourceOwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource CIDR.</p>
     */
    inline const Aws::String& GetResourceCidr() const { return m_resourceCidr; }
    inline bool ResourceCidrHasBeenSet() const { return m_resourceCidrHasBeenSet; }
    template<typename ResourceCidrT = Aws::String>
    void SetResourceCidr(ResourceCidrT&& value) { m_resourceCidrHasBeenSet = true; m_resourceCidr = std::forward<ResourceCidrT>(value); }
    template<typename ResourceCidrT = Aws::String>
    IpamDiscoveredResourceCidr& WithResourceCidr(ResourceCidrT&& value) { SetResourceCidr(std::forward<ResourceCidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source that allocated the IP address space. <code>byoip</code> or
     * <code>amazon</code> indicates public IP address space allocated by Amazon or
     * space that you have allocated with Bring your own IP (BYOIP). <code>none</code>
     * indicates private space.</p>
     */
    inline IpamResourceCidrIpSource GetIpSource() const { return m_ipSource; }
    inline bool IpSourceHasBeenSet() const { return m_ipSourceHasBeenSet; }
    inline void SetIpSource(IpamResourceCidrIpSource value) { m_ipSourceHasBeenSet = true; m_ipSource = value; }
    inline IpamDiscoveredResourceCidr& WithIpSource(IpamResourceCidrIpSource value) { SetIpSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type.</p>
     */
    inline IpamResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(IpamResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline IpamDiscoveredResourceCidr& WithResourceType(IpamResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource tags.</p>
     */
    inline const Aws::Vector<IpamResourceTag>& GetResourceTags() const { return m_resourceTags; }
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
    template<typename ResourceTagsT = Aws::Vector<IpamResourceTag>>
    void SetResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::forward<ResourceTagsT>(value); }
    template<typename ResourceTagsT = Aws::Vector<IpamResourceTag>>
    IpamDiscoveredResourceCidr& WithResourceTags(ResourceTagsT&& value) { SetResourceTags(std::forward<ResourceTagsT>(value)); return *this;}
    template<typename ResourceTagsT = IpamResourceTag>
    IpamDiscoveredResourceCidr& AddResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace_back(std::forward<ResourceTagsT>(value)); return *this; }
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
    inline IpamDiscoveredResourceCidr& WithIpUsage(double value) { SetIpUsage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC ID.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    IpamDiscoveredResourceCidr& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet ID.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    IpamDiscoveredResourceCidr& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For elastic network interfaces, this is the status of whether or not the
     * elastic network interface is attached.</p>
     */
    inline IpamNetworkInterfaceAttachmentStatus GetNetworkInterfaceAttachmentStatus() const { return m_networkInterfaceAttachmentStatus; }
    inline bool NetworkInterfaceAttachmentStatusHasBeenSet() const { return m_networkInterfaceAttachmentStatusHasBeenSet; }
    inline void SetNetworkInterfaceAttachmentStatus(IpamNetworkInterfaceAttachmentStatus value) { m_networkInterfaceAttachmentStatusHasBeenSet = true; m_networkInterfaceAttachmentStatus = value; }
    inline IpamDiscoveredResourceCidr& WithNetworkInterfaceAttachmentStatus(IpamNetworkInterfaceAttachmentStatus value) { SetNetworkInterfaceAttachmentStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last successful resource discovery time.</p>
     */
    inline const Aws::Utils::DateTime& GetSampleTime() const { return m_sampleTime; }
    inline bool SampleTimeHasBeenSet() const { return m_sampleTimeHasBeenSet; }
    template<typename SampleTimeT = Aws::Utils::DateTime>
    void SetSampleTime(SampleTimeT&& value) { m_sampleTimeHasBeenSet = true; m_sampleTime = std::forward<SampleTimeT>(value); }
    template<typename SampleTimeT = Aws::Utils::DateTime>
    IpamDiscoveredResourceCidr& WithSampleTime(SampleTimeT&& value) { SetSampleTime(std::forward<SampleTimeT>(value)); return *this;}
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
    IpamDiscoveredResourceCidr& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ipamResourceDiscoveryId;
    bool m_ipamResourceDiscoveryIdHasBeenSet = false;

    Aws::String m_resourceRegion;
    bool m_resourceRegionHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceOwnerId;
    bool m_resourceOwnerIdHasBeenSet = false;

    Aws::String m_resourceCidr;
    bool m_resourceCidrHasBeenSet = false;

    IpamResourceCidrIpSource m_ipSource{IpamResourceCidrIpSource::NOT_SET};
    bool m_ipSourceHasBeenSet = false;

    IpamResourceType m_resourceType{IpamResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<IpamResourceTag> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;

    double m_ipUsage{0.0};
    bool m_ipUsageHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    IpamNetworkInterfaceAttachmentStatus m_networkInterfaceAttachmentStatus{IpamNetworkInterfaceAttachmentStatus::NOT_SET};
    bool m_networkInterfaceAttachmentStatusHasBeenSet = false;

    Aws::Utils::DateTime m_sampleTime{};
    bool m_sampleTimeHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
