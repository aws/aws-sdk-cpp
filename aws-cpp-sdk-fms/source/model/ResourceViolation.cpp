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
    m_dnsRuleGroupPriorityConflictViolationHasBeenSet(false),
    m_dnsDuplicateRuleGroupViolationHasBeenSet(false),
    m_dnsRuleGroupLimitExceededViolationHasBeenSet(false)
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
    m_dnsRuleGroupPriorityConflictViolationHasBeenSet(false),
    m_dnsDuplicateRuleGroupViolationHasBeenSet(false),
    m_dnsRuleGroupLimitExceededViolationHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
