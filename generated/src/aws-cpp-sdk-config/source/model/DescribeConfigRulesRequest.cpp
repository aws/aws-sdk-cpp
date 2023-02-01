/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DescribeConfigRulesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeConfigRulesRequest::DescribeConfigRulesRequest() : 
    m_configRuleNamesHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

Aws::String DescribeConfigRulesRequest::SerializePayload() const
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

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_filtersHasBeenSet)
  {
   payload.WithObject("Filters", m_filters.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeConfigRulesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.DescribeConfigRules"));
  return headers;

}




