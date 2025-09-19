/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class Route
  {
  public:
    AWS_EC2_API Route() = default;
    AWS_EC2_API Route(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Route& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The IPv4 CIDR block used for the destination match.</p>
     */
    inline const Aws::String& GetDestinationCidrBlock() const { return m_destinationCidrBlock; }
    inline bool DestinationCidrBlockHasBeenSet() const { return m_destinationCidrBlockHasBeenSet; }
    template<typename DestinationCidrBlockT = Aws::String>
    void SetDestinationCidrBlock(DestinationCidrBlockT&& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = std::forward<DestinationCidrBlockT>(value); }
    template<typename DestinationCidrBlockT = Aws::String>
    Route& WithDestinationCidrBlock(DestinationCidrBlockT&& value) { SetDestinationCidrBlock(std::forward<DestinationCidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 CIDR block used for the destination match.</p>
     */
    inline const Aws::String& GetDestinationIpv6CidrBlock() const { return m_destinationIpv6CidrBlock; }
    inline bool DestinationIpv6CidrBlockHasBeenSet() const { return m_destinationIpv6CidrBlockHasBeenSet; }
    template<typename DestinationIpv6CidrBlockT = Aws::String>
    void SetDestinationIpv6CidrBlock(DestinationIpv6CidrBlockT&& value) { m_destinationIpv6CidrBlockHasBeenSet = true; m_destinationIpv6CidrBlock = std::forward<DestinationIpv6CidrBlockT>(value); }
    template<typename DestinationIpv6CidrBlockT = Aws::String>
    Route& WithDestinationIpv6CidrBlock(DestinationIpv6CidrBlockT&& value) { SetDestinationIpv6CidrBlock(std::forward<DestinationIpv6CidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix of the Amazon Web Services service.</p>
     */
    inline const Aws::String& GetDestinationPrefixListId() const { return m_destinationPrefixListId; }
    inline bool DestinationPrefixListIdHasBeenSet() const { return m_destinationPrefixListIdHasBeenSet; }
    template<typename DestinationPrefixListIdT = Aws::String>
    void SetDestinationPrefixListId(DestinationPrefixListIdT&& value) { m_destinationPrefixListIdHasBeenSet = true; m_destinationPrefixListId = std::forward<DestinationPrefixListIdT>(value); }
    template<typename DestinationPrefixListIdT = Aws::String>
    Route& WithDestinationPrefixListId(DestinationPrefixListIdT&& value) { SetDestinationPrefixListId(std::forward<DestinationPrefixListIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the egress-only internet gateway.</p>
     */
    inline const Aws::String& GetEgressOnlyInternetGatewayId() const { return m_egressOnlyInternetGatewayId; }
    inline bool EgressOnlyInternetGatewayIdHasBeenSet() const { return m_egressOnlyInternetGatewayIdHasBeenSet; }
    template<typename EgressOnlyInternetGatewayIdT = Aws::String>
    void SetEgressOnlyInternetGatewayId(EgressOnlyInternetGatewayIdT&& value) { m_egressOnlyInternetGatewayIdHasBeenSet = true; m_egressOnlyInternetGatewayId = std::forward<EgressOnlyInternetGatewayIdT>(value); }
    template<typename EgressOnlyInternetGatewayIdT = Aws::String>
    Route& WithEgressOnlyInternetGatewayId(EgressOnlyInternetGatewayIdT&& value) { SetEgressOnlyInternetGatewayId(std::forward<EgressOnlyInternetGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a gateway attached to your VPC.</p>
     */
    inline const Aws::String& GetGatewayId() const { return m_gatewayId; }
    inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }
    template<typename GatewayIdT = Aws::String>
    void SetGatewayId(GatewayIdT&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::forward<GatewayIdT>(value); }
    template<typename GatewayIdT = Aws::String>
    Route& WithGatewayId(GatewayIdT&& value) { SetGatewayId(std::forward<GatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a NAT instance in your VPC.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    Route& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of Amazon Web Services account that owns the instance.</p>
     */
    inline const Aws::String& GetInstanceOwnerId() const { return m_instanceOwnerId; }
    inline bool InstanceOwnerIdHasBeenSet() const { return m_instanceOwnerIdHasBeenSet; }
    template<typename InstanceOwnerIdT = Aws::String>
    void SetInstanceOwnerId(InstanceOwnerIdT&& value) { m_instanceOwnerIdHasBeenSet = true; m_instanceOwnerId = std::forward<InstanceOwnerIdT>(value); }
    template<typename InstanceOwnerIdT = Aws::String>
    Route& WithInstanceOwnerId(InstanceOwnerIdT&& value) { SetInstanceOwnerId(std::forward<InstanceOwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a NAT gateway.</p>
     */
    inline const Aws::String& GetNatGatewayId() const { return m_natGatewayId; }
    inline bool NatGatewayIdHasBeenSet() const { return m_natGatewayIdHasBeenSet; }
    template<typename NatGatewayIdT = Aws::String>
    void SetNatGatewayId(NatGatewayIdT&& value) { m_natGatewayIdHasBeenSet = true; m_natGatewayId = std::forward<NatGatewayIdT>(value); }
    template<typename NatGatewayIdT = Aws::String>
    Route& WithNatGatewayId(NatGatewayIdT&& value) { SetNatGatewayId(std::forward<NatGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a transit gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayId() const { return m_transitGatewayId; }
    inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }
    template<typename TransitGatewayIdT = Aws::String>
    void SetTransitGatewayId(TransitGatewayIdT&& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = std::forward<TransitGatewayIdT>(value); }
    template<typename TransitGatewayIdT = Aws::String>
    Route& WithTransitGatewayId(TransitGatewayIdT&& value) { SetTransitGatewayId(std::forward<TransitGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the local gateway.</p>
     */
    inline const Aws::String& GetLocalGatewayId() const { return m_localGatewayId; }
    inline bool LocalGatewayIdHasBeenSet() const { return m_localGatewayIdHasBeenSet; }
    template<typename LocalGatewayIdT = Aws::String>
    void SetLocalGatewayId(LocalGatewayIdT&& value) { m_localGatewayIdHasBeenSet = true; m_localGatewayId = std::forward<LocalGatewayIdT>(value); }
    template<typename LocalGatewayIdT = Aws::String>
    Route& WithLocalGatewayId(LocalGatewayIdT&& value) { SetLocalGatewayId(std::forward<LocalGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the carrier gateway.</p>
     */
    inline const Aws::String& GetCarrierGatewayId() const { return m_carrierGatewayId; }
    inline bool CarrierGatewayIdHasBeenSet() const { return m_carrierGatewayIdHasBeenSet; }
    template<typename CarrierGatewayIdT = Aws::String>
    void SetCarrierGatewayId(CarrierGatewayIdT&& value) { m_carrierGatewayIdHasBeenSet = true; m_carrierGatewayId = std::forward<CarrierGatewayIdT>(value); }
    template<typename CarrierGatewayIdT = Aws::String>
    Route& WithCarrierGatewayId(CarrierGatewayIdT&& value) { SetCarrierGatewayId(std::forward<CarrierGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const { return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    template<typename NetworkInterfaceIdT = Aws::String>
    void SetNetworkInterfaceId(NetworkInterfaceIdT&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::forward<NetworkInterfaceIdT>(value); }
    template<typename NetworkInterfaceIdT = Aws::String>
    Route& WithNetworkInterfaceId(NetworkInterfaceIdT&& value) { SetNetworkInterfaceId(std::forward<NetworkInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes how the route was created.</p> <ul> <li> <p>
     * <code>CreateRouteTable</code> - The route was automatically created when the
     * route table was created.</p> </li> <li> <p> <code>CreateRoute</code> - The route
     * was manually added to the route table.</p> </li> <li> <p>
     * <code>EnableVgwRoutePropagation</code> - The route was propagated by route
     * propagation.</p> </li> <li> <p> <code>Advertisement</code> - The route was
     * created dynamically by Amazon VPC Route Server.</p> </li> </ul>
     */
    inline RouteOrigin GetOrigin() const { return m_origin; }
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
    inline void SetOrigin(RouteOrigin value) { m_originHasBeenSet = true; m_origin = value; }
    inline Route& WithOrigin(RouteOrigin value) { SetOrigin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the route. The <code>blackhole</code> state indicates that the
     * route's target isn't available (for example, the specified gateway isn't
     * attached to the VPC, or the specified NAT instance has been terminated).</p>
     */
    inline RouteState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(RouteState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Route& WithState(RouteState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a VPC peering connection.</p>
     */
    inline const Aws::String& GetVpcPeeringConnectionId() const { return m_vpcPeeringConnectionId; }
    inline bool VpcPeeringConnectionIdHasBeenSet() const { return m_vpcPeeringConnectionIdHasBeenSet; }
    template<typename VpcPeeringConnectionIdT = Aws::String>
    void SetVpcPeeringConnectionId(VpcPeeringConnectionIdT&& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = std::forward<VpcPeeringConnectionIdT>(value); }
    template<typename VpcPeeringConnectionIdT = Aws::String>
    Route& WithVpcPeeringConnectionId(VpcPeeringConnectionIdT&& value) { SetVpcPeeringConnectionId(std::forward<VpcPeeringConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the core network.</p>
     */
    inline const Aws::String& GetCoreNetworkArn() const { return m_coreNetworkArn; }
    inline bool CoreNetworkArnHasBeenSet() const { return m_coreNetworkArnHasBeenSet; }
    template<typename CoreNetworkArnT = Aws::String>
    void SetCoreNetworkArn(CoreNetworkArnT&& value) { m_coreNetworkArnHasBeenSet = true; m_coreNetworkArn = std::forward<CoreNetworkArnT>(value); }
    template<typename CoreNetworkArnT = Aws::String>
    Route& WithCoreNetworkArn(CoreNetworkArnT&& value) { SetCoreNetworkArn(std::forward<CoreNetworkArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the ODB network.</p>
     */
    inline const Aws::String& GetOdbNetworkArn() const { return m_odbNetworkArn; }
    inline bool OdbNetworkArnHasBeenSet() const { return m_odbNetworkArnHasBeenSet; }
    template<typename OdbNetworkArnT = Aws::String>
    void SetOdbNetworkArn(OdbNetworkArnT&& value) { m_odbNetworkArnHasBeenSet = true; m_odbNetworkArn = std::forward<OdbNetworkArnT>(value); }
    template<typename OdbNetworkArnT = Aws::String>
    Route& WithOdbNetworkArn(OdbNetworkArnT&& value) { SetOdbNetworkArn(std::forward<OdbNetworkArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next hop IP address for routes propagated by VPC Route Server into VPC
     * route tables.</p>
     */
    inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    template<typename IpAddressT = Aws::String>
    void SetIpAddress(IpAddressT&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::forward<IpAddressT>(value); }
    template<typename IpAddressT = Aws::String>
    Route& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_destinationCidrBlock;
    bool m_destinationCidrBlockHasBeenSet = false;

    Aws::String m_destinationIpv6CidrBlock;
    bool m_destinationIpv6CidrBlockHasBeenSet = false;

    Aws::String m_destinationPrefixListId;
    bool m_destinationPrefixListIdHasBeenSet = false;

    Aws::String m_egressOnlyInternetGatewayId;
    bool m_egressOnlyInternetGatewayIdHasBeenSet = false;

    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_instanceOwnerId;
    bool m_instanceOwnerIdHasBeenSet = false;

    Aws::String m_natGatewayId;
    bool m_natGatewayIdHasBeenSet = false;

    Aws::String m_transitGatewayId;
    bool m_transitGatewayIdHasBeenSet = false;

    Aws::String m_localGatewayId;
    bool m_localGatewayIdHasBeenSet = false;

    Aws::String m_carrierGatewayId;
    bool m_carrierGatewayIdHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    RouteOrigin m_origin{RouteOrigin::NOT_SET};
    bool m_originHasBeenSet = false;

    RouteState m_state{RouteState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_vpcPeeringConnectionId;
    bool m_vpcPeeringConnectionIdHasBeenSet = false;

    Aws::String m_coreNetworkArn;
    bool m_coreNetworkArnHasBeenSet = false;

    Aws::String m_odbNetworkArn;
    bool m_odbNetworkArnHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
