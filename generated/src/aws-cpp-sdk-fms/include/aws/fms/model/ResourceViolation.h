/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/AwsVPCSecurityGroupViolation.h>
#include <aws/fms/model/AwsEc2NetworkInterfaceViolation.h>
#include <aws/fms/model/AwsEc2InstanceViolation.h>
#include <aws/fms/model/NetworkFirewallMissingFirewallViolation.h>
#include <aws/fms/model/NetworkFirewallMissingSubnetViolation.h>
#include <aws/fms/model/NetworkFirewallMissingExpectedRTViolation.h>
#include <aws/fms/model/NetworkFirewallPolicyModifiedViolation.h>
#include <aws/fms/model/NetworkFirewallInternetTrafficNotInspectedViolation.h>
#include <aws/fms/model/NetworkFirewallInvalidRouteConfigurationViolation.h>
#include <aws/fms/model/NetworkFirewallBlackHoleRouteDetectedViolation.h>
#include <aws/fms/model/NetworkFirewallUnexpectedFirewallRoutesViolation.h>
#include <aws/fms/model/NetworkFirewallUnexpectedGatewayRoutesViolation.h>
#include <aws/fms/model/NetworkFirewallMissingExpectedRoutesViolation.h>
#include <aws/fms/model/DnsRuleGroupPriorityConflictViolation.h>
#include <aws/fms/model/DnsDuplicateRuleGroupViolation.h>
#include <aws/fms/model/DnsRuleGroupLimitExceededViolation.h>
#include <aws/fms/model/FirewallSubnetIsOutOfScopeViolation.h>
#include <aws/fms/model/RouteHasOutOfScopeEndpointViolation.h>
#include <aws/fms/model/ThirdPartyFirewallMissingFirewallViolation.h>
#include <aws/fms/model/ThirdPartyFirewallMissingSubnetViolation.h>
#include <aws/fms/model/ThirdPartyFirewallMissingExpectedRouteTableViolation.h>
#include <aws/fms/model/FirewallSubnetMissingVPCEndpointViolation.h>
#include <aws/fms/model/InvalidNetworkAclEntriesViolation.h>
#include <aws/fms/model/PossibleRemediationActions.h>
#include <aws/fms/model/WebACLHasIncompatibleConfigurationViolation.h>
#include <aws/fms/model/WebACLHasOutOfScopeResourcesViolation.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FMS
{
namespace Model
{

  /**
   * <p>Violation detail based on resource type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ResourceViolation">AWS
   * API Reference</a></p>
   */
  class ResourceViolation
  {
  public:
    AWS_FMS_API ResourceViolation() = default;
    AWS_FMS_API ResourceViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API ResourceViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Violation detail for security groups.</p>
     */
    inline const AwsVPCSecurityGroupViolation& GetAwsVPCSecurityGroupViolation() const { return m_awsVPCSecurityGroupViolation; }
    inline bool AwsVPCSecurityGroupViolationHasBeenSet() const { return m_awsVPCSecurityGroupViolationHasBeenSet; }
    template<typename AwsVPCSecurityGroupViolationT = AwsVPCSecurityGroupViolation>
    void SetAwsVPCSecurityGroupViolation(AwsVPCSecurityGroupViolationT&& value) { m_awsVPCSecurityGroupViolationHasBeenSet = true; m_awsVPCSecurityGroupViolation = std::forward<AwsVPCSecurityGroupViolationT>(value); }
    template<typename AwsVPCSecurityGroupViolationT = AwsVPCSecurityGroupViolation>
    ResourceViolation& WithAwsVPCSecurityGroupViolation(AwsVPCSecurityGroupViolationT&& value) { SetAwsVPCSecurityGroupViolation(std::forward<AwsVPCSecurityGroupViolationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Violation detail for a network interface.</p>
     */
    inline const AwsEc2NetworkInterfaceViolation& GetAwsEc2NetworkInterfaceViolation() const { return m_awsEc2NetworkInterfaceViolation; }
    inline bool AwsEc2NetworkInterfaceViolationHasBeenSet() const { return m_awsEc2NetworkInterfaceViolationHasBeenSet; }
    template<typename AwsEc2NetworkInterfaceViolationT = AwsEc2NetworkInterfaceViolation>
    void SetAwsEc2NetworkInterfaceViolation(AwsEc2NetworkInterfaceViolationT&& value) { m_awsEc2NetworkInterfaceViolationHasBeenSet = true; m_awsEc2NetworkInterfaceViolation = std::forward<AwsEc2NetworkInterfaceViolationT>(value); }
    template<typename AwsEc2NetworkInterfaceViolationT = AwsEc2NetworkInterfaceViolation>
    ResourceViolation& WithAwsEc2NetworkInterfaceViolation(AwsEc2NetworkInterfaceViolationT&& value) { SetAwsEc2NetworkInterfaceViolation(std::forward<AwsEc2NetworkInterfaceViolationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Violation detail for an EC2 instance.</p>
     */
    inline const AwsEc2InstanceViolation& GetAwsEc2InstanceViolation() const { return m_awsEc2InstanceViolation; }
    inline bool AwsEc2InstanceViolationHasBeenSet() const { return m_awsEc2InstanceViolationHasBeenSet; }
    template<typename AwsEc2InstanceViolationT = AwsEc2InstanceViolation>
    void SetAwsEc2InstanceViolation(AwsEc2InstanceViolationT&& value) { m_awsEc2InstanceViolationHasBeenSet = true; m_awsEc2InstanceViolation = std::forward<AwsEc2InstanceViolationT>(value); }
    template<typename AwsEc2InstanceViolationT = AwsEc2InstanceViolation>
    ResourceViolation& WithAwsEc2InstanceViolation(AwsEc2InstanceViolationT&& value) { SetAwsEc2InstanceViolation(std::forward<AwsEc2InstanceViolationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a subnet
     * has no Firewall Manager managed firewall in its VPC. </p>
     */
    inline const NetworkFirewallMissingFirewallViolation& GetNetworkFirewallMissingFirewallViolation() const { return m_networkFirewallMissingFirewallViolation; }
    inline bool NetworkFirewallMissingFirewallViolationHasBeenSet() const { return m_networkFirewallMissingFirewallViolationHasBeenSet; }
    template<typename NetworkFirewallMissingFirewallViolationT = NetworkFirewallMissingFirewallViolation>
    void SetNetworkFirewallMissingFirewallViolation(NetworkFirewallMissingFirewallViolationT&& value) { m_networkFirewallMissingFirewallViolationHasBeenSet = true; m_networkFirewallMissingFirewallViolation = std::forward<NetworkFirewallMissingFirewallViolationT>(value); }
    template<typename NetworkFirewallMissingFirewallViolationT = NetworkFirewallMissingFirewallViolation>
    ResourceViolation& WithNetworkFirewallMissingFirewallViolation(NetworkFirewallMissingFirewallViolationT&& value) { SetNetworkFirewallMissingFirewallViolation(std::forward<NetworkFirewallMissingFirewallViolationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Violation detail for an Network Firewall policy that indicates that an
     * Availability Zone is missing the expected Firewall Manager managed subnet.</p>
     */
    inline const NetworkFirewallMissingSubnetViolation& GetNetworkFirewallMissingSubnetViolation() const { return m_networkFirewallMissingSubnetViolation; }
    inline bool NetworkFirewallMissingSubnetViolationHasBeenSet() const { return m_networkFirewallMissingSubnetViolationHasBeenSet; }
    template<typename NetworkFirewallMissingSubnetViolationT = NetworkFirewallMissingSubnetViolation>
    void SetNetworkFirewallMissingSubnetViolation(NetworkFirewallMissingSubnetViolationT&& value) { m_networkFirewallMissingSubnetViolationHasBeenSet = true; m_networkFirewallMissingSubnetViolation = std::forward<NetworkFirewallMissingSubnetViolationT>(value); }
    template<typename NetworkFirewallMissingSubnetViolationT = NetworkFirewallMissingSubnetViolation>
    ResourceViolation& WithNetworkFirewallMissingSubnetViolation(NetworkFirewallMissingSubnetViolationT&& value) { SetNetworkFirewallMissingSubnetViolation(std::forward<NetworkFirewallMissingSubnetViolationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a subnet
     * is not associated with the expected Firewall Manager managed route table. </p>
     */
    inline const NetworkFirewallMissingExpectedRTViolation& GetNetworkFirewallMissingExpectedRTViolation() const { return m_networkFirewallMissingExpectedRTViolation; }
    inline bool NetworkFirewallMissingExpectedRTViolationHasBeenSet() const { return m_networkFirewallMissingExpectedRTViolationHasBeenSet; }
    template<typename NetworkFirewallMissingExpectedRTViolationT = NetworkFirewallMissingExpectedRTViolation>
    void SetNetworkFirewallMissingExpectedRTViolation(NetworkFirewallMissingExpectedRTViolationT&& value) { m_networkFirewallMissingExpectedRTViolationHasBeenSet = true; m_networkFirewallMissingExpectedRTViolation = std::forward<NetworkFirewallMissingExpectedRTViolationT>(value); }
    template<typename NetworkFirewallMissingExpectedRTViolationT = NetworkFirewallMissingExpectedRTViolation>
    ResourceViolation& WithNetworkFirewallMissingExpectedRTViolation(NetworkFirewallMissingExpectedRTViolationT&& value) { SetNetworkFirewallMissingExpectedRTViolation(std::forward<NetworkFirewallMissingExpectedRTViolationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a
     * firewall policy in an individual account has been modified in a way that makes
     * it noncompliant. For example, the individual account owner might have deleted a
     * rule group, changed the priority of a stateless rule group, or changed a policy
     * default action.</p>
     */
    inline const NetworkFirewallPolicyModifiedViolation& GetNetworkFirewallPolicyModifiedViolation() const { return m_networkFirewallPolicyModifiedViolation; }
    inline bool NetworkFirewallPolicyModifiedViolationHasBeenSet() const { return m_networkFirewallPolicyModifiedViolationHasBeenSet; }
    template<typename NetworkFirewallPolicyModifiedViolationT = NetworkFirewallPolicyModifiedViolation>
    void SetNetworkFirewallPolicyModifiedViolation(NetworkFirewallPolicyModifiedViolationT&& value) { m_networkFirewallPolicyModifiedViolationHasBeenSet = true; m_networkFirewallPolicyModifiedViolation = std::forward<NetworkFirewallPolicyModifiedViolationT>(value); }
    template<typename NetworkFirewallPolicyModifiedViolationT = NetworkFirewallPolicyModifiedViolation>
    ResourceViolation& WithNetworkFirewallPolicyModifiedViolation(NetworkFirewallPolicyModifiedViolationT&& value) { SetNetworkFirewallPolicyModifiedViolation(std::forward<NetworkFirewallPolicyModifiedViolationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Violation detail for the subnet for which internet traffic hasn't been
     * inspected.</p>
     */
    inline const NetworkFirewallInternetTrafficNotInspectedViolation& GetNetworkFirewallInternetTrafficNotInspectedViolation() const { return m_networkFirewallInternetTrafficNotInspectedViolation; }
    inline bool NetworkFirewallInternetTrafficNotInspectedViolationHasBeenSet() const { return m_networkFirewallInternetTrafficNotInspectedViolationHasBeenSet; }
    template<typename NetworkFirewallInternetTrafficNotInspectedViolationT = NetworkFirewallInternetTrafficNotInspectedViolation>
    void SetNetworkFirewallInternetTrafficNotInspectedViolation(NetworkFirewallInternetTrafficNotInspectedViolationT&& value) { m_networkFirewallInternetTrafficNotInspectedViolationHasBeenSet = true; m_networkFirewallInternetTrafficNotInspectedViolation = std::forward<NetworkFirewallInternetTrafficNotInspectedViolationT>(value); }
    template<typename NetworkFirewallInternetTrafficNotInspectedViolationT = NetworkFirewallInternetTrafficNotInspectedViolation>
    ResourceViolation& WithNetworkFirewallInternetTrafficNotInspectedViolation(NetworkFirewallInternetTrafficNotInspectedViolationT&& value) { SetNetworkFirewallInternetTrafficNotInspectedViolation(std::forward<NetworkFirewallInternetTrafficNotInspectedViolationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route configuration is invalid.</p>
     */
    inline const NetworkFirewallInvalidRouteConfigurationViolation& GetNetworkFirewallInvalidRouteConfigurationViolation() const { return m_networkFirewallInvalidRouteConfigurationViolation; }
    inline bool NetworkFirewallInvalidRouteConfigurationViolationHasBeenSet() const { return m_networkFirewallInvalidRouteConfigurationViolationHasBeenSet; }
    template<typename NetworkFirewallInvalidRouteConfigurationViolationT = NetworkFirewallInvalidRouteConfigurationViolation>
    void SetNetworkFirewallInvalidRouteConfigurationViolation(NetworkFirewallInvalidRouteConfigurationViolationT&& value) { m_networkFirewallInvalidRouteConfigurationViolationHasBeenSet = true; m_networkFirewallInvalidRouteConfigurationViolation = std::forward<NetworkFirewallInvalidRouteConfigurationViolationT>(value); }
    template<typename NetworkFirewallInvalidRouteConfigurationViolationT = NetworkFirewallInvalidRouteConfigurationViolation>
    ResourceViolation& WithNetworkFirewallInvalidRouteConfigurationViolation(NetworkFirewallInvalidRouteConfigurationViolationT&& value) { SetNetworkFirewallInvalidRouteConfigurationViolation(std::forward<NetworkFirewallInvalidRouteConfigurationViolationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const NetworkFirewallBlackHoleRouteDetectedViolation& GetNetworkFirewallBlackHoleRouteDetectedViolation() const { return m_networkFirewallBlackHoleRouteDetectedViolation; }
    inline bool NetworkFirewallBlackHoleRouteDetectedViolationHasBeenSet() const { return m_networkFirewallBlackHoleRouteDetectedViolationHasBeenSet; }
    template<typename NetworkFirewallBlackHoleRouteDetectedViolationT = NetworkFirewallBlackHoleRouteDetectedViolation>
    void SetNetworkFirewallBlackHoleRouteDetectedViolation(NetworkFirewallBlackHoleRouteDetectedViolationT&& value) { m_networkFirewallBlackHoleRouteDetectedViolationHasBeenSet = true; m_networkFirewallBlackHoleRouteDetectedViolation = std::forward<NetworkFirewallBlackHoleRouteDetectedViolationT>(value); }
    template<typename NetworkFirewallBlackHoleRouteDetectedViolationT = NetworkFirewallBlackHoleRouteDetectedViolation>
    ResourceViolation& WithNetworkFirewallBlackHoleRouteDetectedViolation(NetworkFirewallBlackHoleRouteDetectedViolationT&& value) { SetNetworkFirewallBlackHoleRouteDetectedViolation(std::forward<NetworkFirewallBlackHoleRouteDetectedViolationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>There's an unexpected firewall route.</p>
     */
    inline const NetworkFirewallUnexpectedFirewallRoutesViolation& GetNetworkFirewallUnexpectedFirewallRoutesViolation() const { return m_networkFirewallUnexpectedFirewallRoutesViolation; }
    inline bool NetworkFirewallUnexpectedFirewallRoutesViolationHasBeenSet() const { return m_networkFirewallUnexpectedFirewallRoutesViolationHasBeenSet; }
    template<typename NetworkFirewallUnexpectedFirewallRoutesViolationT = NetworkFirewallUnexpectedFirewallRoutesViolation>
    void SetNetworkFirewallUnexpectedFirewallRoutesViolation(NetworkFirewallUnexpectedFirewallRoutesViolationT&& value) { m_networkFirewallUnexpectedFirewallRoutesViolationHasBeenSet = true; m_networkFirewallUnexpectedFirewallRoutesViolation = std::forward<NetworkFirewallUnexpectedFirewallRoutesViolationT>(value); }
    template<typename NetworkFirewallUnexpectedFirewallRoutesViolationT = NetworkFirewallUnexpectedFirewallRoutesViolation>
    ResourceViolation& WithNetworkFirewallUnexpectedFirewallRoutesViolation(NetworkFirewallUnexpectedFirewallRoutesViolationT&& value) { SetNetworkFirewallUnexpectedFirewallRoutesViolation(std::forward<NetworkFirewallUnexpectedFirewallRoutesViolationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>There's an unexpected gateway route.</p>
     */
    inline const NetworkFirewallUnexpectedGatewayRoutesViolation& GetNetworkFirewallUnexpectedGatewayRoutesViolation() const { return m_networkFirewallUnexpectedGatewayRoutesViolation; }
    inline bool NetworkFirewallUnexpectedGatewayRoutesViolationHasBeenSet() const { return m_networkFirewallUnexpectedGatewayRoutesViolationHasBeenSet; }
    template<typename NetworkFirewallUnexpectedGatewayRoutesViolationT = NetworkFirewallUnexpectedGatewayRoutesViolation>
    void SetNetworkFirewallUnexpectedGatewayRoutesViolation(NetworkFirewallUnexpectedGatewayRoutesViolationT&& value) { m_networkFirewallUnexpectedGatewayRoutesViolationHasBeenSet = true; m_networkFirewallUnexpectedGatewayRoutesViolation = std::forward<NetworkFirewallUnexpectedGatewayRoutesViolationT>(value); }
    template<typename NetworkFirewallUnexpectedGatewayRoutesViolationT = NetworkFirewallUnexpectedGatewayRoutesViolation>
    ResourceViolation& WithNetworkFirewallUnexpectedGatewayRoutesViolation(NetworkFirewallUnexpectedGatewayRoutesViolationT&& value) { SetNetworkFirewallUnexpectedGatewayRoutesViolation(std::forward<NetworkFirewallUnexpectedGatewayRoutesViolationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Expected routes are missing from Network Firewall.</p>
     */
    inline const NetworkFirewallMissingExpectedRoutesViolation& GetNetworkFirewallMissingExpectedRoutesViolation() const { return m_networkFirewallMissingExpectedRoutesViolation; }
    inline bool NetworkFirewallMissingExpectedRoutesViolationHasBeenSet() const { return m_networkFirewallMissingExpectedRoutesViolationHasBeenSet; }
    template<typename NetworkFirewallMissingExpectedRoutesViolationT = NetworkFirewallMissingExpectedRoutesViolation>
    void SetNetworkFirewallMissingExpectedRoutesViolation(NetworkFirewallMissingExpectedRoutesViolationT&& value) { m_networkFirewallMissingExpectedRoutesViolationHasBeenSet = true; m_networkFirewallMissingExpectedRoutesViolation = std::forward<NetworkFirewallMissingExpectedRoutesViolationT>(value); }
    template<typename NetworkFirewallMissingExpectedRoutesViolationT = NetworkFirewallMissingExpectedRoutesViolation>
    ResourceViolation& WithNetworkFirewallMissingExpectedRoutesViolation(NetworkFirewallMissingExpectedRoutesViolationT&& value) { SetNetworkFirewallMissingExpectedRoutesViolation(std::forward<NetworkFirewallMissingExpectedRoutesViolationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Violation detail for a DNS Firewall policy that indicates that a rule group
     * that Firewall Manager tried to associate with a VPC has the same priority as a
     * rule group that's already associated. </p>
     */
    inline const DnsRuleGroupPriorityConflictViolation& GetDnsRuleGroupPriorityConflictViolation() const { return m_dnsRuleGroupPriorityConflictViolation; }
    inline bool DnsRuleGroupPriorityConflictViolationHasBeenSet() const { return m_dnsRuleGroupPriorityConflictViolationHasBeenSet; }
    template<typename DnsRuleGroupPriorityConflictViolationT = DnsRuleGroupPriorityConflictViolation>
    void SetDnsRuleGroupPriorityConflictViolation(DnsRuleGroupPriorityConflictViolationT&& value) { m_dnsRuleGroupPriorityConflictViolationHasBeenSet = true; m_dnsRuleGroupPriorityConflictViolation = std::forward<DnsRuleGroupPriorityConflictViolationT>(value); }
    template<typename DnsRuleGroupPriorityConflictViolationT = DnsRuleGroupPriorityConflictViolation>
    ResourceViolation& WithDnsRuleGroupPriorityConflictViolation(DnsRuleGroupPriorityConflictViolationT&& value) { SetDnsRuleGroupPriorityConflictViolation(std::forward<DnsRuleGroupPriorityConflictViolationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Violation detail for a DNS Firewall policy that indicates that a rule group
     * that Firewall Manager tried to associate with a VPC is already associated with
     * the VPC and can't be associated again. </p>
     */
    inline const DnsDuplicateRuleGroupViolation& GetDnsDuplicateRuleGroupViolation() const { return m_dnsDuplicateRuleGroupViolation; }
    inline bool DnsDuplicateRuleGroupViolationHasBeenSet() const { return m_dnsDuplicateRuleGroupViolationHasBeenSet; }
    template<typename DnsDuplicateRuleGroupViolationT = DnsDuplicateRuleGroupViolation>
    void SetDnsDuplicateRuleGroupViolation(DnsDuplicateRuleGroupViolationT&& value) { m_dnsDuplicateRuleGroupViolationHasBeenSet = true; m_dnsDuplicateRuleGroupViolation = std::forward<DnsDuplicateRuleGroupViolationT>(value); }
    template<typename DnsDuplicateRuleGroupViolationT = DnsDuplicateRuleGroupViolation>
    ResourceViolation& WithDnsDuplicateRuleGroupViolation(DnsDuplicateRuleGroupViolationT&& value) { SetDnsDuplicateRuleGroupViolation(std::forward<DnsDuplicateRuleGroupViolationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Violation detail for a DNS Firewall policy that indicates that the VPC
     * reached the limit for associated DNS Firewall rule groups. Firewall Manager
     * tried to associate another rule group with the VPC and failed. </p>
     */
    inline const DnsRuleGroupLimitExceededViolation& GetDnsRuleGroupLimitExceededViolation() const { return m_dnsRuleGroupLimitExceededViolation; }
    inline bool DnsRuleGroupLimitExceededViolationHasBeenSet() const { return m_dnsRuleGroupLimitExceededViolationHasBeenSet; }
    template<typename DnsRuleGroupLimitExceededViolationT = DnsRuleGroupLimitExceededViolation>
    void SetDnsRuleGroupLimitExceededViolation(DnsRuleGroupLimitExceededViolationT&& value) { m_dnsRuleGroupLimitExceededViolationHasBeenSet = true; m_dnsRuleGroupLimitExceededViolation = std::forward<DnsRuleGroupLimitExceededViolationT>(value); }
    template<typename DnsRuleGroupLimitExceededViolationT = DnsRuleGroupLimitExceededViolation>
    ResourceViolation& WithDnsRuleGroupLimitExceededViolation(DnsRuleGroupLimitExceededViolationT&& value) { SetDnsRuleGroupLimitExceededViolation(std::forward<DnsRuleGroupLimitExceededViolationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the firewall subnet that violates the policy
     * scope.</p>
     */
    inline const FirewallSubnetIsOutOfScopeViolation& GetFirewallSubnetIsOutOfScopeViolation() const { return m_firewallSubnetIsOutOfScopeViolation; }
    inline bool FirewallSubnetIsOutOfScopeViolationHasBeenSet() const { return m_firewallSubnetIsOutOfScopeViolationHasBeenSet; }
    template<typename FirewallSubnetIsOutOfScopeViolationT = FirewallSubnetIsOutOfScopeViolation>
    void SetFirewallSubnetIsOutOfScopeViolation(FirewallSubnetIsOutOfScopeViolationT&& value) { m_firewallSubnetIsOutOfScopeViolationHasBeenSet = true; m_firewallSubnetIsOutOfScopeViolation = std::forward<FirewallSubnetIsOutOfScopeViolationT>(value); }
    template<typename FirewallSubnetIsOutOfScopeViolationT = FirewallSubnetIsOutOfScopeViolation>
    ResourceViolation& WithFirewallSubnetIsOutOfScopeViolation(FirewallSubnetIsOutOfScopeViolationT&& value) { SetFirewallSubnetIsOutOfScopeViolation(std::forward<FirewallSubnetIsOutOfScopeViolationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the route endpoint that violates the policy scope.</p>
     */
    inline const RouteHasOutOfScopeEndpointViolation& GetRouteHasOutOfScopeEndpointViolation() const { return m_routeHasOutOfScopeEndpointViolation; }
    inline bool RouteHasOutOfScopeEndpointViolationHasBeenSet() const { return m_routeHasOutOfScopeEndpointViolationHasBeenSet; }
    template<typename RouteHasOutOfScopeEndpointViolationT = RouteHasOutOfScopeEndpointViolation>
    void SetRouteHasOutOfScopeEndpointViolation(RouteHasOutOfScopeEndpointViolationT&& value) { m_routeHasOutOfScopeEndpointViolationHasBeenSet = true; m_routeHasOutOfScopeEndpointViolation = std::forward<RouteHasOutOfScopeEndpointViolationT>(value); }
    template<typename RouteHasOutOfScopeEndpointViolationT = RouteHasOutOfScopeEndpointViolation>
    ResourceViolation& WithRouteHasOutOfScopeEndpointViolation(RouteHasOutOfScopeEndpointViolationT&& value) { SetRouteHasOutOfScopeEndpointViolation(std::forward<RouteHasOutOfScopeEndpointViolationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The violation details for a third-party firewall that's been deleted.</p>
     */
    inline const ThirdPartyFirewallMissingFirewallViolation& GetThirdPartyFirewallMissingFirewallViolation() const { return m_thirdPartyFirewallMissingFirewallViolation; }
    inline bool ThirdPartyFirewallMissingFirewallViolationHasBeenSet() const { return m_thirdPartyFirewallMissingFirewallViolationHasBeenSet; }
    template<typename ThirdPartyFirewallMissingFirewallViolationT = ThirdPartyFirewallMissingFirewallViolation>
    void SetThirdPartyFirewallMissingFirewallViolation(ThirdPartyFirewallMissingFirewallViolationT&& value) { m_thirdPartyFirewallMissingFirewallViolationHasBeenSet = true; m_thirdPartyFirewallMissingFirewallViolation = std::forward<ThirdPartyFirewallMissingFirewallViolationT>(value); }
    template<typename ThirdPartyFirewallMissingFirewallViolationT = ThirdPartyFirewallMissingFirewallViolation>
    ResourceViolation& WithThirdPartyFirewallMissingFirewallViolation(ThirdPartyFirewallMissingFirewallViolationT&& value) { SetThirdPartyFirewallMissingFirewallViolation(std::forward<ThirdPartyFirewallMissingFirewallViolationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The violation details for a third-party firewall's subnet that's been
     * deleted.</p>
     */
    inline const ThirdPartyFirewallMissingSubnetViolation& GetThirdPartyFirewallMissingSubnetViolation() const { return m_thirdPartyFirewallMissingSubnetViolation; }
    inline bool ThirdPartyFirewallMissingSubnetViolationHasBeenSet() const { return m_thirdPartyFirewallMissingSubnetViolationHasBeenSet; }
    template<typename ThirdPartyFirewallMissingSubnetViolationT = ThirdPartyFirewallMissingSubnetViolation>
    void SetThirdPartyFirewallMissingSubnetViolation(ThirdPartyFirewallMissingSubnetViolationT&& value) { m_thirdPartyFirewallMissingSubnetViolationHasBeenSet = true; m_thirdPartyFirewallMissingSubnetViolation = std::forward<ThirdPartyFirewallMissingSubnetViolationT>(value); }
    template<typename ThirdPartyFirewallMissingSubnetViolationT = ThirdPartyFirewallMissingSubnetViolation>
    ResourceViolation& WithThirdPartyFirewallMissingSubnetViolation(ThirdPartyFirewallMissingSubnetViolationT&& value) { SetThirdPartyFirewallMissingSubnetViolation(std::forward<ThirdPartyFirewallMissingSubnetViolationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The violation details for a third-party firewall that has the Firewall
     * Manager managed route table that was associated with the third-party firewall
     * has been deleted.</p>
     */
    inline const ThirdPartyFirewallMissingExpectedRouteTableViolation& GetThirdPartyFirewallMissingExpectedRouteTableViolation() const { return m_thirdPartyFirewallMissingExpectedRouteTableViolation; }
    inline bool ThirdPartyFirewallMissingExpectedRouteTableViolationHasBeenSet() const { return m_thirdPartyFirewallMissingExpectedRouteTableViolationHasBeenSet; }
    template<typename ThirdPartyFirewallMissingExpectedRouteTableViolationT = ThirdPartyFirewallMissingExpectedRouteTableViolation>
    void SetThirdPartyFirewallMissingExpectedRouteTableViolation(ThirdPartyFirewallMissingExpectedRouteTableViolationT&& value) { m_thirdPartyFirewallMissingExpectedRouteTableViolationHasBeenSet = true; m_thirdPartyFirewallMissingExpectedRouteTableViolation = std::forward<ThirdPartyFirewallMissingExpectedRouteTableViolationT>(value); }
    template<typename ThirdPartyFirewallMissingExpectedRouteTableViolationT = ThirdPartyFirewallMissingExpectedRouteTableViolation>
    ResourceViolation& WithThirdPartyFirewallMissingExpectedRouteTableViolation(ThirdPartyFirewallMissingExpectedRouteTableViolationT&& value) { SetThirdPartyFirewallMissingExpectedRouteTableViolation(std::forward<ThirdPartyFirewallMissingExpectedRouteTableViolationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The violation details for a third-party firewall's VPC endpoint subnet that
     * was deleted.</p>
     */
    inline const FirewallSubnetMissingVPCEndpointViolation& GetFirewallSubnetMissingVPCEndpointViolation() const { return m_firewallSubnetMissingVPCEndpointViolation; }
    inline bool FirewallSubnetMissingVPCEndpointViolationHasBeenSet() const { return m_firewallSubnetMissingVPCEndpointViolationHasBeenSet; }
    template<typename FirewallSubnetMissingVPCEndpointViolationT = FirewallSubnetMissingVPCEndpointViolation>
    void SetFirewallSubnetMissingVPCEndpointViolation(FirewallSubnetMissingVPCEndpointViolationT&& value) { m_firewallSubnetMissingVPCEndpointViolationHasBeenSet = true; m_firewallSubnetMissingVPCEndpointViolation = std::forward<FirewallSubnetMissingVPCEndpointViolationT>(value); }
    template<typename FirewallSubnetMissingVPCEndpointViolationT = FirewallSubnetMissingVPCEndpointViolation>
    ResourceViolation& WithFirewallSubnetMissingVPCEndpointViolation(FirewallSubnetMissingVPCEndpointViolationT&& value) { SetFirewallSubnetMissingVPCEndpointViolation(std::forward<FirewallSubnetMissingVPCEndpointViolationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Violation detail for the entries in a network ACL resource.</p>
     */
    inline const InvalidNetworkAclEntriesViolation& GetInvalidNetworkAclEntriesViolation() const { return m_invalidNetworkAclEntriesViolation; }
    inline bool InvalidNetworkAclEntriesViolationHasBeenSet() const { return m_invalidNetworkAclEntriesViolationHasBeenSet; }
    template<typename InvalidNetworkAclEntriesViolationT = InvalidNetworkAclEntriesViolation>
    void SetInvalidNetworkAclEntriesViolation(InvalidNetworkAclEntriesViolationT&& value) { m_invalidNetworkAclEntriesViolationHasBeenSet = true; m_invalidNetworkAclEntriesViolation = std::forward<InvalidNetworkAclEntriesViolationT>(value); }
    template<typename InvalidNetworkAclEntriesViolationT = InvalidNetworkAclEntriesViolation>
    ResourceViolation& WithInvalidNetworkAclEntriesViolation(InvalidNetworkAclEntriesViolationT&& value) { SetInvalidNetworkAclEntriesViolation(std::forward<InvalidNetworkAclEntriesViolationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of possible remediation action lists. Each individual possible
     * remediation action is a list of individual remediation actions.</p>
     */
    inline const PossibleRemediationActions& GetPossibleRemediationActions() const { return m_possibleRemediationActions; }
    inline bool PossibleRemediationActionsHasBeenSet() const { return m_possibleRemediationActionsHasBeenSet; }
    template<typename PossibleRemediationActionsT = PossibleRemediationActions>
    void SetPossibleRemediationActions(PossibleRemediationActionsT&& value) { m_possibleRemediationActionsHasBeenSet = true; m_possibleRemediationActions = std::forward<PossibleRemediationActionsT>(value); }
    template<typename PossibleRemediationActionsT = PossibleRemediationActions>
    ResourceViolation& WithPossibleRemediationActions(PossibleRemediationActionsT&& value) { SetPossibleRemediationActions(std::forward<PossibleRemediationActionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The violation details for a web ACL whose configuration is incompatible with
     * the Firewall Manager policy. </p>
     */
    inline const WebACLHasIncompatibleConfigurationViolation& GetWebACLHasIncompatibleConfigurationViolation() const { return m_webACLHasIncompatibleConfigurationViolation; }
    inline bool WebACLHasIncompatibleConfigurationViolationHasBeenSet() const { return m_webACLHasIncompatibleConfigurationViolationHasBeenSet; }
    template<typename WebACLHasIncompatibleConfigurationViolationT = WebACLHasIncompatibleConfigurationViolation>
    void SetWebACLHasIncompatibleConfigurationViolation(WebACLHasIncompatibleConfigurationViolationT&& value) { m_webACLHasIncompatibleConfigurationViolationHasBeenSet = true; m_webACLHasIncompatibleConfigurationViolation = std::forward<WebACLHasIncompatibleConfigurationViolationT>(value); }
    template<typename WebACLHasIncompatibleConfigurationViolationT = WebACLHasIncompatibleConfigurationViolation>
    ResourceViolation& WithWebACLHasIncompatibleConfigurationViolation(WebACLHasIncompatibleConfigurationViolationT&& value) { SetWebACLHasIncompatibleConfigurationViolation(std::forward<WebACLHasIncompatibleConfigurationViolationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The violation details for a web ACL that's associated with at least one
     * resource that's out of scope of the Firewall Manager policy. </p>
     */
    inline const WebACLHasOutOfScopeResourcesViolation& GetWebACLHasOutOfScopeResourcesViolation() const { return m_webACLHasOutOfScopeResourcesViolation; }
    inline bool WebACLHasOutOfScopeResourcesViolationHasBeenSet() const { return m_webACLHasOutOfScopeResourcesViolationHasBeenSet; }
    template<typename WebACLHasOutOfScopeResourcesViolationT = WebACLHasOutOfScopeResourcesViolation>
    void SetWebACLHasOutOfScopeResourcesViolation(WebACLHasOutOfScopeResourcesViolationT&& value) { m_webACLHasOutOfScopeResourcesViolationHasBeenSet = true; m_webACLHasOutOfScopeResourcesViolation = std::forward<WebACLHasOutOfScopeResourcesViolationT>(value); }
    template<typename WebACLHasOutOfScopeResourcesViolationT = WebACLHasOutOfScopeResourcesViolation>
    ResourceViolation& WithWebACLHasOutOfScopeResourcesViolation(WebACLHasOutOfScopeResourcesViolationT&& value) { SetWebACLHasOutOfScopeResourcesViolation(std::forward<WebACLHasOutOfScopeResourcesViolationT>(value)); return *this;}
    ///@}
  private:

    AwsVPCSecurityGroupViolation m_awsVPCSecurityGroupViolation;
    bool m_awsVPCSecurityGroupViolationHasBeenSet = false;

    AwsEc2NetworkInterfaceViolation m_awsEc2NetworkInterfaceViolation;
    bool m_awsEc2NetworkInterfaceViolationHasBeenSet = false;

    AwsEc2InstanceViolation m_awsEc2InstanceViolation;
    bool m_awsEc2InstanceViolationHasBeenSet = false;

    NetworkFirewallMissingFirewallViolation m_networkFirewallMissingFirewallViolation;
    bool m_networkFirewallMissingFirewallViolationHasBeenSet = false;

    NetworkFirewallMissingSubnetViolation m_networkFirewallMissingSubnetViolation;
    bool m_networkFirewallMissingSubnetViolationHasBeenSet = false;

    NetworkFirewallMissingExpectedRTViolation m_networkFirewallMissingExpectedRTViolation;
    bool m_networkFirewallMissingExpectedRTViolationHasBeenSet = false;

    NetworkFirewallPolicyModifiedViolation m_networkFirewallPolicyModifiedViolation;
    bool m_networkFirewallPolicyModifiedViolationHasBeenSet = false;

    NetworkFirewallInternetTrafficNotInspectedViolation m_networkFirewallInternetTrafficNotInspectedViolation;
    bool m_networkFirewallInternetTrafficNotInspectedViolationHasBeenSet = false;

    NetworkFirewallInvalidRouteConfigurationViolation m_networkFirewallInvalidRouteConfigurationViolation;
    bool m_networkFirewallInvalidRouteConfigurationViolationHasBeenSet = false;

    NetworkFirewallBlackHoleRouteDetectedViolation m_networkFirewallBlackHoleRouteDetectedViolation;
    bool m_networkFirewallBlackHoleRouteDetectedViolationHasBeenSet = false;

    NetworkFirewallUnexpectedFirewallRoutesViolation m_networkFirewallUnexpectedFirewallRoutesViolation;
    bool m_networkFirewallUnexpectedFirewallRoutesViolationHasBeenSet = false;

    NetworkFirewallUnexpectedGatewayRoutesViolation m_networkFirewallUnexpectedGatewayRoutesViolation;
    bool m_networkFirewallUnexpectedGatewayRoutesViolationHasBeenSet = false;

    NetworkFirewallMissingExpectedRoutesViolation m_networkFirewallMissingExpectedRoutesViolation;
    bool m_networkFirewallMissingExpectedRoutesViolationHasBeenSet = false;

    DnsRuleGroupPriorityConflictViolation m_dnsRuleGroupPriorityConflictViolation;
    bool m_dnsRuleGroupPriorityConflictViolationHasBeenSet = false;

    DnsDuplicateRuleGroupViolation m_dnsDuplicateRuleGroupViolation;
    bool m_dnsDuplicateRuleGroupViolationHasBeenSet = false;

    DnsRuleGroupLimitExceededViolation m_dnsRuleGroupLimitExceededViolation;
    bool m_dnsRuleGroupLimitExceededViolationHasBeenSet = false;

    FirewallSubnetIsOutOfScopeViolation m_firewallSubnetIsOutOfScopeViolation;
    bool m_firewallSubnetIsOutOfScopeViolationHasBeenSet = false;

    RouteHasOutOfScopeEndpointViolation m_routeHasOutOfScopeEndpointViolation;
    bool m_routeHasOutOfScopeEndpointViolationHasBeenSet = false;

    ThirdPartyFirewallMissingFirewallViolation m_thirdPartyFirewallMissingFirewallViolation;
    bool m_thirdPartyFirewallMissingFirewallViolationHasBeenSet = false;

    ThirdPartyFirewallMissingSubnetViolation m_thirdPartyFirewallMissingSubnetViolation;
    bool m_thirdPartyFirewallMissingSubnetViolationHasBeenSet = false;

    ThirdPartyFirewallMissingExpectedRouteTableViolation m_thirdPartyFirewallMissingExpectedRouteTableViolation;
    bool m_thirdPartyFirewallMissingExpectedRouteTableViolationHasBeenSet = false;

    FirewallSubnetMissingVPCEndpointViolation m_firewallSubnetMissingVPCEndpointViolation;
    bool m_firewallSubnetMissingVPCEndpointViolationHasBeenSet = false;

    InvalidNetworkAclEntriesViolation m_invalidNetworkAclEntriesViolation;
    bool m_invalidNetworkAclEntriesViolationHasBeenSet = false;

    PossibleRemediationActions m_possibleRemediationActions;
    bool m_possibleRemediationActionsHasBeenSet = false;

    WebACLHasIncompatibleConfigurationViolation m_webACLHasIncompatibleConfigurationViolation;
    bool m_webACLHasIncompatibleConfigurationViolationHasBeenSet = false;

    WebACLHasOutOfScopeResourcesViolation m_webACLHasOutOfScopeResourcesViolation;
    bool m_webACLHasOutOfScopeResourcesViolationHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
