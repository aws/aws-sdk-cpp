/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/GetFirewallRuleGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetFirewallRuleGroupRequest::GetFirewallRuleGroupRequest() : 
    m_firewallRuleGroupIdHasBeenSet(false)
{
}

Aws::String GetFirewallRuleGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_firewallRuleGroupIdHasBeenSet)
  {
   payload.WithString("FirewallRuleGroupId", m_firewallRuleGroupId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetFirewallRuleGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.GetFirewallRuleGroup"));
  return headers;

}




