/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/NetworkFirewallStatefulRuleGroupOverride.h>
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

NetworkFirewallStatefulRuleGroupOverride::NetworkFirewallStatefulRuleGroupOverride() : 
    m_action(NetworkFirewallOverrideAction::NOT_SET),
    m_actionHasBeenSet(false)
{
}

NetworkFirewallStatefulRuleGroupOverride::NetworkFirewallStatefulRuleGroupOverride(JsonView jsonValue) : 
    m_action(NetworkFirewallOverrideAction::NOT_SET),
    m_actionHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkFirewallStatefulRuleGroupOverride& NetworkFirewallStatefulRuleGroupOverride::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Action"))
  {
    m_action = NetworkFirewallOverrideActionMapper::GetNetworkFirewallOverrideActionForName(jsonValue.GetString("Action"));

    m_actionHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkFirewallStatefulRuleGroupOverride::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", NetworkFirewallOverrideActionMapper::GetNameForNetworkFirewallOverrideAction(m_action));
  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
