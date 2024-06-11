﻿/**
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


    ///@{
    /**
     * <p>The destination IPv4 address, in CIDR notation.</p>
     */
    inline const Aws::String& GetDestinationCidr() const{ return m_destinationCidr; }
    inline bool DestinationCidrHasBeenSet() const { return m_destinationCidrHasBeenSet; }
    inline void SetDestinationCidr(const Aws::String& value) { m_destinationCidrHasBeenSet = true; m_destinationCidr = value; }
    inline void SetDestinationCidr(Aws::String&& value) { m_destinationCidrHasBeenSet = true; m_destinationCidr = std::move(value); }
    inline void SetDestinationCidr(const char* value) { m_destinationCidrHasBeenSet = true; m_destinationCidr.assign(value); }
    inline AnalysisRouteTableRoute& WithDestinationCidr(const Aws::String& value) { SetDestinationCidr(value); return *this;}
    inline AnalysisRouteTableRoute& WithDestinationCidr(Aws::String&& value) { SetDestinationCidr(std::move(value)); return *this;}
    inline AnalysisRouteTableRoute& WithDestinationCidr(const char* value) { SetDestinationCidr(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix of the Amazon Web Service.</p>
     */
    inline const Aws::String& GetDestinationPrefixListId() const{ return m_destinationPrefixListId; }
    inline bool DestinationPrefixListIdHasBeenSet() const { return m_destinationPrefixListIdHasBeenSet; }
    inline void SetDestinationPrefixListId(const Aws::String& value) { m_destinationPrefixListIdHasBeenSet = true; m_destinationPrefixListId = value; }
    inline void SetDestinationPrefixListId(Aws::String&& value) { m_destinationPrefixListIdHasBeenSet = true; m_destinationPrefixListId = std::move(value); }
    inline void SetDestinationPrefixListId(const char* value) { m_destinationPrefixListIdHasBeenSet = true; m_destinationPrefixListId.assign(value); }
    inline AnalysisRouteTableRoute& WithDestinationPrefixListId(const Aws::String& value) { SetDestinationPrefixListId(value); return *this;}
    inline AnalysisRouteTableRoute& WithDestinationPrefixListId(Aws::String&& value) { SetDestinationPrefixListId(std::move(value)); return *this;}
    inline AnalysisRouteTableRoute& WithDestinationPrefixListId(const char* value) { SetDestinationPrefixListId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of an egress-only internet gateway.</p>
     */
    inline const Aws::String& GetEgressOnlyInternetGatewayId() const{ return m_egressOnlyInternetGatewayId; }
    inline bool EgressOnlyInternetGatewayIdHasBeenSet() const { return m_egressOnlyInternetGatewayIdHasBeenSet; }
    inline void SetEgressOnlyInternetGatewayId(const Aws::String& value) { m_egressOnlyInternetGatewayIdHasBeenSet = true; m_egressOnlyInternetGatewayId = value; }
    inline void SetEgressOnlyInternetGatewayId(Aws::String&& value) { m_egressOnlyInternetGatewayIdHasBeenSet = true; m_egressOnlyInternetGatewayId = std::move(value); }
    inline void SetEgressOnlyInternetGatewayId(const char* value) { m_egressOnlyInternetGatewayIdHasBeenSet = true; m_egressOnlyInternetGatewayId.assign(value); }
    inline AnalysisRouteTableRoute& WithEgressOnlyInternetGatewayId(const Aws::String& value) { SetEgressOnlyInternetGatewayId(value); return *this;}
    inline AnalysisRouteTableRoute& WithEgressOnlyInternetGatewayId(Aws::String&& value) { SetEgressOnlyInternetGatewayId(std::move(value)); return *this;}
    inline AnalysisRouteTableRoute& WithEgressOnlyInternetGatewayId(const char* value) { SetEgressOnlyInternetGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the gateway, such as an internet gateway or virtual private
     * gateway.</p>
     */
    inline const Aws::String& GetGatewayId() const{ return m_gatewayId; }
    inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }
    inline void SetGatewayId(const Aws::String& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = value; }
    inline void SetGatewayId(Aws::String&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::move(value); }
    inline void SetGatewayId(const char* value) { m_gatewayIdHasBeenSet = true; m_gatewayId.assign(value); }
    inline AnalysisRouteTableRoute& WithGatewayId(const Aws::String& value) { SetGatewayId(value); return *this;}
    inline AnalysisRouteTableRoute& WithGatewayId(Aws::String&& value) { SetGatewayId(std::move(value)); return *this;}
    inline AnalysisRouteTableRoute& WithGatewayId(const char* value) { SetGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the instance, such as a NAT instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline AnalysisRouteTableRoute& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline AnalysisRouteTableRoute& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline AnalysisRouteTableRoute& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a NAT gateway.</p>
     */
    inline const Aws::String& GetNatGatewayId() const{ return m_natGatewayId; }
    inline bool NatGatewayIdHasBeenSet() const { return m_natGatewayIdHasBeenSet; }
    inline void SetNatGatewayId(const Aws::String& value) { m_natGatewayIdHasBeenSet = true; m_natGatewayId = value; }
    inline void SetNatGatewayId(Aws::String&& value) { m_natGatewayIdHasBeenSet = true; m_natGatewayId = std::move(value); }
    inline void SetNatGatewayId(const char* value) { m_natGatewayIdHasBeenSet = true; m_natGatewayId.assign(value); }
    inline AnalysisRouteTableRoute& WithNatGatewayId(const Aws::String& value) { SetNatGatewayId(value); return *this;}
    inline AnalysisRouteTableRoute& WithNatGatewayId(Aws::String&& value) { SetNatGatewayId(std::move(value)); return *this;}
    inline AnalysisRouteTableRoute& WithNatGatewayId(const char* value) { SetNatGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }
    inline AnalysisRouteTableRoute& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}
    inline AnalysisRouteTableRoute& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}
    inline AnalysisRouteTableRoute& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes how the route was created. The following are the possible
     * values:</p> <ul> <li> <p>CreateRouteTable - The route was automatically created
     * when the route table was created.</p> </li> <li> <p>CreateRoute - The route was
     * manually added to the route table.</p> </li> <li> <p>EnableVgwRoutePropagation -
     * The route was propagated by route propagation.</p> </li> </ul>
     */
    inline const Aws::String& GetOrigin() const{ return m_origin; }
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
    inline void SetOrigin(const Aws::String& value) { m_originHasBeenSet = true; m_origin = value; }
    inline void SetOrigin(Aws::String&& value) { m_originHasBeenSet = true; m_origin = std::move(value); }
    inline void SetOrigin(const char* value) { m_originHasBeenSet = true; m_origin.assign(value); }
    inline AnalysisRouteTableRoute& WithOrigin(const Aws::String& value) { SetOrigin(value); return *this;}
    inline AnalysisRouteTableRoute& WithOrigin(Aws::String&& value) { SetOrigin(std::move(value)); return *this;}
    inline AnalysisRouteTableRoute& WithOrigin(const char* value) { SetOrigin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a transit gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayId() const{ return m_transitGatewayId; }
    inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }
    inline void SetTransitGatewayId(const Aws::String& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = value; }
    inline void SetTransitGatewayId(Aws::String&& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = std::move(value); }
    inline void SetTransitGatewayId(const char* value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId.assign(value); }
    inline AnalysisRouteTableRoute& WithTransitGatewayId(const Aws::String& value) { SetTransitGatewayId(value); return *this;}
    inline AnalysisRouteTableRoute& WithTransitGatewayId(Aws::String&& value) { SetTransitGatewayId(std::move(value)); return *this;}
    inline AnalysisRouteTableRoute& WithTransitGatewayId(const char* value) { SetTransitGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a VPC peering connection.</p>
     */
    inline const Aws::String& GetVpcPeeringConnectionId() const{ return m_vpcPeeringConnectionId; }
    inline bool VpcPeeringConnectionIdHasBeenSet() const { return m_vpcPeeringConnectionIdHasBeenSet; }
    inline void SetVpcPeeringConnectionId(const Aws::String& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = value; }
    inline void SetVpcPeeringConnectionId(Aws::String&& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = std::move(value); }
    inline void SetVpcPeeringConnectionId(const char* value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId.assign(value); }
    inline AnalysisRouteTableRoute& WithVpcPeeringConnectionId(const Aws::String& value) { SetVpcPeeringConnectionId(value); return *this;}
    inline AnalysisRouteTableRoute& WithVpcPeeringConnectionId(Aws::String&& value) { SetVpcPeeringConnectionId(std::move(value)); return *this;}
    inline AnalysisRouteTableRoute& WithVpcPeeringConnectionId(const char* value) { SetVpcPeeringConnectionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state. The following are the possible values:</p> <ul> <li> <p>active</p>
     * </li> <li> <p>blackhole</p> </li> </ul>
     */
    inline const Aws::String& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }
    inline AnalysisRouteTableRoute& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline AnalysisRouteTableRoute& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline AnalysisRouteTableRoute& WithState(const char* value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a carrier gateway.</p>
     */
    inline const Aws::String& GetCarrierGatewayId() const{ return m_carrierGatewayId; }
    inline bool CarrierGatewayIdHasBeenSet() const { return m_carrierGatewayIdHasBeenSet; }
    inline void SetCarrierGatewayId(const Aws::String& value) { m_carrierGatewayIdHasBeenSet = true; m_carrierGatewayId = value; }
    inline void SetCarrierGatewayId(Aws::String&& value) { m_carrierGatewayIdHasBeenSet = true; m_carrierGatewayId = std::move(value); }
    inline void SetCarrierGatewayId(const char* value) { m_carrierGatewayIdHasBeenSet = true; m_carrierGatewayId.assign(value); }
    inline AnalysisRouteTableRoute& WithCarrierGatewayId(const Aws::String& value) { SetCarrierGatewayId(value); return *this;}
    inline AnalysisRouteTableRoute& WithCarrierGatewayId(Aws::String&& value) { SetCarrierGatewayId(std::move(value)); return *this;}
    inline AnalysisRouteTableRoute& WithCarrierGatewayId(const char* value) { SetCarrierGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a core network.</p>
     */
    inline const Aws::String& GetCoreNetworkArn() const{ return m_coreNetworkArn; }
    inline bool CoreNetworkArnHasBeenSet() const { return m_coreNetworkArnHasBeenSet; }
    inline void SetCoreNetworkArn(const Aws::String& value) { m_coreNetworkArnHasBeenSet = true; m_coreNetworkArn = value; }
    inline void SetCoreNetworkArn(Aws::String&& value) { m_coreNetworkArnHasBeenSet = true; m_coreNetworkArn = std::move(value); }
    inline void SetCoreNetworkArn(const char* value) { m_coreNetworkArnHasBeenSet = true; m_coreNetworkArn.assign(value); }
    inline AnalysisRouteTableRoute& WithCoreNetworkArn(const Aws::String& value) { SetCoreNetworkArn(value); return *this;}
    inline AnalysisRouteTableRoute& WithCoreNetworkArn(Aws::String&& value) { SetCoreNetworkArn(std::move(value)); return *this;}
    inline AnalysisRouteTableRoute& WithCoreNetworkArn(const char* value) { SetCoreNetworkArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a local gateway.</p>
     */
    inline const Aws::String& GetLocalGatewayId() const{ return m_localGatewayId; }
    inline bool LocalGatewayIdHasBeenSet() const { return m_localGatewayIdHasBeenSet; }
    inline void SetLocalGatewayId(const Aws::String& value) { m_localGatewayIdHasBeenSet = true; m_localGatewayId = value; }
    inline void SetLocalGatewayId(Aws::String&& value) { m_localGatewayIdHasBeenSet = true; m_localGatewayId = std::move(value); }
    inline void SetLocalGatewayId(const char* value) { m_localGatewayIdHasBeenSet = true; m_localGatewayId.assign(value); }
    inline AnalysisRouteTableRoute& WithLocalGatewayId(const Aws::String& value) { SetLocalGatewayId(value); return *this;}
    inline AnalysisRouteTableRoute& WithLocalGatewayId(Aws::String&& value) { SetLocalGatewayId(std::move(value)); return *this;}
    inline AnalysisRouteTableRoute& WithLocalGatewayId(const char* value) { SetLocalGatewayId(value); return *this;}
    ///@}
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

    Aws::String m_carrierGatewayId;
    bool m_carrierGatewayIdHasBeenSet = false;

    Aws::String m_coreNetworkArn;
    bool m_coreNetworkArnHasBeenSet = false;

    Aws::String m_localGatewayId;
    bool m_localGatewayIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
