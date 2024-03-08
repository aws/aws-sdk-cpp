/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/PutAccountPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutAccountPolicyRequest::PutAccountPolicyRequest() : 
    m_policyNameHasBeenSet(false),
    m_policyDocumentHasBeenSet(false),
    m_policyType(PolicyType::NOT_SET),
    m_policyTypeHasBeenSet(false),
    m_scope(Scope::NOT_SET),
    m_scopeHasBeenSet(false),
    m_selectionCriteriaHasBeenSet(false)
{
}

Aws::String PutAccountPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyNameHasBeenSet)
  {
   payload.WithString("policyName", m_policyName);

  }

  if(m_policyDocumentHasBeenSet)
  {
   payload.WithString("policyDocument", m_policyDocument);

  }

  if(m_policyTypeHasBeenSet)
  {
   payload.WithString("policyType", PolicyTypeMapper::GetNameForPolicyType(m_policyType));
  }

  if(m_scopeHasBeenSet)
  {
   payload.WithString("scope", ScopeMapper::GetNameForScope(m_scope));
  }

  if(m_selectionCriteriaHasBeenSet)
  {
   payload.WithString("selectionCriteria", m_selectionCriteria);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutAccountPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.PutAccountPolicy"));
  return headers;

}




