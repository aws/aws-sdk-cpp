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
  class AssociateSubnetCidrBlockRequest : public EC2Request
  {
  public:
    AWS_EC2_API AssociateSubnetCidrBlockRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateSubnetCidrBlock"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>An IPv6 IPAM pool ID.</p>
     */
    inline const Aws::String& GetIpv6IpamPoolId() const { return m_ipv6IpamPoolId; }
    inline bool Ipv6IpamPoolIdHasBeenSet() const { return m_ipv6IpamPoolIdHasBeenSet; }
    template<typename Ipv6IpamPoolIdT = Aws::String>
    void SetIpv6IpamPoolId(Ipv6IpamPoolIdT&& value) { m_ipv6IpamPoolIdHasBeenSet = true; m_ipv6IpamPoolId = std::forward<Ipv6IpamPoolIdT>(value); }
    template<typename Ipv6IpamPoolIdT = Aws::String>
    AssociateSubnetCidrBlockRequest& WithIpv6IpamPoolId(Ipv6IpamPoolIdT&& value) { SetIpv6IpamPoolId(std::forward<Ipv6IpamPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IPv6 netmask length.</p>
     */
    inline int GetIpv6NetmaskLength() const { return m_ipv6NetmaskLength; }
    inline bool Ipv6NetmaskLengthHasBeenSet() const { return m_ipv6NetmaskLengthHasBeenSet; }
    inline void SetIpv6NetmaskLength(int value) { m_ipv6NetmaskLengthHasBeenSet = true; m_ipv6NetmaskLength = value; }
    inline AssociateSubnetCidrBlockRequest& WithIpv6NetmaskLength(int value) { SetIpv6NetmaskLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of your subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    AssociateSubnetCidrBlockRequest& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 CIDR block for your subnet.</p>
     */
    inline const Aws::String& GetIpv6CidrBlock() const { return m_ipv6CidrBlock; }
    inline bool Ipv6CidrBlockHasBeenSet() const { return m_ipv6CidrBlockHasBeenSet; }
    template<typename Ipv6CidrBlockT = Aws::String>
    void SetIpv6CidrBlock(Ipv6CidrBlockT&& value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock = std::forward<Ipv6CidrBlockT>(value); }
    template<typename Ipv6CidrBlockT = Aws::String>
    AssociateSubnetCidrBlockRequest& WithIpv6CidrBlock(Ipv6CidrBlockT&& value) { SetIpv6CidrBlock(std::forward<Ipv6CidrBlockT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ipv6IpamPoolId;
    bool m_ipv6IpamPoolIdHasBeenSet = false;

    int m_ipv6NetmaskLength{0};
    bool m_ipv6NetmaskLengthHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_ipv6CidrBlock;
    bool m_ipv6CidrBlockHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
