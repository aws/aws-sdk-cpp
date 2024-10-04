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
    AWS_EC2_API IpamDiscoveredResourceCidr();
    AWS_EC2_API IpamDiscoveredResourceCidr(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpamDiscoveredResourceCidr& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The resource discovery ID.</p>
     */
    inline const Aws::String& GetIpamResourceDiscoveryId() const{ return m_ipamResourceDiscoveryId; }
    inline bool IpamResourceDiscoveryIdHasBeenSet() const { return m_ipamResourceDiscoveryIdHasBeenSet; }
    inline void SetIpamResourceDiscoveryId(const Aws::String& value) { m_ipamResourceDiscoveryIdHasBeenSet = true; m_ipamResourceDiscoveryId = value; }
    inline void SetIpamResourceDiscoveryId(Aws::String&& value) { m_ipamResourceDiscoveryIdHasBeenSet = true; m_ipamResourceDiscoveryId = std::move(value); }
    inline void SetIpamResourceDiscoveryId(const char* value) { m_ipamResourceDiscoveryIdHasBeenSet = true; m_ipamResourceDiscoveryId.assign(value); }
    inline IpamDiscoveredResourceCidr& WithIpamResourceDiscoveryId(const Aws::String& value) { SetIpamResourceDiscoveryId(value); return *this;}
    inline IpamDiscoveredResourceCidr& WithIpamResourceDiscoveryId(Aws::String&& value) { SetIpamResourceDiscoveryId(std::move(value)); return *this;}
    inline IpamDiscoveredResourceCidr& WithIpamResourceDiscoveryId(const char* value) { SetIpamResourceDiscoveryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource Region.</p>
     */
    inline const Aws::String& GetResourceRegion() const{ return m_resourceRegion; }
    inline bool ResourceRegionHasBeenSet() const { return m_resourceRegionHasBeenSet; }
    inline void SetResourceRegion(const Aws::String& value) { m_resourceRegionHasBeenSet = true; m_resourceRegion = value; }
    inline void SetResourceRegion(Aws::String&& value) { m_resourceRegionHasBeenSet = true; m_resourceRegion = std::move(value); }
    inline void SetResourceRegion(const char* value) { m_resourceRegionHasBeenSet = true; m_resourceRegion.assign(value); }
    inline IpamDiscoveredResourceCidr& WithResourceRegion(const Aws::String& value) { SetResourceRegion(value); return *this;}
    inline IpamDiscoveredResourceCidr& WithResourceRegion(Aws::String&& value) { SetResourceRegion(std::move(value)); return *this;}
    inline IpamDiscoveredResourceCidr& WithResourceRegion(const char* value) { SetResourceRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ID.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline IpamDiscoveredResourceCidr& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline IpamDiscoveredResourceCidr& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline IpamDiscoveredResourceCidr& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource owner ID.</p>
     */
    inline const Aws::String& GetResourceOwnerId() const{ return m_resourceOwnerId; }
    inline bool ResourceOwnerIdHasBeenSet() const { return m_resourceOwnerIdHasBeenSet; }
    inline void SetResourceOwnerId(const Aws::String& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = value; }
    inline void SetResourceOwnerId(Aws::String&& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = std::move(value); }
    inline void SetResourceOwnerId(const char* value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId.assign(value); }
    inline IpamDiscoveredResourceCidr& WithResourceOwnerId(const Aws::String& value) { SetResourceOwnerId(value); return *this;}
    inline IpamDiscoveredResourceCidr& WithResourceOwnerId(Aws::String&& value) { SetResourceOwnerId(std::move(value)); return *this;}
    inline IpamDiscoveredResourceCidr& WithResourceOwnerId(const char* value) { SetResourceOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource CIDR.</p>
     */
    inline const Aws::String& GetResourceCidr() const{ return m_resourceCidr; }
    inline bool ResourceCidrHasBeenSet() const { return m_resourceCidrHasBeenSet; }
    inline void SetResourceCidr(const Aws::String& value) { m_resourceCidrHasBeenSet = true; m_resourceCidr = value; }
    inline void SetResourceCidr(Aws::String&& value) { m_resourceCidrHasBeenSet = true; m_resourceCidr = std::move(value); }
    inline void SetResourceCidr(const char* value) { m_resourceCidrHasBeenSet = true; m_resourceCidr.assign(value); }
    inline IpamDiscoveredResourceCidr& WithResourceCidr(const Aws::String& value) { SetResourceCidr(value); return *this;}
    inline IpamDiscoveredResourceCidr& WithResourceCidr(Aws::String&& value) { SetResourceCidr(std::move(value)); return *this;}
    inline IpamDiscoveredResourceCidr& WithResourceCidr(const char* value) { SetResourceCidr(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source that allocated the IP address space. <code>byoip</code> or
     * <code>amazon</code> indicates public IP address space allocated by Amazon or
     * space that you have allocated with Bring your own IP (BYOIP). <code>none</code>
     * indicates private space.</p>
     */
    inline const IpamResourceCidrIpSource& GetIpSource() const{ return m_ipSource; }
    inline bool IpSourceHasBeenSet() const { return m_ipSourceHasBeenSet; }
    inline void SetIpSource(const IpamResourceCidrIpSource& value) { m_ipSourceHasBeenSet = true; m_ipSource = value; }
    inline void SetIpSource(IpamResourceCidrIpSource&& value) { m_ipSourceHasBeenSet = true; m_ipSource = std::move(value); }
    inline IpamDiscoveredResourceCidr& WithIpSource(const IpamResourceCidrIpSource& value) { SetIpSource(value); return *this;}
    inline IpamDiscoveredResourceCidr& WithIpSource(IpamResourceCidrIpSource&& value) { SetIpSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type.</p>
     */
    inline const IpamResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const IpamResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(IpamResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline IpamDiscoveredResourceCidr& WithResourceType(const IpamResourceType& value) { SetResourceType(value); return *this;}
    inline IpamDiscoveredResourceCidr& WithResourceType(IpamResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource tags.</p>
     */
    inline const Aws::Vector<IpamResourceTag>& GetResourceTags() const{ return m_resourceTags; }
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
    inline void SetResourceTags(const Aws::Vector<IpamResourceTag>& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = value; }
    inline void SetResourceTags(Aws::Vector<IpamResourceTag>&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::move(value); }
    inline IpamDiscoveredResourceCidr& WithResourceTags(const Aws::Vector<IpamResourceTag>& value) { SetResourceTags(value); return *this;}
    inline IpamDiscoveredResourceCidr& WithResourceTags(Aws::Vector<IpamResourceTag>&& value) { SetResourceTags(std::move(value)); return *this;}
    inline IpamDiscoveredResourceCidr& AddResourceTags(const IpamResourceTag& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(value); return *this; }
    inline IpamDiscoveredResourceCidr& AddResourceTags(IpamResourceTag&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(std::move(value)); return *this; }
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
    inline double GetIpUsage() const{ return m_ipUsage; }
    inline bool IpUsageHasBeenSet() const { return m_ipUsageHasBeenSet; }
    inline void SetIpUsage(double value) { m_ipUsageHasBeenSet = true; m_ipUsage = value; }
    inline IpamDiscoveredResourceCidr& WithIpUsage(double value) { SetIpUsage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC ID.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline IpamDiscoveredResourceCidr& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline IpamDiscoveredResourceCidr& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline IpamDiscoveredResourceCidr& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet ID.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline IpamDiscoveredResourceCidr& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline IpamDiscoveredResourceCidr& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline IpamDiscoveredResourceCidr& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For elastic network interfaces, this is the status of whether or not the
     * elastic network interface is attached.</p>
     */
    inline const IpamNetworkInterfaceAttachmentStatus& GetNetworkInterfaceAttachmentStatus() const{ return m_networkInterfaceAttachmentStatus; }
    inline bool NetworkInterfaceAttachmentStatusHasBeenSet() const { return m_networkInterfaceAttachmentStatusHasBeenSet; }
    inline void SetNetworkInterfaceAttachmentStatus(const IpamNetworkInterfaceAttachmentStatus& value) { m_networkInterfaceAttachmentStatusHasBeenSet = true; m_networkInterfaceAttachmentStatus = value; }
    inline void SetNetworkInterfaceAttachmentStatus(IpamNetworkInterfaceAttachmentStatus&& value) { m_networkInterfaceAttachmentStatusHasBeenSet = true; m_networkInterfaceAttachmentStatus = std::move(value); }
    inline IpamDiscoveredResourceCidr& WithNetworkInterfaceAttachmentStatus(const IpamNetworkInterfaceAttachmentStatus& value) { SetNetworkInterfaceAttachmentStatus(value); return *this;}
    inline IpamDiscoveredResourceCidr& WithNetworkInterfaceAttachmentStatus(IpamNetworkInterfaceAttachmentStatus&& value) { SetNetworkInterfaceAttachmentStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last successful resource discovery time.</p>
     */
    inline const Aws::Utils::DateTime& GetSampleTime() const{ return m_sampleTime; }
    inline bool SampleTimeHasBeenSet() const { return m_sampleTimeHasBeenSet; }
    inline void SetSampleTime(const Aws::Utils::DateTime& value) { m_sampleTimeHasBeenSet = true; m_sampleTime = value; }
    inline void SetSampleTime(Aws::Utils::DateTime&& value) { m_sampleTimeHasBeenSet = true; m_sampleTime = std::move(value); }
    inline IpamDiscoveredResourceCidr& WithSampleTime(const Aws::Utils::DateTime& value) { SetSampleTime(value); return *this;}
    inline IpamDiscoveredResourceCidr& WithSampleTime(Aws::Utils::DateTime&& value) { SetSampleTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone ID.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = value; }
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::move(value); }
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId.assign(value); }
    inline IpamDiscoveredResourceCidr& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}
    inline IpamDiscoveredResourceCidr& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}
    inline IpamDiscoveredResourceCidr& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}
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

    IpamResourceCidrIpSource m_ipSource;
    bool m_ipSourceHasBeenSet = false;

    IpamResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<IpamResourceTag> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;

    double m_ipUsage;
    bool m_ipUsageHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    IpamNetworkInterfaceAttachmentStatus m_networkInterfaceAttachmentStatus;
    bool m_networkInterfaceAttachmentStatusHasBeenSet = false;

    Aws::Utils::DateTime m_sampleTime;
    bool m_sampleTimeHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
