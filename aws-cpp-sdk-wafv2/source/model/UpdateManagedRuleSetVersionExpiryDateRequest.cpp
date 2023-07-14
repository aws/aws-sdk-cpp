/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/UpdateManagedRuleSetVersionExpiryDateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateManagedRuleSetVersionExpiryDateRequest::UpdateManagedRuleSetVersionExpiryDateRequest() : 
    m_nameHasBeenSet(false),
    m_scope(Scope::NOT_SET),
    m_scopeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lockTokenHasBeenSet(false),
    m_versionToExpireHasBeenSet(false),
    m_expiryTimestampHasBeenSet(false)
{
}

Aws::String UpdateManagedRuleSetVersionExpiryDateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_scopeHasBeenSet)
  {
   payload.WithString("Scope", ScopeMapper::GetNameForScope(m_scope));
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_lockTokenHasBeenSet)
  {
   payload.WithString("LockToken", m_lockToken);

  }

  if(m_versionToExpireHasBeenSet)
  {
   payload.WithString("VersionToExpire", m_versionToExpire);

  }

  if(m_expiryTimestampHasBeenSet)
  {
   payload.WithDouble("ExpiryTimestamp", m_expiryTimestamp.SecondsWithMSPrecision());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateManagedRuleSetVersionExpiryDateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20190729.UpdateManagedRuleSetVersionExpiryDate"));
  return headers;

}




