/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/DeleteFirewallManagerRuleGroupsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteFirewallManagerRuleGroupsRequest::DeleteFirewallManagerRuleGroupsRequest() : 
    m_webACLArnHasBeenSet(false),
    m_webACLLockTokenHasBeenSet(false)
{
}

Aws::String DeleteFirewallManagerRuleGroupsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_webACLArnHasBeenSet)
  {
   payload.WithString("WebACLArn", m_webACLArn);

  }

  if(m_webACLLockTokenHasBeenSet)
  {
   payload.WithString("WebACLLockToken", m_webACLLockToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteFirewallManagerRuleGroupsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20190729.DeleteFirewallManagerRuleGroups"));
  return headers;

}




