/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/AnalysisComponent.h>
#include <aws/ec2/model/AnalysisAclRule.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/AnalysisLoadBalancerListener.h>
#include <aws/ec2/model/AnalysisLoadBalancerTarget.h>
#include <aws/ec2/model/AnalysisRouteTableRoute.h>
#include <aws/ec2/model/AnalysisSecurityGroupRule.h>
#include <aws/ec2/model/TransitGatewayRouteTableRoute.h>
#include <aws/ec2/model/FirewallStatelessRule.h>
#include <aws/ec2/model/FirewallStatefulRule.h>
#include <aws/ec2/model/PortRange.h>
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
   * <p>Describes an explanation code for an unreachable path. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/vpc/latest/reachability/explanation-codes.html">Reachability
   * Analyzer explanation codes</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Explanation">AWS API
   * Reference</a></p>
   */
  class Explanation
  {
  public:
    AWS_EC2_API Explanation() = default;
    AWS_EC2_API Explanation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Explanation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The network ACL.</p>
     */
    inline const AnalysisComponent& GetAcl() const { return m_acl; }
    inline bool AclHasBeenSet() const { return m_aclHasBeenSet; }
    template<typename AclT = AnalysisComponent>
    void SetAcl(AclT&& value) { m_aclHasBeenSet = true; m_acl = std::forward<AclT>(value); }
    template<typename AclT = AnalysisComponent>
    Explanation& WithAcl(AclT&& value) { SetAcl(std::forward<AclT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network ACL rule.</p>
     */
    inline const AnalysisAclRule& GetAclRule() const { return m_aclRule; }
    inline bool AclRuleHasBeenSet() const { return m_aclRuleHasBeenSet; }
    template<typename AclRuleT = AnalysisAclRule>
    void SetAclRule(AclRuleT&& value) { m_aclRuleHasBeenSet = true; m_aclRule = std::forward<AclRuleT>(value); }
    template<typename AclRuleT = AnalysisAclRule>
    Explanation& WithAclRule(AclRuleT&& value) { SetAclRule(std::forward<AclRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 address, in CIDR notation.</p>
     */
    inline const Aws::String& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = Aws::String>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = Aws::String>
    Explanation& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 addresses, in CIDR notation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddresses() const { return m_addresses; }
    inline bool AddressesHasBeenSet() const { return m_addressesHasBeenSet; }
    template<typename AddressesT = Aws::Vector<Aws::String>>
    void SetAddresses(AddressesT&& value) { m_addressesHasBeenSet = true; m_addresses = std::forward<AddressesT>(value); }
    template<typename AddressesT = Aws::Vector<Aws::String>>
    Explanation& WithAddresses(AddressesT&& value) { SetAddresses(std::forward<AddressesT>(value)); return *this;}
    template<typename AddressesT = Aws::String>
    Explanation& AddAddresses(AddressesT&& value) { m_addressesHasBeenSet = true; m_addresses.emplace_back(std::forward<AddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resource to which the component is attached.</p>
     */
    inline const AnalysisComponent& GetAttachedTo() const { return m_attachedTo; }
    inline bool AttachedToHasBeenSet() const { return m_attachedToHasBeenSet; }
    template<typename AttachedToT = AnalysisComponent>
    void SetAttachedTo(AttachedToT&& value) { m_attachedToHasBeenSet = true; m_attachedTo = std::forward<AttachedToT>(value); }
    template<typename AttachedToT = AnalysisComponent>
    Explanation& WithAttachedTo(AttachedToT&& value) { SetAttachedTo(std::forward<AttachedToT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zones.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const { return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    void SetAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::forward<AvailabilityZonesT>(value); }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    Explanation& WithAvailabilityZones(AvailabilityZonesT&& value) { SetAvailabilityZones(std::forward<AvailabilityZonesT>(value)); return *this;}
    template<typename AvailabilityZonesT = Aws::String>
    Explanation& AddAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of the Availability Zones.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZoneIds() const { return m_availabilityZoneIds; }
    inline bool AvailabilityZoneIdsHasBeenSet() const { return m_availabilityZoneIdsHasBeenSet; }
    template<typename AvailabilityZoneIdsT = Aws::Vector<Aws::String>>
    void SetAvailabilityZoneIds(AvailabilityZoneIdsT&& value) { m_availabilityZoneIdsHasBeenSet = true; m_availabilityZoneIds = std::forward<AvailabilityZoneIdsT>(value); }
    template<typename AvailabilityZoneIdsT = Aws::Vector<Aws::String>>
    Explanation& WithAvailabilityZoneIds(AvailabilityZoneIdsT&& value) { SetAvailabilityZoneIds(std::forward<AvailabilityZoneIdsT>(value)); return *this;}
    template<typename AvailabilityZoneIdsT = Aws::String>
    Explanation& AddAvailabilityZoneIds(AvailabilityZoneIdsT&& value) { m_availabilityZoneIdsHasBeenSet = true; m_availabilityZoneIds.emplace_back(std::forward<AvailabilityZoneIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The CIDR ranges.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCidrs() const { return m_cidrs; }
    inline bool CidrsHasBeenSet() const { return m_cidrsHasBeenSet; }
    template<typename CidrsT = Aws::Vector<Aws::String>>
    void SetCidrs(CidrsT&& value) { m_cidrsHasBeenSet = true; m_cidrs = std::forward<CidrsT>(value); }
    template<typename CidrsT = Aws::Vector<Aws::String>>
    Explanation& WithCidrs(CidrsT&& value) { SetCidrs(std::forward<CidrsT>(value)); return *this;}
    template<typename CidrsT = Aws::String>
    Explanation& AddCidrs(CidrsT&& value) { m_cidrsHasBeenSet = true; m_cidrs.emplace_back(std::forward<CidrsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The component.</p>
     */
    inline const AnalysisComponent& GetComponent() const { return m_component; }
    inline bool ComponentHasBeenSet() const { return m_componentHasBeenSet; }
    template<typename ComponentT = AnalysisComponent>
    void SetComponent(ComponentT&& value) { m_componentHasBeenSet = true; m_component = std::forward<ComponentT>(value); }
    template<typename ComponentT = AnalysisComponent>
    Explanation& WithComponent(ComponentT&& value) { SetComponent(std::forward<ComponentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer gateway.</p>
     */
    inline const AnalysisComponent& GetCustomerGateway() const { return m_customerGateway; }
    inline bool CustomerGatewayHasBeenSet() const { return m_customerGatewayHasBeenSet; }
    template<typename CustomerGatewayT = AnalysisComponent>
    void SetCustomerGateway(CustomerGatewayT&& value) { m_customerGatewayHasBeenSet = true; m_customerGateway = std::forward<CustomerGatewayT>(value); }
    template<typename CustomerGatewayT = AnalysisComponent>
    Explanation& WithCustomerGateway(CustomerGatewayT&& value) { SetCustomerGateway(std::forward<CustomerGatewayT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination.</p>
     */
    inline const AnalysisComponent& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = AnalysisComponent>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = AnalysisComponent>
    Explanation& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination VPC.</p>
     */
    inline const AnalysisComponent& GetDestinationVpc() const { return m_destinationVpc; }
    inline bool DestinationVpcHasBeenSet() const { return m_destinationVpcHasBeenSet; }
    template<typename DestinationVpcT = AnalysisComponent>
    void SetDestinationVpc(DestinationVpcT&& value) { m_destinationVpcHasBeenSet = true; m_destinationVpc = std::forward<DestinationVpcT>(value); }
    template<typename DestinationVpcT = AnalysisComponent>
    Explanation& WithDestinationVpc(DestinationVpcT&& value) { SetDestinationVpc(std::forward<DestinationVpcT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The direction. The following are the possible values:</p> <ul> <li>
     * <p>egress</p> </li> <li> <p>ingress</p> </li> </ul>
     */
    inline const Aws::String& GetDirection() const { return m_direction; }
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }
    template<typename DirectionT = Aws::String>
    void SetDirection(DirectionT&& value) { m_directionHasBeenSet = true; m_direction = std::forward<DirectionT>(value); }
    template<typename DirectionT = Aws::String>
    Explanation& WithDirection(DirectionT&& value) { SetDirection(std::forward<DirectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The explanation code.</p>
     */
    inline const Aws::String& GetExplanationCode() const { return m_explanationCode; }
    inline bool ExplanationCodeHasBeenSet() const { return m_explanationCodeHasBeenSet; }
    template<typename ExplanationCodeT = Aws::String>
    void SetExplanationCode(ExplanationCodeT&& value) { m_explanationCodeHasBeenSet = true; m_explanationCode = std::forward<ExplanationCodeT>(value); }
    template<typename ExplanationCodeT = Aws::String>
    Explanation& WithExplanationCode(ExplanationCodeT&& value) { SetExplanationCode(std::forward<ExplanationCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route table.</p>
     */
    inline const AnalysisComponent& GetIngressRouteTable() const { return m_ingressRouteTable; }
    inline bool IngressRouteTableHasBeenSet() const { return m_ingressRouteTableHasBeenSet; }
    template<typename IngressRouteTableT = AnalysisComponent>
    void SetIngressRouteTable(IngressRouteTableT&& value) { m_ingressRouteTableHasBeenSet = true; m_ingressRouteTable = std::forward<IngressRouteTableT>(value); }
    template<typename IngressRouteTableT = AnalysisComponent>
    Explanation& WithIngressRouteTable(IngressRouteTableT&& value) { SetIngressRouteTable(std::forward<IngressRouteTableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The internet gateway.</p>
     */
    inline const AnalysisComponent& GetInternetGateway() const { return m_internetGateway; }
    inline bool InternetGatewayHasBeenSet() const { return m_internetGatewayHasBeenSet; }
    template<typename InternetGatewayT = AnalysisComponent>
    void SetInternetGateway(InternetGatewayT&& value) { m_internetGatewayHasBeenSet = true; m_internetGateway = std::forward<InternetGatewayT>(value); }
    template<typename InternetGatewayT = AnalysisComponent>
    Explanation& WithInternetGateway(InternetGatewayT&& value) { SetInternetGateway(std::forward<InternetGatewayT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerArn() const { return m_loadBalancerArn; }
    inline bool LoadBalancerArnHasBeenSet() const { return m_loadBalancerArnHasBeenSet; }
    template<typename LoadBalancerArnT = Aws::String>
    void SetLoadBalancerArn(LoadBalancerArnT&& value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn = std::forward<LoadBalancerArnT>(value); }
    template<typename LoadBalancerArnT = Aws::String>
    Explanation& WithLoadBalancerArn(LoadBalancerArnT&& value) { SetLoadBalancerArn(std::forward<LoadBalancerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The listener for a Classic Load Balancer.</p>
     */
    inline const AnalysisLoadBalancerListener& GetClassicLoadBalancerListener() const { return m_classicLoadBalancerListener; }
    inline bool ClassicLoadBalancerListenerHasBeenSet() const { return m_classicLoadBalancerListenerHasBeenSet; }
    template<typename ClassicLoadBalancerListenerT = AnalysisLoadBalancerListener>
    void SetClassicLoadBalancerListener(ClassicLoadBalancerListenerT&& value) { m_classicLoadBalancerListenerHasBeenSet = true; m_classicLoadBalancerListener = std::forward<ClassicLoadBalancerListenerT>(value); }
    template<typename ClassicLoadBalancerListenerT = AnalysisLoadBalancerListener>
    Explanation& WithClassicLoadBalancerListener(ClassicLoadBalancerListenerT&& value) { SetClassicLoadBalancerListener(std::forward<ClassicLoadBalancerListenerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The listener port of the load balancer.</p>
     */
    inline int GetLoadBalancerListenerPort() const { return m_loadBalancerListenerPort; }
    inline bool LoadBalancerListenerPortHasBeenSet() const { return m_loadBalancerListenerPortHasBeenSet; }
    inline void SetLoadBalancerListenerPort(int value) { m_loadBalancerListenerPortHasBeenSet = true; m_loadBalancerListenerPort = value; }
    inline Explanation& WithLoadBalancerListenerPort(int value) { SetLoadBalancerListenerPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target.</p>
     */
    inline const AnalysisLoadBalancerTarget& GetLoadBalancerTarget() const { return m_loadBalancerTarget; }
    inline bool LoadBalancerTargetHasBeenSet() const { return m_loadBalancerTargetHasBeenSet; }
    template<typename LoadBalancerTargetT = AnalysisLoadBalancerTarget>
    void SetLoadBalancerTarget(LoadBalancerTargetT&& value) { m_loadBalancerTargetHasBeenSet = true; m_loadBalancerTarget = std::forward<LoadBalancerTargetT>(value); }
    template<typename LoadBalancerTargetT = AnalysisLoadBalancerTarget>
    Explanation& WithLoadBalancerTarget(LoadBalancerTargetT&& value) { SetLoadBalancerTarget(std::forward<LoadBalancerTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target group.</p>
     */
    inline const AnalysisComponent& GetLoadBalancerTargetGroup() const { return m_loadBalancerTargetGroup; }
    inline bool LoadBalancerTargetGroupHasBeenSet() const { return m_loadBalancerTargetGroupHasBeenSet; }
    template<typename LoadBalancerTargetGroupT = AnalysisComponent>
    void SetLoadBalancerTargetGroup(LoadBalancerTargetGroupT&& value) { m_loadBalancerTargetGroupHasBeenSet = true; m_loadBalancerTargetGroup = std::forward<LoadBalancerTargetGroupT>(value); }
    template<typename LoadBalancerTargetGroupT = AnalysisComponent>
    Explanation& WithLoadBalancerTargetGroup(LoadBalancerTargetGroupT&& value) { SetLoadBalancerTargetGroup(std::forward<LoadBalancerTargetGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target groups.</p>
     */
    inline const Aws::Vector<AnalysisComponent>& GetLoadBalancerTargetGroups() const { return m_loadBalancerTargetGroups; }
    inline bool LoadBalancerTargetGroupsHasBeenSet() const { return m_loadBalancerTargetGroupsHasBeenSet; }
    template<typename LoadBalancerTargetGroupsT = Aws::Vector<AnalysisComponent>>
    void SetLoadBalancerTargetGroups(LoadBalancerTargetGroupsT&& value) { m_loadBalancerTargetGroupsHasBeenSet = true; m_loadBalancerTargetGroups = std::forward<LoadBalancerTargetGroupsT>(value); }
    template<typename LoadBalancerTargetGroupsT = Aws::Vector<AnalysisComponent>>
    Explanation& WithLoadBalancerTargetGroups(LoadBalancerTargetGroupsT&& value) { SetLoadBalancerTargetGroups(std::forward<LoadBalancerTargetGroupsT>(value)); return *this;}
    template<typename LoadBalancerTargetGroupsT = AnalysisComponent>
    Explanation& AddLoadBalancerTargetGroups(LoadBalancerTargetGroupsT&& value) { m_loadBalancerTargetGroupsHasBeenSet = true; m_loadBalancerTargetGroups.emplace_back(std::forward<LoadBalancerTargetGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The target port.</p>
     */
    inline int GetLoadBalancerTargetPort() const { return m_loadBalancerTargetPort; }
    inline bool LoadBalancerTargetPortHasBeenSet() const { return m_loadBalancerTargetPortHasBeenSet; }
    inline void SetLoadBalancerTargetPort(int value) { m_loadBalancerTargetPortHasBeenSet = true; m_loadBalancerTargetPort = value; }
    inline Explanation& WithLoadBalancerTargetPort(int value) { SetLoadBalancerTargetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The load balancer listener.</p>
     */
    inline const AnalysisComponent& GetElasticLoadBalancerListener() const { return m_elasticLoadBalancerListener; }
    inline bool ElasticLoadBalancerListenerHasBeenSet() const { return m_elasticLoadBalancerListenerHasBeenSet; }
    template<typename ElasticLoadBalancerListenerT = AnalysisComponent>
    void SetElasticLoadBalancerListener(ElasticLoadBalancerListenerT&& value) { m_elasticLoadBalancerListenerHasBeenSet = true; m_elasticLoadBalancerListener = std::forward<ElasticLoadBalancerListenerT>(value); }
    template<typename ElasticLoadBalancerListenerT = AnalysisComponent>
    Explanation& WithElasticLoadBalancerListener(ElasticLoadBalancerListenerT&& value) { SetElasticLoadBalancerListener(std::forward<ElasticLoadBalancerListenerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The missing component.</p>
     */
    inline const Aws::String& GetMissingComponent() const { return m_missingComponent; }
    inline bool MissingComponentHasBeenSet() const { return m_missingComponentHasBeenSet; }
    template<typename MissingComponentT = Aws::String>
    void SetMissingComponent(MissingComponentT&& value) { m_missingComponentHasBeenSet = true; m_missingComponent = std::forward<MissingComponentT>(value); }
    template<typename MissingComponentT = Aws::String>
    Explanation& WithMissingComponent(MissingComponentT&& value) { SetMissingComponent(std::forward<MissingComponentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The NAT gateway.</p>
     */
    inline const AnalysisComponent& GetNatGateway() const { return m_natGateway; }
    inline bool NatGatewayHasBeenSet() const { return m_natGatewayHasBeenSet; }
    template<typename NatGatewayT = AnalysisComponent>
    void SetNatGateway(NatGatewayT&& value) { m_natGatewayHasBeenSet = true; m_natGateway = std::forward<NatGatewayT>(value); }
    template<typename NatGatewayT = AnalysisComponent>
    Explanation& WithNatGateway(NatGatewayT&& value) { SetNatGateway(std::forward<NatGatewayT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network interface.</p>
     */
    inline const AnalysisComponent& GetNetworkInterface() const { return m_networkInterface; }
    inline bool NetworkInterfaceHasBeenSet() const { return m_networkInterfaceHasBeenSet; }
    template<typename NetworkInterfaceT = AnalysisComponent>
    void SetNetworkInterface(NetworkInterfaceT&& value) { m_networkInterfaceHasBeenSet = true; m_networkInterface = std::forward<NetworkInterfaceT>(value); }
    template<typename NetworkInterfaceT = AnalysisComponent>
    Explanation& WithNetworkInterface(NetworkInterfaceT&& value) { SetNetworkInterface(std::forward<NetworkInterfaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The packet field.</p>
     */
    inline const Aws::String& GetPacketField() const { return m_packetField; }
    inline bool PacketFieldHasBeenSet() const { return m_packetFieldHasBeenSet; }
    template<typename PacketFieldT = Aws::String>
    void SetPacketField(PacketFieldT&& value) { m_packetFieldHasBeenSet = true; m_packetField = std::forward<PacketFieldT>(value); }
    template<typename PacketFieldT = Aws::String>
    Explanation& WithPacketField(PacketFieldT&& value) { SetPacketField(std::forward<PacketFieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC peering connection.</p>
     */
    inline const AnalysisComponent& GetVpcPeeringConnection() const { return m_vpcPeeringConnection; }
    inline bool VpcPeeringConnectionHasBeenSet() const { return m_vpcPeeringConnectionHasBeenSet; }
    template<typename VpcPeeringConnectionT = AnalysisComponent>
    void SetVpcPeeringConnection(VpcPeeringConnectionT&& value) { m_vpcPeeringConnectionHasBeenSet = true; m_vpcPeeringConnection = std::forward<VpcPeeringConnectionT>(value); }
    template<typename VpcPeeringConnectionT = AnalysisComponent>
    Explanation& WithVpcPeeringConnection(VpcPeeringConnectionT&& value) { SetVpcPeeringConnection(std::forward<VpcPeeringConnectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline Explanation& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port ranges.</p>
     */
    inline const Aws::Vector<PortRange>& GetPortRanges() const { return m_portRanges; }
    inline bool PortRangesHasBeenSet() const { return m_portRangesHasBeenSet; }
    template<typename PortRangesT = Aws::Vector<PortRange>>
    void SetPortRanges(PortRangesT&& value) { m_portRangesHasBeenSet = true; m_portRanges = std::forward<PortRangesT>(value); }
    template<typename PortRangesT = Aws::Vector<PortRange>>
    Explanation& WithPortRanges(PortRangesT&& value) { SetPortRanges(std::forward<PortRangesT>(value)); return *this;}
    template<typename PortRangesT = PortRange>
    Explanation& AddPortRanges(PortRangesT&& value) { m_portRangesHasBeenSet = true; m_portRanges.emplace_back(std::forward<PortRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The prefix list.</p>
     */
    inline const AnalysisComponent& GetPrefixList() const { return m_prefixList; }
    inline bool PrefixListHasBeenSet() const { return m_prefixListHasBeenSet; }
    template<typename PrefixListT = AnalysisComponent>
    void SetPrefixList(PrefixListT&& value) { m_prefixListHasBeenSet = true; m_prefixList = std::forward<PrefixListT>(value); }
    template<typename PrefixListT = AnalysisComponent>
    Explanation& WithPrefixList(PrefixListT&& value) { SetPrefixList(std::forward<PrefixListT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocols.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProtocols() const { return m_protocols; }
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }
    template<typename ProtocolsT = Aws::Vector<Aws::String>>
    void SetProtocols(ProtocolsT&& value) { m_protocolsHasBeenSet = true; m_protocols = std::forward<ProtocolsT>(value); }
    template<typename ProtocolsT = Aws::Vector<Aws::String>>
    Explanation& WithProtocols(ProtocolsT&& value) { SetProtocols(std::forward<ProtocolsT>(value)); return *this;}
    template<typename ProtocolsT = Aws::String>
    Explanation& AddProtocols(ProtocolsT&& value) { m_protocolsHasBeenSet = true; m_protocols.emplace_back(std::forward<ProtocolsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The route table route.</p>
     */
    inline const AnalysisRouteTableRoute& GetRouteTableRoute() const { return m_routeTableRoute; }
    inline bool RouteTableRouteHasBeenSet() const { return m_routeTableRouteHasBeenSet; }
    template<typename RouteTableRouteT = AnalysisRouteTableRoute>
    void SetRouteTableRoute(RouteTableRouteT&& value) { m_routeTableRouteHasBeenSet = true; m_routeTableRoute = std::forward<RouteTableRouteT>(value); }
    template<typename RouteTableRouteT = AnalysisRouteTableRoute>
    Explanation& WithRouteTableRoute(RouteTableRouteT&& value) { SetRouteTableRoute(std::forward<RouteTableRouteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route table.</p>
     */
    inline const AnalysisComponent& GetRouteTable() const { return m_routeTable; }
    inline bool RouteTableHasBeenSet() const { return m_routeTableHasBeenSet; }
    template<typename RouteTableT = AnalysisComponent>
    void SetRouteTable(RouteTableT&& value) { m_routeTableHasBeenSet = true; m_routeTable = std::forward<RouteTableT>(value); }
    template<typename RouteTableT = AnalysisComponent>
    Explanation& WithRouteTable(RouteTableT&& value) { SetRouteTable(std::forward<RouteTableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security group.</p>
     */
    inline const AnalysisComponent& GetSecurityGroup() const { return m_securityGroup; }
    inline bool SecurityGroupHasBeenSet() const { return m_securityGroupHasBeenSet; }
    template<typename SecurityGroupT = AnalysisComponent>
    void SetSecurityGroup(SecurityGroupT&& value) { m_securityGroupHasBeenSet = true; m_securityGroup = std::forward<SecurityGroupT>(value); }
    template<typename SecurityGroupT = AnalysisComponent>
    Explanation& WithSecurityGroup(SecurityGroupT&& value) { SetSecurityGroup(std::forward<SecurityGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security group rule.</p>
     */
    inline const AnalysisSecurityGroupRule& GetSecurityGroupRule() const { return m_securityGroupRule; }
    inline bool SecurityGroupRuleHasBeenSet() const { return m_securityGroupRuleHasBeenSet; }
    template<typename SecurityGroupRuleT = AnalysisSecurityGroupRule>
    void SetSecurityGroupRule(SecurityGroupRuleT&& value) { m_securityGroupRuleHasBeenSet = true; m_securityGroupRule = std::forward<SecurityGroupRuleT>(value); }
    template<typename SecurityGroupRuleT = AnalysisSecurityGroupRule>
    Explanation& WithSecurityGroupRule(SecurityGroupRuleT&& value) { SetSecurityGroupRule(std::forward<SecurityGroupRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security groups.</p>
     */
    inline const Aws::Vector<AnalysisComponent>& GetSecurityGroups() const { return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    template<typename SecurityGroupsT = Aws::Vector<AnalysisComponent>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<AnalysisComponent>>
    Explanation& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = AnalysisComponent>
    Explanation& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The source VPC.</p>
     */
    inline const AnalysisComponent& GetSourceVpc() const { return m_sourceVpc; }
    inline bool SourceVpcHasBeenSet() const { return m_sourceVpcHasBeenSet; }
    template<typename SourceVpcT = AnalysisComponent>
    void SetSourceVpc(SourceVpcT&& value) { m_sourceVpcHasBeenSet = true; m_sourceVpc = std::forward<SourceVpcT>(value); }
    template<typename SourceVpcT = AnalysisComponent>
    Explanation& WithSourceVpc(SourceVpcT&& value) { SetSourceVpc(std::forward<SourceVpcT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state.</p>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    Explanation& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet.</p>
     */
    inline const AnalysisComponent& GetSubnet() const { return m_subnet; }
    inline bool SubnetHasBeenSet() const { return m_subnetHasBeenSet; }
    template<typename SubnetT = AnalysisComponent>
    void SetSubnet(SubnetT&& value) { m_subnetHasBeenSet = true; m_subnet = std::forward<SubnetT>(value); }
    template<typename SubnetT = AnalysisComponent>
    Explanation& WithSubnet(SubnetT&& value) { SetSubnet(std::forward<SubnetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route table for the subnet.</p>
     */
    inline const AnalysisComponent& GetSubnetRouteTable() const { return m_subnetRouteTable; }
    inline bool SubnetRouteTableHasBeenSet() const { return m_subnetRouteTableHasBeenSet; }
    template<typename SubnetRouteTableT = AnalysisComponent>
    void SetSubnetRouteTable(SubnetRouteTableT&& value) { m_subnetRouteTableHasBeenSet = true; m_subnetRouteTable = std::forward<SubnetRouteTableT>(value); }
    template<typename SubnetRouteTableT = AnalysisComponent>
    Explanation& WithSubnetRouteTable(SubnetRouteTableT&& value) { SetSubnetRouteTable(std::forward<SubnetRouteTableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The component VPC.</p>
     */
    inline const AnalysisComponent& GetVpc() const { return m_vpc; }
    inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }
    template<typename VpcT = AnalysisComponent>
    void SetVpc(VpcT&& value) { m_vpcHasBeenSet = true; m_vpc = std::forward<VpcT>(value); }
    template<typename VpcT = AnalysisComponent>
    Explanation& WithVpc(VpcT&& value) { SetVpc(std::forward<VpcT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC endpoint.</p>
     */
    inline const AnalysisComponent& GetVpcEndpoint() const { return m_vpcEndpoint; }
    inline bool VpcEndpointHasBeenSet() const { return m_vpcEndpointHasBeenSet; }
    template<typename VpcEndpointT = AnalysisComponent>
    void SetVpcEndpoint(VpcEndpointT&& value) { m_vpcEndpointHasBeenSet = true; m_vpcEndpoint = std::forward<VpcEndpointT>(value); }
    template<typename VpcEndpointT = AnalysisComponent>
    Explanation& WithVpcEndpoint(VpcEndpointT&& value) { SetVpcEndpoint(std::forward<VpcEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPN connection.</p>
     */
    inline const AnalysisComponent& GetVpnConnection() const { return m_vpnConnection; }
    inline bool VpnConnectionHasBeenSet() const { return m_vpnConnectionHasBeenSet; }
    template<typename VpnConnectionT = AnalysisComponent>
    void SetVpnConnection(VpnConnectionT&& value) { m_vpnConnectionHasBeenSet = true; m_vpnConnection = std::forward<VpnConnectionT>(value); }
    template<typename VpnConnectionT = AnalysisComponent>
    Explanation& WithVpnConnection(VpnConnectionT&& value) { SetVpnConnection(std::forward<VpnConnectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPN gateway.</p>
     */
    inline const AnalysisComponent& GetVpnGateway() const { return m_vpnGateway; }
    inline bool VpnGatewayHasBeenSet() const { return m_vpnGatewayHasBeenSet; }
    template<typename VpnGatewayT = AnalysisComponent>
    void SetVpnGateway(VpnGatewayT&& value) { m_vpnGatewayHasBeenSet = true; m_vpnGateway = std::forward<VpnGatewayT>(value); }
    template<typename VpnGatewayT = AnalysisComponent>
    Explanation& WithVpnGateway(VpnGatewayT&& value) { SetVpnGateway(std::forward<VpnGatewayT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transit gateway.</p>
     */
    inline const AnalysisComponent& GetTransitGateway() const { return m_transitGateway; }
    inline bool TransitGatewayHasBeenSet() const { return m_transitGatewayHasBeenSet; }
    template<typename TransitGatewayT = AnalysisComponent>
    void SetTransitGateway(TransitGatewayT&& value) { m_transitGatewayHasBeenSet = true; m_transitGateway = std::forward<TransitGatewayT>(value); }
    template<typename TransitGatewayT = AnalysisComponent>
    Explanation& WithTransitGateway(TransitGatewayT&& value) { SetTransitGateway(std::forward<TransitGatewayT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transit gateway route table.</p>
     */
    inline const AnalysisComponent& GetTransitGatewayRouteTable() const { return m_transitGatewayRouteTable; }
    inline bool TransitGatewayRouteTableHasBeenSet() const { return m_transitGatewayRouteTableHasBeenSet; }
    template<typename TransitGatewayRouteTableT = AnalysisComponent>
    void SetTransitGatewayRouteTable(TransitGatewayRouteTableT&& value) { m_transitGatewayRouteTableHasBeenSet = true; m_transitGatewayRouteTable = std::forward<TransitGatewayRouteTableT>(value); }
    template<typename TransitGatewayRouteTableT = AnalysisComponent>
    Explanation& WithTransitGatewayRouteTable(TransitGatewayRouteTableT&& value) { SetTransitGatewayRouteTable(std::forward<TransitGatewayRouteTableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transit gateway route table route.</p>
     */
    inline const TransitGatewayRouteTableRoute& GetTransitGatewayRouteTableRoute() const { return m_transitGatewayRouteTableRoute; }
    inline bool TransitGatewayRouteTableRouteHasBeenSet() const { return m_transitGatewayRouteTableRouteHasBeenSet; }
    template<typename TransitGatewayRouteTableRouteT = TransitGatewayRouteTableRoute>
    void SetTransitGatewayRouteTableRoute(TransitGatewayRouteTableRouteT&& value) { m_transitGatewayRouteTableRouteHasBeenSet = true; m_transitGatewayRouteTableRoute = std::forward<TransitGatewayRouteTableRouteT>(value); }
    template<typename TransitGatewayRouteTableRouteT = TransitGatewayRouteTableRoute>
    Explanation& WithTransitGatewayRouteTableRoute(TransitGatewayRouteTableRouteT&& value) { SetTransitGatewayRouteTableRoute(std::forward<TransitGatewayRouteTableRouteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transit gateway attachment.</p>
     */
    inline const AnalysisComponent& GetTransitGatewayAttachment() const { return m_transitGatewayAttachment; }
    inline bool TransitGatewayAttachmentHasBeenSet() const { return m_transitGatewayAttachmentHasBeenSet; }
    template<typename TransitGatewayAttachmentT = AnalysisComponent>
    void SetTransitGatewayAttachment(TransitGatewayAttachmentT&& value) { m_transitGatewayAttachmentHasBeenSet = true; m_transitGatewayAttachment = std::forward<TransitGatewayAttachmentT>(value); }
    template<typename TransitGatewayAttachmentT = AnalysisComponent>
    Explanation& WithTransitGatewayAttachment(TransitGatewayAttachmentT&& value) { SetTransitGatewayAttachment(std::forward<TransitGatewayAttachmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account for the component.</p>
     */
    inline const Aws::String& GetComponentAccount() const { return m_componentAccount; }
    inline bool ComponentAccountHasBeenSet() const { return m_componentAccountHasBeenSet; }
    template<typename ComponentAccountT = Aws::String>
    void SetComponentAccount(ComponentAccountT&& value) { m_componentAccountHasBeenSet = true; m_componentAccount = std::forward<ComponentAccountT>(value); }
    template<typename ComponentAccountT = Aws::String>
    Explanation& WithComponentAccount(ComponentAccountT&& value) { SetComponentAccount(std::forward<ComponentAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region for the component.</p>
     */
    inline const Aws::String& GetComponentRegion() const { return m_componentRegion; }
    inline bool ComponentRegionHasBeenSet() const { return m_componentRegionHasBeenSet; }
    template<typename ComponentRegionT = Aws::String>
    void SetComponentRegion(ComponentRegionT&& value) { m_componentRegionHasBeenSet = true; m_componentRegion = std::forward<ComponentRegionT>(value); }
    template<typename ComponentRegionT = Aws::String>
    Explanation& WithComponentRegion(ComponentRegionT&& value) { SetComponentRegion(std::forward<ComponentRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Network Firewall stateless rule.</p>
     */
    inline const FirewallStatelessRule& GetFirewallStatelessRule() const { return m_firewallStatelessRule; }
    inline bool FirewallStatelessRuleHasBeenSet() const { return m_firewallStatelessRuleHasBeenSet; }
    template<typename FirewallStatelessRuleT = FirewallStatelessRule>
    void SetFirewallStatelessRule(FirewallStatelessRuleT&& value) { m_firewallStatelessRuleHasBeenSet = true; m_firewallStatelessRule = std::forward<FirewallStatelessRuleT>(value); }
    template<typename FirewallStatelessRuleT = FirewallStatelessRule>
    Explanation& WithFirewallStatelessRule(FirewallStatelessRuleT&& value) { SetFirewallStatelessRule(std::forward<FirewallStatelessRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Network Firewall stateful rule.</p>
     */
    inline const FirewallStatefulRule& GetFirewallStatefulRule() const { return m_firewallStatefulRule; }
    inline bool FirewallStatefulRuleHasBeenSet() const { return m_firewallStatefulRuleHasBeenSet; }
    template<typename FirewallStatefulRuleT = FirewallStatefulRule>
    void SetFirewallStatefulRule(FirewallStatefulRuleT&& value) { m_firewallStatefulRuleHasBeenSet = true; m_firewallStatefulRule = std::forward<FirewallStatefulRuleT>(value); }
    template<typename FirewallStatefulRuleT = FirewallStatefulRule>
    Explanation& WithFirewallStatefulRule(FirewallStatefulRuleT&& value) { SetFirewallStatefulRule(std::forward<FirewallStatefulRuleT>(value)); return *this;}
    ///@}
  private:

    AnalysisComponent m_acl;
    bool m_aclHasBeenSet = false;

    AnalysisAclRule m_aclRule;
    bool m_aclRuleHasBeenSet = false;

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    Aws::Vector<Aws::String> m_addresses;
    bool m_addressesHasBeenSet = false;

    AnalysisComponent m_attachedTo;
    bool m_attachedToHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZoneIds;
    bool m_availabilityZoneIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_cidrs;
    bool m_cidrsHasBeenSet = false;

    AnalysisComponent m_component;
    bool m_componentHasBeenSet = false;

    AnalysisComponent m_customerGateway;
    bool m_customerGatewayHasBeenSet = false;

    AnalysisComponent m_destination;
    bool m_destinationHasBeenSet = false;

    AnalysisComponent m_destinationVpc;
    bool m_destinationVpcHasBeenSet = false;

    Aws::String m_direction;
    bool m_directionHasBeenSet = false;

    Aws::String m_explanationCode;
    bool m_explanationCodeHasBeenSet = false;

    AnalysisComponent m_ingressRouteTable;
    bool m_ingressRouteTableHasBeenSet = false;

    AnalysisComponent m_internetGateway;
    bool m_internetGatewayHasBeenSet = false;

    Aws::String m_loadBalancerArn;
    bool m_loadBalancerArnHasBeenSet = false;

    AnalysisLoadBalancerListener m_classicLoadBalancerListener;
    bool m_classicLoadBalancerListenerHasBeenSet = false;

    int m_loadBalancerListenerPort{0};
    bool m_loadBalancerListenerPortHasBeenSet = false;

    AnalysisLoadBalancerTarget m_loadBalancerTarget;
    bool m_loadBalancerTargetHasBeenSet = false;

    AnalysisComponent m_loadBalancerTargetGroup;
    bool m_loadBalancerTargetGroupHasBeenSet = false;

    Aws::Vector<AnalysisComponent> m_loadBalancerTargetGroups;
    bool m_loadBalancerTargetGroupsHasBeenSet = false;

    int m_loadBalancerTargetPort{0};
    bool m_loadBalancerTargetPortHasBeenSet = false;

    AnalysisComponent m_elasticLoadBalancerListener;
    bool m_elasticLoadBalancerListenerHasBeenSet = false;

    Aws::String m_missingComponent;
    bool m_missingComponentHasBeenSet = false;

    AnalysisComponent m_natGateway;
    bool m_natGatewayHasBeenSet = false;

    AnalysisComponent m_networkInterface;
    bool m_networkInterfaceHasBeenSet = false;

    Aws::String m_packetField;
    bool m_packetFieldHasBeenSet = false;

    AnalysisComponent m_vpcPeeringConnection;
    bool m_vpcPeeringConnectionHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::Vector<PortRange> m_portRanges;
    bool m_portRangesHasBeenSet = false;

    AnalysisComponent m_prefixList;
    bool m_prefixListHasBeenSet = false;

    Aws::Vector<Aws::String> m_protocols;
    bool m_protocolsHasBeenSet = false;

    AnalysisRouteTableRoute m_routeTableRoute;
    bool m_routeTableRouteHasBeenSet = false;

    AnalysisComponent m_routeTable;
    bool m_routeTableHasBeenSet = false;

    AnalysisComponent m_securityGroup;
    bool m_securityGroupHasBeenSet = false;

    AnalysisSecurityGroupRule m_securityGroupRule;
    bool m_securityGroupRuleHasBeenSet = false;

    Aws::Vector<AnalysisComponent> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    AnalysisComponent m_sourceVpc;
    bool m_sourceVpcHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    AnalysisComponent m_subnet;
    bool m_subnetHasBeenSet = false;

    AnalysisComponent m_subnetRouteTable;
    bool m_subnetRouteTableHasBeenSet = false;

    AnalysisComponent m_vpc;
    bool m_vpcHasBeenSet = false;

    AnalysisComponent m_vpcEndpoint;
    bool m_vpcEndpointHasBeenSet = false;

    AnalysisComponent m_vpnConnection;
    bool m_vpnConnectionHasBeenSet = false;

    AnalysisComponent m_vpnGateway;
    bool m_vpnGatewayHasBeenSet = false;

    AnalysisComponent m_transitGateway;
    bool m_transitGatewayHasBeenSet = false;

    AnalysisComponent m_transitGatewayRouteTable;
    bool m_transitGatewayRouteTableHasBeenSet = false;

    TransitGatewayRouteTableRoute m_transitGatewayRouteTableRoute;
    bool m_transitGatewayRouteTableRouteHasBeenSet = false;

    AnalysisComponent m_transitGatewayAttachment;
    bool m_transitGatewayAttachmentHasBeenSet = false;

    Aws::String m_componentAccount;
    bool m_componentAccountHasBeenSet = false;

    Aws::String m_componentRegion;
    bool m_componentRegionHasBeenSet = false;

    FirewallStatelessRule m_firewallStatelessRule;
    bool m_firewallStatelessRuleHasBeenSet = false;

    FirewallStatefulRule m_firewallStatefulRule;
    bool m_firewallStatefulRuleHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
