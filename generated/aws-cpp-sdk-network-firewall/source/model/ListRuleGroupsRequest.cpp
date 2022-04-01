﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/ListRuleGroupsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListRuleGroupsRequest::ListRuleGroupsRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_scope(ResourceManagedStatus::NOT_SET),
    m_scopeHasBeenSet(false)
{
}

Aws::String ListRuleGroupsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_scopeHasBeenSet)
  {
   payload.WithString("Scope", ResourceManagedStatusMapper::GetNameForResourceManagedStatus(m_scope));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListRuleGroupsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.ListRuleGroups"));
  return headers;

}




