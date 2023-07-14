/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/ListThirdPartyFirewallFirewallPoliciesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListThirdPartyFirewallFirewallPoliciesRequest::ListThirdPartyFirewallFirewallPoliciesRequest() : 
    m_thirdPartyFirewall(ThirdPartyFirewall::NOT_SET),
    m_thirdPartyFirewallHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListThirdPartyFirewallFirewallPoliciesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_thirdPartyFirewallHasBeenSet)
  {
   payload.WithString("ThirdPartyFirewall", ThirdPartyFirewallMapper::GetNameForThirdPartyFirewall(m_thirdPartyFirewall));
  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListThirdPartyFirewallFirewallPoliciesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSFMS_20180101.ListThirdPartyFirewallFirewallPolicies"));
  return headers;

}




