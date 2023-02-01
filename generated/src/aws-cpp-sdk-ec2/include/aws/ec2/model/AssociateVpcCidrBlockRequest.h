/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AssociateVpcCidrBlockRequest : public EC2Request
  {
  public:
    AWS_EC2_API AssociateVpcCidrBlockRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateVpcCidrBlock"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Requests an Amazon-provided IPv6 CIDR block with a /56 prefix length for the
     * VPC. You cannot specify the range of IPv6 addresses, or the size of the CIDR
     * block.</p>
     */
    inline bool GetAmazonProvidedIpv6CidrBlock() const{ return m_amazonProvidedIpv6CidrBlock; }

    /**
     * <p>Requests an Amazon-provided IPv6 CIDR block with a /56 prefix length for the
     * VPC. You cannot specify the range of IPv6 addresses, or the size of the CIDR
     * block.</p>
     */
    inline bool AmazonProvidedIpv6CidrBlockHasBeenSet() const { return m_amazonProvidedIpv6CidrBlockHasBeenSet; }

    /**
     * <p>Requests an Amazon-provided IPv6 CIDR block with a /56 prefix length for the
     * VPC. You cannot specify the range of IPv6 addresses, or the size of the CIDR
     * block.</p>
     */
    inline void SetAmazonProvidedIpv6CidrBlock(bool value) { m_amazonProvidedIpv6CidrBlockHasBeenSet = true; m_amazonProvidedIpv6CidrBlock = value; }

    /**
     * <p>Requests an Amazon-provided IPv6 CIDR block with a /56 prefix length for the
     * VPC. You cannot specify the range of IPv6 addresses, or the size of the CIDR
     * block.</p>
     */
    inline AssociateVpcCidrBlockRequest& WithAmazonProvidedIpv6CidrBlock(bool value) { SetAmazonProvidedIpv6CidrBlock(value); return *this;}


    /**
     * <p>An IPv4 CIDR block to associate with the VPC.</p>
     */
    inline const Aws::String& GetCidrBlock() const{ return m_cidrBlock; }

    /**
     * <p>An IPv4 CIDR block to associate with the VPC.</p>
     */
    inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }

    /**
     * <p>An IPv4 CIDR block to associate with the VPC.</p>
     */
    inline void SetCidrBlock(const Aws::String& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = value; }

    /**
     * <p>An IPv4 CIDR block to associate with the VPC.</p>
     */
    inline void SetCidrBlock(Aws::String&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::move(value); }

    /**
     * <p>An IPv4 CIDR block to associate with the VPC.</p>
     */
    inline void SetCidrBlock(const char* value) { m_cidrBlockHasBeenSet = true; m_cidrBlock.assign(value); }

    /**
     * <p>An IPv4 CIDR block to associate with the VPC.</p>
     */
    inline AssociateVpcCidrBlockRequest& WithCidrBlock(const Aws::String& value) { SetCidrBlock(value); return *this;}

    /**
     * <p>An IPv4 CIDR block to associate with the VPC.</p>
     */
    inline AssociateVpcCidrBlockRequest& WithCidrBlock(Aws::String&& value) { SetCidrBlock(std::move(value)); return *this;}

    /**
     * <p>An IPv4 CIDR block to associate with the VPC.</p>
     */
    inline AssociateVpcCidrBlockRequest& WithCidrBlock(const char* value) { SetCidrBlock(value); return *this;}


    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline AssociateVpcCidrBlockRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline AssociateVpcCidrBlockRequest& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline AssociateVpcCidrBlockRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The name of the location from which we advertise the IPV6 CIDR block. Use
     * this parameter to limit the CIDR block to this location.</p> <p> You must set
     * <code>AmazonProvidedIpv6CidrBlock</code> to <code>true</code> to use this
     * parameter.</p> <p> You can have one IPv6 CIDR block association per network
     * border group.</p>
     */
    inline const Aws::String& GetIpv6CidrBlockNetworkBorderGroup() const{ return m_ipv6CidrBlockNetworkBorderGroup; }

    /**
     * <p>The name of the location from which we advertise the IPV6 CIDR block. Use
     * this parameter to limit the CIDR block to this location.</p> <p> You must set
     * <code>AmazonProvidedIpv6CidrBlock</code> to <code>true</code> to use this
     * parameter.</p> <p> You can have one IPv6 CIDR block association per network
     * border group.</p>
     */
    inline bool Ipv6CidrBlockNetworkBorderGroupHasBeenSet() const { return m_ipv6CidrBlockNetworkBorderGroupHasBeenSet; }

    /**
     * <p>The name of the location from which we advertise the IPV6 CIDR block. Use
     * this parameter to limit the CIDR block to this location.</p> <p> You must set
     * <code>AmazonProvidedIpv6CidrBlock</code> to <code>true</code> to use this
     * parameter.</p> <p> You can have one IPv6 CIDR block association per network
     * border group.</p>
     */
    inline void SetIpv6CidrBlockNetworkBorderGroup(const Aws::String& value) { m_ipv6CidrBlockNetworkBorderGroupHasBeenSet = true; m_ipv6CidrBlockNetworkBorderGroup = value; }

    /**
     * <p>The name of the location from which we advertise the IPV6 CIDR block. Use
     * this parameter to limit the CIDR block to this location.</p> <p> You must set
     * <code>AmazonProvidedIpv6CidrBlock</code> to <code>true</code> to use this
     * parameter.</p> <p> You can have one IPv6 CIDR block association per network
     * border group.</p>
     */
    inline void SetIpv6CidrBlockNetworkBorderGroup(Aws::String&& value) { m_ipv6CidrBlockNetworkBorderGroupHasBeenSet = true; m_ipv6CidrBlockNetworkBorderGroup = std::move(value); }

    /**
     * <p>The name of the location from which we advertise the IPV6 CIDR block. Use
     * this parameter to limit the CIDR block to this location.</p> <p> You must set
     * <code>AmazonProvidedIpv6CidrBlock</code> to <code>true</code> to use this
     * parameter.</p> <p> You can have one IPv6 CIDR block association per network
     * border group.</p>
     */
    inline void SetIpv6CidrBlockNetworkBorderGroup(const char* value) { m_ipv6CidrBlockNetworkBorderGroupHasBeenSet = true; m_ipv6CidrBlockNetworkBorderGroup.assign(value); }

    /**
     * <p>The name of the location from which we advertise the IPV6 CIDR block. Use
     * this parameter to limit the CIDR block to this location.</p> <p> You must set
     * <code>AmazonProvidedIpv6CidrBlock</code> to <code>true</code> to use this
     * parameter.</p> <p> You can have one IPv6 CIDR block association per network
     * border group.</p>
     */
    inline AssociateVpcCidrBlockRequest& WithIpv6CidrBlockNetworkBorderGroup(const Aws::String& value) { SetIpv6CidrBlockNetworkBorderGroup(value); return *this;}

    /**
     * <p>The name of the location from which we advertise the IPV6 CIDR block. Use
     * this parameter to limit the CIDR block to this location.</p> <p> You must set
     * <code>AmazonProvidedIpv6CidrBlock</code> to <code>true</code> to use this
     * parameter.</p> <p> You can have one IPv6 CIDR block association per network
     * border group.</p>
     */
    inline AssociateVpcCidrBlockRequest& WithIpv6CidrBlockNetworkBorderGroup(Aws::String&& value) { SetIpv6CidrBlockNetworkBorderGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the location from which we advertise the IPV6 CIDR block. Use
     * this parameter to limit the CIDR block to this location.</p> <p> You must set
     * <code>AmazonProvidedIpv6CidrBlock</code> to <code>true</code> to use this
     * parameter.</p> <p> You can have one IPv6 CIDR block association per network
     * border group.</p>
     */
    inline AssociateVpcCidrBlockRequest& WithIpv6CidrBlockNetworkBorderGroup(const char* value) { SetIpv6CidrBlockNetworkBorderGroup(value); return *this;}


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
    inline AssociateVpcCidrBlockRequest& WithIpv6Pool(const Aws::String& value) { SetIpv6Pool(value); return *this;}

    /**
     * <p>The ID of an IPv6 address pool from which to allocate the IPv6 CIDR
     * block.</p>
     */
    inline AssociateVpcCidrBlockRequest& WithIpv6Pool(Aws::String&& value) { SetIpv6Pool(std::move(value)); return *this;}

    /**
     * <p>The ID of an IPv6 address pool from which to allocate the IPv6 CIDR
     * block.</p>
     */
    inline AssociateVpcCidrBlockRequest& WithIpv6Pool(const char* value) { SetIpv6Pool(value); return *this;}


    /**
     * <p>An IPv6 CIDR block from the IPv6 address pool. You must also specify
     * <code>Ipv6Pool</code> in the request.</p> <p>To let Amazon choose the IPv6 CIDR
     * block for you, omit this parameter.</p>
     */
    inline const Aws::String& GetIpv6CidrBlock() const{ return m_ipv6CidrBlock; }

    /**
     * <p>An IPv6 CIDR block from the IPv6 address pool. You must also specify
     * <code>Ipv6Pool</code> in the request.</p> <p>To let Amazon choose the IPv6 CIDR
     * block for you, omit this parameter.</p>
     */
    inline bool Ipv6CidrBlockHasBeenSet() const { return m_ipv6CidrBlockHasBeenSet; }

    /**
     * <p>An IPv6 CIDR block from the IPv6 address pool. You must also specify
     * <code>Ipv6Pool</code> in the request.</p> <p>To let Amazon choose the IPv6 CIDR
     * block for you, omit this parameter.</p>
     */
    inline void SetIpv6CidrBlock(const Aws::String& value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock = value; }

    /**
     * <p>An IPv6 CIDR block from the IPv6 address pool. You must also specify
     * <code>Ipv6Pool</code> in the request.</p> <p>To let Amazon choose the IPv6 CIDR
     * block for you, omit this parameter.</p>
     */
    inline void SetIpv6CidrBlock(Aws::String&& value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock = std::move(value); }

    /**
     * <p>An IPv6 CIDR block from the IPv6 address pool. You must also specify
     * <code>Ipv6Pool</code> in the request.</p> <p>To let Amazon choose the IPv6 CIDR
     * block for you, omit this parameter.</p>
     */
    inline void SetIpv6CidrBlock(const char* value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock.assign(value); }

    /**
     * <p>An IPv6 CIDR block from the IPv6 address pool. You must also specify
     * <code>Ipv6Pool</code> in the request.</p> <p>To let Amazon choose the IPv6 CIDR
     * block for you, omit this parameter.</p>
     */
    inline AssociateVpcCidrBlockRequest& WithIpv6CidrBlock(const Aws::String& value) { SetIpv6CidrBlock(value); return *this;}

    /**
     * <p>An IPv6 CIDR block from the IPv6 address pool. You must also specify
     * <code>Ipv6Pool</code> in the request.</p> <p>To let Amazon choose the IPv6 CIDR
     * block for you, omit this parameter.</p>
     */
    inline AssociateVpcCidrBlockRequest& WithIpv6CidrBlock(Aws::String&& value) { SetIpv6CidrBlock(std::move(value)); return *this;}

    /**
     * <p>An IPv6 CIDR block from the IPv6 address pool. You must also specify
     * <code>Ipv6Pool</code> in the request.</p> <p>To let Amazon choose the IPv6 CIDR
     * block for you, omit this parameter.</p>
     */
    inline AssociateVpcCidrBlockRequest& WithIpv6CidrBlock(const char* value) { SetIpv6CidrBlock(value); return *this;}


    /**
     * <p>Associate a CIDR allocated from an IPv4 IPAM pool to a VPC. For more
     * information about Amazon VPC IP Address Manager (IPAM), see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/what-is-it-ipam.html">What is
     * IPAM?</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline const Aws::String& GetIpv4IpamPoolId() const{ return m_ipv4IpamPoolId; }

    /**
     * <p>Associate a CIDR allocated from an IPv4 IPAM pool to a VPC. For more
     * information about Amazon VPC IP Address Manager (IPAM), see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/what-is-it-ipam.html">What is
     * IPAM?</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline bool Ipv4IpamPoolIdHasBeenSet() const { return m_ipv4IpamPoolIdHasBeenSet; }

    /**
     * <p>Associate a CIDR allocated from an IPv4 IPAM pool to a VPC. For more
     * information about Amazon VPC IP Address Manager (IPAM), see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/what-is-it-ipam.html">What is
     * IPAM?</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline void SetIpv4IpamPoolId(const Aws::String& value) { m_ipv4IpamPoolIdHasBeenSet = true; m_ipv4IpamPoolId = value; }

    /**
     * <p>Associate a CIDR allocated from an IPv4 IPAM pool to a VPC. For more
     * information about Amazon VPC IP Address Manager (IPAM), see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/what-is-it-ipam.html">What is
     * IPAM?</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline void SetIpv4IpamPoolId(Aws::String&& value) { m_ipv4IpamPoolIdHasBeenSet = true; m_ipv4IpamPoolId = std::move(value); }

    /**
     * <p>Associate a CIDR allocated from an IPv4 IPAM pool to a VPC. For more
     * information about Amazon VPC IP Address Manager (IPAM), see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/what-is-it-ipam.html">What is
     * IPAM?</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline void SetIpv4IpamPoolId(const char* value) { m_ipv4IpamPoolIdHasBeenSet = true; m_ipv4IpamPoolId.assign(value); }

    /**
     * <p>Associate a CIDR allocated from an IPv4 IPAM pool to a VPC. For more
     * information about Amazon VPC IP Address Manager (IPAM), see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/what-is-it-ipam.html">What is
     * IPAM?</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline AssociateVpcCidrBlockRequest& WithIpv4IpamPoolId(const Aws::String& value) { SetIpv4IpamPoolId(value); return *this;}

    /**
     * <p>Associate a CIDR allocated from an IPv4 IPAM pool to a VPC. For more
     * information about Amazon VPC IP Address Manager (IPAM), see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/what-is-it-ipam.html">What is
     * IPAM?</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline AssociateVpcCidrBlockRequest& WithIpv4IpamPoolId(Aws::String&& value) { SetIpv4IpamPoolId(std::move(value)); return *this;}

    /**
     * <p>Associate a CIDR allocated from an IPv4 IPAM pool to a VPC. For more
     * information about Amazon VPC IP Address Manager (IPAM), see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/what-is-it-ipam.html">What is
     * IPAM?</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline AssociateVpcCidrBlockRequest& WithIpv4IpamPoolId(const char* value) { SetIpv4IpamPoolId(value); return *this;}


    /**
     * <p>The netmask length of the IPv4 CIDR you would like to associate from an
     * Amazon VPC IP Address Manager (IPAM) pool. For more information about IPAM, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/ipam/what-is-it-ipam.html">What
     * is IPAM?</a> in the <i>Amazon VPC IPAM User Guide</i>. </p>
     */
    inline int GetIpv4NetmaskLength() const{ return m_ipv4NetmaskLength; }

    /**
     * <p>The netmask length of the IPv4 CIDR you would like to associate from an
     * Amazon VPC IP Address Manager (IPAM) pool. For more information about IPAM, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/ipam/what-is-it-ipam.html">What
     * is IPAM?</a> in the <i>Amazon VPC IPAM User Guide</i>. </p>
     */
    inline bool Ipv4NetmaskLengthHasBeenSet() const { return m_ipv4NetmaskLengthHasBeenSet; }

    /**
     * <p>The netmask length of the IPv4 CIDR you would like to associate from an
     * Amazon VPC IP Address Manager (IPAM) pool. For more information about IPAM, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/ipam/what-is-it-ipam.html">What
     * is IPAM?</a> in the <i>Amazon VPC IPAM User Guide</i>. </p>
     */
    inline void SetIpv4NetmaskLength(int value) { m_ipv4NetmaskLengthHasBeenSet = true; m_ipv4NetmaskLength = value; }

    /**
     * <p>The netmask length of the IPv4 CIDR you would like to associate from an
     * Amazon VPC IP Address Manager (IPAM) pool. For more information about IPAM, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/ipam/what-is-it-ipam.html">What
     * is IPAM?</a> in the <i>Amazon VPC IPAM User Guide</i>. </p>
     */
    inline AssociateVpcCidrBlockRequest& WithIpv4NetmaskLength(int value) { SetIpv4NetmaskLength(value); return *this;}


    /**
     * <p>Associates a CIDR allocated from an IPv6 IPAM pool to a VPC. For more
     * information about Amazon VPC IP Address Manager (IPAM), see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/what-is-it-ipam.html">What is
     * IPAM?</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline const Aws::String& GetIpv6IpamPoolId() const{ return m_ipv6IpamPoolId; }

    /**
     * <p>Associates a CIDR allocated from an IPv6 IPAM pool to a VPC. For more
     * information about Amazon VPC IP Address Manager (IPAM), see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/what-is-it-ipam.html">What is
     * IPAM?</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline bool Ipv6IpamPoolIdHasBeenSet() const { return m_ipv6IpamPoolIdHasBeenSet; }

    /**
     * <p>Associates a CIDR allocated from an IPv6 IPAM pool to a VPC. For more
     * information about Amazon VPC IP Address Manager (IPAM), see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/what-is-it-ipam.html">What is
     * IPAM?</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline void SetIpv6IpamPoolId(const Aws::String& value) { m_ipv6IpamPoolIdHasBeenSet = true; m_ipv6IpamPoolId = value; }

    /**
     * <p>Associates a CIDR allocated from an IPv6 IPAM pool to a VPC. For more
     * information about Amazon VPC IP Address Manager (IPAM), see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/what-is-it-ipam.html">What is
     * IPAM?</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline void SetIpv6IpamPoolId(Aws::String&& value) { m_ipv6IpamPoolIdHasBeenSet = true; m_ipv6IpamPoolId = std::move(value); }

    /**
     * <p>Associates a CIDR allocated from an IPv6 IPAM pool to a VPC. For more
     * information about Amazon VPC IP Address Manager (IPAM), see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/what-is-it-ipam.html">What is
     * IPAM?</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline void SetIpv6IpamPoolId(const char* value) { m_ipv6IpamPoolIdHasBeenSet = true; m_ipv6IpamPoolId.assign(value); }

    /**
     * <p>Associates a CIDR allocated from an IPv6 IPAM pool to a VPC. For more
     * information about Amazon VPC IP Address Manager (IPAM), see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/what-is-it-ipam.html">What is
     * IPAM?</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline AssociateVpcCidrBlockRequest& WithIpv6IpamPoolId(const Aws::String& value) { SetIpv6IpamPoolId(value); return *this;}

    /**
     * <p>Associates a CIDR allocated from an IPv6 IPAM pool to a VPC. For more
     * information about Amazon VPC IP Address Manager (IPAM), see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/what-is-it-ipam.html">What is
     * IPAM?</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline AssociateVpcCidrBlockRequest& WithIpv6IpamPoolId(Aws::String&& value) { SetIpv6IpamPoolId(std::move(value)); return *this;}

    /**
     * <p>Associates a CIDR allocated from an IPv6 IPAM pool to a VPC. For more
     * information about Amazon VPC IP Address Manager (IPAM), see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/what-is-it-ipam.html">What is
     * IPAM?</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline AssociateVpcCidrBlockRequest& WithIpv6IpamPoolId(const char* value) { SetIpv6IpamPoolId(value); return *this;}


    /**
     * <p>The netmask length of the IPv6 CIDR you would like to associate from an
     * Amazon VPC IP Address Manager (IPAM) pool. For more information about IPAM, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/ipam/what-is-it-ipam.html">What
     * is IPAM?</a> in the <i>Amazon VPC IPAM User Guide</i>. </p>
     */
    inline int GetIpv6NetmaskLength() const{ return m_ipv6NetmaskLength; }

    /**
     * <p>The netmask length of the IPv6 CIDR you would like to associate from an
     * Amazon VPC IP Address Manager (IPAM) pool. For more information about IPAM, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/ipam/what-is-it-ipam.html">What
     * is IPAM?</a> in the <i>Amazon VPC IPAM User Guide</i>. </p>
     */
    inline bool Ipv6NetmaskLengthHasBeenSet() const { return m_ipv6NetmaskLengthHasBeenSet; }

    /**
     * <p>The netmask length of the IPv6 CIDR you would like to associate from an
     * Amazon VPC IP Address Manager (IPAM) pool. For more information about IPAM, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/ipam/what-is-it-ipam.html">What
     * is IPAM?</a> in the <i>Amazon VPC IPAM User Guide</i>. </p>
     */
    inline void SetIpv6NetmaskLength(int value) { m_ipv6NetmaskLengthHasBeenSet = true; m_ipv6NetmaskLength = value; }

    /**
     * <p>The netmask length of the IPv6 CIDR you would like to associate from an
     * Amazon VPC IP Address Manager (IPAM) pool. For more information about IPAM, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/ipam/what-is-it-ipam.html">What
     * is IPAM?</a> in the <i>Amazon VPC IPAM User Guide</i>. </p>
     */
    inline AssociateVpcCidrBlockRequest& WithIpv6NetmaskLength(int value) { SetIpv6NetmaskLength(value); return *this;}

  private:

    bool m_amazonProvidedIpv6CidrBlock;
    bool m_amazonProvidedIpv6CidrBlockHasBeenSet = false;

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_ipv6CidrBlockNetworkBorderGroup;
    bool m_ipv6CidrBlockNetworkBorderGroupHasBeenSet = false;

    Aws::String m_ipv6Pool;
    bool m_ipv6PoolHasBeenSet = false;

    Aws::String m_ipv6CidrBlock;
    bool m_ipv6CidrBlockHasBeenSet = false;

    Aws::String m_ipv4IpamPoolId;
    bool m_ipv4IpamPoolIdHasBeenSet = false;

    int m_ipv4NetmaskLength;
    bool m_ipv4NetmaskLengthHasBeenSet = false;

    Aws::String m_ipv6IpamPoolId;
    bool m_ipv6IpamPoolIdHasBeenSet = false;

    int m_ipv6NetmaskLength;
    bool m_ipv6NetmaskLengthHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
