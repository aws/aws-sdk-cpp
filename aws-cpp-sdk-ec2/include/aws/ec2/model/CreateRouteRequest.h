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
   * <p>Contains the parameters for CreateRoute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateRouteRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API CreateRouteRequest : public EC2Request
  {
  public:
    CreateRouteRequest();
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
    inline CreateRouteRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>The ID of the route table for the route.</p>
     */
    inline const Aws::String& GetRouteTableId() const{ return m_routeTableId; }

    /**
     * <p>The ID of the route table for the route.</p>
     */
    inline void SetRouteTableId(const Aws::String& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = value; }

    /**
     * <p>The ID of the route table for the route.</p>
     */
    inline void SetRouteTableId(Aws::String&& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = value; }

    /**
     * <p>The ID of the route table for the route.</p>
     */
    inline void SetRouteTableId(const char* value) { m_routeTableIdHasBeenSet = true; m_routeTableId.assign(value); }

    /**
     * <p>The ID of the route table for the route.</p>
     */
    inline CreateRouteRequest& WithRouteTableId(const Aws::String& value) { SetRouteTableId(value); return *this;}

    /**
     * <p>The ID of the route table for the route.</p>
     */
    inline CreateRouteRequest& WithRouteTableId(Aws::String&& value) { SetRouteTableId(value); return *this;}

    /**
     * <p>The ID of the route table for the route.</p>
     */
    inline CreateRouteRequest& WithRouteTableId(const char* value) { SetRouteTableId(value); return *this;}

    /**
     * <p>The IPv4 CIDR address block used for the destination match. Routing decisions
     * are based on the most specific match.</p>
     */
    inline const Aws::String& GetDestinationCidrBlock() const{ return m_destinationCidrBlock; }

    /**
     * <p>The IPv4 CIDR address block used for the destination match. Routing decisions
     * are based on the most specific match.</p>
     */
    inline void SetDestinationCidrBlock(const Aws::String& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = value; }

    /**
     * <p>The IPv4 CIDR address block used for the destination match. Routing decisions
     * are based on the most specific match.</p>
     */
    inline void SetDestinationCidrBlock(Aws::String&& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = value; }

    /**
     * <p>The IPv4 CIDR address block used for the destination match. Routing decisions
     * are based on the most specific match.</p>
     */
    inline void SetDestinationCidrBlock(const char* value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock.assign(value); }

    /**
     * <p>The IPv4 CIDR address block used for the destination match. Routing decisions
     * are based on the most specific match.</p>
     */
    inline CreateRouteRequest& WithDestinationCidrBlock(const Aws::String& value) { SetDestinationCidrBlock(value); return *this;}

    /**
     * <p>The IPv4 CIDR address block used for the destination match. Routing decisions
     * are based on the most specific match.</p>
     */
    inline CreateRouteRequest& WithDestinationCidrBlock(Aws::String&& value) { SetDestinationCidrBlock(value); return *this;}

    /**
     * <p>The IPv4 CIDR address block used for the destination match. Routing decisions
     * are based on the most specific match.</p>
     */
    inline CreateRouteRequest& WithDestinationCidrBlock(const char* value) { SetDestinationCidrBlock(value); return *this;}

    /**
     * <p>The ID of an Internet gateway or virtual private gateway attached to your
     * VPC.</p>
     */
    inline const Aws::String& GetGatewayId() const{ return m_gatewayId; }

    /**
     * <p>The ID of an Internet gateway or virtual private gateway attached to your
     * VPC.</p>
     */
    inline void SetGatewayId(const Aws::String& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = value; }

    /**
     * <p>The ID of an Internet gateway or virtual private gateway attached to your
     * VPC.</p>
     */
    inline void SetGatewayId(Aws::String&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = value; }

    /**
     * <p>The ID of an Internet gateway or virtual private gateway attached to your
     * VPC.</p>
     */
    inline void SetGatewayId(const char* value) { m_gatewayIdHasBeenSet = true; m_gatewayId.assign(value); }

    /**
     * <p>The ID of an Internet gateway or virtual private gateway attached to your
     * VPC.</p>
     */
    inline CreateRouteRequest& WithGatewayId(const Aws::String& value) { SetGatewayId(value); return *this;}

    /**
     * <p>The ID of an Internet gateway or virtual private gateway attached to your
     * VPC.</p>
     */
    inline CreateRouteRequest& WithGatewayId(Aws::String&& value) { SetGatewayId(value); return *this;}

    /**
     * <p>The ID of an Internet gateway or virtual private gateway attached to your
     * VPC.</p>
     */
    inline CreateRouteRequest& WithGatewayId(const char* value) { SetGatewayId(value); return *this;}

    /**
     * <p>The IPv6 CIDR block used for the destination match. Routing decisions are
     * based on the most specific match.</p>
     */
    inline const Aws::String& GetDestinationIpv6CidrBlock() const{ return m_destinationIpv6CidrBlock; }

    /**
     * <p>The IPv6 CIDR block used for the destination match. Routing decisions are
     * based on the most specific match.</p>
     */
    inline void SetDestinationIpv6CidrBlock(const Aws::String& value) { m_destinationIpv6CidrBlockHasBeenSet = true; m_destinationIpv6CidrBlock = value; }

    /**
     * <p>The IPv6 CIDR block used for the destination match. Routing decisions are
     * based on the most specific match.</p>
     */
    inline void SetDestinationIpv6CidrBlock(Aws::String&& value) { m_destinationIpv6CidrBlockHasBeenSet = true; m_destinationIpv6CidrBlock = value; }

    /**
     * <p>The IPv6 CIDR block used for the destination match. Routing decisions are
     * based on the most specific match.</p>
     */
    inline void SetDestinationIpv6CidrBlock(const char* value) { m_destinationIpv6CidrBlockHasBeenSet = true; m_destinationIpv6CidrBlock.assign(value); }

    /**
     * <p>The IPv6 CIDR block used for the destination match. Routing decisions are
     * based on the most specific match.</p>
     */
    inline CreateRouteRequest& WithDestinationIpv6CidrBlock(const Aws::String& value) { SetDestinationIpv6CidrBlock(value); return *this;}

    /**
     * <p>The IPv6 CIDR block used for the destination match. Routing decisions are
     * based on the most specific match.</p>
     */
    inline CreateRouteRequest& WithDestinationIpv6CidrBlock(Aws::String&& value) { SetDestinationIpv6CidrBlock(value); return *this;}

    /**
     * <p>The IPv6 CIDR block used for the destination match. Routing decisions are
     * based on the most specific match.</p>
     */
    inline CreateRouteRequest& WithDestinationIpv6CidrBlock(const char* value) { SetDestinationIpv6CidrBlock(value); return *this;}

    /**
     * <p>[IPv6 traffic only] The ID of an egress-only Internet gateway.</p>
     */
    inline const Aws::String& GetEgressOnlyInternetGatewayId() const{ return m_egressOnlyInternetGatewayId; }

    /**
     * <p>[IPv6 traffic only] The ID of an egress-only Internet gateway.</p>
     */
    inline void SetEgressOnlyInternetGatewayId(const Aws::String& value) { m_egressOnlyInternetGatewayIdHasBeenSet = true; m_egressOnlyInternetGatewayId = value; }

    /**
     * <p>[IPv6 traffic only] The ID of an egress-only Internet gateway.</p>
     */
    inline void SetEgressOnlyInternetGatewayId(Aws::String&& value) { m_egressOnlyInternetGatewayIdHasBeenSet = true; m_egressOnlyInternetGatewayId = value; }

    /**
     * <p>[IPv6 traffic only] The ID of an egress-only Internet gateway.</p>
     */
    inline void SetEgressOnlyInternetGatewayId(const char* value) { m_egressOnlyInternetGatewayIdHasBeenSet = true; m_egressOnlyInternetGatewayId.assign(value); }

    /**
     * <p>[IPv6 traffic only] The ID of an egress-only Internet gateway.</p>
     */
    inline CreateRouteRequest& WithEgressOnlyInternetGatewayId(const Aws::String& value) { SetEgressOnlyInternetGatewayId(value); return *this;}

    /**
     * <p>[IPv6 traffic only] The ID of an egress-only Internet gateway.</p>
     */
    inline CreateRouteRequest& WithEgressOnlyInternetGatewayId(Aws::String&& value) { SetEgressOnlyInternetGatewayId(value); return *this;}

    /**
     * <p>[IPv6 traffic only] The ID of an egress-only Internet gateway.</p>
     */
    inline CreateRouteRequest& WithEgressOnlyInternetGatewayId(const char* value) { SetEgressOnlyInternetGatewayId(value); return *this;}

    /**
     * <p>The ID of a NAT instance in your VPC. The operation fails if you specify an
     * instance ID unless exactly one network interface is attached.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of a NAT instance in your VPC. The operation fails if you specify an
     * instance ID unless exactly one network interface is attached.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of a NAT instance in your VPC. The operation fails if you specify an
     * instance ID unless exactly one network interface is attached.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of a NAT instance in your VPC. The operation fails if you specify an
     * instance ID unless exactly one network interface is attached.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of a NAT instance in your VPC. The operation fails if you specify an
     * instance ID unless exactly one network interface is attached.</p>
     */
    inline CreateRouteRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of a NAT instance in your VPC. The operation fails if you specify an
     * instance ID unless exactly one network interface is attached.</p>
     */
    inline CreateRouteRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of a NAT instance in your VPC. The operation fails if you specify an
     * instance ID unless exactly one network interface is attached.</p>
     */
    inline CreateRouteRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of a network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * <p>The ID of a network interface.</p>
     */
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    /**
     * <p>The ID of a network interface.</p>
     */
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    /**
     * <p>The ID of a network interface.</p>
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }

    /**
     * <p>The ID of a network interface.</p>
     */
    inline CreateRouteRequest& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of a network interface.</p>
     */
    inline CreateRouteRequest& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of a network interface.</p>
     */
    inline CreateRouteRequest& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of a VPC peering connection.</p>
     */
    inline const Aws::String& GetVpcPeeringConnectionId() const{ return m_vpcPeeringConnectionId; }

    /**
     * <p>The ID of a VPC peering connection.</p>
     */
    inline void SetVpcPeeringConnectionId(const Aws::String& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = value; }

    /**
     * <p>The ID of a VPC peering connection.</p>
     */
    inline void SetVpcPeeringConnectionId(Aws::String&& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = value; }

    /**
     * <p>The ID of a VPC peering connection.</p>
     */
    inline void SetVpcPeeringConnectionId(const char* value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId.assign(value); }

    /**
     * <p>The ID of a VPC peering connection.</p>
     */
    inline CreateRouteRequest& WithVpcPeeringConnectionId(const Aws::String& value) { SetVpcPeeringConnectionId(value); return *this;}

    /**
     * <p>The ID of a VPC peering connection.</p>
     */
    inline CreateRouteRequest& WithVpcPeeringConnectionId(Aws::String&& value) { SetVpcPeeringConnectionId(value); return *this;}

    /**
     * <p>The ID of a VPC peering connection.</p>
     */
    inline CreateRouteRequest& WithVpcPeeringConnectionId(const char* value) { SetVpcPeeringConnectionId(value); return *this;}

    /**
     * <p>[IPv4 traffic only] The ID of a NAT gateway.</p>
     */
    inline const Aws::String& GetNatGatewayId() const{ return m_natGatewayId; }

    /**
     * <p>[IPv4 traffic only] The ID of a NAT gateway.</p>
     */
    inline void SetNatGatewayId(const Aws::String& value) { m_natGatewayIdHasBeenSet = true; m_natGatewayId = value; }

    /**
     * <p>[IPv4 traffic only] The ID of a NAT gateway.</p>
     */
    inline void SetNatGatewayId(Aws::String&& value) { m_natGatewayIdHasBeenSet = true; m_natGatewayId = value; }

    /**
     * <p>[IPv4 traffic only] The ID of a NAT gateway.</p>
     */
    inline void SetNatGatewayId(const char* value) { m_natGatewayIdHasBeenSet = true; m_natGatewayId.assign(value); }

    /**
     * <p>[IPv4 traffic only] The ID of a NAT gateway.</p>
     */
    inline CreateRouteRequest& WithNatGatewayId(const Aws::String& value) { SetNatGatewayId(value); return *this;}

    /**
     * <p>[IPv4 traffic only] The ID of a NAT gateway.</p>
     */
    inline CreateRouteRequest& WithNatGatewayId(Aws::String&& value) { SetNatGatewayId(value); return *this;}

    /**
     * <p>[IPv4 traffic only] The ID of a NAT gateway.</p>
     */
    inline CreateRouteRequest& WithNatGatewayId(const char* value) { SetNatGatewayId(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_routeTableId;
    bool m_routeTableIdHasBeenSet;
    Aws::String m_destinationCidrBlock;
    bool m_destinationCidrBlockHasBeenSet;
    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet;
    Aws::String m_destinationIpv6CidrBlock;
    bool m_destinationIpv6CidrBlockHasBeenSet;
    Aws::String m_egressOnlyInternetGatewayId;
    bool m_egressOnlyInternetGatewayIdHasBeenSet;
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet;
    Aws::String m_vpcPeeringConnectionId;
    bool m_vpcPeeringConnectionIdHasBeenSet;
    Aws::String m_natGatewayId;
    bool m_natGatewayIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
