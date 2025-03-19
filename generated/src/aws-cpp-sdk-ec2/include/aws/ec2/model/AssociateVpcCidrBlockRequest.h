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
    AWS_EC2_API AssociateVpcCidrBlockRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateVpcCidrBlock"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>An IPv4 CIDR block to associate with the VPC.</p>
     */
    inline const Aws::String& GetCidrBlock() const { return m_cidrBlock; }
    inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }
    template<typename CidrBlockT = Aws::String>
    void SetCidrBlock(CidrBlockT&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::forward<CidrBlockT>(value); }
    template<typename CidrBlockT = Aws::String>
    AssociateVpcCidrBlockRequest& WithCidrBlock(CidrBlockT&& value) { SetCidrBlock(std::forward<CidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the location from which we advertise the IPV6 CIDR block. Use
     * this parameter to limit the CIDR block to this location.</p> <p> You must set
     * <code>AmazonProvidedIpv6CidrBlock</code> to <code>true</code> to use this
     * parameter.</p> <p> You can have one IPv6 CIDR block association per network
     * border group.</p>
     */
    inline const Aws::String& GetIpv6CidrBlockNetworkBorderGroup() const { return m_ipv6CidrBlockNetworkBorderGroup; }
    inline bool Ipv6CidrBlockNetworkBorderGroupHasBeenSet() const { return m_ipv6CidrBlockNetworkBorderGroupHasBeenSet; }
    template<typename Ipv6CidrBlockNetworkBorderGroupT = Aws::String>
    void SetIpv6CidrBlockNetworkBorderGroup(Ipv6CidrBlockNetworkBorderGroupT&& value) { m_ipv6CidrBlockNetworkBorderGroupHasBeenSet = true; m_ipv6CidrBlockNetworkBorderGroup = std::forward<Ipv6CidrBlockNetworkBorderGroupT>(value); }
    template<typename Ipv6CidrBlockNetworkBorderGroupT = Aws::String>
    AssociateVpcCidrBlockRequest& WithIpv6CidrBlockNetworkBorderGroup(Ipv6CidrBlockNetworkBorderGroupT&& value) { SetIpv6CidrBlockNetworkBorderGroup(std::forward<Ipv6CidrBlockNetworkBorderGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of an IPv6 address pool from which to allocate the IPv6 CIDR
     * block.</p>
     */
    inline const Aws::String& GetIpv6Pool() const { return m_ipv6Pool; }
    inline bool Ipv6PoolHasBeenSet() const { return m_ipv6PoolHasBeenSet; }
    template<typename Ipv6PoolT = Aws::String>
    void SetIpv6Pool(Ipv6PoolT&& value) { m_ipv6PoolHasBeenSet = true; m_ipv6Pool = std::forward<Ipv6PoolT>(value); }
    template<typename Ipv6PoolT = Aws::String>
    AssociateVpcCidrBlockRequest& WithIpv6Pool(Ipv6PoolT&& value) { SetIpv6Pool(std::forward<Ipv6PoolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IPv6 CIDR block from the IPv6 address pool. You must also specify
     * <code>Ipv6Pool</code> in the request.</p> <p>To let Amazon choose the IPv6 CIDR
     * block for you, omit this parameter.</p>
     */
    inline const Aws::String& GetIpv6CidrBlock() const { return m_ipv6CidrBlock; }
    inline bool Ipv6CidrBlockHasBeenSet() const { return m_ipv6CidrBlockHasBeenSet; }
    template<typename Ipv6CidrBlockT = Aws::String>
    void SetIpv6CidrBlock(Ipv6CidrBlockT&& value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock = std::forward<Ipv6CidrBlockT>(value); }
    template<typename Ipv6CidrBlockT = Aws::String>
    AssociateVpcCidrBlockRequest& WithIpv6CidrBlock(Ipv6CidrBlockT&& value) { SetIpv6CidrBlock(std::forward<Ipv6CidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Associate a CIDR allocated from an IPv4 IPAM pool to a VPC. For more
     * information about Amazon VPC IP Address Manager (IPAM), see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/what-is-it-ipam.html">What is
     * IPAM?</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline const Aws::String& GetIpv4IpamPoolId() const { return m_ipv4IpamPoolId; }
    inline bool Ipv4IpamPoolIdHasBeenSet() const { return m_ipv4IpamPoolIdHasBeenSet; }
    template<typename Ipv4IpamPoolIdT = Aws::String>
    void SetIpv4IpamPoolId(Ipv4IpamPoolIdT&& value) { m_ipv4IpamPoolIdHasBeenSet = true; m_ipv4IpamPoolId = std::forward<Ipv4IpamPoolIdT>(value); }
    template<typename Ipv4IpamPoolIdT = Aws::String>
    AssociateVpcCidrBlockRequest& WithIpv4IpamPoolId(Ipv4IpamPoolIdT&& value) { SetIpv4IpamPoolId(std::forward<Ipv4IpamPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The netmask length of the IPv4 CIDR you would like to associate from an
     * Amazon VPC IP Address Manager (IPAM) pool. For more information about IPAM, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/ipam/what-is-it-ipam.html">What
     * is IPAM?</a> in the <i>Amazon VPC IPAM User Guide</i>. </p>
     */
    inline int GetIpv4NetmaskLength() const { return m_ipv4NetmaskLength; }
    inline bool Ipv4NetmaskLengthHasBeenSet() const { return m_ipv4NetmaskLengthHasBeenSet; }
    inline void SetIpv4NetmaskLength(int value) { m_ipv4NetmaskLengthHasBeenSet = true; m_ipv4NetmaskLength = value; }
    inline AssociateVpcCidrBlockRequest& WithIpv4NetmaskLength(int value) { SetIpv4NetmaskLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Associates a CIDR allocated from an IPv6 IPAM pool to a VPC. For more
     * information about Amazon VPC IP Address Manager (IPAM), see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/what-is-it-ipam.html">What is
     * IPAM?</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline const Aws::String& GetIpv6IpamPoolId() const { return m_ipv6IpamPoolId; }
    inline bool Ipv6IpamPoolIdHasBeenSet() const { return m_ipv6IpamPoolIdHasBeenSet; }
    template<typename Ipv6IpamPoolIdT = Aws::String>
    void SetIpv6IpamPoolId(Ipv6IpamPoolIdT&& value) { m_ipv6IpamPoolIdHasBeenSet = true; m_ipv6IpamPoolId = std::forward<Ipv6IpamPoolIdT>(value); }
    template<typename Ipv6IpamPoolIdT = Aws::String>
    AssociateVpcCidrBlockRequest& WithIpv6IpamPoolId(Ipv6IpamPoolIdT&& value) { SetIpv6IpamPoolId(std::forward<Ipv6IpamPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The netmask length of the IPv6 CIDR you would like to associate from an
     * Amazon VPC IP Address Manager (IPAM) pool. For more information about IPAM, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/ipam/what-is-it-ipam.html">What
     * is IPAM?</a> in the <i>Amazon VPC IPAM User Guide</i>. </p>
     */
    inline int GetIpv6NetmaskLength() const { return m_ipv6NetmaskLength; }
    inline bool Ipv6NetmaskLengthHasBeenSet() const { return m_ipv6NetmaskLengthHasBeenSet; }
    inline void SetIpv6NetmaskLength(int value) { m_ipv6NetmaskLengthHasBeenSet = true; m_ipv6NetmaskLength = value; }
    inline AssociateVpcCidrBlockRequest& WithIpv6NetmaskLength(int value) { SetIpv6NetmaskLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    AssociateVpcCidrBlockRequest& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Requests an Amazon-provided IPv6 CIDR block with a /56 prefix length for the
     * VPC. You cannot specify the range of IPv6 addresses or the size of the CIDR
     * block.</p>
     */
    inline bool GetAmazonProvidedIpv6CidrBlock() const { return m_amazonProvidedIpv6CidrBlock; }
    inline bool AmazonProvidedIpv6CidrBlockHasBeenSet() const { return m_amazonProvidedIpv6CidrBlockHasBeenSet; }
    inline void SetAmazonProvidedIpv6CidrBlock(bool value) { m_amazonProvidedIpv6CidrBlockHasBeenSet = true; m_amazonProvidedIpv6CidrBlock = value; }
    inline AssociateVpcCidrBlockRequest& WithAmazonProvidedIpv6CidrBlock(bool value) { SetAmazonProvidedIpv6CidrBlock(value); return *this;}
    ///@}
  private:

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet = false;

    Aws::String m_ipv6CidrBlockNetworkBorderGroup;
    bool m_ipv6CidrBlockNetworkBorderGroupHasBeenSet = false;

    Aws::String m_ipv6Pool;
    bool m_ipv6PoolHasBeenSet = false;

    Aws::String m_ipv6CidrBlock;
    bool m_ipv6CidrBlockHasBeenSet = false;

    Aws::String m_ipv4IpamPoolId;
    bool m_ipv4IpamPoolIdHasBeenSet = false;

    int m_ipv4NetmaskLength{0};
    bool m_ipv4NetmaskLengthHasBeenSet = false;

    Aws::String m_ipv6IpamPoolId;
    bool m_ipv6IpamPoolIdHasBeenSet = false;

    int m_ipv6NetmaskLength{0};
    bool m_ipv6NetmaskLengthHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    bool m_amazonProvidedIpv6CidrBlock{false};
    bool m_amazonProvidedIpv6CidrBlockHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
