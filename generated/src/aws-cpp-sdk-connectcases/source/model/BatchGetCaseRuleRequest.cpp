/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/BatchGetCaseRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectCases::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchGetCaseRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_caseRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> caseRulesJsonList(m_caseRules.size());
   for(unsigned caseRulesIndex = 0; caseRulesIndex < caseRulesJsonList.GetLength(); ++caseRulesIndex)
   {
     caseRulesJsonList[caseRulesIndex].AsObject(m_caseRules[caseRulesIndex].Jsonize());
   }
   payload.WithArray("caseRules", std::move(caseRulesJsonList));

  }

  return payload.View().WriteReadable();
}




