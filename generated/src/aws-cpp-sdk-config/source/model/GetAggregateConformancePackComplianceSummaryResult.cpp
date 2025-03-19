/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/GetAggregateConformancePackComplianceSummaryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAggregateConformancePackComplianceSummaryResult::GetAggregateConformancePackComplianceSummaryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAggregateConformancePackComplianceSummaryResult& GetAggregateConformancePackComplianceSummaryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AggregateConformancePackComplianceSummaries"))
  {
    Aws::Utils::Array<JsonView> aggregateConformancePackComplianceSummariesJsonList = jsonValue.GetArray("AggregateConformancePackComplianceSummaries");
    for(unsigned aggregateConformancePackComplianceSummariesIndex = 0; aggregateConformancePackComplianceSummariesIndex < aggregateConformancePackComplianceSummariesJsonList.GetLength(); ++aggregateConformancePackComplianceSummariesIndex)
    {
      m_aggregateConformancePackComplianceSummaries.push_back(aggregateConformancePackComplianceSummariesJsonList[aggregateConformancePackComplianceSummariesIndex].AsObject());
    }
    m_aggregateConformancePackComplianceSummariesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GroupByKey"))
  {
    m_groupByKey = jsonValue.GetString("GroupByKey");
    m_groupByKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
