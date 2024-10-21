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
    AWS_FMS_API ResourceViolation();
    AWS_FMS_API ResourceViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API ResourceViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Violation detail for security groups.</p>
     */
    inline const AwsVPCSecurityGroupViolation& GetAwsVPCSecurityGroupViolation() const{ return m_awsVPCSecurityGroupViolation; }
    inline bool AwsVPCSecurityGroupViolationHasBeenSet() const { return m_awsVPCSecurityGroupViolationHasBeenSet; }
    inline void SetAwsVPCSecurityGroupViolation(const AwsVPCSecurityGroupViolation& value) { m_awsVPCSecurityGroupViolationHasBeenSet = true; m_awsVPCSecurityGroupViolation = value; }
    inline void SetAwsVPCSecurityGroupViolation(AwsVPCSecurityGroupViolation&& value) { m_awsVPCSecurityGroupViolationHasBeenSet = true; m_awsVPCSecurityGroupViolation = std::move(value); }
    inline ResourceViolation& WithAwsVPCSecurityGroupViolation(const AwsVPCSecurityGroupViolation& value) { SetAwsVPCSecurityGroupViolation(value); return *this;}
    inline ResourceViolation& WithAwsVPCSecurityGroupViolation(AwsVPCSecurityGroupViolation&& value) { SetAwsVPCSecurityGroupViolation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Violation detail for a network interface.</p>
     */
    inline const AwsEc2NetworkInterfaceViolation& GetAwsEc2NetworkInterfaceViolation() const{ return m_awsEc2NetworkInterfaceViolation; }
    inline bool AwsEc2NetworkInterfaceViolationHasBeenSet() const { return m_awsEc2NetworkInterfaceViolationHasBeenSet; }
    inline void SetAwsEc2NetworkInterfaceViolation(const AwsEc2NetworkInterfaceViolation& value) { m_awsEc2NetworkInterfaceViolationHasBeenSet = true; m_awsEc2NetworkInterfaceViolation = value; }
    inline void SetAwsEc2NetworkInterfaceViolation(AwsEc2NetworkInterfaceViolation&& value) { m_awsEc2NetworkInterfaceViolationHasBeenSet = true; m_awsEc2NetworkInterfaceViolation = std::move(value); }
    inline ResourceViolation& WithAwsEc2NetworkInterfaceViolation(const AwsEc2NetworkInterfaceViolation& value) { SetAwsEc2NetworkInterfaceViolation(value); return *this;}
    inline ResourceViolation& WithAwsEc2NetworkInterfaceViolation(AwsEc2NetworkInterfaceViolation&& value) { SetAwsEc2NetworkInterfaceViolation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Violation detail for an EC2 instance.</p>
     */
    inline const AwsEc2InstanceViolation& GetAwsEc2InstanceViolation() const{ return m_awsEc2InstanceViolation; }
    inline bool AwsEc2InstanceViolationHasBeenSet() const { return m_awsEc2InstanceViolationHasBeenSet; }
    inline void SetAwsEc2InstanceViolation(const AwsEc2InstanceViolation& value) { m_awsEc2InstanceViolationHasBeenSet = true; m_awsEc2InstanceViolation = value; }
    inline void SetAwsEc2InstanceViolation(AwsEc2InstanceViolation&& value) { m_awsEc2InstanceViolationHasBeenSet = true; m_awsEc2InstanceViolation = std::move(value); }
    inline ResourceViolation& WithAwsEc2InstanceViolation(const AwsEc2InstanceViolation& value) { SetAwsEc2InstanceViolation(value); return *this;}
    inline ResourceViolation& WithAwsEc2InstanceViolation(AwsEc2InstanceViolation&& value) { SetAwsEc2InstanceViolation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a subnet
     * has no Firewall Manager managed firewall in its VPC. </p>
     */
    inline const NetworkFirewallMissingFirewallViolation& GetNetworkFirewallMissingFirewallViolation() const{ return m_networkFirewallMissingFirewallViolation; }
    inline bool NetworkFirewallMissingFirewallViolationHasBeenSet() const { return m_networkFirewallMissingFirewallViolationHasBeenSet; }
    inline void SetNetworkFirewallMissingFirewallViolation(const NetworkFirewallMissingFirewallViolation& value) { m_networkFirewallMissingFirewallViolationHasBeenSet = true; m_networkFirewallMissingFirewallViolation = value; }
    inline void SetNetworkFirewallMissingFirewallViolation(NetworkFirewallMissingFirewallViolation&& value) { m_networkFirewallMissingFirewallViolationHasBeenSet = true; m_networkFirewallMissingFirewallViolation = std::move(value); }
    inline ResourceViolation& WithNetworkFirewallMissingFirewallViolation(const NetworkFirewallMissingFirewallViolation& value) { SetNetworkFirewallMissingFirewallViolation(value); return *this;}
    inline ResourceViolation& WithNetworkFirewallMissingFirewallViolation(NetworkFirewallMissingFirewallViolation&& value) { SetNetworkFirewallMissingFirewallViolation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Violation detail for an Network Firewall policy that indicates that an
     * Availability Zone is missing the expected Firewall Manager managed subnet.</p>
     */
    inline const NetworkFirewallMissingSubnetViolation& GetNetworkFirewallMissingSubnetViolation() const{ return m_networkFirewallMissingSubnetViolation; }
    inline bool NetworkFirewallMissingSubnetViolationHasBeenSet() const { return m_networkFirewallMissingSubnetViolationHasBeenSet; }
    inline void SetNetworkFirewallMissingSubnetViolation(const NetworkFirewallMissingSubnetViolation& value) { m_networkFirewallMissingSubnetViolationHasBeenSet = true; m_networkFirewallMissingSubnetViolation = value; }
    inline void SetNetworkFirewallMissingSubnetViolation(NetworkFirewallMissingSubnetViolation&& value) { m_networkFirewallMissingSubnetViolationHasBeenSet = true; m_networkFirewallMissingSubnetViolation = std::move(value); }
    inline ResourceViolation& WithNetworkFirewallMissingSubnetViolation(const NetworkFirewallMissingSubnetViolation& value) { SetNetworkFirewallMissingSubnetViolation(value); return *this;}
    inline ResourceViolation& WithNetworkFirewallMissingSubnetViolation(NetworkFirewallMissingSubnetViolation&& value) { SetNetworkFirewallMissingSubnetViolation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a subnet
     * is not associated with the expected Firewall Manager managed route table. </p>
     */
    inline const NetworkFirewallMissingExpectedRTViolation& GetNetworkFirewallMissingExpectedRTViolation() const{ return m_networkFirewallMissingExpectedRTViolation; }
    inline bool NetworkFirewallMissingExpectedRTViolationHasBeenSet() const { return m_networkFirewallMissingExpectedRTViolationHasBeenSet; }
    inline void SetNetworkFirewallMissingExpectedRTViolation(const NetworkFirewallMissingExpectedRTViolation& value) { m_networkFirewallMissingExpectedRTViolationHasBeenSet = true; m_networkFirewallMissingExpectedRTViolation = value; }
    inline void SetNetworkFirewallMissingExpectedRTViolation(NetworkFirewallMissingExpectedRTViolation&& value) { m_networkFirewallMissingExpectedRTViolationHasBeenSet = true; m_networkFirewallMissingExpectedRTViolation = std::move(value); }
    inline ResourceViolation& WithNetworkFirewallMissingExpectedRTViolation(const NetworkFirewallMissingExpectedRTViolation& value) { SetNetworkFirewallMissingExpectedRTViolation(value); return *this;}
    inline ResourceViolation& WithNetworkFirewallMissingExpectedRTViolation(NetworkFirewallMissingExpectedRTViolation&& value) { SetNetworkFirewallMissingExpectedRTViolation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a
     * firewall policy in an individual account has been modified in a way that makes
     * it noncompliant. For example, the individual account owner might have deleted a
     * rule group, changed the priority of a stateless rule group, or changed a policy
     * default action.</p>
     */
    inline const NetworkFirewallPolicyModifiedViolation& GetNetworkFirewallPolicyModifiedViolation() const{ return m_networkFirewallPolicyModifiedViolation; }
    inline bool NetworkFirewallPolicyModifiedViolationHasBeenSet() const { return m_networkFirewallPolicyModifiedViolationHasBeenSet; }
    inline void SetNetworkFirewallPolicyModifiedViolation(const NetworkFirewallPolicyModifiedViolation& value) { m_networkFirewallPolicyModifiedViolationHasBeenSet = true; m_networkFirewallPolicyModifiedViolation = value; }
    inline void SetNetworkFirewallPolicyModifiedViolation(NetworkFirewallPolicyModifiedViolation&& value) { m_networkFirewallPolicyModifiedViolationHasBeenSet = true; m_networkFirewallPolicyModifiedViolation = std::move(value); }
    inline ResourceViolation& WithNetworkFirewallPolicyModifiedViolation(const NetworkFirewallPolicyModifiedViolation& value) { SetNetworkFirewallPolicyModifiedViolation(value); return *this;}
    inline ResourceViolation& WithNetworkFirewallPolicyModifiedViolation(NetworkFirewallPolicyModifiedViolation&& value) { SetNetworkFirewallPolicyModifiedViolation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Violation detail for the subnet for which internet traffic hasn't been
     * inspected.</p>
     */
    inline const NetworkFirewallInternetTrafficNotInspectedViolation& GetNetworkFirewallInternetTrafficNotInspectedViolation() const{ return m_networkFirewallInternetTrafficNotInspectedViolation; }
    inline bool NetworkFirewallInternetTrafficNotInspectedViolationHasBeenSet() const { return m_networkFirewallInternetTrafficNotInspectedViolationHasBeenSet; }
    inline void SetNetworkFirewallInternetTrafficNotInspectedViolation(const NetworkFirewallInternetTrafficNotInspectedViolation& value) { m_networkFirewallInternetTrafficNotInspectedViolationHasBeenSet = true; m_networkFirewallInternetTrafficNotInspectedViolation = value; }
    inline void SetNetworkFirewallInternetTrafficNotInspectedViolation(NetworkFirewallInternetTrafficNotInspectedViolation&& value) { m_networkFirewallInternetTrafficNotInspectedViolationHasBeenSet = true; m_networkFirewallInternetTrafficNotInspectedViolation = std::move(value); }
    inline ResourceViolation& WithNetworkFirewallInternetTrafficNotInspectedViolation(const NetworkFirewallInternetTrafficNotInspectedViolation& value) { SetNetworkFirewallInternetTrafficNotInspectedViolation(value); return *this;}
    inline ResourceViolation& WithNetworkFirewallInternetTrafficNotInspectedViolation(NetworkFirewallInternetTrafficNotInspectedViolation&& value) { SetNetworkFirewallInternetTrafficNotInspectedViolation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route configuration is invalid.</p>
     */
    inline const NetworkFirewallInvalidRouteConfigurationViolation& GetNetworkFirewallInvalidRouteConfigurationViolation() const{ return m_networkFirewallInvalidRouteConfigurationViolation; }
    inline bool NetworkFirewallInvalidRouteConfigurationViolationHasBeenSet() const { return m_networkFirewallInvalidRouteConfigurationViolationHasBeenSet; }
    inline void SetNetworkFirewallInvalidRouteConfigurationViolation(const NetworkFirewallInvalidRouteConfigurationViolation& value) { m_networkFirewallInvalidRouteConfigurationViolationHasBeenSet = true; m_networkFirewallInvalidRouteConfigurationViolation = value; }
    inline void SetNetworkFirewallInvalidRouteConfigurationViolation(NetworkFirewallInvalidRouteConfigurationViolation&& value) { m_networkFirewallInvalidRouteConfigurationViolationHasBeenSet = true; m_networkFirewallInvalidRouteConfigurationViolation = std::move(value); }
    inline ResourceViolation& WithNetworkFirewallInvalidRouteConfigurationViolation(const NetworkFirewallInvalidRouteConfigurationViolation& value) { SetNetworkFirewallInvalidRouteConfigurationViolation(value); return *this;}
    inline ResourceViolation& WithNetworkFirewallInvalidRouteConfigurationViolation(NetworkFirewallInvalidRouteConfigurationViolation&& value) { SetNetworkFirewallInvalidRouteConfigurationViolation(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const NetworkFirewallBlackHoleRouteDetectedViolation& GetNetworkFirewallBlackHoleRouteDetectedViolation() const{ return m_networkFirewallBlackHoleRouteDetectedViolation; }
    inline bool NetworkFirewallBlackHoleRouteDetectedViolationHasBeenSet() const { return m_networkFirewallBlackHoleRouteDetectedViolationHasBeenSet; }
    inline void SetNetworkFirewallBlackHoleRouteDetectedViolation(const NetworkFirewallBlackHoleRouteDetectedViolation& value) { m_networkFirewallBlackHoleRouteDetectedViolationHasBeenSet = true; m_networkFirewallBlackHoleRouteDetectedViolation = value; }
    inline void SetNetworkFirewallBlackHoleRouteDetectedViolation(NetworkFirewallBlackHoleRouteDetectedViolation&& value) { m_networkFirewallBlackHoleRouteDetectedViolationHasBeenSet = true; m_networkFirewallBlackHoleRouteDetectedViolation = std::move(value); }
    inline ResourceViolation& WithNetworkFirewallBlackHoleRouteDetectedViolation(const NetworkFirewallBlackHoleRouteDetectedViolation& value) { SetNetworkFirewallBlackHoleRouteDetectedViolation(value); return *this;}
    inline ResourceViolation& WithNetworkFirewallBlackHoleRouteDetectedViolation(NetworkFirewallBlackHoleRouteDetectedViolation&& value) { SetNetworkFirewallBlackHoleRouteDetectedViolation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>There's an unexpected firewall route.</p>
     */
    inline const NetworkFirewallUnexpectedFirewallRoutesViolation& GetNetworkFirewallUnexpectedFirewallRoutesViolation() const{ return m_networkFirewallUnexpectedFirewallRoutesViolation; }
    inline bool NetworkFirewallUnexpectedFirewallRoutesViolationHasBeenSet() const { return m_networkFirewallUnexpectedFirewallRoutesViolationHasBeenSet; }
    inline void SetNetworkFirewallUnexpectedFirewallRoutesViolation(const NetworkFirewallUnexpectedFirewallRoutesViolation& value) { m_networkFirewallUnexpectedFirewallRoutesViolationHasBeenSet = true; m_networkFirewallUnexpectedFirewallRoutesViolation = value; }
    inline void SetNetworkFirewallUnexpectedFirewallRoutesViolation(NetworkFirewallUnexpectedFirewallRoutesViolation&& value) { m_networkFirewallUnexpectedFirewallRoutesViolationHasBeenSet = true; m_networkFirewallUnexpectedFirewallRoutesViolation = std::move(value); }
    inline ResourceViolation& WithNetworkFirewallUnexpectedFirewallRoutesViolation(const NetworkFirewallUnexpectedFirewallRoutesViolation& value) { SetNetworkFirewallUnexpectedFirewallRoutesViolation(value); return *this;}
    inline ResourceViolation& WithNetworkFirewallUnexpectedFirewallRoutesViolation(NetworkFirewallUnexpectedFirewallRoutesViolation&& value) { SetNetworkFirewallUnexpectedFirewallRoutesViolation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>There's an unexpected gateway route.</p>
     */
    inline const NetworkFirewallUnexpectedGatewayRoutesViolation& GetNetworkFirewallUnexpectedGatewayRoutesViolation() const{ return m_networkFirewallUnexpectedGatewayRoutesViolation; }
    inline bool NetworkFirewallUnexpectedGatewayRoutesViolationHasBeenSet() const { return m_networkFirewallUnexpectedGatewayRoutesViolationHasBeenSet; }
    inline void SetNetworkFirewallUnexpectedGatewayRoutesViolation(const NetworkFirewallUnexpectedGatewayRoutesViolation& value) { m_networkFirewallUnexpectedGatewayRoutesViolationHasBeenSet = true; m_networkFirewallUnexpectedGatewayRoutesViolation = value; }
    inline void SetNetworkFirewallUnexpectedGatewayRoutesViolation(NetworkFirewallUnexpectedGatewayRoutesViolation&& value) { m_networkFirewallUnexpectedGatewayRoutesViolationHasBeenSet = true; m_networkFirewallUnexpectedGatewayRoutesViolation = std::move(value); }
    inline ResourceViolation& WithNetworkFirewallUnexpectedGatewayRoutesViolation(const NetworkFirewallUnexpectedGatewayRoutesViolation& value) { SetNetworkFirewallUnexpectedGatewayRoutesViolation(value); return *this;}
    inline ResourceViolation& WithNetworkFirewallUnexpectedGatewayRoutesViolation(NetworkFirewallUnexpectedGatewayRoutesViolation&& value) { SetNetworkFirewallUnexpectedGatewayRoutesViolation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Expected routes are missing from Network Firewall.</p>
     */
    inline const NetworkFirewallMissingExpectedRoutesViolation& GetNetworkFirewallMissingExpectedRoutesViolation() const{ return m_networkFirewallMissingExpectedRoutesViolation; }
    inline bool NetworkFirewallMissingExpectedRoutesViolationHasBeenSet() const { return m_networkFirewallMissingExpectedRoutesViolationHasBeenSet; }
    inline void SetNetworkFirewallMissingExpectedRoutesViolation(const NetworkFirewallMissingExpectedRoutesViolation& value) { m_networkFirewallMissingExpectedRoutesViolationHasBeenSet = true; m_networkFirewallMissingExpectedRoutesViolation = value; }
    inline void SetNetworkFirewallMissingExpectedRoutesViolation(NetworkFirewallMissingExpectedRoutesViolation&& value) { m_networkFirewallMissingExpectedRoutesViolationHasBeenSet = true; m_networkFirewallMissingExpectedRoutesViolation = std::move(value); }
    inline ResourceViolation& WithNetworkFirewallMissingExpectedRoutesViolation(const NetworkFirewallMissingExpectedRoutesViolation& value) { SetNetworkFirewallMissingExpectedRoutesViolation(value); return *this;}
    inline ResourceViolation& WithNetworkFirewallMissingExpectedRoutesViolation(NetworkFirewallMissingExpectedRoutesViolation&& value) { SetNetworkFirewallMissingExpectedRoutesViolation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Violation detail for a DNS Firewall policy that indicates that a rule group
     * that Firewall Manager tried to associate with a VPC has the same priority as a
     * rule group that's already associated. </p>
     */
    inline const DnsRuleGroupPriorityConflictViolation& GetDnsRuleGroupPriorityConflictViolation() const{ return m_dnsRuleGroupPriorityConflictViolation; }
    inline bool DnsRuleGroupPriorityConflictViolationHasBeenSet() const { return m_dnsRuleGroupPriorityConflictViolationHasBeenSet; }
    inline void SetDnsRuleGroupPriorityConflictViolation(const DnsRuleGroupPriorityConflictViolation& value) { m_dnsRuleGroupPriorityConflictViolationHasBeenSet = true; m_dnsRuleGroupPriorityConflictViolation = value; }
    inline void SetDnsRuleGroupPriorityConflictViolation(DnsRuleGroupPriorityConflictViolation&& value) { m_dnsRuleGroupPriorityConflictViolationHasBeenSet = true; m_dnsRuleGroupPriorityConflictViolation = std::move(value); }
    inline ResourceViolation& WithDnsRuleGroupPriorityConflictViolation(const DnsRuleGroupPriorityConflictViolation& value) { SetDnsRuleGroupPriorityConflictViolation(value); return *this;}
    inline ResourceViolation& WithDnsRuleGroupPriorityConflictViolation(DnsRuleGroupPriorityConflictViolation&& value) { SetDnsRuleGroupPriorityConflictViolation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Violation detail for a DNS Firewall policy that indicates that a rule group
     * that Firewall Manager tried to associate with a VPC is already associated with
     * the VPC and can't be associated again. </p>
     */
    inline const DnsDuplicateRuleGroupViolation& GetDnsDuplicateRuleGroupViolation() const{ return m_dnsDuplicateRuleGroupViolation; }
    inline bool DnsDuplicateRuleGroupViolationHasBeenSet() const { return m_dnsDuplicateRuleGroupViolationHasBeenSet; }
    inline void SetDnsDuplicateRuleGroupViolation(const DnsDuplicateRuleGroupViolation& value) { m_dnsDuplicateRuleGroupViolationHasBeenSet = true; m_dnsDuplicateRuleGroupViolation = value; }
    inline void SetDnsDuplicateRuleGroupViolation(DnsDuplicateRuleGroupViolation&& value) { m_dnsDuplicateRuleGroupViolationHasBeenSet = true; m_dnsDuplicateRuleGroupViolation = std::move(value); }
    inline ResourceViolation& WithDnsDuplicateRuleGroupViolation(const DnsDuplicateRuleGroupViolation& value) { SetDnsDuplicateRuleGroupViolation(value); return *this;}
    inline ResourceViolation& WithDnsDuplicateRuleGroupViolation(DnsDuplicateRuleGroupViolation&& value) { SetDnsDuplicateRuleGroupViolation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Violation detail for a DNS Firewall policy that indicates that the VPC
     * reached the limit for associated DNS Firewall rule groups. Firewall Manager
     * tried to associate another rule group with the VPC and failed. </p>
     */
    inline const DnsRuleGroupLimitExceededViolation& GetDnsRuleGroupLimitExceededViolation() const{ return m_dnsRuleGroupLimitExceededViolation; }
    inline bool DnsRuleGroupLimitExceededViolationHasBeenSet() const { return m_dnsRuleGroupLimitExceededViolationHasBeenSet; }
    inline void SetDnsRuleGroupLimitExceededViolation(const DnsRuleGroupLimitExceededViolation& value) { m_dnsRuleGroupLimitExceededViolationHasBeenSet = true; m_dnsRuleGroupLimitExceededViolation = value; }
    inline void SetDnsRuleGroupLimitExceededViolation(DnsRuleGroupLimitExceededViolation&& value) { m_dnsRuleGroupLimitExceededViolationHasBeenSet = true; m_dnsRuleGroupLimitExceededViolation = std::move(value); }
    inline ResourceViolation& WithDnsRuleGroupLimitExceededViolation(const DnsRuleGroupLimitExceededViolation& value) { SetDnsRuleGroupLimitExceededViolation(value); return *this;}
    inline ResourceViolation& WithDnsRuleGroupLimitExceededViolation(DnsRuleGroupLimitExceededViolation&& value) { SetDnsRuleGroupLimitExceededViolation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the firewall subnet that violates the policy
     * scope.</p>
     */
    inline const FirewallSubnetIsOutOfScopeViolation& GetFirewallSubnetIsOutOfScopeViolation() const{ return m_firewallSubnetIsOutOfScopeViolation; }
    inline bool FirewallSubnetIsOutOfScopeViolationHasBeenSet() const { return m_firewallSubnetIsOutOfScopeViolationHasBeenSet; }
    inline void SetFirewallSubnetIsOutOfScopeViolation(const FirewallSubnetIsOutOfScopeViolation& value) { m_firewallSubnetIsOutOfScopeViolationHasBeenSet = true; m_firewallSubnetIsOutOfScopeViolation = value; }
    inline void SetFirewallSubnetIsOutOfScopeViolation(FirewallSubnetIsOutOfScopeViolation&& value) { m_firewallSubnetIsOutOfScopeViolationHasBeenSet = true; m_firewallSubnetIsOutOfScopeViolation = std::move(value); }
    inline ResourceViolation& WithFirewallSubnetIsOutOfScopeViolation(const FirewallSubnetIsOutOfScopeViolation& value) { SetFirewallSubnetIsOutOfScopeViolation(value); return *this;}
    inline ResourceViolation& WithFirewallSubnetIsOutOfScopeViolation(FirewallSubnetIsOutOfScopeViolation&& value) { SetFirewallSubnetIsOutOfScopeViolation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the route endpoint that violates the policy scope.</p>
     */
    inline const RouteHasOutOfScopeEndpointViolation& GetRouteHasOutOfScopeEndpointViolation() const{ return m_routeHasOutOfScopeEndpointViolation; }
    inline bool RouteHasOutOfScopeEndpointViolationHasBeenSet() const { return m_routeHasOutOfScopeEndpointViolationHasBeenSet; }
    inline void SetRouteHasOutOfScopeEndpointViolation(const RouteHasOutOfScopeEndpointViolation& value) { m_routeHasOutOfScopeEndpointViolationHasBeenSet = true; m_routeHasOutOfScopeEndpointViolation = value; }
    inline void SetRouteHasOutOfScopeEndpointViolation(RouteHasOutOfScopeEndpointViolation&& value) { m_routeHasOutOfScopeEndpointViolationHasBeenSet = true; m_routeHasOutOfScopeEndpointViolation = std::move(value); }
    inline ResourceViolation& WithRouteHasOutOfScopeEndpointViolation(const RouteHasOutOfScopeEndpointViolation& value) { SetRouteHasOutOfScopeEndpointViolation(value); return *this;}
    inline ResourceViolation& WithRouteHasOutOfScopeEndpointViolation(RouteHasOutOfScopeEndpointViolation&& value) { SetRouteHasOutOfScopeEndpointViolation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The violation details for a third-party firewall that's been deleted.</p>
     */
    inline const ThirdPartyFirewallMissingFirewallViolation& GetThirdPartyFirewallMissingFirewallViolation() const{ return m_thirdPartyFirewallMissingFirewallViolation; }
    inline bool ThirdPartyFirewallMissingFirewallViolationHasBeenSet() const { return m_thirdPartyFirewallMissingFirewallViolationHasBeenSet; }
    inline void SetThirdPartyFirewallMissingFirewallViolation(const ThirdPartyFirewallMissingFirewallViolation& value) { m_thirdPartyFirewallMissingFirewallViolationHasBeenSet = true; m_thirdPartyFirewallMissingFirewallViolation = value; }
    inline void SetThirdPartyFirewallMissingFirewallViolation(ThirdPartyFirewallMissingFirewallViolation&& value) { m_thirdPartyFirewallMissingFirewallViolationHasBeenSet = true; m_thirdPartyFirewallMissingFirewallViolation = std::move(value); }
    inline ResourceViolation& WithThirdPartyFirewallMissingFirewallViolation(const ThirdPartyFirewallMissingFirewallViolation& value) { SetThirdPartyFirewallMissingFirewallViolation(value); return *this;}
    inline ResourceViolation& WithThirdPartyFirewallMissingFirewallViolation(ThirdPartyFirewallMissingFirewallViolation&& value) { SetThirdPartyFirewallMissingFirewallViolation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The violation details for a third-party firewall's subnet that's been
     * deleted.</p>
     */
    inline const ThirdPartyFirewallMissingSubnetViolation& GetThirdPartyFirewallMissingSubnetViolation() const{ return m_thirdPartyFirewallMissingSubnetViolation; }
    inline bool ThirdPartyFirewallMissingSubnetViolationHasBeenSet() const { return m_thirdPartyFirewallMissingSubnetViolationHasBeenSet; }
    inline void SetThirdPartyFirewallMissingSubnetViolation(const ThirdPartyFirewallMissingSubnetViolation& value) { m_thirdPartyFirewallMissingSubnetViolationHasBeenSet = true; m_thirdPartyFirewallMissingSubnetViolation = value; }
    inline void SetThirdPartyFirewallMissingSubnetViolation(ThirdPartyFirewallMissingSubnetViolation&& value) { m_thirdPartyFirewallMissingSubnetViolationHasBeenSet = true; m_thirdPartyFirewallMissingSubnetViolation = std::move(value); }
    inline ResourceViolation& WithThirdPartyFirewallMissingSubnetViolation(const ThirdPartyFirewallMissingSubnetViolation& value) { SetThirdPartyFirewallMissingSubnetViolation(value); return *this;}
    inline ResourceViolation& WithThirdPartyFirewallMissingSubnetViolation(ThirdPartyFirewallMissingSubnetViolation&& value) { SetThirdPartyFirewallMissingSubnetViolation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The violation details for a third-party firewall that has the Firewall
     * Manager managed route table that was associated with the third-party firewall
     * has been deleted.</p>
     */
    inline const ThirdPartyFirewallMissingExpectedRouteTableViolation& GetThirdPartyFirewallMissingExpectedRouteTableViolation() const{ return m_thirdPartyFirewallMissingExpectedRouteTableViolation; }
    inline bool ThirdPartyFirewallMissingExpectedRouteTableViolationHasBeenSet() const { return m_thirdPartyFirewallMissingExpectedRouteTableViolationHasBeenSet; }
    inline void SetThirdPartyFirewallMissingExpectedRouteTableViolation(const ThirdPartyFirewallMissingExpectedRouteTableViolation& value) { m_thirdPartyFirewallMissingExpectedRouteTableViolationHasBeenSet = true; m_thirdPartyFirewallMissingExpectedRouteTableViolation = value; }
    inline void SetThirdPartyFirewallMissingExpectedRouteTableViolation(ThirdPartyFirewallMissingExpectedRouteTableViolation&& value) { m_thirdPartyFirewallMissingExpectedRouteTableViolationHasBeenSet = true; m_thirdPartyFirewallMissingExpectedRouteTableViolation = std::move(value); }
    inline ResourceViolation& WithThirdPartyFirewallMissingExpectedRouteTableViolation(const ThirdPartyFirewallMissingExpectedRouteTableViolation& value) { SetThirdPartyFirewallMissingExpectedRouteTableViolation(value); return *this;}
    inline ResourceViolation& WithThirdPartyFirewallMissingExpectedRouteTableViolation(ThirdPartyFirewallMissingExpectedRouteTableViolation&& value) { SetThirdPartyFirewallMissingExpectedRouteTableViolation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The violation details for a third-party firewall's VPC endpoint subnet that
     * was deleted.</p>
     */
    inline const FirewallSubnetMissingVPCEndpointViolation& GetFirewallSubnetMissingVPCEndpointViolation() const{ return m_firewallSubnetMissingVPCEndpointViolation; }
    inline bool FirewallSubnetMissingVPCEndpointViolationHasBeenSet() const { return m_firewallSubnetMissingVPCEndpointViolationHasBeenSet; }
    inline void SetFirewallSubnetMissingVPCEndpointViolation(const FirewallSubnetMissingVPCEndpointViolation& value) { m_firewallSubnetMissingVPCEndpointViolationHasBeenSet = true; m_firewallSubnetMissingVPCEndpointViolation = value; }
    inline void SetFirewallSubnetMissingVPCEndpointViolation(FirewallSubnetMissingVPCEndpointViolation&& value) { m_firewallSubnetMissingVPCEndpointViolationHasBeenSet = true; m_firewallSubnetMissingVPCEndpointViolation = std::move(value); }
    inline ResourceViolation& WithFirewallSubnetMissingVPCEndpointViolation(const FirewallSubnetMissingVPCEndpointViolation& value) { SetFirewallSubnetMissingVPCEndpointViolation(value); return *this;}
    inline ResourceViolation& WithFirewallSubnetMissingVPCEndpointViolation(FirewallSubnetMissingVPCEndpointViolation&& value) { SetFirewallSubnetMissingVPCEndpointViolation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Violation detail for the entries in a network ACL resource.</p>
     */
    inline const InvalidNetworkAclEntriesViolation& GetInvalidNetworkAclEntriesViolation() const{ return m_invalidNetworkAclEntriesViolation; }
    inline bool InvalidNetworkAclEntriesViolationHasBeenSet() const { return m_invalidNetworkAclEntriesViolationHasBeenSet; }
    inline void SetInvalidNetworkAclEntriesViolation(const InvalidNetworkAclEntriesViolation& value) { m_invalidNetworkAclEntriesViolationHasBeenSet = true; m_invalidNetworkAclEntriesViolation = value; }
    inline void SetInvalidNetworkAclEntriesViolation(InvalidNetworkAclEntriesViolation&& value) { m_invalidNetworkAclEntriesViolationHasBeenSet = true; m_invalidNetworkAclEntriesViolation = std::move(value); }
    inline ResourceViolation& WithInvalidNetworkAclEntriesViolation(const InvalidNetworkAclEntriesViolation& value) { SetInvalidNetworkAclEntriesViolation(value); return *this;}
    inline ResourceViolation& WithInvalidNetworkAclEntriesViolation(InvalidNetworkAclEntriesViolation&& value) { SetInvalidNetworkAclEntriesViolation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of possible remediation action lists. Each individual possible
     * remediation action is a list of individual remediation actions.</p>
     */
    inline const PossibleRemediationActions& GetPossibleRemediationActions() const{ return m_possibleRemediationActions; }
    inline bool PossibleRemediationActionsHasBeenSet() const { return m_possibleRemediationActionsHasBeenSet; }
    inline void SetPossibleRemediationActions(const PossibleRemediationActions& value) { m_possibleRemediationActionsHasBeenSet = true; m_possibleRemediationActions = value; }
    inline void SetPossibleRemediationActions(PossibleRemediationActions&& value) { m_possibleRemediationActionsHasBeenSet = true; m_possibleRemediationActions = std::move(value); }
    inline ResourceViolation& WithPossibleRemediationActions(const PossibleRemediationActions& value) { SetPossibleRemediationActions(value); return *this;}
    inline ResourceViolation& WithPossibleRemediationActions(PossibleRemediationActions&& value) { SetPossibleRemediationActions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The violation details for a web ACL whose configuration is incompatible with
     * the Firewall Manager policy. </p>
     */
    inline const WebACLHasIncompatibleConfigurationViolation& GetWebACLHasIncompatibleConfigurationViolation() const{ return m_webACLHasIncompatibleConfigurationViolation; }
    inline bool WebACLHasIncompatibleConfigurationViolationHasBeenSet() const { return m_webACLHasIncompatibleConfigurationViolationHasBeenSet; }
    inline void SetWebACLHasIncompatibleConfigurationViolation(const WebACLHasIncompatibleConfigurationViolation& value) { m_webACLHasIncompatibleConfigurationViolationHasBeenSet = true; m_webACLHasIncompatibleConfigurationViolation = value; }
    inline void SetWebACLHasIncompatibleConfigurationViolation(WebACLHasIncompatibleConfigurationViolation&& value) { m_webACLHasIncompatibleConfigurationViolationHasBeenSet = true; m_webACLHasIncompatibleConfigurationViolation = std::move(value); }
    inline ResourceViolation& WithWebACLHasIncompatibleConfigurationViolation(const WebACLHasIncompatibleConfigurationViolation& value) { SetWebACLHasIncompatibleConfigurationViolation(value); return *this;}
    inline ResourceViolation& WithWebACLHasIncompatibleConfigurationViolation(WebACLHasIncompatibleConfigurationViolation&& value) { SetWebACLHasIncompatibleConfigurationViolation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The violation details for a web ACL that's associated with at least one
     * resource that's out of scope of the Firewall Manager policy. </p>
     */
    inline const WebACLHasOutOfScopeResourcesViolation& GetWebACLHasOutOfScopeResourcesViolation() const{ return m_webACLHasOutOfScopeResourcesViolation; }
    inline bool WebACLHasOutOfScopeResourcesViolationHasBeenSet() const { return m_webACLHasOutOfScopeResourcesViolationHasBeenSet; }
    inline void SetWebACLHasOutOfScopeResourcesViolation(const WebACLHasOutOfScopeResourcesViolation& value) { m_webACLHasOutOfScopeResourcesViolationHasBeenSet = true; m_webACLHasOutOfScopeResourcesViolation = value; }
    inline void SetWebACLHasOutOfScopeResourcesViolation(WebACLHasOutOfScopeResourcesViolation&& value) { m_webACLHasOutOfScopeResourcesViolationHasBeenSet = true; m_webACLHasOutOfScopeResourcesViolation = std::move(value); }
    inline ResourceViolation& WithWebACLHasOutOfScopeResourcesViolation(const WebACLHasOutOfScopeResourcesViolation& value) { SetWebACLHasOutOfScopeResourcesViolation(value); return *this;}
    inline ResourceViolation& WithWebACLHasOutOfScopeResourcesViolation(WebACLHasOutOfScopeResourcesViolation&& value) { SetWebACLHasOutOfScopeResourcesViolation(std::move(value)); return *this;}
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
