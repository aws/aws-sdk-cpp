/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/ThirdPartyFirewallFirewallPolicy.h>
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

ThirdPartyFirewallFirewallPolicy::ThirdPartyFirewallFirewallPolicy() : 
    m_firewallPolicyIdHasBeenSet(false),
    m_firewallPolicyNameHasBeenSet(false)
{
}

ThirdPartyFirewallFirewallPolicy::ThirdPartyFirewallFirewallPolicy(JsonView jsonValue) : 
    m_firewallPolicyIdHasBeenSet(false),
    m_firewallPolicyNameHasBeenSet(false)
{
  *this = jsonValue;
}

ThirdPartyFirewallFirewallPolicy& ThirdPartyFirewallFirewallPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FirewallPolicyId"))
  {
    m_firewallPolicyId = jsonValue.GetString("FirewallPolicyId");

    m_firewallPolicyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirewallPolicyName"))
  {
    m_firewallPolicyName = jsonValue.GetString("FirewallPolicyName");

    m_firewallPolicyNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ThirdPartyFirewallFirewallPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_firewallPolicyIdHasBeenSet)
  {
   payload.WithString("FirewallPolicyId", m_firewallPolicyId);

  }

  if(m_firewallPolicyNameHasBeenSet)
  {
   payload.WithString("FirewallPolicyName", m_firewallPolicyName);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
