/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/ResourceViolation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

ResourceViolation::ResourceViolation() : 
    m_awsVPCSecurityGroupViolationHasBeenSet(false),
    m_awsEc2NetworkInterfaceViolationHasBeenSet(false),
    m_awsEc2InstanceViolationHasBeenSet(false),
    m_networkFirewallMissingFirewallViolationHasBeenSet(false),
    m_networkFirewallMissingSubnetViolationHasBeenSet(false),
    m_networkFirewallMissingExpectedRTViolationHasBeenSet(false),
    m_networkFirewallPolicyModifiedViolationHasBeenSet(false),
    m_networkFirewallInternetTrafficNotInspectedViolationHasBeenSet(false),
    m_networkFirewallInvalidRouteConfigurationViolationHasBeenSet(false),
    m_networkFirewallBlackHoleRouteDetectedViolationHasBeenSet(false),
    m_networkFirewallUnexpectedFirewallRoutesViolationHasBeenSet(false),
    m_networkFirewallUnexpectedGatewayRoutesViolationHasBeenSet(false),
    m_networkFirewallMissingExpectedRoutesViolationHasBeenSet(false),
    m_dnsRuleGroupPriorityConflictViolationHasBeenSet(false),
    m_dnsDuplicateRuleGroupViolationHasBeenSet(false),
    m_dnsRuleGroupLimitExceededViolationHasBeenSet(false),
    m_possibleRemediationActionsHasBeenSet(false),
    m_firewallSubnetIsOutOfScopeViolationHasBeenSet(false),
    m_routeHasOutOfScopeEndpointViolationHasBeenSet(false),
    m_thirdPartyFirewallMissingFirewallViolationHasBeenSet(false),
    m_thirdPartyFirewallMissingSubnetViolationHasBeenSet(false),
    m_thirdPartyFirewallMissingExpectedRouteTableViolationHasBeenSet(false),
    m_firewallSubnetMissingVPCEndpointViolationHasBeenSet(false)
{
}

ResourceViolation::ResourceViolation(JsonView jsonValue) : 
    m_awsVPCSecurityGroupViolationHasBeenSet(false),
    m_awsEc2NetworkInterfaceViolationHasBeenSet(false),
    m_awsEc2InstanceViolationHasBeenSet(false),
    m_networkFirewallMissingFirewallViolationHasBeenSet(false),
    m_networkFirewallMissingSubnetViolationHasBeenSet(false),
    m_networkFirewallMissingExpectedRTViolationHasBeenSet(false),
    m_networkFirewallPolicyModifiedViolationHasBeenSet(false),
    m_networkFirewallInternetTrafficNotInspectedViolationHasBeenSet(false),
    m_networkFirewallInvalidRouteConfigurationViolationHasBeenSet(false),
    m_networkFirewallBlackHoleRouteDetectedViolationHasBeenSet(false),
    m_networkFirewallUnexpectedFirewallRoutesViolationHasBeenSet(false),
    m_networkFirewallUnexpectedGatewayRoutesViolationHasBeenSet(false),
    m_networkFirewallMissingExpectedRoutesViolationHasBeenSet(false),
    m_dnsRuleGroupPriorityConflictViolationHasBeenSet(false),
    m_dnsDuplicateRuleGroupViolationHasBeenSet(false),
    m_dnsRuleGroupLimitExceededViolationHasBeenSet(false),
    m_possibleRemediationActionsHasBeenSet(false),
    m_firewallSubnetIsOutOfScopeViolationHasBeenSet(false),
    m_routeHasOutOfScopeEndpointViolationHasBeenSet(false),
    m_thirdPartyFirewallMissingFirewallViolationHasBeenSet(false),
    m_thirdPartyFirewallMissingSubnetViolationHasBeenSet(false),
    m_thirdPartyFirewallMissingExpectedRouteTableViolationHasBeenSet(false),
    m_firewallSubnetMissingVPCEndpointViolationHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceViolation& ResourceViolation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AwsVPCSecurityGroupViolation"))
  {
    m_awsVPCSecurityGroupViolation = jsonValue.GetObject("AwsVPCSecurityGroupViolation");

    m_awsVPCSecurityGroupViolationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsEc2NetworkInterfaceViolation"))
  {
    m_awsEc2NetworkInterfaceViolation = jsonValue.GetObject("AwsEc2NetworkInterfaceViolation");

    m_awsEc2NetworkInterfaceViolationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsEc2InstanceViolation"))
  {
    m_awsEc2InstanceViolation = jsonValue.GetObject("AwsEc2InstanceViolation");

    m_awsEc2InstanceViolationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkFirewallMissingFirewallViolation"))
  {
    m_networkFirewallMissingFirewallViolation = jsonValue.GetObject("NetworkFirewallMissingFirewallViolation");

    m_networkFirewallMissingFirewallViolationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkFirewallMissingSubnetViolation"))
  {
    m_networkFirewallMissingSubnetViolation = jsonValue.GetObject("NetworkFirewallMissingSubnetViolation");

    m_networkFirewallMissingSubnetViolationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkFirewallMissingExpectedRTViolation"))
  {
    m_networkFirewallMissingExpectedRTViolation = jsonValue.GetObject("NetworkFirewallMissingExpectedRTViolation");

    m_networkFirewallMissingExpectedRTViolationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkFirewallPolicyModifiedViolation"))
  {
    m_networkFirewallPolicyModifiedViolation = jsonValue.GetObject("NetworkFirewallPolicyModifiedViolation");

    m_networkFirewallPolicyModifiedViolationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkFirewallInternetTrafficNotInspectedViolation"))
  {
    m_networkFirewallInternetTrafficNotInspectedViolation = jsonValue.GetObject("NetworkFirewallInternetTrafficNotInspectedViolation");

    m_networkFirewallInternetTrafficNotInspectedViolationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkFirewallInvalidRouteConfigurationViolation"))
  {
    m_networkFirewallInvalidRouteConfigurationViolation = jsonValue.GetObject("NetworkFirewallInvalidRouteConfigurationViolation");

    m_networkFirewallInvalidRouteConfigurationViolationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkFirewallBlackHoleRouteDetectedViolation"))
  {
    m_networkFirewallBlackHoleRouteDetectedViolation = jsonValue.GetObject("NetworkFirewallBlackHoleRouteDetectedViolation");

    m_networkFirewallBlackHoleRouteDetectedViolationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkFirewallUnexpectedFirewallRoutesViolation"))
  {
    m_networkFirewallUnexpectedFirewallRoutesViolation = jsonValue.GetObject("NetworkFirewallUnexpectedFirewallRoutesViolation");

    m_networkFirewallUnexpectedFirewallRoutesViolationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkFirewallUnexpectedGatewayRoutesViolation"))
  {
    m_networkFirewallUnexpectedGatewayRoutesViolation = jsonValue.GetObject("NetworkFirewallUnexpectedGatewayRoutesViolation");

    m_networkFirewallUnexpectedGatewayRoutesViolationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkFirewallMissingExpectedRoutesViolation"))
  {
    m_networkFirewallMissingExpectedRoutesViolation = jsonValue.GetObject("NetworkFirewallMissingExpectedRoutesViolation");

    m_networkFirewallMissingExpectedRoutesViolationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DnsRuleGroupPriorityConflictViolation"))
  {
    m_dnsRuleGroupPriorityConflictViolation = jsonValue.GetObject("DnsRuleGroupPriorityConflictViolation");

    m_dnsRuleGroupPriorityConflictViolationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DnsDuplicateRuleGroupViolation"))
  {
    m_dnsDuplicateRuleGroupViolation = jsonValue.GetObject("DnsDuplicateRuleGroupViolation");

    m_dnsDuplicateRuleGroupViolationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DnsRuleGroupLimitExceededViolation"))
  {
    m_dnsRuleGroupLimitExceededViolation = jsonValue.GetObject("DnsRuleGroupLimitExceededViolation");

    m_dnsRuleGroupLimitExceededViolationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PossibleRemediationActions"))
  {
    m_possibleRemediationActions = jsonValue.GetObject("PossibleRemediationActions");

    m_possibleRemediationActionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirewallSubnetIsOutOfScopeViolation"))
  {
    m_firewallSubnetIsOutOfScopeViolation = jsonValue.GetObject("FirewallSubnetIsOutOfScopeViolation");

    m_firewallSubnetIsOutOfScopeViolationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RouteHasOutOfScopeEndpointViolation"))
  {
    m_routeHasOutOfScopeEndpointViolation = jsonValue.GetObject("RouteHasOutOfScopeEndpointViolation");

    m_routeHasOutOfScopeEndpointViolationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThirdPartyFirewallMissingFirewallViolation"))
  {
    m_thirdPartyFirewallMissingFirewallViolation = jsonValue.GetObject("ThirdPartyFirewallMissingFirewallViolation");

    m_thirdPartyFirewallMissingFirewallViolationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThirdPartyFirewallMissingSubnetViolation"))
  {
    m_thirdPartyFirewallMissingSubnetViolation = jsonValue.GetObject("ThirdPartyFirewallMissingSubnetViolation");

    m_thirdPartyFirewallMissingSubnetViolationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThirdPartyFirewallMissingExpectedRouteTableViolation"))
  {
    m_thirdPartyFirewallMissingExpectedRouteTableViolation = jsonValue.GetObject("ThirdPartyFirewallMissingExpectedRouteTableViolation");

    m_thirdPartyFirewallMissingExpectedRouteTableViolationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirewallSubnetMissingVPCEndpointViolation"))
  {
    m_firewallSubnetMissingVPCEndpointViolation = jsonValue.GetObject("FirewallSubnetMissingVPCEndpointViolation");

    m_firewallSubnetMissingVPCEndpointViolationHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceViolation::Jsonize() const
{
  JsonValue payload;

  if(m_awsVPCSecurityGroupViolationHasBeenSet)
  {
   payload.WithObject("AwsVPCSecurityGroupViolation", m_awsVPCSecurityGroupViolation.Jsonize());

  }

  if(m_awsEc2NetworkInterfaceViolationHasBeenSet)
  {
   payload.WithObject("AwsEc2NetworkInterfaceViolation", m_awsEc2NetworkInterfaceViolation.Jsonize());

  }

  if(m_awsEc2InstanceViolationHasBeenSet)
  {
   payload.WithObject("AwsEc2InstanceViolation", m_awsEc2InstanceViolation.Jsonize());

  }

  if(m_networkFirewallMissingFirewallViolationHasBeenSet)
  {
   payload.WithObject("NetworkFirewallMissingFirewallViolation", m_networkFirewallMissingFirewallViolation.Jsonize());

  }

  if(m_networkFirewallMissingSubnetViolationHasBeenSet)
  {
   payload.WithObject("NetworkFirewallMissingSubnetViolation", m_networkFirewallMissingSubnetViolation.Jsonize());

  }

  if(m_networkFirewallMissingExpectedRTViolationHasBeenSet)
  {
   payload.WithObject("NetworkFirewallMissingExpectedRTViolation", m_networkFirewallMissingExpectedRTViolation.Jsonize());

  }

  if(m_networkFirewallPolicyModifiedViolationHasBeenSet)
  {
   payload.WithObject("NetworkFirewallPolicyModifiedViolation", m_networkFirewallPolicyModifiedViolation.Jsonize());

  }

  if(m_networkFirewallInternetTrafficNotInspectedViolationHasBeenSet)
  {
   payload.WithObject("NetworkFirewallInternetTrafficNotInspectedViolation", m_networkFirewallInternetTrafficNotInspectedViolation.Jsonize());

  }

  if(m_networkFirewallInvalidRouteConfigurationViolationHasBeenSet)
  {
   payload.WithObject("NetworkFirewallInvalidRouteConfigurationViolation", m_networkFirewallInvalidRouteConfigurationViolation.Jsonize());

  }

  if(m_networkFirewallBlackHoleRouteDetectedViolationHasBeenSet)
  {
   payload.WithObject("NetworkFirewallBlackHoleRouteDetectedViolation", m_networkFirewallBlackHoleRouteDetectedViolation.Jsonize());

  }

  if(m_networkFirewallUnexpectedFirewallRoutesViolationHasBeenSet)
  {
   payload.WithObject("NetworkFirewallUnexpectedFirewallRoutesViolation", m_networkFirewallUnexpectedFirewallRoutesViolation.Jsonize());

  }

  if(m_networkFirewallUnexpectedGatewayRoutesViolationHasBeenSet)
  {
   payload.WithObject("NetworkFirewallUnexpectedGatewayRoutesViolation", m_networkFirewallUnexpectedGatewayRoutesViolation.Jsonize());

  }

  if(m_networkFirewallMissingExpectedRoutesViolationHasBeenSet)
  {
   payload.WithObject("NetworkFirewallMissingExpectedRoutesViolation", m_networkFirewallMissingExpectedRoutesViolation.Jsonize());

  }

  if(m_dnsRuleGroupPriorityConflictViolationHasBeenSet)
  {
   payload.WithObject("DnsRuleGroupPriorityConflictViolation", m_dnsRuleGroupPriorityConflictViolation.Jsonize());

  }

  if(m_dnsDuplicateRuleGroupViolationHasBeenSet)
  {
   payload.WithObject("DnsDuplicateRuleGroupViolation", m_dnsDuplicateRuleGroupViolation.Jsonize());

  }

  if(m_dnsRuleGroupLimitExceededViolationHasBeenSet)
  {
   payload.WithObject("DnsRuleGroupLimitExceededViolation", m_dnsRuleGroupLimitExceededViolation.Jsonize());

  }

  if(m_possibleRemediationActionsHasBeenSet)
  {
   payload.WithObject("PossibleRemediationActions", m_possibleRemediationActions.Jsonize());

  }

  if(m_firewallSubnetIsOutOfScopeViolationHasBeenSet)
  {
   payload.WithObject("FirewallSubnetIsOutOfScopeViolation", m_firewallSubnetIsOutOfScopeViolation.Jsonize());

  }

  if(m_routeHasOutOfScopeEndpointViolationHasBeenSet)
  {
   payload.WithObject("RouteHasOutOfScopeEndpointViolation", m_routeHasOutOfScopeEndpointViolation.Jsonize());

  }

  if(m_thirdPartyFirewallMissingFirewallViolationHasBeenSet)
  {
   payload.WithObject("ThirdPartyFirewallMissingFirewallViolation", m_thirdPartyFirewallMissingFirewallViolation.Jsonize());

  }

  if(m_thirdPartyFirewallMissingSubnetViolationHasBeenSet)
  {
   payload.WithObject("ThirdPartyFirewallMissingSubnetViolation", m_thirdPartyFirewallMissingSubnetViolation.Jsonize());

  }

  if(m_thirdPartyFirewallMissingExpectedRouteTableViolationHasBeenSet)
  {
   payload.WithObject("ThirdPartyFirewallMissingExpectedRouteTableViolation", m_thirdPartyFirewallMissingExpectedRouteTableViolation.Jsonize());

  }

  if(m_firewallSubnetMissingVPCEndpointViolationHasBeenSet)
  {
   payload.WithObject("FirewallSubnetMissingVPCEndpointViolation", m_firewallSubnetMissingVPCEndpointViolation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
