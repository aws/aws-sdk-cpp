/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/GetComplianceDetailsByConfigRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetComplianceDetailsByConfigRuleRequest::GetComplianceDetailsByConfigRuleRequest() : 
    m_configRuleNameHasBeenSet(false),
    m_complianceTypesHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String GetComplianceDetailsByConfigRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configRuleNameHasBeenSet)
  {
   payload.WithString("ConfigRuleName", m_configRuleName);

  }

  if(m_complianceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> complianceTypesJsonList(m_complianceTypes.size());
   for(unsigned complianceTypesIndex = 0; complianceTypesIndex < complianceTypesJsonList.GetLength(); ++complianceTypesIndex)
   {
     complianceTypesJsonList[complianceTypesIndex].AsString(ComplianceTypeMapper::GetNameForComplianceType(m_complianceTypes[complianceTypesIndex]));
   }
   payload.WithArray("ComplianceTypes", std::move(complianceTypesJsonList));

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetComplianceDetailsByConfigRuleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.GetComplianceDetailsByConfigRule"));
  return headers;

}




