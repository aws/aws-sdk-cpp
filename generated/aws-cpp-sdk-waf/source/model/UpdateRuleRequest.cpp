﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/UpdateRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRuleRequest::UpdateRuleRequest() : 
    m_ruleIdHasBeenSet(false),
    m_changeTokenHasBeenSet(false),
    m_updatesHasBeenSet(false)
{
}

Aws::String UpdateRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ruleIdHasBeenSet)
  {
   payload.WithString("RuleId", m_ruleId);

  }

  if(m_changeTokenHasBeenSet)
  {
   payload.WithString("ChangeToken", m_changeToken);

  }

  if(m_updatesHasBeenSet)
  {
   Array<JsonValue> updatesJsonList(m_updates.size());
   for(unsigned updatesIndex = 0; updatesIndex < updatesJsonList.GetLength(); ++updatesIndex)
   {
     updatesJsonList[updatesIndex].AsObject(m_updates[updatesIndex].Jsonize());
   }
   payload.WithArray("Updates", std::move(updatesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateRuleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20150824.UpdateRule"));
  return headers;

}




