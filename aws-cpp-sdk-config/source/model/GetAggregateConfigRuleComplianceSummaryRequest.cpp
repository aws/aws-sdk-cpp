/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/config/model/GetAggregateConfigRuleComplianceSummaryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAggregateConfigRuleComplianceSummaryRequest::GetAggregateConfigRuleComplianceSummaryRequest() : 
    m_configurationAggregatorNameHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_groupByKey(ConfigRuleComplianceSummaryGroupKey::NOT_SET),
    m_groupByKeyHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String GetAggregateConfigRuleComplianceSummaryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationAggregatorNameHasBeenSet)
  {
   payload.WithString("ConfigurationAggregatorName", m_configurationAggregatorName);

  }

  if(m_filtersHasBeenSet)
  {
   payload.WithObject("Filters", m_filters.Jsonize());

  }

  if(m_groupByKeyHasBeenSet)
  {
   payload.WithString("GroupByKey", ConfigRuleComplianceSummaryGroupKeyMapper::GetNameForConfigRuleComplianceSummaryGroupKey(m_groupByKey));
  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection GetAggregateConfigRuleComplianceSummaryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.GetAggregateConfigRuleComplianceSummary"));
  return headers;

}




