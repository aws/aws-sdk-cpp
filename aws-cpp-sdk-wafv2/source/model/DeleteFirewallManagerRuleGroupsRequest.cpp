/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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




