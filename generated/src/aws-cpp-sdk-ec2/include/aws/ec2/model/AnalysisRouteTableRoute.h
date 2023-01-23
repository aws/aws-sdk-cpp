/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes a route table route.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AnalysisRouteTableRoute">AWS
   * API Reference</a></p>
   */
  class AnalysisRouteTableRoute
  {
  public:
    AWS_EC2_API AnalysisRouteTableRoute();
    AWS_EC2_API AnalysisRouteTableRoute(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AnalysisRouteTableRoute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The destination IPv4 address, in CIDR notation.</p>
     */
    inline const Aws::String& GetDestinationCidr() const{ return m_destinationCidr; }

    /**
     * <p>The destination IPv4 address, in CIDR notation.</p>
     */
    inline bool DestinationCidrHasBeenSet() const { return m_destinationCidrHasBeenSet; }

    /**
     * <p>The destination IPv4 address, in CIDR notation.</p>
     */
    inline void SetDestinationCidr(const Aws::String& value) { m_destinationCidrHasBeenSet = true; m_destinationCidr = value; }

    /**
     * <p>The destination IPv4 address, in CIDR notation.</p>
     */
    inline void SetDestinationCidr(Aws::String&& value) { m_destinationCidrHasBeenSet = true; m_destinationCidr = std::move(value); }

    /**
     * <p>The destination IPv4 address, in CIDR notation.</p>
     */
    inline void SetDestinationCidr(const char* value) { m_destinationCidrHasBeenSet = true; m_destinationCidr.assign(value); }

    /**
     * <p>The destination IPv4 address, in CIDR notation.</p>
     */
    inline AnalysisRouteTableRoute& WithDestinationCidr(const Aws::String& value) { SetDestinationCidr(value); return *this;}

    /**
     * <p>The destination IPv4 address, in CIDR notation.</p>
     */
    inline AnalysisRouteTableRoute& WithDestinationCidr(Aws::String&& value) { SetDestinationCidr(std::move(value)); return *this;}

    /**
     * <p>The destination IPv4 address, in CIDR notation.</p>
     */
    inline AnalysisRouteTableRoute& WithDestinationCidr(const char* value) { SetDestinationCidr(value); return *this;}


    /**
     * <p>The prefix of the Amazon Web Service.</p>
     */
    inline const Aws::String& GetDestinationPrefixListId() const{ return m_destinationPrefixListId; }

    /**
     * <p>The prefix of the Amazon Web Service.</p>
     */
    inline bool DestinationPrefixListIdHasBeenSet() const { return m_destinationPrefixListIdHasBeenSet; }

    /**
     * <p>The prefix of the Amazon Web Service.</p>
     */
    inline void SetDestinationPrefixListId(const Aws::String& value) { m_destinationPrefixListIdHasBeenSet = true; m_destinationPrefixListId = value; }

    /**
     * <p>The prefix of the Amazon Web Service.</p>
     */
    inline void SetDestinationPrefixListId(Aws::String&& value) { m_destinationPrefixListIdHasBeenSet = true; m_destinationPrefixListId = std::move(value); }

    /**
     * <p>The prefix of the Amazon Web Service.</p>
     */
    inline void SetDestinationPrefixListId(const char* value) { m_destinationPrefixListIdHasBeenSet = true; m_destinationPrefixListId.assign(value); }

    /**
     * <p>The prefix of the Amazon Web Service.</p>
     */
    inline AnalysisRouteTableRoute& WithDestinationPrefixListId(const Aws::String& value) { SetDestinationPrefixListId(value); return *this;}

    /**
     * <p>The prefix of the Amazon Web Service.</p>
     */
    inline AnalysisRouteTableRoute& WithDestinationPrefixListId(Aws::String&& value) { SetDestinationPrefixListId(std::move(value)); return *this;}

    /**
     * <p>The prefix of the Amazon Web Service.</p>
     */
    inline AnalysisRouteTableRoute& WithDestinationPrefixListId(const char* value) { SetDestinationPrefixListId(value); return *this;}


    /**
     * <p>The ID of an egress-only internet gateway.</p>
     */
    inline const Aws::String& GetEgressOnlyInternetGatewayId() const{ return m_egressOnlyInternetGatewayId; }

    /**
     * <p>The ID of an egress-only internet gateway.</p>
     */
    inline bool EgressOnlyInternetGatewayIdHasBeenSet() const { return m_egressOnlyInternetGatewayIdHasBeenSet; }

    /**
     * <p>The ID of an egress-only internet gateway.</p>
     */
    inline void SetEgressOnlyInternetGatewayId(const Aws::String& value) { m_egressOnlyInternetGatewayIdHasBeenSet = true; m_egressOnlyInternetGatewayId = value; }

    /**
     * <p>The ID of an egress-only internet gateway.</p>
     */
    inline void SetEgressOnlyInternetGatewayId(Aws::String&& value) { m_egressOnlyInternetGatewayIdHasBeenSet = true; m_egressOnlyInternetGatewayId = std::move(value); }

    /**
     * <p>The ID of an egress-only internet gateway.</p>
     */
    inline void SetEgressOnlyInternetGatewayId(const char* value) { m_egressOnlyInternetGatewayIdHasBeenSet = true; m_egressOnlyInternetGatewayId.assign(value); }

    /**
     * <p>The ID of an egress-only internet gateway.</p>
     */
    inline AnalysisRouteTableRoute& WithEgressOnlyInternetGatewayId(const Aws::String& value) { SetEgressOnlyInternetGatewayId(value); return *this;}

    /**
     * <p>The ID of an egress-only internet gateway.</p>
     */
    inline AnalysisRouteTableRoute& WithEgressOnlyInternetGatewayId(Aws::String&& value) { SetEgressOnlyInternetGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of an egress-only internet gateway.</p>
     */
    inline AnalysisRouteTableRoute& WithEgressOnlyInternetGatewayId(const char* value) { SetEgressOnlyInternetGatewayId(value); return *this;}


    /**
     * <p>The ID of the gateway, such as an internet gateway or virtual private
     * gateway.</p>
     */
    inline const Aws::String& GetGatewayId() const{ return m_gatewayId; }

    /**
     * <p>The ID of the gateway, such as an internet gateway or virtual private
     * gateway.</p>
     */
    inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }

    /**
     * <p>The ID of the gateway, such as an internet gateway or virtual private
     * gateway.</p>
     */
    inline void SetGatewayId(const Aws::String& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = value; }

    /**
     * <p>The ID of the gateway, such as an internet gateway or virtual private
     * gateway.</p>
     */
    inline void SetGatewayId(Aws::String&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::move(value); }

    /**
     * <p>The ID of the gateway, such as an internet gateway or virtual private
     * gateway.</p>
     */
    inline void SetGatewayId(const char* value) { m_gatewayIdHasBeenSet = true; m_gatewayId.assign(value); }

    /**
     * <p>The ID of the gateway, such as an internet gateway or virtual private
     * gateway.</p>
     */
    inline AnalysisRouteTableRoute& WithGatewayId(const Aws::String& value) { SetGatewayId(value); return *this;}

    /**
     * <p>The ID of the gateway, such as an internet gateway or virtual private
     * gateway.</p>
     */
    inline AnalysisRouteTableRoute& WithGatewayId(Aws::String&& value) { SetGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the gateway, such as an internet gateway or virtual private
     * gateway.</p>
     */
    inline AnalysisRouteTableRoute& WithGatewayId(const char* value) { SetGatewayId(value); return *this;}


    /**
     * <p>The ID of the instance, such as a NAT instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance, such as a NAT instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the instance, such as a NAT instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance, such as a NAT instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance, such as a NAT instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance, such as a NAT instance.</p>
     */
    inline AnalysisRouteTableRoute& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance, such as a NAT instance.</p>
     */
    inline AnalysisRouteTableRoute& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance, such as a NAT instance.</p>
     */
    inline AnalysisRouteTableRoute& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The ID of a NAT gateway.</p>
     */
    inline const Aws::String& GetNatGatewayId() const{ return m_natGatewayId; }

    /**
     * <p>The ID of a NAT gateway.</p>
     */
    inline bool NatGatewayIdHasBeenSet() const { return m_natGatewayIdHasBeenSet; }

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
    inline AnalysisRouteTableRoute& WithNatGatewayId(const Aws::String& value) { SetNatGatewayId(value); return *this;}

    /**
     * <p>The ID of a NAT gateway.</p>
     */
    inline AnalysisRouteTableRoute& WithNatGatewayId(Aws::String&& value) { SetNatGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of a NAT gateway.</p>
     */
    inline AnalysisRouteTableRoute& WithNatGatewayId(const char* value) { SetNatGatewayId(value); return *this;}


    /**
     * <p>The ID of a network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * <p>The ID of a network interface.</p>
     */
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }

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
    inline AnalysisRouteTableRoute& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of a network interface.</p>
     */
    inline AnalysisRouteTableRoute& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of a network interface.</p>
     */
    inline AnalysisRouteTableRoute& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    /**
     * <p>Describes how the route was created. The following are the possible
     * values:</p> <ul> <li> <p>CreateRouteTable - The route was automatically created
     * when the route table was created.</p> </li> <li> <p>CreateRoute - The route was
     * manually added to the route table.</p> </li> <li> <p>EnableVgwRoutePropagation -
     * The route was propagated by route propagation.</p> </li> </ul>
     */
    inline const Aws::String& GetOrigin() const{ return m_origin; }

    /**
     * <p>Describes how the route was created. The following are the possible
     * values:</p> <ul> <li> <p>CreateRouteTable - The route was automatically created
     * when the route table was created.</p> </li> <li> <p>CreateRoute - The route was
     * manually added to the route table.</p> </li> <li> <p>EnableVgwRoutePropagation -
     * The route was propagated by route propagation.</p> </li> </ul>
     */
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }

    /**
     * <p>Describes how the route was created. The following are the possible
     * values:</p> <ul> <li> <p>CreateRouteTable - The route was automatically created
     * when the route table was created.</p> </li> <li> <p>CreateRoute - The route was
     * manually added to the route table.</p> </li> <li> <p>EnableVgwRoutePropagation -
     * The route was propagated by route propagation.</p> </li> </ul>
     */
    inline void SetOrigin(const Aws::String& value) { m_originHasBeenSet = true; m_origin = value; }

    /**
     * <p>Describes how the route was created. The following are the possible
     * values:</p> <ul> <li> <p>CreateRouteTable - The route was automatically created
     * when the route table was created.</p> </li> <li> <p>CreateRoute - The route was
     * manually added to the route table.</p> </li> <li> <p>EnableVgwRoutePropagation -
     * The route was propagated by route propagation.</p> </li> </ul>
     */
    inline void SetOrigin(Aws::String&& value) { m_originHasBeenSet = true; m_origin = std::move(value); }

    /**
     * <p>Describes how the route was created. The following are the possible
     * values:</p> <ul> <li> <p>CreateRouteTable - The route was automatically created
     * when the route table was created.</p> </li> <li> <p>CreateRoute - The route was
     * manually added to the route table.</p> </li> <li> <p>EnableVgwRoutePropagation -
     * The route was propagated by route propagation.</p> </li> </ul>
     */
    inline void SetOrigin(const char* value) { m_originHasBeenSet = true; m_origin.assign(value); }

    /**
     * <p>Describes how the route was created. The following are the possible
     * values:</p> <ul> <li> <p>CreateRouteTable - The route was automatically created
     * when the route table was created.</p> </li> <li> <p>CreateRoute - The route was
     * manually added to the route table.</p> </li> <li> <p>EnableVgwRoutePropagation -
     * The route was propagated by route propagation.</p> </li> </ul>
     */
    inline AnalysisRouteTableRoute& WithOrigin(const Aws::String& value) { SetOrigin(value); return *this;}

    /**
     * <p>Describes how the route was created. The following are the possible
     * values:</p> <ul> <li> <p>CreateRouteTable - The route was automatically created
     * when the route table was created.</p> </li> <li> <p>CreateRoute - The route was
     * manually added to the route table.</p> </li> <li> <p>EnableVgwRoutePropagation -
     * The route was propagated by route propagation.</p> </li> </ul>
     */
    inline AnalysisRouteTableRoute& WithOrigin(Aws::String&& value) { SetOrigin(std::move(value)); return *this;}

    /**
     * <p>Describes how the route was created. The following are the possible
     * values:</p> <ul> <li> <p>CreateRouteTable - The route was automatically created
     * when the route table was created.</p> </li> <li> <p>CreateRoute - The route was
     * manually added to the route table.</p> </li> <li> <p>EnableVgwRoutePropagation -
     * The route was propagated by route propagation.</p> </li> </ul>
     */
    inline AnalysisRouteTableRoute& WithOrigin(const char* value) { SetOrigin(value); return *this;}


    /**
     * <p>The ID of a transit gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayId() const{ return m_transitGatewayId; }

    /**
     * <p>The ID of a transit gateway.</p>
     */
    inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }

    /**
     * <p>The ID of a transit gateway.</p>
     */
    inline void SetTransitGatewayId(const Aws::String& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = value; }

    /**
     * <p>The ID of a transit gateway.</p>
     */
    inline void SetTransitGatewayId(Aws::String&& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = std::move(value); }

    /**
     * <p>The ID of a transit gateway.</p>
     */
    inline void SetTransitGatewayId(const char* value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId.assign(value); }

    /**
     * <p>The ID of a transit gateway.</p>
     */
    inline AnalysisRouteTableRoute& WithTransitGatewayId(const Aws::String& value) { SetTransitGatewayId(value); return *this;}

    /**
     * <p>The ID of a transit gateway.</p>
     */
    inline AnalysisRouteTableRoute& WithTransitGatewayId(Aws::String&& value) { SetTransitGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of a transit gateway.</p>
     */
    inline AnalysisRouteTableRoute& WithTransitGatewayId(const char* value) { SetTransitGatewayId(value); return *this;}


    /**
     * <p>The ID of a VPC peering connection.</p>
     */
    inline const Aws::String& GetVpcPeeringConnectionId() const{ return m_vpcPeeringConnectionId; }

    /**
     * <p>The ID of a VPC peering connection.</p>
     */
    inline bool VpcPeeringConnectionIdHasBeenSet() const { return m_vpcPeeringConnectionIdHasBeenSet; }

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
    inline AnalysisRouteTableRoute& WithVpcPeeringConnectionId(const Aws::String& value) { SetVpcPeeringConnectionId(value); return *this;}

    /**
     * <p>The ID of a VPC peering connection.</p>
     */
    inline AnalysisRouteTableRoute& WithVpcPeeringConnectionId(Aws::String&& value) { SetVpcPeeringConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of a VPC peering connection.</p>
     */
    inline AnalysisRouteTableRoute& WithVpcPeeringConnectionId(const char* value) { SetVpcPeeringConnectionId(value); return *this;}


    /**
     * <p>The state. The following are the possible values:</p> <ul> <li> <p>active</p>
     * </li> <li> <p>blackhole</p> </li> </ul>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The state. The following are the possible values:</p> <ul> <li> <p>active</p>
     * </li> <li> <p>blackhole</p> </li> </ul>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state. The following are the possible values:</p> <ul> <li> <p>active</p>
     * </li> <li> <p>blackhole</p> </li> </ul>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state. The following are the possible values:</p> <ul> <li> <p>active</p>
     * </li> <li> <p>blackhole</p> </li> </ul>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state. The following are the possible values:</p> <ul> <li> <p>active</p>
     * </li> <li> <p>blackhole</p> </li> </ul>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>The state. The following are the possible values:</p> <ul> <li> <p>active</p>
     * </li> <li> <p>blackhole</p> </li> </ul>
     */
    inline AnalysisRouteTableRoute& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The state. The following are the possible values:</p> <ul> <li> <p>active</p>
     * </li> <li> <p>blackhole</p> </li> </ul>
     */
    inline AnalysisRouteTableRoute& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The state. The following are the possible values:</p> <ul> <li> <p>active</p>
     * </li> <li> <p>blackhole</p> </li> </ul>
     */
    inline AnalysisRouteTableRoute& WithState(const char* value) { SetState(value); return *this;}

  private:

    Aws::String m_destinationCidr;
    bool m_destinationCidrHasBeenSet = false;

    Aws::String m_destinationPrefixListId;
    bool m_destinationPrefixListIdHasBeenSet = false;

    Aws::String m_egressOnlyInternetGatewayId;
    bool m_egressOnlyInternetGatewayIdHasBeenSet = false;

    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_natGatewayId;
    bool m_natGatewayIdHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::String m_origin;
    bool m_originHasBeenSet = false;

    Aws::String m_transitGatewayId;
    bool m_transitGatewayIdHasBeenSet = false;

    Aws::String m_vpcPeeringConnectionId;
    bool m_vpcPeeringConnectionIdHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
