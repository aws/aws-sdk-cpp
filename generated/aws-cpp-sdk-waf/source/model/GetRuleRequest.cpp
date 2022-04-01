/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/GetRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRuleRequest::GetRuleRequest() : 
    m_ruleIdHasBeenSet(false)
{
}

Aws::String GetRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ruleIdHasBeenSet)
  {
   payload.WithString("RuleId", m_ruleId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetRuleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20150824.GetRule"));
  return headers;

}




