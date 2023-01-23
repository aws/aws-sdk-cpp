/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/GetAggregateConfigRuleComplianceSummaryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAggregateConfigRuleComplianceSummaryResult::GetAggregateConfigRuleComplianceSummaryResult()
{
}

GetAggregateConfigRuleComplianceSummaryResult::GetAggregateConfigRuleComplianceSummaryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAggregateConfigRuleComplianceSummaryResult& GetAggregateConfigRuleComplianceSummaryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GroupByKey"))
  {
    m_groupByKey = jsonValue.GetString("GroupByKey");

  }

  if(jsonValue.ValueExists("AggregateComplianceCounts"))
  {
    Aws::Utils::Array<JsonView> aggregateComplianceCountsJsonList = jsonValue.GetArray("AggregateComplianceCounts");
    for(unsigned aggregateComplianceCountsIndex = 0; aggregateComplianceCountsIndex < aggregateComplianceCountsJsonList.GetLength(); ++aggregateComplianceCountsIndex)
    {
      m_aggregateComplianceCounts.push_back(aggregateComplianceCountsJsonList[aggregateComplianceCountsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
