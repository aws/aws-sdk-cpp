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
#include <aws/fms/model/PossibleRemediationActions.h>
#include <aws/fms/model/FirewallSubnetIsOutOfScopeViolation.h>
#include <aws/fms/model/RouteHasOutOfScopeEndpointViolation.h>
#include <aws/fms/model/ThirdPartyFirewallMissingFirewallViolation.h>
#include <aws/fms/model/ThirdPartyFirewallMissingSubnetViolation.h>
#include <aws/fms/model/ThirdPartyFirewallMissingExpectedRouteTableViolation.h>
#include <aws/fms/model/FirewallSubnetMissingVPCEndpointViolation.h>
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


    /**
     * <p>Violation detail for security groups.</p>
     */
    inline const AwsVPCSecurityGroupViolation& GetAwsVPCSecurityGroupViolation() const{ return m_awsVPCSecurityGroupViolation; }

    /**
     * <p>Violation detail for security groups.</p>
     */
    inline bool AwsVPCSecurityGroupViolationHasBeenSet() const { return m_awsVPCSecurityGroupViolationHasBeenSet; }

    /**
     * <p>Violation detail for security groups.</p>
     */
    inline void SetAwsVPCSecurityGroupViolation(const AwsVPCSecurityGroupViolation& value) { m_awsVPCSecurityGroupViolationHasBeenSet = true; m_awsVPCSecurityGroupViolation = value; }

    /**
     * <p>Violation detail for security groups.</p>
     */
    inline void SetAwsVPCSecurityGroupViolation(AwsVPCSecurityGroupViolation&& value) { m_awsVPCSecurityGroupViolationHasBeenSet = true; m_awsVPCSecurityGroupViolation = std::move(value); }

    /**
     * <p>Violation detail for security groups.</p>
     */
    inline ResourceViolation& WithAwsVPCSecurityGroupViolation(const AwsVPCSecurityGroupViolation& value) { SetAwsVPCSecurityGroupViolation(value); return *this;}

    /**
     * <p>Violation detail for security groups.</p>
     */
    inline ResourceViolation& WithAwsVPCSecurityGroupViolation(AwsVPCSecurityGroupViolation&& value) { SetAwsVPCSecurityGroupViolation(std::move(value)); return *this;}


    /**
     * <p>Violation detail for a network interface.</p>
     */
    inline const AwsEc2NetworkInterfaceViolation& GetAwsEc2NetworkInterfaceViolation() const{ return m_awsEc2NetworkInterfaceViolation; }

    /**
     * <p>Violation detail for a network interface.</p>
     */
    inline bool AwsEc2NetworkInterfaceViolationHasBeenSet() const { return m_awsEc2NetworkInterfaceViolationHasBeenSet; }

    /**
     * <p>Violation detail for a network interface.</p>
     */
    inline void SetAwsEc2NetworkInterfaceViolation(const AwsEc2NetworkInterfaceViolation& value) { m_awsEc2NetworkInterfaceViolationHasBeenSet = true; m_awsEc2NetworkInterfaceViolation = value; }

    /**
     * <p>Violation detail for a network interface.</p>
     */
    inline void SetAwsEc2NetworkInterfaceViolation(AwsEc2NetworkInterfaceViolation&& value) { m_awsEc2NetworkInterfaceViolationHasBeenSet = true; m_awsEc2NetworkInterfaceViolation = std::move(value); }

    /**
     * <p>Violation detail for a network interface.</p>
     */
    inline ResourceViolation& WithAwsEc2NetworkInterfaceViolation(const AwsEc2NetworkInterfaceViolation& value) { SetAwsEc2NetworkInterfaceViolation(value); return *this;}

    /**
     * <p>Violation detail for a network interface.</p>
     */
    inline ResourceViolation& WithAwsEc2NetworkInterfaceViolation(AwsEc2NetworkInterfaceViolation&& value) { SetAwsEc2NetworkInterfaceViolation(std::move(value)); return *this;}


    /**
     * <p>Violation detail for an EC2 instance.</p>
     */
    inline const AwsEc2InstanceViolation& GetAwsEc2InstanceViolation() const{ return m_awsEc2InstanceViolation; }

    /**
     * <p>Violation detail for an EC2 instance.</p>
     */
    inline bool AwsEc2InstanceViolationHasBeenSet() const { return m_awsEc2InstanceViolationHasBeenSet; }

    /**
     * <p>Violation detail for an EC2 instance.</p>
     */
    inline void SetAwsEc2InstanceViolation(const AwsEc2InstanceViolation& value) { m_awsEc2InstanceViolationHasBeenSet = true; m_awsEc2InstanceViolation = value; }

    /**
     * <p>Violation detail for an EC2 instance.</p>
     */
    inline void SetAwsEc2InstanceViolation(AwsEc2InstanceViolation&& value) { m_awsEc2InstanceViolationHasBeenSet = true; m_awsEc2InstanceViolation = std::move(value); }

    /**
     * <p>Violation detail for an EC2 instance.</p>
     */
    inline ResourceViolation& WithAwsEc2InstanceViolation(const AwsEc2InstanceViolation& value) { SetAwsEc2InstanceViolation(value); return *this;}

    /**
     * <p>Violation detail for an EC2 instance.</p>
     */
    inline ResourceViolation& WithAwsEc2InstanceViolation(AwsEc2InstanceViolation&& value) { SetAwsEc2InstanceViolation(std::move(value)); return *this;}


    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a subnet
     * has no Firewall Manager managed firewall in its VPC. </p>
     */
    inline const NetworkFirewallMissingFirewallViolation& GetNetworkFirewallMissingFirewallViolation() const{ return m_networkFirewallMissingFirewallViolation; }

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a subnet
     * has no Firewall Manager managed firewall in its VPC. </p>
     */
    inline bool NetworkFirewallMissingFirewallViolationHasBeenSet() const { return m_networkFirewallMissingFirewallViolationHasBeenSet; }

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a subnet
     * has no Firewall Manager managed firewall in its VPC. </p>
     */
    inline void SetNetworkFirewallMissingFirewallViolation(const NetworkFirewallMissingFirewallViolation& value) { m_networkFirewallMissingFirewallViolationHasBeenSet = true; m_networkFirewallMissingFirewallViolation = value; }

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a subnet
     * has no Firewall Manager managed firewall in its VPC. </p>
     */
    inline void SetNetworkFirewallMissingFirewallViolation(NetworkFirewallMissingFirewallViolation&& value) { m_networkFirewallMissingFirewallViolationHasBeenSet = true; m_networkFirewallMissingFirewallViolation = std::move(value); }

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a subnet
     * has no Firewall Manager managed firewall in its VPC. </p>
     */
    inline ResourceViolation& WithNetworkFirewallMissingFirewallViolation(const NetworkFirewallMissingFirewallViolation& value) { SetNetworkFirewallMissingFirewallViolation(value); return *this;}

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a subnet
     * has no Firewall Manager managed firewall in its VPC. </p>
     */
    inline ResourceViolation& WithNetworkFirewallMissingFirewallViolation(NetworkFirewallMissingFirewallViolation&& value) { SetNetworkFirewallMissingFirewallViolation(std::move(value)); return *this;}


    /**
     * <p>Violation detail for an Network Firewall policy that indicates that an
     * Availability Zone is missing the expected Firewall Manager managed subnet.</p>
     */
    inline const NetworkFirewallMissingSubnetViolation& GetNetworkFirewallMissingSubnetViolation() const{ return m_networkFirewallMissingSubnetViolation; }

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that an
     * Availability Zone is missing the expected Firewall Manager managed subnet.</p>
     */
    inline bool NetworkFirewallMissingSubnetViolationHasBeenSet() const { return m_networkFirewallMissingSubnetViolationHasBeenSet; }

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that an
     * Availability Zone is missing the expected Firewall Manager managed subnet.</p>
     */
    inline void SetNetworkFirewallMissingSubnetViolation(const NetworkFirewallMissingSubnetViolation& value) { m_networkFirewallMissingSubnetViolationHasBeenSet = true; m_networkFirewallMissingSubnetViolation = value; }

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that an
     * Availability Zone is missing the expected Firewall Manager managed subnet.</p>
     */
    inline void SetNetworkFirewallMissingSubnetViolation(NetworkFirewallMissingSubnetViolation&& value) { m_networkFirewallMissingSubnetViolationHasBeenSet = true; m_networkFirewallMissingSubnetViolation = std::move(value); }

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that an
     * Availability Zone is missing the expected Firewall Manager managed subnet.</p>
     */
    inline ResourceViolation& WithNetworkFirewallMissingSubnetViolation(const NetworkFirewallMissingSubnetViolation& value) { SetNetworkFirewallMissingSubnetViolation(value); return *this;}

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that an
     * Availability Zone is missing the expected Firewall Manager managed subnet.</p>
     */
    inline ResourceViolation& WithNetworkFirewallMissingSubnetViolation(NetworkFirewallMissingSubnetViolation&& value) { SetNetworkFirewallMissingSubnetViolation(std::move(value)); return *this;}


    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a subnet
     * is not associated with the expected Firewall Manager managed route table. </p>
     */
    inline const NetworkFirewallMissingExpectedRTViolation& GetNetworkFirewallMissingExpectedRTViolation() const{ return m_networkFirewallMissingExpectedRTViolation; }

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a subnet
     * is not associated with the expected Firewall Manager managed route table. </p>
     */
    inline bool NetworkFirewallMissingExpectedRTViolationHasBeenSet() const { return m_networkFirewallMissingExpectedRTViolationHasBeenSet; }

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a subnet
     * is not associated with the expected Firewall Manager managed route table. </p>
     */
    inline void SetNetworkFirewallMissingExpectedRTViolation(const NetworkFirewallMissingExpectedRTViolation& value) { m_networkFirewallMissingExpectedRTViolationHasBeenSet = true; m_networkFirewallMissingExpectedRTViolation = value; }

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a subnet
     * is not associated with the expected Firewall Manager managed route table. </p>
     */
    inline void SetNetworkFirewallMissingExpectedRTViolation(NetworkFirewallMissingExpectedRTViolation&& value) { m_networkFirewallMissingExpectedRTViolationHasBeenSet = true; m_networkFirewallMissingExpectedRTViolation = std::move(value); }

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a subnet
     * is not associated with the expected Firewall Manager managed route table. </p>
     */
    inline ResourceViolation& WithNetworkFirewallMissingExpectedRTViolation(const NetworkFirewallMissingExpectedRTViolation& value) { SetNetworkFirewallMissingExpectedRTViolation(value); return *this;}

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a subnet
     * is not associated with the expected Firewall Manager managed route table. </p>
     */
    inline ResourceViolation& WithNetworkFirewallMissingExpectedRTViolation(NetworkFirewallMissingExpectedRTViolation&& value) { SetNetworkFirewallMissingExpectedRTViolation(std::move(value)); return *this;}


    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a
     * firewall policy in an individual account has been modified in a way that makes
     * it noncompliant. For example, the individual account owner might have deleted a
     * rule group, changed the priority of a stateless rule group, or changed a policy
     * default action.</p>
     */
    inline const NetworkFirewallPolicyModifiedViolation& GetNetworkFirewallPolicyModifiedViolation() const{ return m_networkFirewallPolicyModifiedViolation; }

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a
     * firewall policy in an individual account has been modified in a way that makes
     * it noncompliant. For example, the individual account owner might have deleted a
     * rule group, changed the priority of a stateless rule group, or changed a policy
     * default action.</p>
     */
    inline bool NetworkFirewallPolicyModifiedViolationHasBeenSet() const { return m_networkFirewallPolicyModifiedViolationHasBeenSet; }

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a
     * firewall policy in an individual account has been modified in a way that makes
     * it noncompliant. For example, the individual account owner might have deleted a
     * rule group, changed the priority of a stateless rule group, or changed a policy
     * default action.</p>
     */
    inline void SetNetworkFirewallPolicyModifiedViolation(const NetworkFirewallPolicyModifiedViolation& value) { m_networkFirewallPolicyModifiedViolationHasBeenSet = true; m_networkFirewallPolicyModifiedViolation = value; }

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a
     * firewall policy in an individual account has been modified in a way that makes
     * it noncompliant. For example, the individual account owner might have deleted a
     * rule group, changed the priority of a stateless rule group, or changed a policy
     * default action.</p>
     */
    inline void SetNetworkFirewallPolicyModifiedViolation(NetworkFirewallPolicyModifiedViolation&& value) { m_networkFirewallPolicyModifiedViolationHasBeenSet = true; m_networkFirewallPolicyModifiedViolation = std::move(value); }

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a
     * firewall policy in an individual account has been modified in a way that makes
     * it noncompliant. For example, the individual account owner might have deleted a
     * rule group, changed the priority of a stateless rule group, or changed a policy
     * default action.</p>
     */
    inline ResourceViolation& WithNetworkFirewallPolicyModifiedViolation(const NetworkFirewallPolicyModifiedViolation& value) { SetNetworkFirewallPolicyModifiedViolation(value); return *this;}

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a
     * firewall policy in an individual account has been modified in a way that makes
     * it noncompliant. For example, the individual account owner might have deleted a
     * rule group, changed the priority of a stateless rule group, or changed a policy
     * default action.</p>
     */
    inline ResourceViolation& WithNetworkFirewallPolicyModifiedViolation(NetworkFirewallPolicyModifiedViolation&& value) { SetNetworkFirewallPolicyModifiedViolation(std::move(value)); return *this;}


    /**
     * <p>Violation detail for the subnet for which internet traffic hasn't been
     * inspected.</p>
     */
    inline const NetworkFirewallInternetTrafficNotInspectedViolation& GetNetworkFirewallInternetTrafficNotInspectedViolation() const{ return m_networkFirewallInternetTrafficNotInspectedViolation; }

    /**
     * <p>Violation detail for the subnet for which internet traffic hasn't been
     * inspected.</p>
     */
    inline bool NetworkFirewallInternetTrafficNotInspectedViolationHasBeenSet() const { return m_networkFirewallInternetTrafficNotInspectedViolationHasBeenSet; }

    /**
     * <p>Violation detail for the subnet for which internet traffic hasn't been
     * inspected.</p>
     */
    inline void SetNetworkFirewallInternetTrafficNotInspectedViolation(const NetworkFirewallInternetTrafficNotInspectedViolation& value) { m_networkFirewallInternetTrafficNotInspectedViolationHasBeenSet = true; m_networkFirewallInternetTrafficNotInspectedViolation = value; }

    /**
     * <p>Violation detail for the subnet for which internet traffic hasn't been
     * inspected.</p>
     */
    inline void SetNetworkFirewallInternetTrafficNotInspectedViolation(NetworkFirewallInternetTrafficNotInspectedViolation&& value) { m_networkFirewallInternetTrafficNotInspectedViolationHasBeenSet = true; m_networkFirewallInternetTrafficNotInspectedViolation = std::move(value); }

    /**
     * <p>Violation detail for the subnet for which internet traffic hasn't been
     * inspected.</p>
     */
    inline ResourceViolation& WithNetworkFirewallInternetTrafficNotInspectedViolation(const NetworkFirewallInternetTrafficNotInspectedViolation& value) { SetNetworkFirewallInternetTrafficNotInspectedViolation(value); return *this;}

    /**
     * <p>Violation detail for the subnet for which internet traffic hasn't been
     * inspected.</p>
     */
    inline ResourceViolation& WithNetworkFirewallInternetTrafficNotInspectedViolation(NetworkFirewallInternetTrafficNotInspectedViolation&& value) { SetNetworkFirewallInternetTrafficNotInspectedViolation(std::move(value)); return *this;}


    /**
     * <p>The route configuration is invalid.</p>
     */
    inline const NetworkFirewallInvalidRouteConfigurationViolation& GetNetworkFirewallInvalidRouteConfigurationViolation() const{ return m_networkFirewallInvalidRouteConfigurationViolation; }

    /**
     * <p>The route configuration is invalid.</p>
     */
    inline bool NetworkFirewallInvalidRouteConfigurationViolationHasBeenSet() const { return m_networkFirewallInvalidRouteConfigurationViolationHasBeenSet; }

    /**
     * <p>The route configuration is invalid.</p>
     */
    inline void SetNetworkFirewallInvalidRouteConfigurationViolation(const NetworkFirewallInvalidRouteConfigurationViolation& value) { m_networkFirewallInvalidRouteConfigurationViolationHasBeenSet = true; m_networkFirewallInvalidRouteConfigurationViolation = value; }

    /**
     * <p>The route configuration is invalid.</p>
     */
    inline void SetNetworkFirewallInvalidRouteConfigurationViolation(NetworkFirewallInvalidRouteConfigurationViolation&& value) { m_networkFirewallInvalidRouteConfigurationViolationHasBeenSet = true; m_networkFirewallInvalidRouteConfigurationViolation = std::move(value); }

    /**
     * <p>The route configuration is invalid.</p>
     */
    inline ResourceViolation& WithNetworkFirewallInvalidRouteConfigurationViolation(const NetworkFirewallInvalidRouteConfigurationViolation& value) { SetNetworkFirewallInvalidRouteConfigurationViolation(value); return *this;}

    /**
     * <p>The route configuration is invalid.</p>
     */
    inline ResourceViolation& WithNetworkFirewallInvalidRouteConfigurationViolation(NetworkFirewallInvalidRouteConfigurationViolation&& value) { SetNetworkFirewallInvalidRouteConfigurationViolation(std::move(value)); return *this;}


    
    inline const NetworkFirewallBlackHoleRouteDetectedViolation& GetNetworkFirewallBlackHoleRouteDetectedViolation() const{ return m_networkFirewallBlackHoleRouteDetectedViolation; }

    
    inline bool NetworkFirewallBlackHoleRouteDetectedViolationHasBeenSet() const { return m_networkFirewallBlackHoleRouteDetectedViolationHasBeenSet; }

    
    inline void SetNetworkFirewallBlackHoleRouteDetectedViolation(const NetworkFirewallBlackHoleRouteDetectedViolation& value) { m_networkFirewallBlackHoleRouteDetectedViolationHasBeenSet = true; m_networkFirewallBlackHoleRouteDetectedViolation = value; }

    
    inline void SetNetworkFirewallBlackHoleRouteDetectedViolation(NetworkFirewallBlackHoleRouteDetectedViolation&& value) { m_networkFirewallBlackHoleRouteDetectedViolationHasBeenSet = true; m_networkFirewallBlackHoleRouteDetectedViolation = std::move(value); }

    
    inline ResourceViolation& WithNetworkFirewallBlackHoleRouteDetectedViolation(const NetworkFirewallBlackHoleRouteDetectedViolation& value) { SetNetworkFirewallBlackHoleRouteDetectedViolation(value); return *this;}

    
    inline ResourceViolation& WithNetworkFirewallBlackHoleRouteDetectedViolation(NetworkFirewallBlackHoleRouteDetectedViolation&& value) { SetNetworkFirewallBlackHoleRouteDetectedViolation(std::move(value)); return *this;}


    /**
     * <p>There's an unexpected firewall route.</p>
     */
    inline const NetworkFirewallUnexpectedFirewallRoutesViolation& GetNetworkFirewallUnexpectedFirewallRoutesViolation() const{ return m_networkFirewallUnexpectedFirewallRoutesViolation; }

    /**
     * <p>There's an unexpected firewall route.</p>
     */
    inline bool NetworkFirewallUnexpectedFirewallRoutesViolationHasBeenSet() const { return m_networkFirewallUnexpectedFirewallRoutesViolationHasBeenSet; }

    /**
     * <p>There's an unexpected firewall route.</p>
     */
    inline void SetNetworkFirewallUnexpectedFirewallRoutesViolation(const NetworkFirewallUnexpectedFirewallRoutesViolation& value) { m_networkFirewallUnexpectedFirewallRoutesViolationHasBeenSet = true; m_networkFirewallUnexpectedFirewallRoutesViolation = value; }

    /**
     * <p>There's an unexpected firewall route.</p>
     */
    inline void SetNetworkFirewallUnexpectedFirewallRoutesViolation(NetworkFirewallUnexpectedFirewallRoutesViolation&& value) { m_networkFirewallUnexpectedFirewallRoutesViolationHasBeenSet = true; m_networkFirewallUnexpectedFirewallRoutesViolation = std::move(value); }

    /**
     * <p>There's an unexpected firewall route.</p>
     */
    inline ResourceViolation& WithNetworkFirewallUnexpectedFirewallRoutesViolation(const NetworkFirewallUnexpectedFirewallRoutesViolation& value) { SetNetworkFirewallUnexpectedFirewallRoutesViolation(value); return *this;}

    /**
     * <p>There's an unexpected firewall route.</p>
     */
    inline ResourceViolation& WithNetworkFirewallUnexpectedFirewallRoutesViolation(NetworkFirewallUnexpectedFirewallRoutesViolation&& value) { SetNetworkFirewallUnexpectedFirewallRoutesViolation(std::move(value)); return *this;}


    /**
     * <p>There's an unexpected gateway route.</p>
     */
    inline const NetworkFirewallUnexpectedGatewayRoutesViolation& GetNetworkFirewallUnexpectedGatewayRoutesViolation() const{ return m_networkFirewallUnexpectedGatewayRoutesViolation; }

    /**
     * <p>There's an unexpected gateway route.</p>
     */
    inline bool NetworkFirewallUnexpectedGatewayRoutesViolationHasBeenSet() const { return m_networkFirewallUnexpectedGatewayRoutesViolationHasBeenSet; }

    /**
     * <p>There's an unexpected gateway route.</p>
     */
    inline void SetNetworkFirewallUnexpectedGatewayRoutesViolation(const NetworkFirewallUnexpectedGatewayRoutesViolation& value) { m_networkFirewallUnexpectedGatewayRoutesViolationHasBeenSet = true; m_networkFirewallUnexpectedGatewayRoutesViolation = value; }

    /**
     * <p>There's an unexpected gateway route.</p>
     */
    inline void SetNetworkFirewallUnexpectedGatewayRoutesViolation(NetworkFirewallUnexpectedGatewayRoutesViolation&& value) { m_networkFirewallUnexpectedGatewayRoutesViolationHasBeenSet = true; m_networkFirewallUnexpectedGatewayRoutesViolation = std::move(value); }

    /**
     * <p>There's an unexpected gateway route.</p>
     */
    inline ResourceViolation& WithNetworkFirewallUnexpectedGatewayRoutesViolation(const NetworkFirewallUnexpectedGatewayRoutesViolation& value) { SetNetworkFirewallUnexpectedGatewayRoutesViolation(value); return *this;}

    /**
     * <p>There's an unexpected gateway route.</p>
     */
    inline ResourceViolation& WithNetworkFirewallUnexpectedGatewayRoutesViolation(NetworkFirewallUnexpectedGatewayRoutesViolation&& value) { SetNetworkFirewallUnexpectedGatewayRoutesViolation(std::move(value)); return *this;}


    /**
     * <p>Expected routes are missing from Network Firewall.</p>
     */
    inline const NetworkFirewallMissingExpectedRoutesViolation& GetNetworkFirewallMissingExpectedRoutesViolation() const{ return m_networkFirewallMissingExpectedRoutesViolation; }

    /**
     * <p>Expected routes are missing from Network Firewall.</p>
     */
    inline bool NetworkFirewallMissingExpectedRoutesViolationHasBeenSet() const { return m_networkFirewallMissingExpectedRoutesViolationHasBeenSet; }

    /**
     * <p>Expected routes are missing from Network Firewall.</p>
     */
    inline void SetNetworkFirewallMissingExpectedRoutesViolation(const NetworkFirewallMissingExpectedRoutesViolation& value) { m_networkFirewallMissingExpectedRoutesViolationHasBeenSet = true; m_networkFirewallMissingExpectedRoutesViolation = value; }

    /**
     * <p>Expected routes are missing from Network Firewall.</p>
     */
    inline void SetNetworkFirewallMissingExpectedRoutesViolation(NetworkFirewallMissingExpectedRoutesViolation&& value) { m_networkFirewallMissingExpectedRoutesViolationHasBeenSet = true; m_networkFirewallMissingExpectedRoutesViolation = std::move(value); }

    /**
     * <p>Expected routes are missing from Network Firewall.</p>
     */
    inline ResourceViolation& WithNetworkFirewallMissingExpectedRoutesViolation(const NetworkFirewallMissingExpectedRoutesViolation& value) { SetNetworkFirewallMissingExpectedRoutesViolation(value); return *this;}

    /**
     * <p>Expected routes are missing from Network Firewall.</p>
     */
    inline ResourceViolation& WithNetworkFirewallMissingExpectedRoutesViolation(NetworkFirewallMissingExpectedRoutesViolation&& value) { SetNetworkFirewallMissingExpectedRoutesViolation(std::move(value)); return *this;}


    /**
     * <p>Violation detail for a DNS Firewall policy that indicates that a rule group
     * that Firewall Manager tried to associate with a VPC has the same priority as a
     * rule group that's already associated. </p>
     */
    inline const DnsRuleGroupPriorityConflictViolation& GetDnsRuleGroupPriorityConflictViolation() const{ return m_dnsRuleGroupPriorityConflictViolation; }

    /**
     * <p>Violation detail for a DNS Firewall policy that indicates that a rule group
     * that Firewall Manager tried to associate with a VPC has the same priority as a
     * rule group that's already associated. </p>
     */
    inline bool DnsRuleGroupPriorityConflictViolationHasBeenSet() const { return m_dnsRuleGroupPriorityConflictViolationHasBeenSet; }

    /**
     * <p>Violation detail for a DNS Firewall policy that indicates that a rule group
     * that Firewall Manager tried to associate with a VPC has the same priority as a
     * rule group that's already associated. </p>
     */
    inline void SetDnsRuleGroupPriorityConflictViolation(const DnsRuleGroupPriorityConflictViolation& value) { m_dnsRuleGroupPriorityConflictViolationHasBeenSet = true; m_dnsRuleGroupPriorityConflictViolation = value; }

    /**
     * <p>Violation detail for a DNS Firewall policy that indicates that a rule group
     * that Firewall Manager tried to associate with a VPC has the same priority as a
     * rule group that's already associated. </p>
     */
    inline void SetDnsRuleGroupPriorityConflictViolation(DnsRuleGroupPriorityConflictViolation&& value) { m_dnsRuleGroupPriorityConflictViolationHasBeenSet = true; m_dnsRuleGroupPriorityConflictViolation = std::move(value); }

    /**
     * <p>Violation detail for a DNS Firewall policy that indicates that a rule group
     * that Firewall Manager tried to associate with a VPC has the same priority as a
     * rule group that's already associated. </p>
     */
    inline ResourceViolation& WithDnsRuleGroupPriorityConflictViolation(const DnsRuleGroupPriorityConflictViolation& value) { SetDnsRuleGroupPriorityConflictViolation(value); return *this;}

    /**
     * <p>Violation detail for a DNS Firewall policy that indicates that a rule group
     * that Firewall Manager tried to associate with a VPC has the same priority as a
     * rule group that's already associated. </p>
     */
    inline ResourceViolation& WithDnsRuleGroupPriorityConflictViolation(DnsRuleGroupPriorityConflictViolation&& value) { SetDnsRuleGroupPriorityConflictViolation(std::move(value)); return *this;}


    /**
     * <p>Violation detail for a DNS Firewall policy that indicates that a rule group
     * that Firewall Manager tried to associate with a VPC is already associated with
     * the VPC and can't be associated again. </p>
     */
    inline const DnsDuplicateRuleGroupViolation& GetDnsDuplicateRuleGroupViolation() const{ return m_dnsDuplicateRuleGroupViolation; }

    /**
     * <p>Violation detail for a DNS Firewall policy that indicates that a rule group
     * that Firewall Manager tried to associate with a VPC is already associated with
     * the VPC and can't be associated again. </p>
     */
    inline bool DnsDuplicateRuleGroupViolationHasBeenSet() const { return m_dnsDuplicateRuleGroupViolationHasBeenSet; }

    /**
     * <p>Violation detail for a DNS Firewall policy that indicates that a rule group
     * that Firewall Manager tried to associate with a VPC is already associated with
     * the VPC and can't be associated again. </p>
     */
    inline void SetDnsDuplicateRuleGroupViolation(const DnsDuplicateRuleGroupViolation& value) { m_dnsDuplicateRuleGroupViolationHasBeenSet = true; m_dnsDuplicateRuleGroupViolation = value; }

    /**
     * <p>Violation detail for a DNS Firewall policy that indicates that a rule group
     * that Firewall Manager tried to associate with a VPC is already associated with
     * the VPC and can't be associated again. </p>
     */
    inline void SetDnsDuplicateRuleGroupViolation(DnsDuplicateRuleGroupViolation&& value) { m_dnsDuplicateRuleGroupViolationHasBeenSet = true; m_dnsDuplicateRuleGroupViolation = std::move(value); }

    /**
     * <p>Violation detail for a DNS Firewall policy that indicates that a rule group
     * that Firewall Manager tried to associate with a VPC is already associated with
     * the VPC and can't be associated again. </p>
     */
    inline ResourceViolation& WithDnsDuplicateRuleGroupViolation(const DnsDuplicateRuleGroupViolation& value) { SetDnsDuplicateRuleGroupViolation(value); return *this;}

    /**
     * <p>Violation detail for a DNS Firewall policy that indicates that a rule group
     * that Firewall Manager tried to associate with a VPC is already associated with
     * the VPC and can't be associated again. </p>
     */
    inline ResourceViolation& WithDnsDuplicateRuleGroupViolation(DnsDuplicateRuleGroupViolation&& value) { SetDnsDuplicateRuleGroupViolation(std::move(value)); return *this;}


    /**
     * <p>Violation detail for a DNS Firewall policy that indicates that the VPC
     * reached the limit for associated DNS Firewall rule groups. Firewall Manager
     * tried to associate another rule group with the VPC and failed. </p>
     */
    inline const DnsRuleGroupLimitExceededViolation& GetDnsRuleGroupLimitExceededViolation() const{ return m_dnsRuleGroupLimitExceededViolation; }

    /**
     * <p>Violation detail for a DNS Firewall policy that indicates that the VPC
     * reached the limit for associated DNS Firewall rule groups. Firewall Manager
     * tried to associate another rule group with the VPC and failed. </p>
     */
    inline bool DnsRuleGroupLimitExceededViolationHasBeenSet() const { return m_dnsRuleGroupLimitExceededViolationHasBeenSet; }

    /**
     * <p>Violation detail for a DNS Firewall policy that indicates that the VPC
     * reached the limit for associated DNS Firewall rule groups. Firewall Manager
     * tried to associate another rule group with the VPC and failed. </p>
     */
    inline void SetDnsRuleGroupLimitExceededViolation(const DnsRuleGroupLimitExceededViolation& value) { m_dnsRuleGroupLimitExceededViolationHasBeenSet = true; m_dnsRuleGroupLimitExceededViolation = value; }

    /**
     * <p>Violation detail for a DNS Firewall policy that indicates that the VPC
     * reached the limit for associated DNS Firewall rule groups. Firewall Manager
     * tried to associate another rule group with the VPC and failed. </p>
     */
    inline void SetDnsRuleGroupLimitExceededViolation(DnsRuleGroupLimitExceededViolation&& value) { m_dnsRuleGroupLimitExceededViolationHasBeenSet = true; m_dnsRuleGroupLimitExceededViolation = std::move(value); }

    /**
     * <p>Violation detail for a DNS Firewall policy that indicates that the VPC
     * reached the limit for associated DNS Firewall rule groups. Firewall Manager
     * tried to associate another rule group with the VPC and failed. </p>
     */
    inline ResourceViolation& WithDnsRuleGroupLimitExceededViolation(const DnsRuleGroupLimitExceededViolation& value) { SetDnsRuleGroupLimitExceededViolation(value); return *this;}

    /**
     * <p>Violation detail for a DNS Firewall policy that indicates that the VPC
     * reached the limit for associated DNS Firewall rule groups. Firewall Manager
     * tried to associate another rule group with the VPC and failed. </p>
     */
    inline ResourceViolation& WithDnsRuleGroupLimitExceededViolation(DnsRuleGroupLimitExceededViolation&& value) { SetDnsRuleGroupLimitExceededViolation(std::move(value)); return *this;}


    /**
     * <p>A list of possible remediation action lists. Each individual possible
     * remediation action is a list of individual remediation actions.</p>
     */
    inline const PossibleRemediationActions& GetPossibleRemediationActions() const{ return m_possibleRemediationActions; }

    /**
     * <p>A list of possible remediation action lists. Each individual possible
     * remediation action is a list of individual remediation actions.</p>
     */
    inline bool PossibleRemediationActionsHasBeenSet() const { return m_possibleRemediationActionsHasBeenSet; }

    /**
     * <p>A list of possible remediation action lists. Each individual possible
     * remediation action is a list of individual remediation actions.</p>
     */
    inline void SetPossibleRemediationActions(const PossibleRemediationActions& value) { m_possibleRemediationActionsHasBeenSet = true; m_possibleRemediationActions = value; }

    /**
     * <p>A list of possible remediation action lists. Each individual possible
     * remediation action is a list of individual remediation actions.</p>
     */
    inline void SetPossibleRemediationActions(PossibleRemediationActions&& value) { m_possibleRemediationActionsHasBeenSet = true; m_possibleRemediationActions = std::move(value); }

    /**
     * <p>A list of possible remediation action lists. Each individual possible
     * remediation action is a list of individual remediation actions.</p>
     */
    inline ResourceViolation& WithPossibleRemediationActions(const PossibleRemediationActions& value) { SetPossibleRemediationActions(value); return *this;}

    /**
     * <p>A list of possible remediation action lists. Each individual possible
     * remediation action is a list of individual remediation actions.</p>
     */
    inline ResourceViolation& WithPossibleRemediationActions(PossibleRemediationActions&& value) { SetPossibleRemediationActions(std::move(value)); return *this;}


    /**
     * <p>Contains details about the firewall subnet that violates the policy
     * scope.</p>
     */
    inline const FirewallSubnetIsOutOfScopeViolation& GetFirewallSubnetIsOutOfScopeViolation() const{ return m_firewallSubnetIsOutOfScopeViolation; }

    /**
     * <p>Contains details about the firewall subnet that violates the policy
     * scope.</p>
     */
    inline bool FirewallSubnetIsOutOfScopeViolationHasBeenSet() const { return m_firewallSubnetIsOutOfScopeViolationHasBeenSet; }

    /**
     * <p>Contains details about the firewall subnet that violates the policy
     * scope.</p>
     */
    inline void SetFirewallSubnetIsOutOfScopeViolation(const FirewallSubnetIsOutOfScopeViolation& value) { m_firewallSubnetIsOutOfScopeViolationHasBeenSet = true; m_firewallSubnetIsOutOfScopeViolation = value; }

    /**
     * <p>Contains details about the firewall subnet that violates the policy
     * scope.</p>
     */
    inline void SetFirewallSubnetIsOutOfScopeViolation(FirewallSubnetIsOutOfScopeViolation&& value) { m_firewallSubnetIsOutOfScopeViolationHasBeenSet = true; m_firewallSubnetIsOutOfScopeViolation = std::move(value); }

    /**
     * <p>Contains details about the firewall subnet that violates the policy
     * scope.</p>
     */
    inline ResourceViolation& WithFirewallSubnetIsOutOfScopeViolation(const FirewallSubnetIsOutOfScopeViolation& value) { SetFirewallSubnetIsOutOfScopeViolation(value); return *this;}

    /**
     * <p>Contains details about the firewall subnet that violates the policy
     * scope.</p>
     */
    inline ResourceViolation& WithFirewallSubnetIsOutOfScopeViolation(FirewallSubnetIsOutOfScopeViolation&& value) { SetFirewallSubnetIsOutOfScopeViolation(std::move(value)); return *this;}


    /**
     * <p>Contains details about the route endpoint that violates the policy scope.</p>
     */
    inline const RouteHasOutOfScopeEndpointViolation& GetRouteHasOutOfScopeEndpointViolation() const{ return m_routeHasOutOfScopeEndpointViolation; }

    /**
     * <p>Contains details about the route endpoint that violates the policy scope.</p>
     */
    inline bool RouteHasOutOfScopeEndpointViolationHasBeenSet() const { return m_routeHasOutOfScopeEndpointViolationHasBeenSet; }

    /**
     * <p>Contains details about the route endpoint that violates the policy scope.</p>
     */
    inline void SetRouteHasOutOfScopeEndpointViolation(const RouteHasOutOfScopeEndpointViolation& value) { m_routeHasOutOfScopeEndpointViolationHasBeenSet = true; m_routeHasOutOfScopeEndpointViolation = value; }

    /**
     * <p>Contains details about the route endpoint that violates the policy scope.</p>
     */
    inline void SetRouteHasOutOfScopeEndpointViolation(RouteHasOutOfScopeEndpointViolation&& value) { m_routeHasOutOfScopeEndpointViolationHasBeenSet = true; m_routeHasOutOfScopeEndpointViolation = std::move(value); }

    /**
     * <p>Contains details about the route endpoint that violates the policy scope.</p>
     */
    inline ResourceViolation& WithRouteHasOutOfScopeEndpointViolation(const RouteHasOutOfScopeEndpointViolation& value) { SetRouteHasOutOfScopeEndpointViolation(value); return *this;}

    /**
     * <p>Contains details about the route endpoint that violates the policy scope.</p>
     */
    inline ResourceViolation& WithRouteHasOutOfScopeEndpointViolation(RouteHasOutOfScopeEndpointViolation&& value) { SetRouteHasOutOfScopeEndpointViolation(std::move(value)); return *this;}


    /**
     * <p>The violation details for a third-party firewall that's been deleted.</p>
     */
    inline const ThirdPartyFirewallMissingFirewallViolation& GetThirdPartyFirewallMissingFirewallViolation() const{ return m_thirdPartyFirewallMissingFirewallViolation; }

    /**
     * <p>The violation details for a third-party firewall that's been deleted.</p>
     */
    inline bool ThirdPartyFirewallMissingFirewallViolationHasBeenSet() const { return m_thirdPartyFirewallMissingFirewallViolationHasBeenSet; }

    /**
     * <p>The violation details for a third-party firewall that's been deleted.</p>
     */
    inline void SetThirdPartyFirewallMissingFirewallViolation(const ThirdPartyFirewallMissingFirewallViolation& value) { m_thirdPartyFirewallMissingFirewallViolationHasBeenSet = true; m_thirdPartyFirewallMissingFirewallViolation = value; }

    /**
     * <p>The violation details for a third-party firewall that's been deleted.</p>
     */
    inline void SetThirdPartyFirewallMissingFirewallViolation(ThirdPartyFirewallMissingFirewallViolation&& value) { m_thirdPartyFirewallMissingFirewallViolationHasBeenSet = true; m_thirdPartyFirewallMissingFirewallViolation = std::move(value); }

    /**
     * <p>The violation details for a third-party firewall that's been deleted.</p>
     */
    inline ResourceViolation& WithThirdPartyFirewallMissingFirewallViolation(const ThirdPartyFirewallMissingFirewallViolation& value) { SetThirdPartyFirewallMissingFirewallViolation(value); return *this;}

    /**
     * <p>The violation details for a third-party firewall that's been deleted.</p>
     */
    inline ResourceViolation& WithThirdPartyFirewallMissingFirewallViolation(ThirdPartyFirewallMissingFirewallViolation&& value) { SetThirdPartyFirewallMissingFirewallViolation(std::move(value)); return *this;}


    /**
     * <p>The violation details for a third-party firewall's subnet that's been
     * deleted.</p>
     */
    inline const ThirdPartyFirewallMissingSubnetViolation& GetThirdPartyFirewallMissingSubnetViolation() const{ return m_thirdPartyFirewallMissingSubnetViolation; }

    /**
     * <p>The violation details for a third-party firewall's subnet that's been
     * deleted.</p>
     */
    inline bool ThirdPartyFirewallMissingSubnetViolationHasBeenSet() const { return m_thirdPartyFirewallMissingSubnetViolationHasBeenSet; }

    /**
     * <p>The violation details for a third-party firewall's subnet that's been
     * deleted.</p>
     */
    inline void SetThirdPartyFirewallMissingSubnetViolation(const ThirdPartyFirewallMissingSubnetViolation& value) { m_thirdPartyFirewallMissingSubnetViolationHasBeenSet = true; m_thirdPartyFirewallMissingSubnetViolation = value; }

    /**
     * <p>The violation details for a third-party firewall's subnet that's been
     * deleted.</p>
     */
    inline void SetThirdPartyFirewallMissingSubnetViolation(ThirdPartyFirewallMissingSubnetViolation&& value) { m_thirdPartyFirewallMissingSubnetViolationHasBeenSet = true; m_thirdPartyFirewallMissingSubnetViolation = std::move(value); }

    /**
     * <p>The violation details for a third-party firewall's subnet that's been
     * deleted.</p>
     */
    inline ResourceViolation& WithThirdPartyFirewallMissingSubnetViolation(const ThirdPartyFirewallMissingSubnetViolation& value) { SetThirdPartyFirewallMissingSubnetViolation(value); return *this;}

    /**
     * <p>The violation details for a third-party firewall's subnet that's been
     * deleted.</p>
     */
    inline ResourceViolation& WithThirdPartyFirewallMissingSubnetViolation(ThirdPartyFirewallMissingSubnetViolation&& value) { SetThirdPartyFirewallMissingSubnetViolation(std::move(value)); return *this;}


    /**
     * <p>The violation details for a third-party firewall that has the Firewall
     * Manager managed route table that was associated with the third-party firewall
     * has been deleted.</p>
     */
    inline const ThirdPartyFirewallMissingExpectedRouteTableViolation& GetThirdPartyFirewallMissingExpectedRouteTableViolation() const{ return m_thirdPartyFirewallMissingExpectedRouteTableViolation; }

    /**
     * <p>The violation details for a third-party firewall that has the Firewall
     * Manager managed route table that was associated with the third-party firewall
     * has been deleted.</p>
     */
    inline bool ThirdPartyFirewallMissingExpectedRouteTableViolationHasBeenSet() const { return m_thirdPartyFirewallMissingExpectedRouteTableViolationHasBeenSet; }

    /**
     * <p>The violation details for a third-party firewall that has the Firewall
     * Manager managed route table that was associated with the third-party firewall
     * has been deleted.</p>
     */
    inline void SetThirdPartyFirewallMissingExpectedRouteTableViolation(const ThirdPartyFirewallMissingExpectedRouteTableViolation& value) { m_thirdPartyFirewallMissingExpectedRouteTableViolationHasBeenSet = true; m_thirdPartyFirewallMissingExpectedRouteTableViolation = value; }

    /**
     * <p>The violation details for a third-party firewall that has the Firewall
     * Manager managed route table that was associated with the third-party firewall
     * has been deleted.</p>
     */
    inline void SetThirdPartyFirewallMissingExpectedRouteTableViolation(ThirdPartyFirewallMissingExpectedRouteTableViolation&& value) { m_thirdPartyFirewallMissingExpectedRouteTableViolationHasBeenSet = true; m_thirdPartyFirewallMissingExpectedRouteTableViolation = std::move(value); }

    /**
     * <p>The violation details for a third-party firewall that has the Firewall
     * Manager managed route table that was associated with the third-party firewall
     * has been deleted.</p>
     */
    inline ResourceViolation& WithThirdPartyFirewallMissingExpectedRouteTableViolation(const ThirdPartyFirewallMissingExpectedRouteTableViolation& value) { SetThirdPartyFirewallMissingExpectedRouteTableViolation(value); return *this;}

    /**
     * <p>The violation details for a third-party firewall that has the Firewall
     * Manager managed route table that was associated with the third-party firewall
     * has been deleted.</p>
     */
    inline ResourceViolation& WithThirdPartyFirewallMissingExpectedRouteTableViolation(ThirdPartyFirewallMissingExpectedRouteTableViolation&& value) { SetThirdPartyFirewallMissingExpectedRouteTableViolation(std::move(value)); return *this;}


    /**
     * <p>The violation details for a third-party firewall's VPC endpoint subnet that
     * was deleted.</p>
     */
    inline const FirewallSubnetMissingVPCEndpointViolation& GetFirewallSubnetMissingVPCEndpointViolation() const{ return m_firewallSubnetMissingVPCEndpointViolation; }

    /**
     * <p>The violation details for a third-party firewall's VPC endpoint subnet that
     * was deleted.</p>
     */
    inline bool FirewallSubnetMissingVPCEndpointViolationHasBeenSet() const { return m_firewallSubnetMissingVPCEndpointViolationHasBeenSet; }

    /**
     * <p>The violation details for a third-party firewall's VPC endpoint subnet that
     * was deleted.</p>
     */
    inline void SetFirewallSubnetMissingVPCEndpointViolation(const FirewallSubnetMissingVPCEndpointViolation& value) { m_firewallSubnetMissingVPCEndpointViolationHasBeenSet = true; m_firewallSubnetMissingVPCEndpointViolation = value; }

    /**
     * <p>The violation details for a third-party firewall's VPC endpoint subnet that
     * was deleted.</p>
     */
    inline void SetFirewallSubnetMissingVPCEndpointViolation(FirewallSubnetMissingVPCEndpointViolation&& value) { m_firewallSubnetMissingVPCEndpointViolationHasBeenSet = true; m_firewallSubnetMissingVPCEndpointViolation = std::move(value); }

    /**
     * <p>The violation details for a third-party firewall's VPC endpoint subnet that
     * was deleted.</p>
     */
    inline ResourceViolation& WithFirewallSubnetMissingVPCEndpointViolation(const FirewallSubnetMissingVPCEndpointViolation& value) { SetFirewallSubnetMissingVPCEndpointViolation(value); return *this;}

    /**
     * <p>The violation details for a third-party firewall's VPC endpoint subnet that
     * was deleted.</p>
     */
    inline ResourceViolation& WithFirewallSubnetMissingVPCEndpointViolation(FirewallSubnetMissingVPCEndpointViolation&& value) { SetFirewallSubnetMissingVPCEndpointViolation(std::move(value)); return *this;}

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

    PossibleRemediationActions m_possibleRemediationActions;
    bool m_possibleRemediationActionsHasBeenSet = false;

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
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
