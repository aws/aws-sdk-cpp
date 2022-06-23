/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ListFirewallRuleGroupAssociationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListFirewallRuleGroupAssociationsRequest::ListFirewallRuleGroupAssociationsRequest() : 
    m_firewallRuleGroupIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_status(FirewallRuleGroupAssociationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListFirewallRuleGroupAssociationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_firewallRuleGroupIdHasBeenSet)
  {
   payload.WithString("FirewallRuleGroupId", m_firewallRuleGroupId);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("Priority", m_priority);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", FirewallRuleGroupAssociationStatusMapper::GetNameForFirewallRuleGroupAssociationStatus(m_status));
  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListFirewallRuleGroupAssociationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.ListFirewallRuleGroupAssociations"));
  return headers;

}




