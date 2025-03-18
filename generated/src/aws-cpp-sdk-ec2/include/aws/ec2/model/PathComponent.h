/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/AnalysisAclRule.h>
#include <aws/ec2/model/AnalysisComponent.h>
#include <aws/ec2/model/AnalysisPacketHeader.h>
#include <aws/ec2/model/AnalysisRouteTableRoute.h>
#include <aws/ec2/model/AnalysisSecurityGroupRule.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TransitGatewayRouteTableRoute.h>
#include <aws/ec2/model/FirewallStatelessRule.h>
#include <aws/ec2/model/FirewallStatefulRule.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AdditionalDetail.h>
#include <aws/ec2/model/Explanation.h>
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
   * <p>Describes a path component.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PathComponent">AWS
   * API Reference</a></p>
   */
  class PathComponent
  {
  public:
    AWS_EC2_API PathComponent() = default;
    AWS_EC2_API PathComponent(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PathComponent& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The sequence number.</p>
     */
    inline int GetSequenceNumber() const { return m_sequenceNumber; }
    inline bool SequenceNumberHasBeenSet() const { return m_sequenceNumberHasBeenSet; }
    inline void SetSequenceNumber(int value) { m_sequenceNumberHasBeenSet = true; m_sequenceNumber = value; }
    inline PathComponent& WithSequenceNumber(int value) { SetSequenceNumber(value); return *this;}
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
    PathComponent& WithAclRule(AclRuleT&& value) { SetAclRule(std::forward<AclRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource to which the path component is attached.</p>
     */
    inline const AnalysisComponent& GetAttachedTo() const { return m_attachedTo; }
    inline bool AttachedToHasBeenSet() const { return m_attachedToHasBeenSet; }
    template<typename AttachedToT = AnalysisComponent>
    void SetAttachedTo(AttachedToT&& value) { m_attachedToHasBeenSet = true; m_attachedTo = std::forward<AttachedToT>(value); }
    template<typename AttachedToT = AnalysisComponent>
    PathComponent& WithAttachedTo(AttachedToT&& value) { SetAttachedTo(std::forward<AttachedToT>(value)); return *this;}
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
    PathComponent& WithComponent(ComponentT&& value) { SetComponent(std::forward<ComponentT>(value)); return *this;}
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
    PathComponent& WithDestinationVpc(DestinationVpcT&& value) { SetDestinationVpc(std::forward<DestinationVpcT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outbound header.</p>
     */
    inline const AnalysisPacketHeader& GetOutboundHeader() const { return m_outboundHeader; }
    inline bool OutboundHeaderHasBeenSet() const { return m_outboundHeaderHasBeenSet; }
    template<typename OutboundHeaderT = AnalysisPacketHeader>
    void SetOutboundHeader(OutboundHeaderT&& value) { m_outboundHeaderHasBeenSet = true; m_outboundHeader = std::forward<OutboundHeaderT>(value); }
    template<typename OutboundHeaderT = AnalysisPacketHeader>
    PathComponent& WithOutboundHeader(OutboundHeaderT&& value) { SetOutboundHeader(std::forward<OutboundHeaderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inbound header.</p>
     */
    inline const AnalysisPacketHeader& GetInboundHeader() const { return m_inboundHeader; }
    inline bool InboundHeaderHasBeenSet() const { return m_inboundHeaderHasBeenSet; }
    template<typename InboundHeaderT = AnalysisPacketHeader>
    void SetInboundHeader(InboundHeaderT&& value) { m_inboundHeaderHasBeenSet = true; m_inboundHeader = std::forward<InboundHeaderT>(value); }
    template<typename InboundHeaderT = AnalysisPacketHeader>
    PathComponent& WithInboundHeader(InboundHeaderT&& value) { SetInboundHeader(std::forward<InboundHeaderT>(value)); return *this;}
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
    PathComponent& WithRouteTableRoute(RouteTableRouteT&& value) { SetRouteTableRoute(std::forward<RouteTableRouteT>(value)); return *this;}
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
    PathComponent& WithSecurityGroupRule(SecurityGroupRuleT&& value) { SetSecurityGroupRule(std::forward<SecurityGroupRuleT>(value)); return *this;}
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
    PathComponent& WithSourceVpc(SourceVpcT&& value) { SetSourceVpc(std::forward<SourceVpcT>(value)); return *this;}
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
    PathComponent& WithSubnet(SubnetT&& value) { SetSubnet(std::forward<SubnetT>(value)); return *this;}
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
    PathComponent& WithVpc(VpcT&& value) { SetVpc(std::forward<VpcT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The additional details.</p>
     */
    inline const Aws::Vector<AdditionalDetail>& GetAdditionalDetails() const { return m_additionalDetails; }
    inline bool AdditionalDetailsHasBeenSet() const { return m_additionalDetailsHasBeenSet; }
    template<typename AdditionalDetailsT = Aws::Vector<AdditionalDetail>>
    void SetAdditionalDetails(AdditionalDetailsT&& value) { m_additionalDetailsHasBeenSet = true; m_additionalDetails = std::forward<AdditionalDetailsT>(value); }
    template<typename AdditionalDetailsT = Aws::Vector<AdditionalDetail>>
    PathComponent& WithAdditionalDetails(AdditionalDetailsT&& value) { SetAdditionalDetails(std::forward<AdditionalDetailsT>(value)); return *this;}
    template<typename AdditionalDetailsT = AdditionalDetail>
    PathComponent& AddAdditionalDetails(AdditionalDetailsT&& value) { m_additionalDetailsHasBeenSet = true; m_additionalDetails.emplace_back(std::forward<AdditionalDetailsT>(value)); return *this; }
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
    PathComponent& WithTransitGateway(TransitGatewayT&& value) { SetTransitGateway(std::forward<TransitGatewayT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route in a transit gateway route table.</p>
     */
    inline const TransitGatewayRouteTableRoute& GetTransitGatewayRouteTableRoute() const { return m_transitGatewayRouteTableRoute; }
    inline bool TransitGatewayRouteTableRouteHasBeenSet() const { return m_transitGatewayRouteTableRouteHasBeenSet; }
    template<typename TransitGatewayRouteTableRouteT = TransitGatewayRouteTableRoute>
    void SetTransitGatewayRouteTableRoute(TransitGatewayRouteTableRouteT&& value) { m_transitGatewayRouteTableRouteHasBeenSet = true; m_transitGatewayRouteTableRoute = std::forward<TransitGatewayRouteTableRouteT>(value); }
    template<typename TransitGatewayRouteTableRouteT = TransitGatewayRouteTableRoute>
    PathComponent& WithTransitGatewayRouteTableRoute(TransitGatewayRouteTableRouteT&& value) { SetTransitGatewayRouteTableRoute(std::forward<TransitGatewayRouteTableRouteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The explanation codes.</p>
     */
    inline const Aws::Vector<Explanation>& GetExplanations() const { return m_explanations; }
    inline bool ExplanationsHasBeenSet() const { return m_explanationsHasBeenSet; }
    template<typename ExplanationsT = Aws::Vector<Explanation>>
    void SetExplanations(ExplanationsT&& value) { m_explanationsHasBeenSet = true; m_explanations = std::forward<ExplanationsT>(value); }
    template<typename ExplanationsT = Aws::Vector<Explanation>>
    PathComponent& WithExplanations(ExplanationsT&& value) { SetExplanations(std::forward<ExplanationsT>(value)); return *this;}
    template<typename ExplanationsT = Explanation>
    PathComponent& AddExplanations(ExplanationsT&& value) { m_explanationsHasBeenSet = true; m_explanations.emplace_back(std::forward<ExplanationsT>(value)); return *this; }
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
    PathComponent& WithElasticLoadBalancerListener(ElasticLoadBalancerListenerT&& value) { SetElasticLoadBalancerListener(std::forward<ElasticLoadBalancerListenerT>(value)); return *this;}
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
    PathComponent& WithFirewallStatelessRule(FirewallStatelessRuleT&& value) { SetFirewallStatelessRule(std::forward<FirewallStatelessRuleT>(value)); return *this;}
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
    PathComponent& WithFirewallStatefulRule(FirewallStatefulRuleT&& value) { SetFirewallStatefulRule(std::forward<FirewallStatefulRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the VPC endpoint service.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    PathComponent& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}
  private:

    int m_sequenceNumber{0};
    bool m_sequenceNumberHasBeenSet = false;

    AnalysisAclRule m_aclRule;
    bool m_aclRuleHasBeenSet = false;

    AnalysisComponent m_attachedTo;
    bool m_attachedToHasBeenSet = false;

    AnalysisComponent m_component;
    bool m_componentHasBeenSet = false;

    AnalysisComponent m_destinationVpc;
    bool m_destinationVpcHasBeenSet = false;

    AnalysisPacketHeader m_outboundHeader;
    bool m_outboundHeaderHasBeenSet = false;

    AnalysisPacketHeader m_inboundHeader;
    bool m_inboundHeaderHasBeenSet = false;

    AnalysisRouteTableRoute m_routeTableRoute;
    bool m_routeTableRouteHasBeenSet = false;

    AnalysisSecurityGroupRule m_securityGroupRule;
    bool m_securityGroupRuleHasBeenSet = false;

    AnalysisComponent m_sourceVpc;
    bool m_sourceVpcHasBeenSet = false;

    AnalysisComponent m_subnet;
    bool m_subnetHasBeenSet = false;

    AnalysisComponent m_vpc;
    bool m_vpcHasBeenSet = false;

    Aws::Vector<AdditionalDetail> m_additionalDetails;
    bool m_additionalDetailsHasBeenSet = false;

    AnalysisComponent m_transitGateway;
    bool m_transitGatewayHasBeenSet = false;

    TransitGatewayRouteTableRoute m_transitGatewayRouteTableRoute;
    bool m_transitGatewayRouteTableRouteHasBeenSet = false;

    Aws::Vector<Explanation> m_explanations;
    bool m_explanationsHasBeenSet = false;

    AnalysisComponent m_elasticLoadBalancerListener;
    bool m_elasticLoadBalancerListenerHasBeenSet = false;

    FirewallStatelessRule m_firewallStatelessRule;
    bool m_firewallStatelessRuleHasBeenSet = false;

    FirewallStatefulRule m_firewallStatefulRule;
    bool m_firewallStatefulRuleHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
