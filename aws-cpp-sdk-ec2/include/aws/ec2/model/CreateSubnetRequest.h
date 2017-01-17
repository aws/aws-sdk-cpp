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
   * <p>Contains the parameters for CreateSubnet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateSubnetRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API CreateSubnetRequest : public EC2Request
  {
  public:
    CreateSubnetRequest();
    Aws::String SerializePayload() const override;

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
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CreateSubnetRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline CreateSubnetRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline CreateSubnetRequest& WithVpcId(Aws::String&& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline CreateSubnetRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}

    /**
     * <p>The IPv4 network range for the subnet, in CIDR notation. For example,
     * <code>10.0.0.0/24</code>.</p>
     */
    inline const Aws::String& GetCidrBlock() const{ return m_cidrBlock; }

    /**
     * <p>The IPv4 network range for the subnet, in CIDR notation. For example,
     * <code>10.0.0.0/24</code>.</p>
     */
    inline void SetCidrBlock(const Aws::String& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = value; }

    /**
     * <p>The IPv4 network range for the subnet, in CIDR notation. For example,
     * <code>10.0.0.0/24</code>.</p>
     */
    inline void SetCidrBlock(Aws::String&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = value; }

    /**
     * <p>The IPv4 network range for the subnet, in CIDR notation. For example,
     * <code>10.0.0.0/24</code>.</p>
     */
    inline void SetCidrBlock(const char* value) { m_cidrBlockHasBeenSet = true; m_cidrBlock.assign(value); }

    /**
     * <p>The IPv4 network range for the subnet, in CIDR notation. For example,
     * <code>10.0.0.0/24</code>.</p>
     */
    inline CreateSubnetRequest& WithCidrBlock(const Aws::String& value) { SetCidrBlock(value); return *this;}

    /**
     * <p>The IPv4 network range for the subnet, in CIDR notation. For example,
     * <code>10.0.0.0/24</code>.</p>
     */
    inline CreateSubnetRequest& WithCidrBlock(Aws::String&& value) { SetCidrBlock(value); return *this;}

    /**
     * <p>The IPv4 network range for the subnet, in CIDR notation. For example,
     * <code>10.0.0.0/24</code>.</p>
     */
    inline CreateSubnetRequest& WithCidrBlock(const char* value) { SetCidrBlock(value); return *this;}

    /**
     * <p>The IPv6 network range for the subnet, in CIDR notation. The subnet size must
     * use a /64 prefix length.</p>
     */
    inline const Aws::String& GetIpv6CidrBlock() const{ return m_ipv6CidrBlock; }

    /**
     * <p>The IPv6 network range for the subnet, in CIDR notation. The subnet size must
     * use a /64 prefix length.</p>
     */
    inline void SetIpv6CidrBlock(const Aws::String& value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock = value; }

    /**
     * <p>The IPv6 network range for the subnet, in CIDR notation. The subnet size must
     * use a /64 prefix length.</p>
     */
    inline void SetIpv6CidrBlock(Aws::String&& value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock = value; }

    /**
     * <p>The IPv6 network range for the subnet, in CIDR notation. The subnet size must
     * use a /64 prefix length.</p>
     */
    inline void SetIpv6CidrBlock(const char* value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock.assign(value); }

    /**
     * <p>The IPv6 network range for the subnet, in CIDR notation. The subnet size must
     * use a /64 prefix length.</p>
     */
    inline CreateSubnetRequest& WithIpv6CidrBlock(const Aws::String& value) { SetIpv6CidrBlock(value); return *this;}

    /**
     * <p>The IPv6 network range for the subnet, in CIDR notation. The subnet size must
     * use a /64 prefix length.</p>
     */
    inline CreateSubnetRequest& WithIpv6CidrBlock(Aws::String&& value) { SetIpv6CidrBlock(value); return *this;}

    /**
     * <p>The IPv6 network range for the subnet, in CIDR notation. The subnet size must
     * use a /64 prefix length.</p>
     */
    inline CreateSubnetRequest& WithIpv6CidrBlock(const char* value) { SetIpv6CidrBlock(value); return *this;}

    /**
     * <p>The Availability Zone for the subnet.</p> <p>Default: AWS selects one for
     * you. If you create more than one subnet in your VPC, we may not necessarily
     * select a different zone for each subnet.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone for the subnet.</p> <p>Default: AWS selects one for
     * you. If you create more than one subnet in your VPC, we may not necessarily
     * select a different zone for each subnet.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone for the subnet.</p> <p>Default: AWS selects one for
     * you. If you create more than one subnet in your VPC, we may not necessarily
     * select a different zone for each subnet.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone for the subnet.</p> <p>Default: AWS selects one for
     * you. If you create more than one subnet in your VPC, we may not necessarily
     * select a different zone for each subnet.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone for the subnet.</p> <p>Default: AWS selects one for
     * you. If you create more than one subnet in your VPC, we may not necessarily
     * select a different zone for each subnet.</p>
     */
    inline CreateSubnetRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone for the subnet.</p> <p>Default: AWS selects one for
     * you. If you create more than one subnet in your VPC, we may not necessarily
     * select a different zone for each subnet.</p>
     */
    inline CreateSubnetRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone for the subnet.</p> <p>Default: AWS selects one for
     * you. If you create more than one subnet in your VPC, we may not necessarily
     * select a different zone for each subnet.</p>
     */
    inline CreateSubnetRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet;
    Aws::String m_ipv6CidrBlock;
    bool m_ipv6CidrBlockHasBeenSet;
    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
