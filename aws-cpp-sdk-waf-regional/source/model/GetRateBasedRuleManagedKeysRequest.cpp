/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/GetRateBasedRuleManagedKeysRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAFRegional::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRateBasedRuleManagedKeysRequest::GetRateBasedRuleManagedKeysRequest() : 
    m_ruleIdHasBeenSet(false),
    m_nextMarkerHasBeenSet(false)
{
}

Aws::String GetRateBasedRuleManagedKeysRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ruleIdHasBeenSet)
  {
   payload.WithString("RuleId", m_ruleId);

  }

  if(m_nextMarkerHasBeenSet)
  {
   payload.WithString("NextMarker", m_nextMarker);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetRateBasedRuleManagedKeysRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_Regional_20161128.GetRateBasedRuleManagedKeys"));
  return headers;

}




