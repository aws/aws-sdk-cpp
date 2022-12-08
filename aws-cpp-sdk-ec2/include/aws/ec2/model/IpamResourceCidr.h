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
    AWS_EC2_API IpamResourceCidr();
    AWS_EC2_API IpamResourceCidr(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpamResourceCidr& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The IPAM ID for an IPAM resource.</p>
     */
    inline const Aws::String& GetIpamId() const{ return m_ipamId; }

    /**
     * <p>The IPAM ID for an IPAM resource.</p>
     */
    inline bool IpamIdHasBeenSet() const { return m_ipamIdHasBeenSet; }

    /**
     * <p>The IPAM ID for an IPAM resource.</p>
     */
    inline void SetIpamId(const Aws::String& value) { m_ipamIdHasBeenSet = true; m_ipamId = value; }

    /**
     * <p>The IPAM ID for an IPAM resource.</p>
     */
    inline void SetIpamId(Aws::String&& value) { m_ipamIdHasBeenSet = true; m_ipamId = std::move(value); }

    /**
     * <p>The IPAM ID for an IPAM resource.</p>
     */
    inline void SetIpamId(const char* value) { m_ipamIdHasBeenSet = true; m_ipamId.assign(value); }

    /**
     * <p>The IPAM ID for an IPAM resource.</p>
     */
    inline IpamResourceCidr& WithIpamId(const Aws::String& value) { SetIpamId(value); return *this;}

    /**
     * <p>The IPAM ID for an IPAM resource.</p>
     */
    inline IpamResourceCidr& WithIpamId(Aws::String&& value) { SetIpamId(std::move(value)); return *this;}

    /**
     * <p>The IPAM ID for an IPAM resource.</p>
     */
    inline IpamResourceCidr& WithIpamId(const char* value) { SetIpamId(value); return *this;}


    /**
     * <p>The scope ID for an IPAM resource.</p>
     */
    inline const Aws::String& GetIpamScopeId() const{ return m_ipamScopeId; }

    /**
     * <p>The scope ID for an IPAM resource.</p>
     */
    inline bool IpamScopeIdHasBeenSet() const { return m_ipamScopeIdHasBeenSet; }

    /**
     * <p>The scope ID for an IPAM resource.</p>
     */
    inline void SetIpamScopeId(const Aws::String& value) { m_ipamScopeIdHasBeenSet = true; m_ipamScopeId = value; }

    /**
     * <p>The scope ID for an IPAM resource.</p>
     */
    inline void SetIpamScopeId(Aws::String&& value) { m_ipamScopeIdHasBeenSet = true; m_ipamScopeId = std::move(value); }

    /**
     * <p>The scope ID for an IPAM resource.</p>
     */
    inline void SetIpamScopeId(const char* value) { m_ipamScopeIdHasBeenSet = true; m_ipamScopeId.assign(value); }

    /**
     * <p>The scope ID for an IPAM resource.</p>
     */
    inline IpamResourceCidr& WithIpamScopeId(const Aws::String& value) { SetIpamScopeId(value); return *this;}

    /**
     * <p>The scope ID for an IPAM resource.</p>
     */
    inline IpamResourceCidr& WithIpamScopeId(Aws::String&& value) { SetIpamScopeId(std::move(value)); return *this;}

    /**
     * <p>The scope ID for an IPAM resource.</p>
     */
    inline IpamResourceCidr& WithIpamScopeId(const char* value) { SetIpamScopeId(value); return *this;}


    /**
     * <p>The pool ID for an IPAM resource.</p>
     */
    inline const Aws::String& GetIpamPoolId() const{ return m_ipamPoolId; }

    /**
     * <p>The pool ID for an IPAM resource.</p>
     */
    inline bool IpamPoolIdHasBeenSet() const { return m_ipamPoolIdHasBeenSet; }

    /**
     * <p>The pool ID for an IPAM resource.</p>
     */
    inline void SetIpamPoolId(const Aws::String& value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId = value; }

    /**
     * <p>The pool ID for an IPAM resource.</p>
     */
    inline void SetIpamPoolId(Aws::String&& value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId = std::move(value); }

    /**
     * <p>The pool ID for an IPAM resource.</p>
     */
    inline void SetIpamPoolId(const char* value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId.assign(value); }

    /**
     * <p>The pool ID for an IPAM resource.</p>
     */
    inline IpamResourceCidr& WithIpamPoolId(const Aws::String& value) { SetIpamPoolId(value); return *this;}

    /**
     * <p>The pool ID for an IPAM resource.</p>
     */
    inline IpamResourceCidr& WithIpamPoolId(Aws::String&& value) { SetIpamPoolId(std::move(value)); return *this;}

    /**
     * <p>The pool ID for an IPAM resource.</p>
     */
    inline IpamResourceCidr& WithIpamPoolId(const char* value) { SetIpamPoolId(value); return *this;}


    /**
     * <p>The Amazon Web Services Region for an IPAM resource.</p>
     */
    inline const Aws::String& GetResourceRegion() const{ return m_resourceRegion; }

    /**
     * <p>The Amazon Web Services Region for an IPAM resource.</p>
     */
    inline bool ResourceRegionHasBeenSet() const { return m_resourceRegionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region for an IPAM resource.</p>
     */
    inline void SetResourceRegion(const Aws::String& value) { m_resourceRegionHasBeenSet = true; m_resourceRegion = value; }

    /**
     * <p>The Amazon Web Services Region for an IPAM resource.</p>
     */
    inline void SetResourceRegion(Aws::String&& value) { m_resourceRegionHasBeenSet = true; m_resourceRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services Region for an IPAM resource.</p>
     */
    inline void SetResourceRegion(const char* value) { m_resourceRegionHasBeenSet = true; m_resourceRegion.assign(value); }

    /**
     * <p>The Amazon Web Services Region for an IPAM resource.</p>
     */
    inline IpamResourceCidr& WithResourceRegion(const Aws::String& value) { SetResourceRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region for an IPAM resource.</p>
     */
    inline IpamResourceCidr& WithResourceRegion(Aws::String&& value) { SetResourceRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region for an IPAM resource.</p>
     */
    inline IpamResourceCidr& WithResourceRegion(const char* value) { SetResourceRegion(value); return *this;}


    /**
     * <p>The Amazon Web Services account number of the owner of an IPAM resource.</p>
     */
    inline const Aws::String& GetResourceOwnerId() const{ return m_resourceOwnerId; }

    /**
     * <p>The Amazon Web Services account number of the owner of an IPAM resource.</p>
     */
    inline bool ResourceOwnerIdHasBeenSet() const { return m_resourceOwnerIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account number of the owner of an IPAM resource.</p>
     */
    inline void SetResourceOwnerId(const Aws::String& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = value; }

    /**
     * <p>The Amazon Web Services account number of the owner of an IPAM resource.</p>
     */
    inline void SetResourceOwnerId(Aws::String&& value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId = std::move(value); }

    /**
     * <p>The Amazon Web Services account number of the owner of an IPAM resource.</p>
     */
    inline void SetResourceOwnerId(const char* value) { m_resourceOwnerIdHasBeenSet = true; m_resourceOwnerId.assign(value); }

    /**
     * <p>The Amazon Web Services account number of the owner of an IPAM resource.</p>
     */
    inline IpamResourceCidr& WithResourceOwnerId(const Aws::String& value) { SetResourceOwnerId(value); return *this;}

    /**
     * <p>The Amazon Web Services account number of the owner of an IPAM resource.</p>
     */
    inline IpamResourceCidr& WithResourceOwnerId(Aws::String&& value) { SetResourceOwnerId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account number of the owner of an IPAM resource.</p>
     */
    inline IpamResourceCidr& WithResourceOwnerId(const char* value) { SetResourceOwnerId(value); return *this;}


    /**
     * <p>The ID of an IPAM resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of an IPAM resource.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of an IPAM resource.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of an IPAM resource.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of an IPAM resource.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of an IPAM resource.</p>
     */
    inline IpamResourceCidr& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of an IPAM resource.</p>
     */
    inline IpamResourceCidr& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of an IPAM resource.</p>
     */
    inline IpamResourceCidr& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The name of an IPAM resource.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The name of an IPAM resource.</p>
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * <p>The name of an IPAM resource.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The name of an IPAM resource.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * <p>The name of an IPAM resource.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>The name of an IPAM resource.</p>
     */
    inline IpamResourceCidr& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The name of an IPAM resource.</p>
     */
    inline IpamResourceCidr& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>The name of an IPAM resource.</p>
     */
    inline IpamResourceCidr& WithResourceName(const char* value) { SetResourceName(value); return *this;}


    /**
     * <p>The CIDR for an IPAM resource.</p>
     */
    inline const Aws::String& GetResourceCidr() const{ return m_resourceCidr; }

    /**
     * <p>The CIDR for an IPAM resource.</p>
     */
    inline bool ResourceCidrHasBeenSet() const { return m_resourceCidrHasBeenSet; }

    /**
     * <p>The CIDR for an IPAM resource.</p>
     */
    inline void SetResourceCidr(const Aws::String& value) { m_resourceCidrHasBeenSet = true; m_resourceCidr = value; }

    /**
     * <p>The CIDR for an IPAM resource.</p>
     */
    inline void SetResourceCidr(Aws::String&& value) { m_resourceCidrHasBeenSet = true; m_resourceCidr = std::move(value); }

    /**
     * <p>The CIDR for an IPAM resource.</p>
     */
    inline void SetResourceCidr(const char* value) { m_resourceCidrHasBeenSet = true; m_resourceCidr.assign(value); }

    /**
     * <p>The CIDR for an IPAM resource.</p>
     */
    inline IpamResourceCidr& WithResourceCidr(const Aws::String& value) { SetResourceCidr(value); return *this;}

    /**
     * <p>The CIDR for an IPAM resource.</p>
     */
    inline IpamResourceCidr& WithResourceCidr(Aws::String&& value) { SetResourceCidr(std::move(value)); return *this;}

    /**
     * <p>The CIDR for an IPAM resource.</p>
     */
    inline IpamResourceCidr& WithResourceCidr(const char* value) { SetResourceCidr(value); return *this;}


    /**
     * <p>The type of IPAM resource.</p>
     */
    inline const IpamResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of IPAM resource.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of IPAM resource.</p>
     */
    inline void SetResourceType(const IpamResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of IPAM resource.</p>
     */
    inline void SetResourceType(IpamResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of IPAM resource.</p>
     */
    inline IpamResourceCidr& WithResourceType(const IpamResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of IPAM resource.</p>
     */
    inline IpamResourceCidr& WithResourceType(IpamResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The tags for an IPAM resource.</p>
     */
    inline const Aws::Vector<IpamResourceTag>& GetResourceTags() const{ return m_resourceTags; }

    /**
     * <p>The tags for an IPAM resource.</p>
     */
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }

    /**
     * <p>The tags for an IPAM resource.</p>
     */
    inline void SetResourceTags(const Aws::Vector<IpamResourceTag>& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = value; }

    /**
     * <p>The tags for an IPAM resource.</p>
     */
    inline void SetResourceTags(Aws::Vector<IpamResourceTag>&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::move(value); }

    /**
     * <p>The tags for an IPAM resource.</p>
     */
    inline IpamResourceCidr& WithResourceTags(const Aws::Vector<IpamResourceTag>& value) { SetResourceTags(value); return *this;}

    /**
     * <p>The tags for an IPAM resource.</p>
     */
    inline IpamResourceCidr& WithResourceTags(Aws::Vector<IpamResourceTag>&& value) { SetResourceTags(std::move(value)); return *this;}

    /**
     * <p>The tags for an IPAM resource.</p>
     */
    inline IpamResourceCidr& AddResourceTags(const IpamResourceTag& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(value); return *this; }

    /**
     * <p>The tags for an IPAM resource.</p>
     */
    inline IpamResourceCidr& AddResourceTags(IpamResourceTag&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(std::move(value)); return *this; }


    /**
     * <p>The percentage of IP address space in use. To convert the decimal to a
     * percentage, multiply the decimal by 100. Note the following:</p> <ul> <li>
     * <p>For a resources that are VPCs, this is the percentage of IP address space in
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
     * <p>For a resources that are VPCs, this is the percentage of IP address space in
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
     * <p>For a resources that are VPCs, this is the percentage of IP address space in
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
     * <p>For a resources that are VPCs, this is the percentage of IP address space in
     * the VPC that's taken up by subnet CIDRs. </p> </li> <li> <p>For resources that
     * are subnets, if the subnet has an IPv4 CIDR provisioned to it, this is the
     * percentage of IPv4 address space in the subnet that's in use. If the subnet has
     * an IPv6 CIDR provisioned to it, the percentage of IPv6 address space in use is
     * not represented. The percentage of IPv6 address space in use cannot currently be
     * calculated. </p> </li> <li> <p>For resources that are public IPv4 pools, this is
     * the percentage of IP address space in the pool that's been allocated to Elastic
     * IP addresses (EIPs). </p> </li> </ul>
     */
    inline IpamResourceCidr& WithIpUsage(double value) { SetIpUsage(value); return *this;}


    /**
     * <p>The compliance status of the IPAM resource. For more information on
     * compliance statuses, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline const IpamComplianceStatus& GetComplianceStatus() const{ return m_complianceStatus; }

    /**
     * <p>The compliance status of the IPAM resource. For more information on
     * compliance statuses, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline bool ComplianceStatusHasBeenSet() const { return m_complianceStatusHasBeenSet; }

    /**
     * <p>The compliance status of the IPAM resource. For more information on
     * compliance statuses, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline void SetComplianceStatus(const IpamComplianceStatus& value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = value; }

    /**
     * <p>The compliance status of the IPAM resource. For more information on
     * compliance statuses, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline void SetComplianceStatus(IpamComplianceStatus&& value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = std::move(value); }

    /**
     * <p>The compliance status of the IPAM resource. For more information on
     * compliance statuses, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline IpamResourceCidr& WithComplianceStatus(const IpamComplianceStatus& value) { SetComplianceStatus(value); return *this;}

    /**
     * <p>The compliance status of the IPAM resource. For more information on
     * compliance statuses, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline IpamResourceCidr& WithComplianceStatus(IpamComplianceStatus&& value) { SetComplianceStatus(std::move(value)); return *this;}


    /**
     * <p>The management state of the resource. For more information about management
     * states, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline const IpamManagementState& GetManagementState() const{ return m_managementState; }

    /**
     * <p>The management state of the resource. For more information about management
     * states, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline bool ManagementStateHasBeenSet() const { return m_managementStateHasBeenSet; }

    /**
     * <p>The management state of the resource. For more information about management
     * states, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline void SetManagementState(const IpamManagementState& value) { m_managementStateHasBeenSet = true; m_managementState = value; }

    /**
     * <p>The management state of the resource. For more information about management
     * states, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline void SetManagementState(IpamManagementState&& value) { m_managementStateHasBeenSet = true; m_managementState = std::move(value); }

    /**
     * <p>The management state of the resource. For more information about management
     * states, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline IpamResourceCidr& WithManagementState(const IpamManagementState& value) { SetManagementState(value); return *this;}

    /**
     * <p>The management state of the resource. For more information about management
     * states, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline IpamResourceCidr& WithManagementState(IpamManagementState&& value) { SetManagementState(std::move(value)); return *this;}


    /**
     * <p>The overlap status of an IPAM resource. The overlap status tells you if the
     * CIDR for a resource overlaps with another CIDR in the scope. For more
     * information on overlap statuses, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline const IpamOverlapStatus& GetOverlapStatus() const{ return m_overlapStatus; }

    /**
     * <p>The overlap status of an IPAM resource. The overlap status tells you if the
     * CIDR for a resource overlaps with another CIDR in the scope. For more
     * information on overlap statuses, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline bool OverlapStatusHasBeenSet() const { return m_overlapStatusHasBeenSet; }

    /**
     * <p>The overlap status of an IPAM resource. The overlap status tells you if the
     * CIDR for a resource overlaps with another CIDR in the scope. For more
     * information on overlap statuses, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline void SetOverlapStatus(const IpamOverlapStatus& value) { m_overlapStatusHasBeenSet = true; m_overlapStatus = value; }

    /**
     * <p>The overlap status of an IPAM resource. The overlap status tells you if the
     * CIDR for a resource overlaps with another CIDR in the scope. For more
     * information on overlap statuses, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline void SetOverlapStatus(IpamOverlapStatus&& value) { m_overlapStatusHasBeenSet = true; m_overlapStatus = std::move(value); }

    /**
     * <p>The overlap status of an IPAM resource. The overlap status tells you if the
     * CIDR for a resource overlaps with another CIDR in the scope. For more
     * information on overlap statuses, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline IpamResourceCidr& WithOverlapStatus(const IpamOverlapStatus& value) { SetOverlapStatus(value); return *this;}

    /**
     * <p>The overlap status of an IPAM resource. The overlap status tells you if the
     * CIDR for a resource overlaps with another CIDR in the scope. For more
     * information on overlap statuses, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/monitor-cidr-compliance-ipam.html">Monitor
     * CIDR usage by resource</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline IpamResourceCidr& WithOverlapStatus(IpamOverlapStatus&& value) { SetOverlapStatus(std::move(value)); return *this;}


    /**
     * <p>The ID of a VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of a VPC.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of a VPC.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of a VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of a VPC.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of a VPC.</p>
     */
    inline IpamResourceCidr& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of a VPC.</p>
     */
    inline IpamResourceCidr& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of a VPC.</p>
     */
    inline IpamResourceCidr& WithVpcId(const char* value) { SetVpcId(value); return *this;}

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

    IpamResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<IpamResourceTag> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;

    double m_ipUsage;
    bool m_ipUsageHasBeenSet = false;

    IpamComplianceStatus m_complianceStatus;
    bool m_complianceStatusHasBeenSet = false;

    IpamManagementState m_managementState;
    bool m_managementStateHasBeenSet = false;

    IpamOverlapStatus m_overlapStatus;
    bool m_overlapStatusHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
