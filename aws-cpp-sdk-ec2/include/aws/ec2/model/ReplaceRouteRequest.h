/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for ReplaceRoute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReplaceRouteRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ReplaceRouteRequest : public EC2Request
  {
  public:
    ReplaceRouteRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReplaceRoute"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The IPv4 CIDR address block used for the destination match. The value you
     * provide must match the CIDR of an existing route in the table.</p>
     */
    inline const Aws::String& GetDestinationCidrBlock() const{ return m_destinationCidrBlock; }

    /**
     * <p>The IPv4 CIDR address block used for the destination match. The value you
     * provide must match the CIDR of an existing route in the table.</p>
     */
    inline void SetDestinationCidrBlock(const Aws::String& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = value; }

    /**
     * <p>The IPv4 CIDR address block used for the destination match. The value you
     * provide must match the CIDR of an existing route in the table.</p>
     */
    inline void SetDestinationCidrBlock(Aws::String&& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = std::move(value); }

    /**
     * <p>The IPv4 CIDR address block used for the destination match. The value you
     * provide must match the CIDR of an existing route in the table.</p>
     */
    inline void SetDestinationCidrBlock(const char* value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock.assign(value); }

    /**
     * <p>The IPv4 CIDR address block used for the destination match. The value you
     * provide must match the CIDR of an existing route in the table.</p>
     */
    inline ReplaceRouteRequest& WithDestinationCidrBlock(const Aws::String& value) { SetDestinationCidrBlock(value); return *this;}

    /**
     * <p>The IPv4 CIDR address block used for the destination match. The value you
     * provide must match the CIDR of an existing route in the table.</p>
     */
    inline ReplaceRouteRequest& WithDestinationCidrBlock(Aws::String&& value) { SetDestinationCidrBlock(std::move(value)); return *this;}

    /**
     * <p>The IPv4 CIDR address block used for the destination match. The value you
     * provide must match the CIDR of an existing route in the table.</p>
     */
    inline ReplaceRouteRequest& WithDestinationCidrBlock(const char* value) { SetDestinationCidrBlock(value); return *this;}


    /**
     * <p>The IPv6 CIDR address block used for the destination match. The value you
     * provide must match the CIDR of an existing route in the table.</p>
     */
    inline const Aws::String& GetDestinationIpv6CidrBlock() const{ return m_destinationIpv6CidrBlock; }

    /**
     * <p>The IPv6 CIDR address block used for the destination match. The value you
     * provide must match the CIDR of an existing route in the table.</p>
     */
    inline void SetDestinationIpv6CidrBlock(const Aws::String& value) { m_destinationIpv6CidrBlockHasBeenSet = true; m_destinationIpv6CidrBlock = value; }

    /**
     * <p>The IPv6 CIDR address block used for the destination match. The value you
     * provide must match the CIDR of an existing route in the table.</p>
     */
    inline void SetDestinationIpv6CidrBlock(Aws::String&& value) { m_destinationIpv6CidrBlockHasBeenSet = true; m_destinationIpv6CidrBlock = std::move(value); }

    /**
     * <p>The IPv6 CIDR address block used for the destination match. The value you
     * provide must match the CIDR of an existing route in the table.</p>
     */
    inline void SetDestinationIpv6CidrBlock(const char* value) { m_destinationIpv6CidrBlockHasBeenSet = true; m_destinationIpv6CidrBlock.assign(value); }

    /**
     * <p>The IPv6 CIDR address block used for the destination match. The value you
     * provide must match the CIDR of an existing route in the table.</p>
     */
    inline ReplaceRouteRequest& WithDestinationIpv6CidrBlock(const Aws::String& value) { SetDestinationIpv6CidrBlock(value); return *this;}

    /**
     * <p>The IPv6 CIDR address block used for the destination match. The value you
     * provide must match the CIDR of an existing route in the table.</p>
     */
    inline ReplaceRouteRequest& WithDestinationIpv6CidrBlock(Aws::String&& value) { SetDestinationIpv6CidrBlock(std::move(value)); return *this;}

    /**
     * <p>The IPv6 CIDR address block used for the destination match. The value you
     * provide must match the CIDR of an existing route in the table.</p>
     */
    inline ReplaceRouteRequest& WithDestinationIpv6CidrBlock(const char* value) { SetDestinationIpv6CidrBlock(value); return *this;}


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
    inline ReplaceRouteRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


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
    inline void SetEgressOnlyInternetGatewayId(Aws::String&& value) { m_egressOnlyInternetGatewayIdHasBeenSet = true; m_egressOnlyInternetGatewayId = std::move(value); }

    /**
     * <p>[IPv6 traffic only] The ID of an egress-only Internet gateway.</p>
     */
    inline void SetEgressOnlyInternetGatewayId(const char* value) { m_egressOnlyInternetGatewayIdHasBeenSet = true; m_egressOnlyInternetGatewayId.assign(value); }

    /**
     * <p>[IPv6 traffic only] The ID of an egress-only Internet gateway.</p>
     */
    inline ReplaceRouteRequest& WithEgressOnlyInternetGatewayId(const Aws::String& value) { SetEgressOnlyInternetGatewayId(value); return *this;}

    /**
     * <p>[IPv6 traffic only] The ID of an egress-only Internet gateway.</p>
     */
    inline ReplaceRouteRequest& WithEgressOnlyInternetGatewayId(Aws::String&& value) { SetEgressOnlyInternetGatewayId(std::move(value)); return *this;}

    /**
     * <p>[IPv6 traffic only] The ID of an egress-only Internet gateway.</p>
     */
    inline ReplaceRouteRequest& WithEgressOnlyInternetGatewayId(const char* value) { SetEgressOnlyInternetGatewayId(value); return *this;}


    /**
     * <p>The ID of an Internet gateway or virtual private gateway.</p>
     */
    inline const Aws::String& GetGatewayId() const{ return m_gatewayId; }

    /**
     * <p>The ID of an Internet gateway or virtual private gateway.</p>
     */
    inline void SetGatewayId(const Aws::String& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = value; }

    /**
     * <p>The ID of an Internet gateway or virtual private gateway.</p>
     */
    inline void SetGatewayId(Aws::String&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::move(value); }

    /**
     * <p>The ID of an Internet gateway or virtual private gateway.</p>
     */
    inline void SetGatewayId(const char* value) { m_gatewayIdHasBeenSet = true; m_gatewayId.assign(value); }

    /**
     * <p>The ID of an Internet gateway or virtual private gateway.</p>
     */
    inline ReplaceRouteRequest& WithGatewayId(const Aws::String& value) { SetGatewayId(value); return *this;}

    /**
     * <p>The ID of an Internet gateway or virtual private gateway.</p>
     */
    inline ReplaceRouteRequest& WithGatewayId(Aws::String&& value) { SetGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of an Internet gateway or virtual private gateway.</p>
     */
    inline ReplaceRouteRequest& WithGatewayId(const char* value) { SetGatewayId(value); return *this;}


    /**
     * <p>The ID of a NAT instance in your VPC.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of a NAT instance in your VPC.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of a NAT instance in your VPC.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of a NAT instance in your VPC.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of a NAT instance in your VPC.</p>
     */
    inline ReplaceRouteRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of a NAT instance in your VPC.</p>
     */
    inline ReplaceRouteRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of a NAT instance in your VPC.</p>
     */
    inline ReplaceRouteRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


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
    inline void SetNatGatewayId(Aws::String&& value) { m_natGatewayIdHasBeenSet = true; m_natGatewayId = std::move(value); }

    /**
     * <p>[IPv4 traffic only] The ID of a NAT gateway.</p>
     */
    inline void SetNatGatewayId(const char* value) { m_natGatewayIdHasBeenSet = true; m_natGatewayId.assign(value); }

    /**
     * <p>[IPv4 traffic only] The ID of a NAT gateway.</p>
     */
    inline ReplaceRouteRequest& WithNatGatewayId(const Aws::String& value) { SetNatGatewayId(value); return *this;}

    /**
     * <p>[IPv4 traffic only] The ID of a NAT gateway.</p>
     */
    inline ReplaceRouteRequest& WithNatGatewayId(Aws::String&& value) { SetNatGatewayId(std::move(value)); return *this;}

    /**
     * <p>[IPv4 traffic only] The ID of a NAT gateway.</p>
     */
    inline ReplaceRouteRequest& WithNatGatewayId(const char* value) { SetNatGatewayId(value); return *this;}


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
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }

    /**
     * <p>The ID of a network interface.</p>
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }

    /**
     * <p>The ID of a network interface.</p>
     */
    inline ReplaceRouteRequest& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of a network interface.</p>
     */
    inline ReplaceRouteRequest& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of a network interface.</p>
     */
    inline ReplaceRouteRequest& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    /**
     * <p>The ID of the route table.</p>
     */
    inline const Aws::String& GetRouteTableId() const{ return m_routeTableId; }

    /**
     * <p>The ID of the route table.</p>
     */
    inline void SetRouteTableId(const Aws::String& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = value; }

    /**
     * <p>The ID of the route table.</p>
     */
    inline void SetRouteTableId(Aws::String&& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = std::move(value); }

    /**
     * <p>The ID of the route table.</p>
     */
    inline void SetRouteTableId(const char* value) { m_routeTableIdHasBeenSet = true; m_routeTableId.assign(value); }

    /**
     * <p>The ID of the route table.</p>
     */
    inline ReplaceRouteRequest& WithRouteTableId(const Aws::String& value) { SetRouteTableId(value); return *this;}

    /**
     * <p>The ID of the route table.</p>
     */
    inline ReplaceRouteRequest& WithRouteTableId(Aws::String&& value) { SetRouteTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the route table.</p>
     */
    inline ReplaceRouteRequest& WithRouteTableId(const char* value) { SetRouteTableId(value); return *this;}


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
    inline void SetVpcPeeringConnectionId(Aws::String&& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = std::move(value); }

    /**
     * <p>The ID of a VPC peering connection.</p>
     */
    inline void SetVpcPeeringConnectionId(const char* value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId.assign(value); }

    /**
     * <p>The ID of a VPC peering connection.</p>
     */
    inline ReplaceRouteRequest& WithVpcPeeringConnectionId(const Aws::String& value) { SetVpcPeeringConnectionId(value); return *this;}

    /**
     * <p>The ID of a VPC peering connection.</p>
     */
    inline ReplaceRouteRequest& WithVpcPeeringConnectionId(Aws::String&& value) { SetVpcPeeringConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of a VPC peering connection.</p>
     */
    inline ReplaceRouteRequest& WithVpcPeeringConnectionId(const char* value) { SetVpcPeeringConnectionId(value); return *this;}

  private:

    Aws::String m_destinationCidrBlock;
    bool m_destinationCidrBlockHasBeenSet;

    Aws::String m_destinationIpv6CidrBlock;
    bool m_destinationIpv6CidrBlockHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::String m_egressOnlyInternetGatewayId;
    bool m_egressOnlyInternetGatewayIdHasBeenSet;

    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_natGatewayId;
    bool m_natGatewayIdHasBeenSet;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet;

    Aws::String m_routeTableId;
    bool m_routeTableIdHasBeenSet;

    Aws::String m_vpcPeeringConnectionId;
    bool m_vpcPeeringConnectionIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
