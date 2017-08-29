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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/RouteOrigin.h>
#include <aws/ec2/model/RouteState.h>
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
   * <p>Describes a route in a route table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Route">AWS API
   * Reference</a></p>
   */
  class AWS_EC2_API Route
  {
  public:
    Route();
    Route(const Aws::Utils::Xml::XmlNode& xmlNode);
    Route& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The IPv4 CIDR block used for the destination match.</p>
     */
    inline const Aws::String& GetDestinationCidrBlock() const{ return m_destinationCidrBlock; }

    /**
     * <p>The IPv4 CIDR block used for the destination match.</p>
     */
    inline void SetDestinationCidrBlock(const Aws::String& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = value; }

    /**
     * <p>The IPv4 CIDR block used for the destination match.</p>
     */
    inline void SetDestinationCidrBlock(Aws::String&& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = std::move(value); }

    /**
     * <p>The IPv4 CIDR block used for the destination match.</p>
     */
    inline void SetDestinationCidrBlock(const char* value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock.assign(value); }

    /**
     * <p>The IPv4 CIDR block used for the destination match.</p>
     */
    inline Route& WithDestinationCidrBlock(const Aws::String& value) { SetDestinationCidrBlock(value); return *this;}

    /**
     * <p>The IPv4 CIDR block used for the destination match.</p>
     */
    inline Route& WithDestinationCidrBlock(Aws::String&& value) { SetDestinationCidrBlock(std::move(value)); return *this;}

    /**
     * <p>The IPv4 CIDR block used for the destination match.</p>
     */
    inline Route& WithDestinationCidrBlock(const char* value) { SetDestinationCidrBlock(value); return *this;}


    /**
     * <p>The IPv6 CIDR block used for the destination match.</p>
     */
    inline const Aws::String& GetDestinationIpv6CidrBlock() const{ return m_destinationIpv6CidrBlock; }

    /**
     * <p>The IPv6 CIDR block used for the destination match.</p>
     */
    inline void SetDestinationIpv6CidrBlock(const Aws::String& value) { m_destinationIpv6CidrBlockHasBeenSet = true; m_destinationIpv6CidrBlock = value; }

    /**
     * <p>The IPv6 CIDR block used for the destination match.</p>
     */
    inline void SetDestinationIpv6CidrBlock(Aws::String&& value) { m_destinationIpv6CidrBlockHasBeenSet = true; m_destinationIpv6CidrBlock = std::move(value); }

    /**
     * <p>The IPv6 CIDR block used for the destination match.</p>
     */
    inline void SetDestinationIpv6CidrBlock(const char* value) { m_destinationIpv6CidrBlockHasBeenSet = true; m_destinationIpv6CidrBlock.assign(value); }

    /**
     * <p>The IPv6 CIDR block used for the destination match.</p>
     */
    inline Route& WithDestinationIpv6CidrBlock(const Aws::String& value) { SetDestinationIpv6CidrBlock(value); return *this;}

    /**
     * <p>The IPv6 CIDR block used for the destination match.</p>
     */
    inline Route& WithDestinationIpv6CidrBlock(Aws::String&& value) { SetDestinationIpv6CidrBlock(std::move(value)); return *this;}

    /**
     * <p>The IPv6 CIDR block used for the destination match.</p>
     */
    inline Route& WithDestinationIpv6CidrBlock(const char* value) { SetDestinationIpv6CidrBlock(value); return *this;}


    /**
     * <p>The prefix of the AWS service.</p>
     */
    inline const Aws::String& GetDestinationPrefixListId() const{ return m_destinationPrefixListId; }

    /**
     * <p>The prefix of the AWS service.</p>
     */
    inline void SetDestinationPrefixListId(const Aws::String& value) { m_destinationPrefixListIdHasBeenSet = true; m_destinationPrefixListId = value; }

    /**
     * <p>The prefix of the AWS service.</p>
     */
    inline void SetDestinationPrefixListId(Aws::String&& value) { m_destinationPrefixListIdHasBeenSet = true; m_destinationPrefixListId = std::move(value); }

    /**
     * <p>The prefix of the AWS service.</p>
     */
    inline void SetDestinationPrefixListId(const char* value) { m_destinationPrefixListIdHasBeenSet = true; m_destinationPrefixListId.assign(value); }

    /**
     * <p>The prefix of the AWS service.</p>
     */
    inline Route& WithDestinationPrefixListId(const Aws::String& value) { SetDestinationPrefixListId(value); return *this;}

    /**
     * <p>The prefix of the AWS service.</p>
     */
    inline Route& WithDestinationPrefixListId(Aws::String&& value) { SetDestinationPrefixListId(std::move(value)); return *this;}

    /**
     * <p>The prefix of the AWS service.</p>
     */
    inline Route& WithDestinationPrefixListId(const char* value) { SetDestinationPrefixListId(value); return *this;}


    /**
     * <p>The ID of the egress-only Internet gateway.</p>
     */
    inline const Aws::String& GetEgressOnlyInternetGatewayId() const{ return m_egressOnlyInternetGatewayId; }

    /**
     * <p>The ID of the egress-only Internet gateway.</p>
     */
    inline void SetEgressOnlyInternetGatewayId(const Aws::String& value) { m_egressOnlyInternetGatewayIdHasBeenSet = true; m_egressOnlyInternetGatewayId = value; }

    /**
     * <p>The ID of the egress-only Internet gateway.</p>
     */
    inline void SetEgressOnlyInternetGatewayId(Aws::String&& value) { m_egressOnlyInternetGatewayIdHasBeenSet = true; m_egressOnlyInternetGatewayId = std::move(value); }

    /**
     * <p>The ID of the egress-only Internet gateway.</p>
     */
    inline void SetEgressOnlyInternetGatewayId(const char* value) { m_egressOnlyInternetGatewayIdHasBeenSet = true; m_egressOnlyInternetGatewayId.assign(value); }

    /**
     * <p>The ID of the egress-only Internet gateway.</p>
     */
    inline Route& WithEgressOnlyInternetGatewayId(const Aws::String& value) { SetEgressOnlyInternetGatewayId(value); return *this;}

    /**
     * <p>The ID of the egress-only Internet gateway.</p>
     */
    inline Route& WithEgressOnlyInternetGatewayId(Aws::String&& value) { SetEgressOnlyInternetGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the egress-only Internet gateway.</p>
     */
    inline Route& WithEgressOnlyInternetGatewayId(const char* value) { SetEgressOnlyInternetGatewayId(value); return *this;}


    /**
     * <p>The ID of a gateway attached to your VPC.</p>
     */
    inline const Aws::String& GetGatewayId() const{ return m_gatewayId; }

    /**
     * <p>The ID of a gateway attached to your VPC.</p>
     */
    inline void SetGatewayId(const Aws::String& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = value; }

    /**
     * <p>The ID of a gateway attached to your VPC.</p>
     */
    inline void SetGatewayId(Aws::String&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::move(value); }

    /**
     * <p>The ID of a gateway attached to your VPC.</p>
     */
    inline void SetGatewayId(const char* value) { m_gatewayIdHasBeenSet = true; m_gatewayId.assign(value); }

    /**
     * <p>The ID of a gateway attached to your VPC.</p>
     */
    inline Route& WithGatewayId(const Aws::String& value) { SetGatewayId(value); return *this;}

    /**
     * <p>The ID of a gateway attached to your VPC.</p>
     */
    inline Route& WithGatewayId(Aws::String&& value) { SetGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of a gateway attached to your VPC.</p>
     */
    inline Route& WithGatewayId(const char* value) { SetGatewayId(value); return *this;}


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
    inline Route& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of a NAT instance in your VPC.</p>
     */
    inline Route& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of a NAT instance in your VPC.</p>
     */
    inline Route& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The AWS account ID of the owner of the instance.</p>
     */
    inline const Aws::String& GetInstanceOwnerId() const{ return m_instanceOwnerId; }

    /**
     * <p>The AWS account ID of the owner of the instance.</p>
     */
    inline void SetInstanceOwnerId(const Aws::String& value) { m_instanceOwnerIdHasBeenSet = true; m_instanceOwnerId = value; }

    /**
     * <p>The AWS account ID of the owner of the instance.</p>
     */
    inline void SetInstanceOwnerId(Aws::String&& value) { m_instanceOwnerIdHasBeenSet = true; m_instanceOwnerId = std::move(value); }

    /**
     * <p>The AWS account ID of the owner of the instance.</p>
     */
    inline void SetInstanceOwnerId(const char* value) { m_instanceOwnerIdHasBeenSet = true; m_instanceOwnerId.assign(value); }

    /**
     * <p>The AWS account ID of the owner of the instance.</p>
     */
    inline Route& WithInstanceOwnerId(const Aws::String& value) { SetInstanceOwnerId(value); return *this;}

    /**
     * <p>The AWS account ID of the owner of the instance.</p>
     */
    inline Route& WithInstanceOwnerId(Aws::String&& value) { SetInstanceOwnerId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID of the owner of the instance.</p>
     */
    inline Route& WithInstanceOwnerId(const char* value) { SetInstanceOwnerId(value); return *this;}


    /**
     * <p>The ID of a NAT gateway.</p>
     */
    inline const Aws::String& GetNatGatewayId() const{ return m_natGatewayId; }

    /**
     * <p>The ID of a NAT gateway.</p>
     */
    inline void SetNatGatewayId(const Aws::String& value) { m_natGatewayIdHasBeenSet = true; m_natGatewayId = value; }

    /**
     * <p>The ID of a NAT gateway.</p>
     */
    inline void SetNatGatewayId(Aws::String&& value) { m_natGatewayIdHasBeenSet = true; m_natGatewayId = std::move(value); }

    /**
     * <p>The ID of a NAT gateway.</p>
     */
    inline void SetNatGatewayId(const char* value) { m_natGatewayIdHasBeenSet = true; m_natGatewayId.assign(value); }

    /**
     * <p>The ID of a NAT gateway.</p>
     */
    inline Route& WithNatGatewayId(const Aws::String& value) { SetNatGatewayId(value); return *this;}

    /**
     * <p>The ID of a NAT gateway.</p>
     */
    inline Route& WithNatGatewayId(Aws::String&& value) { SetNatGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of a NAT gateway.</p>
     */
    inline Route& WithNatGatewayId(const char* value) { SetNatGatewayId(value); return *this;}


    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline Route& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline Route& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline Route& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    /**
     * <p>Describes how the route was created.</p> <ul> <li> <p>
     * <code>CreateRouteTable</code> - The route was automatically created when the
     * route table was created.</p> </li> <li> <p> <code>CreateRoute</code> - The route
     * was manually added to the route table.</p> </li> <li> <p>
     * <code>EnableVgwRoutePropagation</code> - The route was propagated by route
     * propagation.</p> </li> </ul>
     */
    inline const RouteOrigin& GetOrigin() const{ return m_origin; }

    /**
     * <p>Describes how the route was created.</p> <ul> <li> <p>
     * <code>CreateRouteTable</code> - The route was automatically created when the
     * route table was created.</p> </li> <li> <p> <code>CreateRoute</code> - The route
     * was manually added to the route table.</p> </li> <li> <p>
     * <code>EnableVgwRoutePropagation</code> - The route was propagated by route
     * propagation.</p> </li> </ul>
     */
    inline void SetOrigin(const RouteOrigin& value) { m_originHasBeenSet = true; m_origin = value; }

    /**
     * <p>Describes how the route was created.</p> <ul> <li> <p>
     * <code>CreateRouteTable</code> - The route was automatically created when the
     * route table was created.</p> </li> <li> <p> <code>CreateRoute</code> - The route
     * was manually added to the route table.</p> </li> <li> <p>
     * <code>EnableVgwRoutePropagation</code> - The route was propagated by route
     * propagation.</p> </li> </ul>
     */
    inline void SetOrigin(RouteOrigin&& value) { m_originHasBeenSet = true; m_origin = std::move(value); }

    /**
     * <p>Describes how the route was created.</p> <ul> <li> <p>
     * <code>CreateRouteTable</code> - The route was automatically created when the
     * route table was created.</p> </li> <li> <p> <code>CreateRoute</code> - The route
     * was manually added to the route table.</p> </li> <li> <p>
     * <code>EnableVgwRoutePropagation</code> - The route was propagated by route
     * propagation.</p> </li> </ul>
     */
    inline Route& WithOrigin(const RouteOrigin& value) { SetOrigin(value); return *this;}

    /**
     * <p>Describes how the route was created.</p> <ul> <li> <p>
     * <code>CreateRouteTable</code> - The route was automatically created when the
     * route table was created.</p> </li> <li> <p> <code>CreateRoute</code> - The route
     * was manually added to the route table.</p> </li> <li> <p>
     * <code>EnableVgwRoutePropagation</code> - The route was propagated by route
     * propagation.</p> </li> </ul>
     */
    inline Route& WithOrigin(RouteOrigin&& value) { SetOrigin(std::move(value)); return *this;}


    /**
     * <p>The state of the route. The <code>blackhole</code> state indicates that the
     * route's target isn't available (for example, the specified gateway isn't
     * attached to the VPC, or the specified NAT instance has been terminated).</p>
     */
    inline const RouteState& GetState() const{ return m_state; }

    /**
     * <p>The state of the route. The <code>blackhole</code> state indicates that the
     * route's target isn't available (for example, the specified gateway isn't
     * attached to the VPC, or the specified NAT instance has been terminated).</p>
     */
    inline void SetState(const RouteState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the route. The <code>blackhole</code> state indicates that the
     * route's target isn't available (for example, the specified gateway isn't
     * attached to the VPC, or the specified NAT instance has been terminated).</p>
     */
    inline void SetState(RouteState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the route. The <code>blackhole</code> state indicates that the
     * route's target isn't available (for example, the specified gateway isn't
     * attached to the VPC, or the specified NAT instance has been terminated).</p>
     */
    inline Route& WithState(const RouteState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the route. The <code>blackhole</code> state indicates that the
     * route's target isn't available (for example, the specified gateway isn't
     * attached to the VPC, or the specified NAT instance has been terminated).</p>
     */
    inline Route& WithState(RouteState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The ID of the VPC peering connection.</p>
     */
    inline const Aws::String& GetVpcPeeringConnectionId() const{ return m_vpcPeeringConnectionId; }

    /**
     * <p>The ID of the VPC peering connection.</p>
     */
    inline void SetVpcPeeringConnectionId(const Aws::String& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = value; }

    /**
     * <p>The ID of the VPC peering connection.</p>
     */
    inline void SetVpcPeeringConnectionId(Aws::String&& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = std::move(value); }

    /**
     * <p>The ID of the VPC peering connection.</p>
     */
    inline void SetVpcPeeringConnectionId(const char* value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId.assign(value); }

    /**
     * <p>The ID of the VPC peering connection.</p>
     */
    inline Route& WithVpcPeeringConnectionId(const Aws::String& value) { SetVpcPeeringConnectionId(value); return *this;}

    /**
     * <p>The ID of the VPC peering connection.</p>
     */
    inline Route& WithVpcPeeringConnectionId(Aws::String&& value) { SetVpcPeeringConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC peering connection.</p>
     */
    inline Route& WithVpcPeeringConnectionId(const char* value) { SetVpcPeeringConnectionId(value); return *this;}

  private:

    Aws::String m_destinationCidrBlock;
    bool m_destinationCidrBlockHasBeenSet;

    Aws::String m_destinationIpv6CidrBlock;
    bool m_destinationIpv6CidrBlockHasBeenSet;

    Aws::String m_destinationPrefixListId;
    bool m_destinationPrefixListIdHasBeenSet;

    Aws::String m_egressOnlyInternetGatewayId;
    bool m_egressOnlyInternetGatewayIdHasBeenSet;

    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_instanceOwnerId;
    bool m_instanceOwnerIdHasBeenSet;

    Aws::String m_natGatewayId;
    bool m_natGatewayIdHasBeenSet;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet;

    RouteOrigin m_origin;
    bool m_originHasBeenSet;

    RouteState m_state;
    bool m_stateHasBeenSet;

    Aws::String m_vpcPeeringConnectionId;
    bool m_vpcPeeringConnectionIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
