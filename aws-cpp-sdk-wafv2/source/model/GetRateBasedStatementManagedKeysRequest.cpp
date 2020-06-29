/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/GetRateBasedStatementManagedKeysRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRateBasedStatementManagedKeysRequest::GetRateBasedStatementManagedKeysRequest() : 
    m_scope(Scope::NOT_SET),
    m_scopeHasBeenSet(false),
    m_webACLNameHasBeenSet(false),
    m_webACLIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false)
{
}

Aws::String GetRateBasedStatementManagedKeysRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_scopeHasBeenSet)
  {
   payload.WithString("Scope", ScopeMapper::GetNameForScope(m_scope));
  }

  if(m_webACLNameHasBeenSet)
  {
   payload.WithString("WebACLName", m_webACLName);

  }

  if(m_webACLIdHasBeenSet)
  {
   payload.WithString("WebACLId", m_webACLId);

  }

  if(m_ruleNameHasBeenSet)
  {
   payload.WithString("RuleName", m_ruleName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetRateBasedStatementManagedKeysRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20190729.GetRateBasedStatementManagedKeys"));
  return headers;

}




