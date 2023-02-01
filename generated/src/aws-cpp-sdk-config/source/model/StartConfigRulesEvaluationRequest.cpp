/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/StartConfigRulesEvaluationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartConfigRulesEvaluationRequest::StartConfigRulesEvaluationRequest() : 
    m_configRuleNamesHasBeenSet(false)
{
}

Aws::String StartConfigRulesEvaluationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configRuleNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configRuleNamesJsonList(m_configRuleNames.size());
   for(unsigned configRuleNamesIndex = 0; configRuleNamesIndex < configRuleNamesJsonList.GetLength(); ++configRuleNamesIndex)
   {
     configRuleNamesJsonList[configRuleNamesIndex].AsString(m_configRuleNames[configRuleNamesIndex]);
   }
   payload.WithArray("ConfigRuleNames", std::move(configRuleNamesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartConfigRulesEvaluationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.StartConfigRulesEvaluation"));
  return headers;

}




