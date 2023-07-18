/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsNetworkFirewallRuleGroupDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsNetworkFirewallRuleGroupDetails::AwsNetworkFirewallRuleGroupDetails() : 
    m_capacity(0),
    m_capacityHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ruleGroupHasBeenSet(false),
    m_ruleGroupArnHasBeenSet(false),
    m_ruleGroupIdHasBeenSet(false),
    m_ruleGroupNameHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

AwsNetworkFirewallRuleGroupDetails::AwsNetworkFirewallRuleGroupDetails(JsonView jsonValue) : 
    m_capacity(0),
    m_capacityHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ruleGroupHasBeenSet(false),
    m_ruleGroupArnHasBeenSet(false),
    m_ruleGroupIdHasBeenSet(false),
    m_ruleGroupNameHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsNetworkFirewallRuleGroupDetails& AwsNetworkFirewallRuleGroupDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Capacity"))
  {
    m_capacity = jsonValue.GetInteger("Capacity");

    m_capacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleGroup"))
  {
    m_ruleGroup = jsonValue.GetObject("RuleGroup");

    m_ruleGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleGroupArn"))
  {
    m_ruleGroupArn = jsonValue.GetString("RuleGroupArn");

    m_ruleGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleGroupId"))
  {
    m_ruleGroupId = jsonValue.GetString("RuleGroupId");

    m_ruleGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleGroupName"))
  {
    m_ruleGroupName = jsonValue.GetString("RuleGroupName");

    m_ruleGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsNetworkFirewallRuleGroupDetails::Jsonize() const
{
  JsonValue payload;

  if(m_capacityHasBeenSet)
  {
   payload.WithInteger("Capacity", m_capacity);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_ruleGroupHasBeenSet)
  {
   payload.WithObject("RuleGroup", m_ruleGroup.Jsonize());

  }

  if(m_ruleGroupArnHasBeenSet)
  {
   payload.WithString("RuleGroupArn", m_ruleGroupArn);

  }

  if(m_ruleGroupIdHasBeenSet)
  {
   payload.WithString("RuleGroupId", m_ruleGroupId);

  }

  if(m_ruleGroupNameHasBeenSet)
  {
   payload.WithString("RuleGroupName", m_ruleGroupName);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
