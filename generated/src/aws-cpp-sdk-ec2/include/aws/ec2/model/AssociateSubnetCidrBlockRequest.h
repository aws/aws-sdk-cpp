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
    AWS_EC2_API AssociateSubnetCidrBlockRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateSubnetCidrBlock"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The IPv6 CIDR block for your subnet. The subnet must have a /64 prefix
     * length.</p>
     */
    inline const Aws::String& GetIpv6CidrBlock() const{ return m_ipv6CidrBlock; }

    /**
     * <p>The IPv6 CIDR block for your subnet. The subnet must have a /64 prefix
     * length.</p>
     */
    inline bool Ipv6CidrBlockHasBeenSet() const { return m_ipv6CidrBlockHasBeenSet; }

    /**
     * <p>The IPv6 CIDR block for your subnet. The subnet must have a /64 prefix
     * length.</p>
     */
    inline void SetIpv6CidrBlock(const Aws::String& value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock = value; }

    /**
     * <p>The IPv6 CIDR block for your subnet. The subnet must have a /64 prefix
     * length.</p>
     */
    inline void SetIpv6CidrBlock(Aws::String&& value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock = std::move(value); }

    /**
     * <p>The IPv6 CIDR block for your subnet. The subnet must have a /64 prefix
     * length.</p>
     */
    inline void SetIpv6CidrBlock(const char* value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock.assign(value); }

    /**
     * <p>The IPv6 CIDR block for your subnet. The subnet must have a /64 prefix
     * length.</p>
     */
    inline AssociateSubnetCidrBlockRequest& WithIpv6CidrBlock(const Aws::String& value) { SetIpv6CidrBlock(value); return *this;}

    /**
     * <p>The IPv6 CIDR block for your subnet. The subnet must have a /64 prefix
     * length.</p>
     */
    inline AssociateSubnetCidrBlockRequest& WithIpv6CidrBlock(Aws::String&& value) { SetIpv6CidrBlock(std::move(value)); return *this;}

    /**
     * <p>The IPv6 CIDR block for your subnet. The subnet must have a /64 prefix
     * length.</p>
     */
    inline AssociateSubnetCidrBlockRequest& WithIpv6CidrBlock(const char* value) { SetIpv6CidrBlock(value); return *this;}


    /**
     * <p>The ID of your subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of your subnet.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The ID of your subnet.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of your subnet.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The ID of your subnet.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of your subnet.</p>
     */
    inline AssociateSubnetCidrBlockRequest& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of your subnet.</p>
     */
    inline AssociateSubnetCidrBlockRequest& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of your subnet.</p>
     */
    inline AssociateSubnetCidrBlockRequest& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}

  private:

    Aws::String m_ipv6CidrBlock;
    bool m_ipv6CidrBlockHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
