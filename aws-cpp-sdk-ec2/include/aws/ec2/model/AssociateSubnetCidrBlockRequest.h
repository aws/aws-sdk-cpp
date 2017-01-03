﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API AssociateSubnetCidrBlockRequest : public EC2Request
  {
  public:
    AssociateSubnetCidrBlockRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The ID of your subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of your subnet.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of your subnet.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

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
    inline AssociateSubnetCidrBlockRequest& WithSubnetId(Aws::String&& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of your subnet.</p>
     */
    inline AssociateSubnetCidrBlockRequest& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}

    /**
     * <p>The IPv6 CIDR block for your subnet. The subnet must have a /64 prefix
     * length.</p>
     */
    inline const Aws::String& GetIpv6CidrBlock() const{ return m_ipv6CidrBlock; }

    /**
     * <p>The IPv6 CIDR block for your subnet. The subnet must have a /64 prefix
     * length.</p>
     */
    inline void SetIpv6CidrBlock(const Aws::String& value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock = value; }

    /**
     * <p>The IPv6 CIDR block for your subnet. The subnet must have a /64 prefix
     * length.</p>
     */
    inline void SetIpv6CidrBlock(Aws::String&& value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock = value; }

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
    inline AssociateSubnetCidrBlockRequest& WithIpv6CidrBlock(Aws::String&& value) { SetIpv6CidrBlock(value); return *this;}

    /**
     * <p>The IPv6 CIDR block for your subnet. The subnet must have a /64 prefix
     * length.</p>
     */
    inline AssociateSubnetCidrBlockRequest& WithIpv6CidrBlock(const char* value) { SetIpv6CidrBlock(value); return *this;}

  private:
    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;
    Aws::String m_ipv6CidrBlock;
    bool m_ipv6CidrBlockHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
