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


    /**
     * <p>The resource discovery ID.</p>
     */
    inline const Aws::String& GetIpamResourceDiscoveryId() const{ return m_ipamResourceDiscoveryId; }

    /**
     * <p>The resource discovery ID.</p>
     */
    inline bool IpamResourceDiscoveryIdHasBeenSet() const { return m_ipamResourceDiscoveryIdHasBeenSet; }

    /**
     * <p>The resource discovery ID.</p>
     */
    inline void SetIpamResourceDiscoveryId(const Aws::String& value) { m_ipamResourceDiscoveryIdHasBeenSet = true; m_ipamResourceDiscoveryId = value; }

    /**
     * <p>The resource discovery ID.</p>
     */
    inline void SetIpamResourceDiscoveryId(Aws::String&& value) { m_ipamResourceDiscoveryIdHasBeenSet = true; m_ipamResourceDiscoveryId = std::move(value); }

    /**
     * <p>The resource discovery ID.</p>
     */
    inline void SetIpamResourceDiscoveryId(const char* value) { m_ipamResourceDiscoveryIdHasBeenSet = true; m_ipamResourceDiscoveryId.assign(value); }

    /**
     * <p>The resource discovery ID.</p>
     */
    inline IpamDiscoveredResourceCidr& WithIpamResourceDiscoveryId(const Aws::String& value) { SetIpamResourceDiscoveryId(value); return *this;}

    /**
     * <p>The resource discovery ID.</p>
     */
    inline IpamDiscoveredResourceCidr& WithIpamResourceDiscoveryId(Aws::String&& value) { SetIpamResourceDiscoveryId(std::move(value)); return *this;}

    /**
     * <p>The resource discovery ID.</p>
     */
    inline IpamDiscoveredResourceCidr& WithIpamResourceDiscoveryId(const char* value) { SetIpamResourceDiscoveryId(value); return *this;}


    /**
     * <p>The resource Region.</p>
     */
    inline const Aws::String& GetResourceRegion() const{ return m_resourceRegion; }

    /**
     * <p>The resource Region.</p>
     */
    inline bool ResourceRegionHasBeenSet() const { return m_resourceRegionHasBeenSet; }

    /**
     * <p>The resource Region.</p>
     */
    inline void SetResourceRegion(const Aws::String& value) { m_resourceRegionHasBeenSet = true; m_resourceRegion = value; }

    /**
     * <p>The resource Region.</p>
     */
    inline void SetResourceRegion(Aws::String&& value) { m_resourceRegionHasBeenSet = true; m_resourceRegion = std::move(value); }

    /**
     * <p>The resource Region.</p>
     */
    inline void SetResourceRegion(const char* value) { m_resourceRegionHasBeenSet = true; m_resourceRegion.assign(value); }

    /**
     * <p>The resource Region.</p>
     */
    inline IpamDiscoveredResourceCidr& WithResourceRegion(const Aws::String& value) { SetResourceRegion(value); return *this;}

    /**
     * <p>The resource Region.</p>
     */
    inline IpamDiscoveredResourceCidr& WithResourceRegion(Aws::String&& value) { SetResourceRegion(std::move(value)); return *this;}

    /**
     * <p>The resource Region.</p>
     */
    inline IpamDiscoveredResourceCidr& WithResourceRegion(const char* value) { SetResourceRegion(value); return *this;}


    /**
     * <p>The resource ID.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The resource ID.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The resource ID.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The resource ID.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The resource ID.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The resource ID.</p>
     */
    inline IpamDiscoveredResourceCidr& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The resource ID.</p>
     */
    inline IpamDiscoveredResourceCidr& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The resource ID.</p>
     */
    inline IpamDiscoveredResourceCidr& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The resource owner ID.</p>
     */
    inline const Aws::String& GetResourceOwnerId() const{ return m_resourceOwnerId; }

    /**
     * <p>The resource owner ID.</p>
     */
    inline bool ResourceOwnerIdHasBeenSet() const { return m_resourceOwnerIdHasBeenSet; }

    /**
     * <p>The resource owner ID.</p>
     */
    inline void SetResourceOwnerId(const Aws::String& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = value; }

    /**
     * <p>The resource owner ID.</p>
     */
    inline void SetResourceOwnerId(Aws::String&& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = std::move(value); }

    /**
     * <p>The resource owner ID.</p>
     */
    inline void SetResourceOwnerId(const char* value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId.assign(value); }

    /**
     * <p>The resource owner ID.</p>
     */
    inline IpamDiscoveredResourceCidr& WithResourceOwnerId(const Aws::String& value) { SetResourceOwnerId(value); return *this;}

    /**
     * <p>The resource owner ID.</p>
     */
    inline IpamDiscoveredResourceCidr& WithResourceOwnerId(Aws::String&& value) { SetResourceOwnerId(std::move(value)); return *this;}

    /**
     * <p>The resource owner ID.</p>
     */
    inline IpamDiscoveredResourceCidr& WithResourceOwnerId(const char* value) { SetResourceOwnerId(value); return *this;}


    /**
     * <p>The resource CIDR.</p>
     */
    inline const Aws::String& GetResourceCidr() const{ return m_resourceCidr; }

    /**
     * <p>The resource CIDR.</p>
     */
    inline bool ResourceCidrHasBeenSet() const { return m_resourceCidrHasBeenSet; }

    /**
     * <p>The resource CIDR.</p>
     */
    inline void SetResourceCidr(const Aws::String& value) { m_resourceCidrHasBeenSet = true; m_resourceCidr = value; }

    /**
     * <p>The resource CIDR.</p>
     */
    inline void SetResourceCidr(Aws::String&& value) { m_resourceCidrHasBeenSet = true; m_resourceCidr = std::move(value); }

    /**
     * <p>The resource CIDR.</p>
     */
    inline void SetResourceCidr(const char* value) { m_resourceCidrHasBeenSet = true; m_resourceCidr.assign(value); }

    /**
     * <p>The resource CIDR.</p>
     */
    inline IpamDiscoveredResourceCidr& WithResourceCidr(const Aws::String& value) { SetResourceCidr(value); return *this;}

    /**
     * <p>The resource CIDR.</p>
     */
    inline IpamDiscoveredResourceCidr& WithResourceCidr(Aws::String&& value) { SetResourceCidr(std::move(value)); return *this;}

    /**
     * <p>The resource CIDR.</p>
     */
    inline IpamDiscoveredResourceCidr& WithResourceCidr(const char* value) { SetResourceCidr(value); return *this;}


    /**
     * <p>The resource type.</p>
     */
    inline const IpamResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type.</p>
     */
    inline void SetResourceType(const IpamResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type.</p>
     */
    inline void SetResourceType(IpamResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type.</p>
     */
    inline IpamDiscoveredResourceCidr& WithResourceType(const IpamResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type.</p>
     */
    inline IpamDiscoveredResourceCidr& WithResourceType(IpamResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The resource tags.</p>
     */
    inline const Aws::Vector<IpamResourceTag>& GetResourceTags() const{ return m_resourceTags; }

    /**
     * <p>The resource tags.</p>
     */
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }

    /**
     * <p>The resource tags.</p>
     */
    inline void SetResourceTags(const Aws::Vector<IpamResourceTag>& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = value; }

    /**
     * <p>The resource tags.</p>
     */
    inline void SetResourceTags(Aws::Vector<IpamResourceTag>&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::move(value); }

    /**
     * <p>The resource tags.</p>
     */
    inline IpamDiscoveredResourceCidr& WithResourceTags(const Aws::Vector<IpamResourceTag>& value) { SetResourceTags(value); return *this;}

    /**
     * <p>The resource tags.</p>
     */
    inline IpamDiscoveredResourceCidr& WithResourceTags(Aws::Vector<IpamResourceTag>&& value) { SetResourceTags(std::move(value)); return *this;}

    /**
     * <p>The resource tags.</p>
     */
    inline IpamDiscoveredResourceCidr& AddResourceTags(const IpamResourceTag& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(value); return *this; }

    /**
     * <p>The resource tags.</p>
     */
    inline IpamDiscoveredResourceCidr& AddResourceTags(IpamResourceTag&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(std::move(value)); return *this; }


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
    inline bool IpUsageHasBeenSet() const { return m_ipUsageHasBeenSet; }

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
    inline void SetIpUsage(double value) { m_ipUsageHasBeenSet = true; m_ipUsage = value; }

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
    inline IpamDiscoveredResourceCidr& WithIpUsage(double value) { SetIpUsage(value); return *this;}


    /**
     * <p>The VPC ID.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The VPC ID.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The VPC ID.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The VPC ID.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The VPC ID.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The VPC ID.</p>
     */
    inline IpamDiscoveredResourceCidr& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The VPC ID.</p>
     */
    inline IpamDiscoveredResourceCidr& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The VPC ID.</p>
     */
    inline IpamDiscoveredResourceCidr& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The last successful resource discovery time.</p>
     */
    inline const Aws::Utils::DateTime& GetSampleTime() const{ return m_sampleTime; }

    /**
     * <p>The last successful resource discovery time.</p>
     */
    inline bool SampleTimeHasBeenSet() const { return m_sampleTimeHasBeenSet; }

    /**
     * <p>The last successful resource discovery time.</p>
     */
    inline void SetSampleTime(const Aws::Utils::DateTime& value) { m_sampleTimeHasBeenSet = true; m_sampleTime = value; }

    /**
     * <p>The last successful resource discovery time.</p>
     */
    inline void SetSampleTime(Aws::Utils::DateTime&& value) { m_sampleTimeHasBeenSet = true; m_sampleTime = std::move(value); }

    /**
     * <p>The last successful resource discovery time.</p>
     */
    inline IpamDiscoveredResourceCidr& WithSampleTime(const Aws::Utils::DateTime& value) { SetSampleTime(value); return *this;}

    /**
     * <p>The last successful resource discovery time.</p>
     */
    inline IpamDiscoveredResourceCidr& WithSampleTime(Aws::Utils::DateTime&& value) { SetSampleTime(std::move(value)); return *this;}

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

    IpamResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<IpamResourceTag> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;

    double m_ipUsage;
    bool m_ipUsageHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Utils::DateTime m_sampleTime;
    bool m_sampleTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
