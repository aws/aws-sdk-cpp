/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Tenancy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API CreateVpcRequest : public EC2Request
  {
  public:
    CreateVpcRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVpc"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The IPv4 network range for the VPC, in CIDR notation. For example,
     * <code>10.0.0.0/16</code>. We modify the specified CIDR block to its canonical
     * form; for example, if you specify <code>100.68.0.18/18</code>, we modify it to
     * <code>100.68.0.0/18</code>.</p>
     */
    inline const Aws::String& GetCidrBlock() const{ return m_cidrBlock; }

    /**
     * <p>The IPv4 network range for the VPC, in CIDR notation. For example,
     * <code>10.0.0.0/16</code>. We modify the specified CIDR block to its canonical
     * form; for example, if you specify <code>100.68.0.18/18</code>, we modify it to
     * <code>100.68.0.0/18</code>.</p>
     */
    inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }

    /**
     * <p>The IPv4 network range for the VPC, in CIDR notation. For example,
     * <code>10.0.0.0/16</code>. We modify the specified CIDR block to its canonical
     * form; for example, if you specify <code>100.68.0.18/18</code>, we modify it to
     * <code>100.68.0.0/18</code>.</p>
     */
    inline void SetCidrBlock(const Aws::String& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = value; }

    /**
     * <p>The IPv4 network range for the VPC, in CIDR notation. For example,
     * <code>10.0.0.0/16</code>. We modify the specified CIDR block to its canonical
     * form; for example, if you specify <code>100.68.0.18/18</code>, we modify it to
     * <code>100.68.0.0/18</code>.</p>
     */
    inline void SetCidrBlock(Aws::String&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::move(value); }

    /**
     * <p>The IPv4 network range for the VPC, in CIDR notation. For example,
     * <code>10.0.0.0/16</code>. We modify the specified CIDR block to its canonical
     * form; for example, if you specify <code>100.68.0.18/18</code>, we modify it to
     * <code>100.68.0.0/18</code>.</p>
     */
    inline void SetCidrBlock(const char* value) { m_cidrBlockHasBeenSet = true; m_cidrBlock.assign(value); }

    /**
     * <p>The IPv4 network range for the VPC, in CIDR notation. For example,
     * <code>10.0.0.0/16</code>. We modify the specified CIDR block to its canonical
     * form; for example, if you specify <code>100.68.0.18/18</code>, we modify it to
     * <code>100.68.0.0/18</code>.</p>
     */
    inline CreateVpcRequest& WithCidrBlock(const Aws::String& value) { SetCidrBlock(value); return *this;}

    /**
     * <p>The IPv4 network range for the VPC, in CIDR notation. For example,
     * <code>10.0.0.0/16</code>. We modify the specified CIDR block to its canonical
     * form; for example, if you specify <code>100.68.0.18/18</code>, we modify it to
     * <code>100.68.0.0/18</code>.</p>
     */
    inline CreateVpcRequest& WithCidrBlock(Aws::String&& value) { SetCidrBlock(std::move(value)); return *this;}

    /**
     * <p>The IPv4 network range for the VPC, in CIDR notation. For example,
     * <code>10.0.0.0/16</code>. We modify the specified CIDR block to its canonical
     * form; for example, if you specify <code>100.68.0.18/18</code>, we modify it to
     * <code>100.68.0.0/18</code>.</p>
     */
    inline CreateVpcRequest& WithCidrBlock(const char* value) { SetCidrBlock(value); return *this;}


    /**
     * <p>Requests an Amazon-provided IPv6 CIDR block with a /56 prefix length for the
     * VPC. You cannot specify the range of IP addresses, or the size of the CIDR
     * block.</p>
     */
    inline bool GetAmazonProvidedIpv6CidrBlock() const{ return m_amazonProvidedIpv6CidrBlock; }

    /**
     * <p>Requests an Amazon-provided IPv6 CIDR block with a /56 prefix length for the
     * VPC. You cannot specify the range of IP addresses, or the size of the CIDR
     * block.</p>
     */
    inline bool AmazonProvidedIpv6CidrBlockHasBeenSet() const { return m_amazonProvidedIpv6CidrBlockHasBeenSet; }

    /**
     * <p>Requests an Amazon-provided IPv6 CIDR block with a /56 prefix length for the
     * VPC. You cannot specify the range of IP addresses, or the size of the CIDR
     * block.</p>
     */
    inline void SetAmazonProvidedIpv6CidrBlock(bool value) { m_amazonProvidedIpv6CidrBlockHasBeenSet = true; m_amazonProvidedIpv6CidrBlock = value; }

    /**
     * <p>Requests an Amazon-provided IPv6 CIDR block with a /56 prefix length for the
     * VPC. You cannot specify the range of IP addresses, or the size of the CIDR
     * block.</p>
     */
    inline CreateVpcRequest& WithAmazonProvidedIpv6CidrBlock(bool value) { SetAmazonProvidedIpv6CidrBlock(value); return *this;}


    /**
     * <p>The ID of an IPv6 address pool from which to allocate the IPv6 CIDR
     * block.</p>
     */
    inline const Aws::String& GetIpv6Pool() const{ return m_ipv6Pool; }

    /**
     * <p>The ID of an IPv6 address pool from which to allocate the IPv6 CIDR
     * block.</p>
     */
    inline bool Ipv6PoolHasBeenSet() const { return m_ipv6PoolHasBeenSet; }

    /**
     * <p>The ID of an IPv6 address pool from which to allocate the IPv6 CIDR
     * block.</p>
     */
    inline void SetIpv6Pool(const Aws::String& value) { m_ipv6PoolHasBeenSet = true; m_ipv6Pool = value; }

    /**
     * <p>The ID of an IPv6 address pool from which to allocate the IPv6 CIDR
     * block.</p>
     */
    inline void SetIpv6Pool(Aws::String&& value) { m_ipv6PoolHasBeenSet = true; m_ipv6Pool = std::move(value); }

    /**
     * <p>The ID of an IPv6 address pool from which to allocate the IPv6 CIDR
     * block.</p>
     */
    inline void SetIpv6Pool(const char* value) { m_ipv6PoolHasBeenSet = true; m_ipv6Pool.assign(value); }

    /**
     * <p>The ID of an IPv6 address pool from which to allocate the IPv6 CIDR
     * block.</p>
     */
    inline CreateVpcRequest& WithIpv6Pool(const Aws::String& value) { SetIpv6Pool(value); return *this;}

    /**
     * <p>The ID of an IPv6 address pool from which to allocate the IPv6 CIDR
     * block.</p>
     */
    inline CreateVpcRequest& WithIpv6Pool(Aws::String&& value) { SetIpv6Pool(std::move(value)); return *this;}

    /**
     * <p>The ID of an IPv6 address pool from which to allocate the IPv6 CIDR
     * block.</p>
     */
    inline CreateVpcRequest& WithIpv6Pool(const char* value) { SetIpv6Pool(value); return *this;}


    /**
     * <p>The IPv6 CIDR block from the IPv6 address pool. You must also specify
     * <code>Ipv6Pool</code> in the request.</p> <p>To let Amazon choose the IPv6 CIDR
     * block for you, omit this parameter.</p>
     */
    inline const Aws::String& GetIpv6CidrBlock() const{ return m_ipv6CidrBlock; }

    /**
     * <p>The IPv6 CIDR block from the IPv6 address pool. You must also specify
     * <code>Ipv6Pool</code> in the request.</p> <p>To let Amazon choose the IPv6 CIDR
     * block for you, omit this parameter.</p>
     */
    inline bool Ipv6CidrBlockHasBeenSet() const { return m_ipv6CidrBlockHasBeenSet; }

    /**
     * <p>The IPv6 CIDR block from the IPv6 address pool. You must also specify
     * <code>Ipv6Pool</code> in the request.</p> <p>To let Amazon choose the IPv6 CIDR
     * block for you, omit this parameter.</p>
     */
    inline void SetIpv6CidrBlock(const Aws::String& value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock = value; }

    /**
     * <p>The IPv6 CIDR block from the IPv6 address pool. You must also specify
     * <code>Ipv6Pool</code> in the request.</p> <p>To let Amazon choose the IPv6 CIDR
     * block for you, omit this parameter.</p>
     */
    inline void SetIpv6CidrBlock(Aws::String&& value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock = std::move(value); }

    /**
     * <p>The IPv6 CIDR block from the IPv6 address pool. You must also specify
     * <code>Ipv6Pool</code> in the request.</p> <p>To let Amazon choose the IPv6 CIDR
     * block for you, omit this parameter.</p>
     */
    inline void SetIpv6CidrBlock(const char* value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock.assign(value); }

    /**
     * <p>The IPv6 CIDR block from the IPv6 address pool. You must also specify
     * <code>Ipv6Pool</code> in the request.</p> <p>To let Amazon choose the IPv6 CIDR
     * block for you, omit this parameter.</p>
     */
    inline CreateVpcRequest& WithIpv6CidrBlock(const Aws::String& value) { SetIpv6CidrBlock(value); return *this;}

    /**
     * <p>The IPv6 CIDR block from the IPv6 address pool. You must also specify
     * <code>Ipv6Pool</code> in the request.</p> <p>To let Amazon choose the IPv6 CIDR
     * block for you, omit this parameter.</p>
     */
    inline CreateVpcRequest& WithIpv6CidrBlock(Aws::String&& value) { SetIpv6CidrBlock(std::move(value)); return *this;}

    /**
     * <p>The IPv6 CIDR block from the IPv6 address pool. You must also specify
     * <code>Ipv6Pool</code> in the request.</p> <p>To let Amazon choose the IPv6 CIDR
     * block for you, omit this parameter.</p>
     */
    inline CreateVpcRequest& WithIpv6CidrBlock(const char* value) { SetIpv6CidrBlock(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CreateVpcRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The tenancy options for instances launched into the VPC. For
     * <code>default</code>, instances are launched with shared tenancy by default. You
     * can launch instances with any tenancy into a shared tenancy VPC. For
     * <code>dedicated</code>, instances are launched as dedicated tenancy instances by
     * default. You can only launch instances with a tenancy of <code>dedicated</code>
     * or <code>host</code> into a dedicated tenancy VPC. </p> <p> <b>Important:</b>
     * The <code>host</code> value cannot be used with this parameter. Use the
     * <code>default</code> or <code>dedicated</code> values only.</p> <p>Default:
     * <code>default</code> </p>
     */
    inline const Tenancy& GetInstanceTenancy() const{ return m_instanceTenancy; }

    /**
     * <p>The tenancy options for instances launched into the VPC. For
     * <code>default</code>, instances are launched with shared tenancy by default. You
     * can launch instances with any tenancy into a shared tenancy VPC. For
     * <code>dedicated</code>, instances are launched as dedicated tenancy instances by
     * default. You can only launch instances with a tenancy of <code>dedicated</code>
     * or <code>host</code> into a dedicated tenancy VPC. </p> <p> <b>Important:</b>
     * The <code>host</code> value cannot be used with this parameter. Use the
     * <code>default</code> or <code>dedicated</code> values only.</p> <p>Default:
     * <code>default</code> </p>
     */
    inline bool InstanceTenancyHasBeenSet() const { return m_instanceTenancyHasBeenSet; }

    /**
     * <p>The tenancy options for instances launched into the VPC. For
     * <code>default</code>, instances are launched with shared tenancy by default. You
     * can launch instances with any tenancy into a shared tenancy VPC. For
     * <code>dedicated</code>, instances are launched as dedicated tenancy instances by
     * default. You can only launch instances with a tenancy of <code>dedicated</code>
     * or <code>host</code> into a dedicated tenancy VPC. </p> <p> <b>Important:</b>
     * The <code>host</code> value cannot be used with this parameter. Use the
     * <code>default</code> or <code>dedicated</code> values only.</p> <p>Default:
     * <code>default</code> </p>
     */
    inline void SetInstanceTenancy(const Tenancy& value) { m_instanceTenancyHasBeenSet = true; m_instanceTenancy = value; }

    /**
     * <p>The tenancy options for instances launched into the VPC. For
     * <code>default</code>, instances are launched with shared tenancy by default. You
     * can launch instances with any tenancy into a shared tenancy VPC. For
     * <code>dedicated</code>, instances are launched as dedicated tenancy instances by
     * default. You can only launch instances with a tenancy of <code>dedicated</code>
     * or <code>host</code> into a dedicated tenancy VPC. </p> <p> <b>Important:</b>
     * The <code>host</code> value cannot be used with this parameter. Use the
     * <code>default</code> or <code>dedicated</code> values only.</p> <p>Default:
     * <code>default</code> </p>
     */
    inline void SetInstanceTenancy(Tenancy&& value) { m_instanceTenancyHasBeenSet = true; m_instanceTenancy = std::move(value); }

    /**
     * <p>The tenancy options for instances launched into the VPC. For
     * <code>default</code>, instances are launched with shared tenancy by default. You
     * can launch instances with any tenancy into a shared tenancy VPC. For
     * <code>dedicated</code>, instances are launched as dedicated tenancy instances by
     * default. You can only launch instances with a tenancy of <code>dedicated</code>
     * or <code>host</code> into a dedicated tenancy VPC. </p> <p> <b>Important:</b>
     * The <code>host</code> value cannot be used with this parameter. Use the
     * <code>default</code> or <code>dedicated</code> values only.</p> <p>Default:
     * <code>default</code> </p>
     */
    inline CreateVpcRequest& WithInstanceTenancy(const Tenancy& value) { SetInstanceTenancy(value); return *this;}

    /**
     * <p>The tenancy options for instances launched into the VPC. For
     * <code>default</code>, instances are launched with shared tenancy by default. You
     * can launch instances with any tenancy into a shared tenancy VPC. For
     * <code>dedicated</code>, instances are launched as dedicated tenancy instances by
     * default. You can only launch instances with a tenancy of <code>dedicated</code>
     * or <code>host</code> into a dedicated tenancy VPC. </p> <p> <b>Important:</b>
     * The <code>host</code> value cannot be used with this parameter. Use the
     * <code>default</code> or <code>dedicated</code> values only.</p> <p>Default:
     * <code>default</code> </p>
     */
    inline CreateVpcRequest& WithInstanceTenancy(Tenancy&& value) { SetInstanceTenancy(std::move(value)); return *this;}


    /**
     * <p>The name of the location from which we advertise the IPV6 CIDR block. Use
     * this parameter to limit the address to this location.</p> <p> You must set
     * <code>AmazonProvidedIpv6CidrBlock</code> to <code>true</code> to use this
     * parameter.</p>
     */
    inline const Aws::String& GetIpv6CidrBlockNetworkBorderGroup() const{ return m_ipv6CidrBlockNetworkBorderGroup; }

    /**
     * <p>The name of the location from which we advertise the IPV6 CIDR block. Use
     * this parameter to limit the address to this location.</p> <p> You must set
     * <code>AmazonProvidedIpv6CidrBlock</code> to <code>true</code> to use this
     * parameter.</p>
     */
    inline bool Ipv6CidrBlockNetworkBorderGroupHasBeenSet() const { return m_ipv6CidrBlockNetworkBorderGroupHasBeenSet; }

    /**
     * <p>The name of the location from which we advertise the IPV6 CIDR block. Use
     * this parameter to limit the address to this location.</p> <p> You must set
     * <code>AmazonProvidedIpv6CidrBlock</code> to <code>true</code> to use this
     * parameter.</p>
     */
    inline void SetIpv6CidrBlockNetworkBorderGroup(const Aws::String& value) { m_ipv6CidrBlockNetworkBorderGroupHasBeenSet = true; m_ipv6CidrBlockNetworkBorderGroup = value; }

    /**
     * <p>The name of the location from which we advertise the IPV6 CIDR block. Use
     * this parameter to limit the address to this location.</p> <p> You must set
     * <code>AmazonProvidedIpv6CidrBlock</code> to <code>true</code> to use this
     * parameter.</p>
     */
    inline void SetIpv6CidrBlockNetworkBorderGroup(Aws::String&& value) { m_ipv6CidrBlockNetworkBorderGroupHasBeenSet = true; m_ipv6CidrBlockNetworkBorderGroup = std::move(value); }

    /**
     * <p>The name of the location from which we advertise the IPV6 CIDR block. Use
     * this parameter to limit the address to this location.</p> <p> You must set
     * <code>AmazonProvidedIpv6CidrBlock</code> to <code>true</code> to use this
     * parameter.</p>
     */
    inline void SetIpv6CidrBlockNetworkBorderGroup(const char* value) { m_ipv6CidrBlockNetworkBorderGroupHasBeenSet = true; m_ipv6CidrBlockNetworkBorderGroup.assign(value); }

    /**
     * <p>The name of the location from which we advertise the IPV6 CIDR block. Use
     * this parameter to limit the address to this location.</p> <p> You must set
     * <code>AmazonProvidedIpv6CidrBlock</code> to <code>true</code> to use this
     * parameter.</p>
     */
    inline CreateVpcRequest& WithIpv6CidrBlockNetworkBorderGroup(const Aws::String& value) { SetIpv6CidrBlockNetworkBorderGroup(value); return *this;}

    /**
     * <p>The name of the location from which we advertise the IPV6 CIDR block. Use
     * this parameter to limit the address to this location.</p> <p> You must set
     * <code>AmazonProvidedIpv6CidrBlock</code> to <code>true</code> to use this
     * parameter.</p>
     */
    inline CreateVpcRequest& WithIpv6CidrBlockNetworkBorderGroup(Aws::String&& value) { SetIpv6CidrBlockNetworkBorderGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the location from which we advertise the IPV6 CIDR block. Use
     * this parameter to limit the address to this location.</p> <p> You must set
     * <code>AmazonProvidedIpv6CidrBlock</code> to <code>true</code> to use this
     * parameter.</p>
     */
    inline CreateVpcRequest& WithIpv6CidrBlockNetworkBorderGroup(const char* value) { SetIpv6CidrBlockNetworkBorderGroup(value); return *this;}


    /**
     * <p>The tags to assign to the VPC.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to assign to the VPC.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to assign to the VPC.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to assign to the VPC.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to assign to the VPC.</p>
     */
    inline CreateVpcRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to assign to the VPC.</p>
     */
    inline CreateVpcRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the VPC.</p>
     */
    inline CreateVpcRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to assign to the VPC.</p>
     */
    inline CreateVpcRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet;

    bool m_amazonProvidedIpv6CidrBlock;
    bool m_amazonProvidedIpv6CidrBlockHasBeenSet;

    Aws::String m_ipv6Pool;
    bool m_ipv6PoolHasBeenSet;

    Aws::String m_ipv6CidrBlock;
    bool m_ipv6CidrBlockHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Tenancy m_instanceTenancy;
    bool m_instanceTenancyHasBeenSet;

    Aws::String m_ipv6CidrBlockNetworkBorderGroup;
    bool m_ipv6CidrBlockNetworkBorderGroupHasBeenSet;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
