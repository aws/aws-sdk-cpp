﻿/**
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
    AWS_EC2_API Explanation();
    AWS_EC2_API Explanation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Explanation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The network ACL.</p>
     */
    inline const AnalysisComponent& GetAcl() const{ return m_acl; }
    inline bool AclHasBeenSet() const { return m_aclHasBeenSet; }
    inline void SetAcl(const AnalysisComponent& value) { m_aclHasBeenSet = true; m_acl = value; }
    inline void SetAcl(AnalysisComponent&& value) { m_aclHasBeenSet = true; m_acl = std::move(value); }
    inline Explanation& WithAcl(const AnalysisComponent& value) { SetAcl(value); return *this;}
    inline Explanation& WithAcl(AnalysisComponent&& value) { SetAcl(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network ACL rule.</p>
     */
    inline const AnalysisAclRule& GetAclRule() const{ return m_aclRule; }
    inline bool AclRuleHasBeenSet() const { return m_aclRuleHasBeenSet; }
    inline void SetAclRule(const AnalysisAclRule& value) { m_aclRuleHasBeenSet = true; m_aclRule = value; }
    inline void SetAclRule(AnalysisAclRule&& value) { m_aclRuleHasBeenSet = true; m_aclRule = std::move(value); }
    inline Explanation& WithAclRule(const AnalysisAclRule& value) { SetAclRule(value); return *this;}
    inline Explanation& WithAclRule(AnalysisAclRule&& value) { SetAclRule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 address, in CIDR notation.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }
    inline Explanation& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}
    inline Explanation& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}
    inline Explanation& WithAddress(const char* value) { SetAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 addresses, in CIDR notation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddresses() const{ return m_addresses; }
    inline bool AddressesHasBeenSet() const { return m_addressesHasBeenSet; }
    inline void SetAddresses(const Aws::Vector<Aws::String>& value) { m_addressesHasBeenSet = true; m_addresses = value; }
    inline void SetAddresses(Aws::Vector<Aws::String>&& value) { m_addressesHasBeenSet = true; m_addresses = std::move(value); }
    inline Explanation& WithAddresses(const Aws::Vector<Aws::String>& value) { SetAddresses(value); return *this;}
    inline Explanation& WithAddresses(Aws::Vector<Aws::String>&& value) { SetAddresses(std::move(value)); return *this;}
    inline Explanation& AddAddresses(const Aws::String& value) { m_addressesHasBeenSet = true; m_addresses.push_back(value); return *this; }
    inline Explanation& AddAddresses(Aws::String&& value) { m_addressesHasBeenSet = true; m_addresses.push_back(std::move(value)); return *this; }
    inline Explanation& AddAddresses(const char* value) { m_addressesHasBeenSet = true; m_addresses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resource to which the component is attached.</p>
     */
    inline const AnalysisComponent& GetAttachedTo() const{ return m_attachedTo; }
    inline bool AttachedToHasBeenSet() const { return m_attachedToHasBeenSet; }
    inline void SetAttachedTo(const AnalysisComponent& value) { m_attachedToHasBeenSet = true; m_attachedTo = value; }
    inline void SetAttachedTo(AnalysisComponent&& value) { m_attachedToHasBeenSet = true; m_attachedTo = std::move(value); }
    inline Explanation& WithAttachedTo(const AnalysisComponent& value) { SetAttachedTo(value); return *this;}
    inline Explanation& WithAttachedTo(AnalysisComponent&& value) { SetAttachedTo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zones.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }
    inline Explanation& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}
    inline Explanation& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}
    inline Explanation& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    inline Explanation& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }
    inline Explanation& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The CIDR ranges.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCidrs() const{ return m_cidrs; }
    inline bool CidrsHasBeenSet() const { return m_cidrsHasBeenSet; }
    inline void SetCidrs(const Aws::Vector<Aws::String>& value) { m_cidrsHasBeenSet = true; m_cidrs = value; }
    inline void SetCidrs(Aws::Vector<Aws::String>&& value) { m_cidrsHasBeenSet = true; m_cidrs = std::move(value); }
    inline Explanation& WithCidrs(const Aws::Vector<Aws::String>& value) { SetCidrs(value); return *this;}
    inline Explanation& WithCidrs(Aws::Vector<Aws::String>&& value) { SetCidrs(std::move(value)); return *this;}
    inline Explanation& AddCidrs(const Aws::String& value) { m_cidrsHasBeenSet = true; m_cidrs.push_back(value); return *this; }
    inline Explanation& AddCidrs(Aws::String&& value) { m_cidrsHasBeenSet = true; m_cidrs.push_back(std::move(value)); return *this; }
    inline Explanation& AddCidrs(const char* value) { m_cidrsHasBeenSet = true; m_cidrs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The component.</p>
     */
    inline const AnalysisComponent& GetComponent() const{ return m_component; }
    inline bool ComponentHasBeenSet() const { return m_componentHasBeenSet; }
    inline void SetComponent(const AnalysisComponent& value) { m_componentHasBeenSet = true; m_component = value; }
    inline void SetComponent(AnalysisComponent&& value) { m_componentHasBeenSet = true; m_component = std::move(value); }
    inline Explanation& WithComponent(const AnalysisComponent& value) { SetComponent(value); return *this;}
    inline Explanation& WithComponent(AnalysisComponent&& value) { SetComponent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer gateway.</p>
     */
    inline const AnalysisComponent& GetCustomerGateway() const{ return m_customerGateway; }
    inline bool CustomerGatewayHasBeenSet() const { return m_customerGatewayHasBeenSet; }
    inline void SetCustomerGateway(const AnalysisComponent& value) { m_customerGatewayHasBeenSet = true; m_customerGateway = value; }
    inline void SetCustomerGateway(AnalysisComponent&& value) { m_customerGatewayHasBeenSet = true; m_customerGateway = std::move(value); }
    inline Explanation& WithCustomerGateway(const AnalysisComponent& value) { SetCustomerGateway(value); return *this;}
    inline Explanation& WithCustomerGateway(AnalysisComponent&& value) { SetCustomerGateway(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination.</p>
     */
    inline const AnalysisComponent& GetDestination() const{ return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(const AnalysisComponent& value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline void SetDestination(AnalysisComponent&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }
    inline Explanation& WithDestination(const AnalysisComponent& value) { SetDestination(value); return *this;}
    inline Explanation& WithDestination(AnalysisComponent&& value) { SetDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination VPC.</p>
     */
    inline const AnalysisComponent& GetDestinationVpc() const{ return m_destinationVpc; }
    inline bool DestinationVpcHasBeenSet() const { return m_destinationVpcHasBeenSet; }
    inline void SetDestinationVpc(const AnalysisComponent& value) { m_destinationVpcHasBeenSet = true; m_destinationVpc = value; }
    inline void SetDestinationVpc(AnalysisComponent&& value) { m_destinationVpcHasBeenSet = true; m_destinationVpc = std::move(value); }
    inline Explanation& WithDestinationVpc(const AnalysisComponent& value) { SetDestinationVpc(value); return *this;}
    inline Explanation& WithDestinationVpc(AnalysisComponent&& value) { SetDestinationVpc(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The direction. The following are the possible values:</p> <ul> <li>
     * <p>egress</p> </li> <li> <p>ingress</p> </li> </ul>
     */
    inline const Aws::String& GetDirection() const{ return m_direction; }
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }
    inline void SetDirection(const Aws::String& value) { m_directionHasBeenSet = true; m_direction = value; }
    inline void SetDirection(Aws::String&& value) { m_directionHasBeenSet = true; m_direction = std::move(value); }
    inline void SetDirection(const char* value) { m_directionHasBeenSet = true; m_direction.assign(value); }
    inline Explanation& WithDirection(const Aws::String& value) { SetDirection(value); return *this;}
    inline Explanation& WithDirection(Aws::String&& value) { SetDirection(std::move(value)); return *this;}
    inline Explanation& WithDirection(const char* value) { SetDirection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The explanation code.</p>
     */
    inline const Aws::String& GetExplanationCode() const{ return m_explanationCode; }
    inline bool ExplanationCodeHasBeenSet() const { return m_explanationCodeHasBeenSet; }
    inline void SetExplanationCode(const Aws::String& value) { m_explanationCodeHasBeenSet = true; m_explanationCode = value; }
    inline void SetExplanationCode(Aws::String&& value) { m_explanationCodeHasBeenSet = true; m_explanationCode = std::move(value); }
    inline void SetExplanationCode(const char* value) { m_explanationCodeHasBeenSet = true; m_explanationCode.assign(value); }
    inline Explanation& WithExplanationCode(const Aws::String& value) { SetExplanationCode(value); return *this;}
    inline Explanation& WithExplanationCode(Aws::String&& value) { SetExplanationCode(std::move(value)); return *this;}
    inline Explanation& WithExplanationCode(const char* value) { SetExplanationCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route table.</p>
     */
    inline const AnalysisComponent& GetIngressRouteTable() const{ return m_ingressRouteTable; }
    inline bool IngressRouteTableHasBeenSet() const { return m_ingressRouteTableHasBeenSet; }
    inline void SetIngressRouteTable(const AnalysisComponent& value) { m_ingressRouteTableHasBeenSet = true; m_ingressRouteTable = value; }
    inline void SetIngressRouteTable(AnalysisComponent&& value) { m_ingressRouteTableHasBeenSet = true; m_ingressRouteTable = std::move(value); }
    inline Explanation& WithIngressRouteTable(const AnalysisComponent& value) { SetIngressRouteTable(value); return *this;}
    inline Explanation& WithIngressRouteTable(AnalysisComponent&& value) { SetIngressRouteTable(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The internet gateway.</p>
     */
    inline const AnalysisComponent& GetInternetGateway() const{ return m_internetGateway; }
    inline bool InternetGatewayHasBeenSet() const { return m_internetGatewayHasBeenSet; }
    inline void SetInternetGateway(const AnalysisComponent& value) { m_internetGatewayHasBeenSet = true; m_internetGateway = value; }
    inline void SetInternetGateway(AnalysisComponent&& value) { m_internetGatewayHasBeenSet = true; m_internetGateway = std::move(value); }
    inline Explanation& WithInternetGateway(const AnalysisComponent& value) { SetInternetGateway(value); return *this;}
    inline Explanation& WithInternetGateway(AnalysisComponent&& value) { SetInternetGateway(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerArn() const{ return m_loadBalancerArn; }
    inline bool LoadBalancerArnHasBeenSet() const { return m_loadBalancerArnHasBeenSet; }
    inline void SetLoadBalancerArn(const Aws::String& value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn = value; }
    inline void SetLoadBalancerArn(Aws::String&& value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn = std::move(value); }
    inline void SetLoadBalancerArn(const char* value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn.assign(value); }
    inline Explanation& WithLoadBalancerArn(const Aws::String& value) { SetLoadBalancerArn(value); return *this;}
    inline Explanation& WithLoadBalancerArn(Aws::String&& value) { SetLoadBalancerArn(std::move(value)); return *this;}
    inline Explanation& WithLoadBalancerArn(const char* value) { SetLoadBalancerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The listener for a Classic Load Balancer.</p>
     */
    inline const AnalysisLoadBalancerListener& GetClassicLoadBalancerListener() const{ return m_classicLoadBalancerListener; }
    inline bool ClassicLoadBalancerListenerHasBeenSet() const { return m_classicLoadBalancerListenerHasBeenSet; }
    inline void SetClassicLoadBalancerListener(const AnalysisLoadBalancerListener& value) { m_classicLoadBalancerListenerHasBeenSet = true; m_classicLoadBalancerListener = value; }
    inline void SetClassicLoadBalancerListener(AnalysisLoadBalancerListener&& value) { m_classicLoadBalancerListenerHasBeenSet = true; m_classicLoadBalancerListener = std::move(value); }
    inline Explanation& WithClassicLoadBalancerListener(const AnalysisLoadBalancerListener& value) { SetClassicLoadBalancerListener(value); return *this;}
    inline Explanation& WithClassicLoadBalancerListener(AnalysisLoadBalancerListener&& value) { SetClassicLoadBalancerListener(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The listener port of the load balancer.</p>
     */
    inline int GetLoadBalancerListenerPort() const{ return m_loadBalancerListenerPort; }
    inline bool LoadBalancerListenerPortHasBeenSet() const { return m_loadBalancerListenerPortHasBeenSet; }
    inline void SetLoadBalancerListenerPort(int value) { m_loadBalancerListenerPortHasBeenSet = true; m_loadBalancerListenerPort = value; }
    inline Explanation& WithLoadBalancerListenerPort(int value) { SetLoadBalancerListenerPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target.</p>
     */
    inline const AnalysisLoadBalancerTarget& GetLoadBalancerTarget() const{ return m_loadBalancerTarget; }
    inline bool LoadBalancerTargetHasBeenSet() const { return m_loadBalancerTargetHasBeenSet; }
    inline void SetLoadBalancerTarget(const AnalysisLoadBalancerTarget& value) { m_loadBalancerTargetHasBeenSet = true; m_loadBalancerTarget = value; }
    inline void SetLoadBalancerTarget(AnalysisLoadBalancerTarget&& value) { m_loadBalancerTargetHasBeenSet = true; m_loadBalancerTarget = std::move(value); }
    inline Explanation& WithLoadBalancerTarget(const AnalysisLoadBalancerTarget& value) { SetLoadBalancerTarget(value); return *this;}
    inline Explanation& WithLoadBalancerTarget(AnalysisLoadBalancerTarget&& value) { SetLoadBalancerTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target group.</p>
     */
    inline const AnalysisComponent& GetLoadBalancerTargetGroup() const{ return m_loadBalancerTargetGroup; }
    inline bool LoadBalancerTargetGroupHasBeenSet() const { return m_loadBalancerTargetGroupHasBeenSet; }
    inline void SetLoadBalancerTargetGroup(const AnalysisComponent& value) { m_loadBalancerTargetGroupHasBeenSet = true; m_loadBalancerTargetGroup = value; }
    inline void SetLoadBalancerTargetGroup(AnalysisComponent&& value) { m_loadBalancerTargetGroupHasBeenSet = true; m_loadBalancerTargetGroup = std::move(value); }
    inline Explanation& WithLoadBalancerTargetGroup(const AnalysisComponent& value) { SetLoadBalancerTargetGroup(value); return *this;}
    inline Explanation& WithLoadBalancerTargetGroup(AnalysisComponent&& value) { SetLoadBalancerTargetGroup(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target groups.</p>
     */
    inline const Aws::Vector<AnalysisComponent>& GetLoadBalancerTargetGroups() const{ return m_loadBalancerTargetGroups; }
    inline bool LoadBalancerTargetGroupsHasBeenSet() const { return m_loadBalancerTargetGroupsHasBeenSet; }
    inline void SetLoadBalancerTargetGroups(const Aws::Vector<AnalysisComponent>& value) { m_loadBalancerTargetGroupsHasBeenSet = true; m_loadBalancerTargetGroups = value; }
    inline void SetLoadBalancerTargetGroups(Aws::Vector<AnalysisComponent>&& value) { m_loadBalancerTargetGroupsHasBeenSet = true; m_loadBalancerTargetGroups = std::move(value); }
    inline Explanation& WithLoadBalancerTargetGroups(const Aws::Vector<AnalysisComponent>& value) { SetLoadBalancerTargetGroups(value); return *this;}
    inline Explanation& WithLoadBalancerTargetGroups(Aws::Vector<AnalysisComponent>&& value) { SetLoadBalancerTargetGroups(std::move(value)); return *this;}
    inline Explanation& AddLoadBalancerTargetGroups(const AnalysisComponent& value) { m_loadBalancerTargetGroupsHasBeenSet = true; m_loadBalancerTargetGroups.push_back(value); return *this; }
    inline Explanation& AddLoadBalancerTargetGroups(AnalysisComponent&& value) { m_loadBalancerTargetGroupsHasBeenSet = true; m_loadBalancerTargetGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The target port.</p>
     */
    inline int GetLoadBalancerTargetPort() const{ return m_loadBalancerTargetPort; }
    inline bool LoadBalancerTargetPortHasBeenSet() const { return m_loadBalancerTargetPortHasBeenSet; }
    inline void SetLoadBalancerTargetPort(int value) { m_loadBalancerTargetPortHasBeenSet = true; m_loadBalancerTargetPort = value; }
    inline Explanation& WithLoadBalancerTargetPort(int value) { SetLoadBalancerTargetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The load balancer listener.</p>
     */
    inline const AnalysisComponent& GetElasticLoadBalancerListener() const{ return m_elasticLoadBalancerListener; }
    inline bool ElasticLoadBalancerListenerHasBeenSet() const { return m_elasticLoadBalancerListenerHasBeenSet; }
    inline void SetElasticLoadBalancerListener(const AnalysisComponent& value) { m_elasticLoadBalancerListenerHasBeenSet = true; m_elasticLoadBalancerListener = value; }
    inline void SetElasticLoadBalancerListener(AnalysisComponent&& value) { m_elasticLoadBalancerListenerHasBeenSet = true; m_elasticLoadBalancerListener = std::move(value); }
    inline Explanation& WithElasticLoadBalancerListener(const AnalysisComponent& value) { SetElasticLoadBalancerListener(value); return *this;}
    inline Explanation& WithElasticLoadBalancerListener(AnalysisComponent&& value) { SetElasticLoadBalancerListener(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The missing component.</p>
     */
    inline const Aws::String& GetMissingComponent() const{ return m_missingComponent; }
    inline bool MissingComponentHasBeenSet() const { return m_missingComponentHasBeenSet; }
    inline void SetMissingComponent(const Aws::String& value) { m_missingComponentHasBeenSet = true; m_missingComponent = value; }
    inline void SetMissingComponent(Aws::String&& value) { m_missingComponentHasBeenSet = true; m_missingComponent = std::move(value); }
    inline void SetMissingComponent(const char* value) { m_missingComponentHasBeenSet = true; m_missingComponent.assign(value); }
    inline Explanation& WithMissingComponent(const Aws::String& value) { SetMissingComponent(value); return *this;}
    inline Explanation& WithMissingComponent(Aws::String&& value) { SetMissingComponent(std::move(value)); return *this;}
    inline Explanation& WithMissingComponent(const char* value) { SetMissingComponent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The NAT gateway.</p>
     */
    inline const AnalysisComponent& GetNatGateway() const{ return m_natGateway; }
    inline bool NatGatewayHasBeenSet() const { return m_natGatewayHasBeenSet; }
    inline void SetNatGateway(const AnalysisComponent& value) { m_natGatewayHasBeenSet = true; m_natGateway = value; }
    inline void SetNatGateway(AnalysisComponent&& value) { m_natGatewayHasBeenSet = true; m_natGateway = std::move(value); }
    inline Explanation& WithNatGateway(const AnalysisComponent& value) { SetNatGateway(value); return *this;}
    inline Explanation& WithNatGateway(AnalysisComponent&& value) { SetNatGateway(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network interface.</p>
     */
    inline const AnalysisComponent& GetNetworkInterface() const{ return m_networkInterface; }
    inline bool NetworkInterfaceHasBeenSet() const { return m_networkInterfaceHasBeenSet; }
    inline void SetNetworkInterface(const AnalysisComponent& value) { m_networkInterfaceHasBeenSet = true; m_networkInterface = value; }
    inline void SetNetworkInterface(AnalysisComponent&& value) { m_networkInterfaceHasBeenSet = true; m_networkInterface = std::move(value); }
    inline Explanation& WithNetworkInterface(const AnalysisComponent& value) { SetNetworkInterface(value); return *this;}
    inline Explanation& WithNetworkInterface(AnalysisComponent&& value) { SetNetworkInterface(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The packet field.</p>
     */
    inline const Aws::String& GetPacketField() const{ return m_packetField; }
    inline bool PacketFieldHasBeenSet() const { return m_packetFieldHasBeenSet; }
    inline void SetPacketField(const Aws::String& value) { m_packetFieldHasBeenSet = true; m_packetField = value; }
    inline void SetPacketField(Aws::String&& value) { m_packetFieldHasBeenSet = true; m_packetField = std::move(value); }
    inline void SetPacketField(const char* value) { m_packetFieldHasBeenSet = true; m_packetField.assign(value); }
    inline Explanation& WithPacketField(const Aws::String& value) { SetPacketField(value); return *this;}
    inline Explanation& WithPacketField(Aws::String&& value) { SetPacketField(std::move(value)); return *this;}
    inline Explanation& WithPacketField(const char* value) { SetPacketField(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC peering connection.</p>
     */
    inline const AnalysisComponent& GetVpcPeeringConnection() const{ return m_vpcPeeringConnection; }
    inline bool VpcPeeringConnectionHasBeenSet() const { return m_vpcPeeringConnectionHasBeenSet; }
    inline void SetVpcPeeringConnection(const AnalysisComponent& value) { m_vpcPeeringConnectionHasBeenSet = true; m_vpcPeeringConnection = value; }
    inline void SetVpcPeeringConnection(AnalysisComponent&& value) { m_vpcPeeringConnectionHasBeenSet = true; m_vpcPeeringConnection = std::move(value); }
    inline Explanation& WithVpcPeeringConnection(const AnalysisComponent& value) { SetVpcPeeringConnection(value); return *this;}
    inline Explanation& WithVpcPeeringConnection(AnalysisComponent&& value) { SetVpcPeeringConnection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline Explanation& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port ranges.</p>
     */
    inline const Aws::Vector<PortRange>& GetPortRanges() const{ return m_portRanges; }
    inline bool PortRangesHasBeenSet() const { return m_portRangesHasBeenSet; }
    inline void SetPortRanges(const Aws::Vector<PortRange>& value) { m_portRangesHasBeenSet = true; m_portRanges = value; }
    inline void SetPortRanges(Aws::Vector<PortRange>&& value) { m_portRangesHasBeenSet = true; m_portRanges = std::move(value); }
    inline Explanation& WithPortRanges(const Aws::Vector<PortRange>& value) { SetPortRanges(value); return *this;}
    inline Explanation& WithPortRanges(Aws::Vector<PortRange>&& value) { SetPortRanges(std::move(value)); return *this;}
    inline Explanation& AddPortRanges(const PortRange& value) { m_portRangesHasBeenSet = true; m_portRanges.push_back(value); return *this; }
    inline Explanation& AddPortRanges(PortRange&& value) { m_portRangesHasBeenSet = true; m_portRanges.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The prefix list.</p>
     */
    inline const AnalysisComponent& GetPrefixList() const{ return m_prefixList; }
    inline bool PrefixListHasBeenSet() const { return m_prefixListHasBeenSet; }
    inline void SetPrefixList(const AnalysisComponent& value) { m_prefixListHasBeenSet = true; m_prefixList = value; }
    inline void SetPrefixList(AnalysisComponent&& value) { m_prefixListHasBeenSet = true; m_prefixList = std::move(value); }
    inline Explanation& WithPrefixList(const AnalysisComponent& value) { SetPrefixList(value); return *this;}
    inline Explanation& WithPrefixList(AnalysisComponent&& value) { SetPrefixList(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocols.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProtocols() const{ return m_protocols; }
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }
    inline void SetProtocols(const Aws::Vector<Aws::String>& value) { m_protocolsHasBeenSet = true; m_protocols = value; }
    inline void SetProtocols(Aws::Vector<Aws::String>&& value) { m_protocolsHasBeenSet = true; m_protocols = std::move(value); }
    inline Explanation& WithProtocols(const Aws::Vector<Aws::String>& value) { SetProtocols(value); return *this;}
    inline Explanation& WithProtocols(Aws::Vector<Aws::String>&& value) { SetProtocols(std::move(value)); return *this;}
    inline Explanation& AddProtocols(const Aws::String& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }
    inline Explanation& AddProtocols(Aws::String&& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(std::move(value)); return *this; }
    inline Explanation& AddProtocols(const char* value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The route table route.</p>
     */
    inline const AnalysisRouteTableRoute& GetRouteTableRoute() const{ return m_routeTableRoute; }
    inline bool RouteTableRouteHasBeenSet() const { return m_routeTableRouteHasBeenSet; }
    inline void SetRouteTableRoute(const AnalysisRouteTableRoute& value) { m_routeTableRouteHasBeenSet = true; m_routeTableRoute = value; }
    inline void SetRouteTableRoute(AnalysisRouteTableRoute&& value) { m_routeTableRouteHasBeenSet = true; m_routeTableRoute = std::move(value); }
    inline Explanation& WithRouteTableRoute(const AnalysisRouteTableRoute& value) { SetRouteTableRoute(value); return *this;}
    inline Explanation& WithRouteTableRoute(AnalysisRouteTableRoute&& value) { SetRouteTableRoute(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route table.</p>
     */
    inline const AnalysisComponent& GetRouteTable() const{ return m_routeTable; }
    inline bool RouteTableHasBeenSet() const { return m_routeTableHasBeenSet; }
    inline void SetRouteTable(const AnalysisComponent& value) { m_routeTableHasBeenSet = true; m_routeTable = value; }
    inline void SetRouteTable(AnalysisComponent&& value) { m_routeTableHasBeenSet = true; m_routeTable = std::move(value); }
    inline Explanation& WithRouteTable(const AnalysisComponent& value) { SetRouteTable(value); return *this;}
    inline Explanation& WithRouteTable(AnalysisComponent&& value) { SetRouteTable(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security group.</p>
     */
    inline const AnalysisComponent& GetSecurityGroup() const{ return m_securityGroup; }
    inline bool SecurityGroupHasBeenSet() const { return m_securityGroupHasBeenSet; }
    inline void SetSecurityGroup(const AnalysisComponent& value) { m_securityGroupHasBeenSet = true; m_securityGroup = value; }
    inline void SetSecurityGroup(AnalysisComponent&& value) { m_securityGroupHasBeenSet = true; m_securityGroup = std::move(value); }
    inline Explanation& WithSecurityGroup(const AnalysisComponent& value) { SetSecurityGroup(value); return *this;}
    inline Explanation& WithSecurityGroup(AnalysisComponent&& value) { SetSecurityGroup(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security group rule.</p>
     */
    inline const AnalysisSecurityGroupRule& GetSecurityGroupRule() const{ return m_securityGroupRule; }
    inline bool SecurityGroupRuleHasBeenSet() const { return m_securityGroupRuleHasBeenSet; }
    inline void SetSecurityGroupRule(const AnalysisSecurityGroupRule& value) { m_securityGroupRuleHasBeenSet = true; m_securityGroupRule = value; }
    inline void SetSecurityGroupRule(AnalysisSecurityGroupRule&& value) { m_securityGroupRuleHasBeenSet = true; m_securityGroupRule = std::move(value); }
    inline Explanation& WithSecurityGroupRule(const AnalysisSecurityGroupRule& value) { SetSecurityGroupRule(value); return *this;}
    inline Explanation& WithSecurityGroupRule(AnalysisSecurityGroupRule&& value) { SetSecurityGroupRule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security groups.</p>
     */
    inline const Aws::Vector<AnalysisComponent>& GetSecurityGroups() const{ return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    inline void SetSecurityGroups(const Aws::Vector<AnalysisComponent>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<AnalysisComponent>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }
    inline Explanation& WithSecurityGroups(const Aws::Vector<AnalysisComponent>& value) { SetSecurityGroups(value); return *this;}
    inline Explanation& WithSecurityGroups(Aws::Vector<AnalysisComponent>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline Explanation& AddSecurityGroups(const AnalysisComponent& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    inline Explanation& AddSecurityGroups(AnalysisComponent&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The source VPC.</p>
     */
    inline const AnalysisComponent& GetSourceVpc() const{ return m_sourceVpc; }
    inline bool SourceVpcHasBeenSet() const { return m_sourceVpcHasBeenSet; }
    inline void SetSourceVpc(const AnalysisComponent& value) { m_sourceVpcHasBeenSet = true; m_sourceVpc = value; }
    inline void SetSourceVpc(AnalysisComponent&& value) { m_sourceVpcHasBeenSet = true; m_sourceVpc = std::move(value); }
    inline Explanation& WithSourceVpc(const AnalysisComponent& value) { SetSourceVpc(value); return *this;}
    inline Explanation& WithSourceVpc(AnalysisComponent&& value) { SetSourceVpc(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }
    inline Explanation& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline Explanation& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline Explanation& WithState(const char* value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet.</p>
     */
    inline const AnalysisComponent& GetSubnet() const{ return m_subnet; }
    inline bool SubnetHasBeenSet() const { return m_subnetHasBeenSet; }
    inline void SetSubnet(const AnalysisComponent& value) { m_subnetHasBeenSet = true; m_subnet = value; }
    inline void SetSubnet(AnalysisComponent&& value) { m_subnetHasBeenSet = true; m_subnet = std::move(value); }
    inline Explanation& WithSubnet(const AnalysisComponent& value) { SetSubnet(value); return *this;}
    inline Explanation& WithSubnet(AnalysisComponent&& value) { SetSubnet(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route table for the subnet.</p>
     */
    inline const AnalysisComponent& GetSubnetRouteTable() const{ return m_subnetRouteTable; }
    inline bool SubnetRouteTableHasBeenSet() const { return m_subnetRouteTableHasBeenSet; }
    inline void SetSubnetRouteTable(const AnalysisComponent& value) { m_subnetRouteTableHasBeenSet = true; m_subnetRouteTable = value; }
    inline void SetSubnetRouteTable(AnalysisComponent&& value) { m_subnetRouteTableHasBeenSet = true; m_subnetRouteTable = std::move(value); }
    inline Explanation& WithSubnetRouteTable(const AnalysisComponent& value) { SetSubnetRouteTable(value); return *this;}
    inline Explanation& WithSubnetRouteTable(AnalysisComponent&& value) { SetSubnetRouteTable(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The component VPC.</p>
     */
    inline const AnalysisComponent& GetVpc() const{ return m_vpc; }
    inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }
    inline void SetVpc(const AnalysisComponent& value) { m_vpcHasBeenSet = true; m_vpc = value; }
    inline void SetVpc(AnalysisComponent&& value) { m_vpcHasBeenSet = true; m_vpc = std::move(value); }
    inline Explanation& WithVpc(const AnalysisComponent& value) { SetVpc(value); return *this;}
    inline Explanation& WithVpc(AnalysisComponent&& value) { SetVpc(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC endpoint.</p>
     */
    inline const AnalysisComponent& GetVpcEndpoint() const{ return m_vpcEndpoint; }
    inline bool VpcEndpointHasBeenSet() const { return m_vpcEndpointHasBeenSet; }
    inline void SetVpcEndpoint(const AnalysisComponent& value) { m_vpcEndpointHasBeenSet = true; m_vpcEndpoint = value; }
    inline void SetVpcEndpoint(AnalysisComponent&& value) { m_vpcEndpointHasBeenSet = true; m_vpcEndpoint = std::move(value); }
    inline Explanation& WithVpcEndpoint(const AnalysisComponent& value) { SetVpcEndpoint(value); return *this;}
    inline Explanation& WithVpcEndpoint(AnalysisComponent&& value) { SetVpcEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPN connection.</p>
     */
    inline const AnalysisComponent& GetVpnConnection() const{ return m_vpnConnection; }
    inline bool VpnConnectionHasBeenSet() const { return m_vpnConnectionHasBeenSet; }
    inline void SetVpnConnection(const AnalysisComponent& value) { m_vpnConnectionHasBeenSet = true; m_vpnConnection = value; }
    inline void SetVpnConnection(AnalysisComponent&& value) { m_vpnConnectionHasBeenSet = true; m_vpnConnection = std::move(value); }
    inline Explanation& WithVpnConnection(const AnalysisComponent& value) { SetVpnConnection(value); return *this;}
    inline Explanation& WithVpnConnection(AnalysisComponent&& value) { SetVpnConnection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPN gateway.</p>
     */
    inline const AnalysisComponent& GetVpnGateway() const{ return m_vpnGateway; }
    inline bool VpnGatewayHasBeenSet() const { return m_vpnGatewayHasBeenSet; }
    inline void SetVpnGateway(const AnalysisComponent& value) { m_vpnGatewayHasBeenSet = true; m_vpnGateway = value; }
    inline void SetVpnGateway(AnalysisComponent&& value) { m_vpnGatewayHasBeenSet = true; m_vpnGateway = std::move(value); }
    inline Explanation& WithVpnGateway(const AnalysisComponent& value) { SetVpnGateway(value); return *this;}
    inline Explanation& WithVpnGateway(AnalysisComponent&& value) { SetVpnGateway(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transit gateway.</p>
     */
    inline const AnalysisComponent& GetTransitGateway() const{ return m_transitGateway; }
    inline bool TransitGatewayHasBeenSet() const { return m_transitGatewayHasBeenSet; }
    inline void SetTransitGateway(const AnalysisComponent& value) { m_transitGatewayHasBeenSet = true; m_transitGateway = value; }
    inline void SetTransitGateway(AnalysisComponent&& value) { m_transitGatewayHasBeenSet = true; m_transitGateway = std::move(value); }
    inline Explanation& WithTransitGateway(const AnalysisComponent& value) { SetTransitGateway(value); return *this;}
    inline Explanation& WithTransitGateway(AnalysisComponent&& value) { SetTransitGateway(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transit gateway route table.</p>
     */
    inline const AnalysisComponent& GetTransitGatewayRouteTable() const{ return m_transitGatewayRouteTable; }
    inline bool TransitGatewayRouteTableHasBeenSet() const { return m_transitGatewayRouteTableHasBeenSet; }
    inline void SetTransitGatewayRouteTable(const AnalysisComponent& value) { m_transitGatewayRouteTableHasBeenSet = true; m_transitGatewayRouteTable = value; }
    inline void SetTransitGatewayRouteTable(AnalysisComponent&& value) { m_transitGatewayRouteTableHasBeenSet = true; m_transitGatewayRouteTable = std::move(value); }
    inline Explanation& WithTransitGatewayRouteTable(const AnalysisComponent& value) { SetTransitGatewayRouteTable(value); return *this;}
    inline Explanation& WithTransitGatewayRouteTable(AnalysisComponent&& value) { SetTransitGatewayRouteTable(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transit gateway route table route.</p>
     */
    inline const TransitGatewayRouteTableRoute& GetTransitGatewayRouteTableRoute() const{ return m_transitGatewayRouteTableRoute; }
    inline bool TransitGatewayRouteTableRouteHasBeenSet() const { return m_transitGatewayRouteTableRouteHasBeenSet; }
    inline void SetTransitGatewayRouteTableRoute(const TransitGatewayRouteTableRoute& value) { m_transitGatewayRouteTableRouteHasBeenSet = true; m_transitGatewayRouteTableRoute = value; }
    inline void SetTransitGatewayRouteTableRoute(TransitGatewayRouteTableRoute&& value) { m_transitGatewayRouteTableRouteHasBeenSet = true; m_transitGatewayRouteTableRoute = std::move(value); }
    inline Explanation& WithTransitGatewayRouteTableRoute(const TransitGatewayRouteTableRoute& value) { SetTransitGatewayRouteTableRoute(value); return *this;}
    inline Explanation& WithTransitGatewayRouteTableRoute(TransitGatewayRouteTableRoute&& value) { SetTransitGatewayRouteTableRoute(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transit gateway attachment.</p>
     */
    inline const AnalysisComponent& GetTransitGatewayAttachment() const{ return m_transitGatewayAttachment; }
    inline bool TransitGatewayAttachmentHasBeenSet() const { return m_transitGatewayAttachmentHasBeenSet; }
    inline void SetTransitGatewayAttachment(const AnalysisComponent& value) { m_transitGatewayAttachmentHasBeenSet = true; m_transitGatewayAttachment = value; }
    inline void SetTransitGatewayAttachment(AnalysisComponent&& value) { m_transitGatewayAttachmentHasBeenSet = true; m_transitGatewayAttachment = std::move(value); }
    inline Explanation& WithTransitGatewayAttachment(const AnalysisComponent& value) { SetTransitGatewayAttachment(value); return *this;}
    inline Explanation& WithTransitGatewayAttachment(AnalysisComponent&& value) { SetTransitGatewayAttachment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account for the component.</p>
     */
    inline const Aws::String& GetComponentAccount() const{ return m_componentAccount; }
    inline bool ComponentAccountHasBeenSet() const { return m_componentAccountHasBeenSet; }
    inline void SetComponentAccount(const Aws::String& value) { m_componentAccountHasBeenSet = true; m_componentAccount = value; }
    inline void SetComponentAccount(Aws::String&& value) { m_componentAccountHasBeenSet = true; m_componentAccount = std::move(value); }
    inline void SetComponentAccount(const char* value) { m_componentAccountHasBeenSet = true; m_componentAccount.assign(value); }
    inline Explanation& WithComponentAccount(const Aws::String& value) { SetComponentAccount(value); return *this;}
    inline Explanation& WithComponentAccount(Aws::String&& value) { SetComponentAccount(std::move(value)); return *this;}
    inline Explanation& WithComponentAccount(const char* value) { SetComponentAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region for the component.</p>
     */
    inline const Aws::String& GetComponentRegion() const{ return m_componentRegion; }
    inline bool ComponentRegionHasBeenSet() const { return m_componentRegionHasBeenSet; }
    inline void SetComponentRegion(const Aws::String& value) { m_componentRegionHasBeenSet = true; m_componentRegion = value; }
    inline void SetComponentRegion(Aws::String&& value) { m_componentRegionHasBeenSet = true; m_componentRegion = std::move(value); }
    inline void SetComponentRegion(const char* value) { m_componentRegionHasBeenSet = true; m_componentRegion.assign(value); }
    inline Explanation& WithComponentRegion(const Aws::String& value) { SetComponentRegion(value); return *this;}
    inline Explanation& WithComponentRegion(Aws::String&& value) { SetComponentRegion(std::move(value)); return *this;}
    inline Explanation& WithComponentRegion(const char* value) { SetComponentRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Network Firewall stateless rule.</p>
     */
    inline const FirewallStatelessRule& GetFirewallStatelessRule() const{ return m_firewallStatelessRule; }
    inline bool FirewallStatelessRuleHasBeenSet() const { return m_firewallStatelessRuleHasBeenSet; }
    inline void SetFirewallStatelessRule(const FirewallStatelessRule& value) { m_firewallStatelessRuleHasBeenSet = true; m_firewallStatelessRule = value; }
    inline void SetFirewallStatelessRule(FirewallStatelessRule&& value) { m_firewallStatelessRuleHasBeenSet = true; m_firewallStatelessRule = std::move(value); }
    inline Explanation& WithFirewallStatelessRule(const FirewallStatelessRule& value) { SetFirewallStatelessRule(value); return *this;}
    inline Explanation& WithFirewallStatelessRule(FirewallStatelessRule&& value) { SetFirewallStatelessRule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Network Firewall stateful rule.</p>
     */
    inline const FirewallStatefulRule& GetFirewallStatefulRule() const{ return m_firewallStatefulRule; }
    inline bool FirewallStatefulRuleHasBeenSet() const { return m_firewallStatefulRuleHasBeenSet; }
    inline void SetFirewallStatefulRule(const FirewallStatefulRule& value) { m_firewallStatefulRuleHasBeenSet = true; m_firewallStatefulRule = value; }
    inline void SetFirewallStatefulRule(FirewallStatefulRule&& value) { m_firewallStatefulRuleHasBeenSet = true; m_firewallStatefulRule = std::move(value); }
    inline Explanation& WithFirewallStatefulRule(const FirewallStatefulRule& value) { SetFirewallStatefulRule(value); return *this;}
    inline Explanation& WithFirewallStatefulRule(FirewallStatefulRule&& value) { SetFirewallStatefulRule(std::move(value)); return *this;}
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

    int m_loadBalancerListenerPort;
    bool m_loadBalancerListenerPortHasBeenSet = false;

    AnalysisLoadBalancerTarget m_loadBalancerTarget;
    bool m_loadBalancerTargetHasBeenSet = false;

    AnalysisComponent m_loadBalancerTargetGroup;
    bool m_loadBalancerTargetGroupHasBeenSet = false;

    Aws::Vector<AnalysisComponent> m_loadBalancerTargetGroups;
    bool m_loadBalancerTargetGroupsHasBeenSet = false;

    int m_loadBalancerTargetPort;
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

    int m_port;
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
