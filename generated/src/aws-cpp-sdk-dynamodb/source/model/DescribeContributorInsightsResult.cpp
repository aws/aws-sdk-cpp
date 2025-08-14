/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/DescribeContributorInsightsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeContributorInsightsResult::DescribeContributorInsightsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeContributorInsightsResult& DescribeContributorInsightsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");
    m_tableNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IndexName"))
  {
    m_indexName = jsonValue.GetString("IndexName");
    m_indexNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContributorInsightsRuleList"))
  {
    Aws::Utils::Array<JsonView> contributorInsightsRuleListJsonList = jsonValue.GetArray("ContributorInsightsRuleList");
    for(unsigned contributorInsightsRuleListIndex = 0; contributorInsightsRuleListIndex < contributorInsightsRuleListJsonList.GetLength(); ++contributorInsightsRuleListIndex)
    {
      m_contributorInsightsRuleList.push_back(contributorInsightsRuleListJsonList[contributorInsightsRuleListIndex].AsString());
    }
    m_contributorInsightsRuleListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContributorInsightsStatus"))
  {
    m_contributorInsightsStatus = ContributorInsightsStatusMapper::GetContributorInsightsStatusForName(jsonValue.GetString("ContributorInsightsStatus"));
    m_contributorInsightsStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdateDateTime"))
  {
    m_lastUpdateDateTime = jsonValue.GetDouble("LastUpdateDateTime");
    m_lastUpdateDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureException"))
  {
    m_failureException = jsonValue.GetObject("FailureException");
    m_failureExceptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContributorInsightsMode"))
  {
    m_contributorInsightsMode = ContributorInsightsModeMapper::GetContributorInsightsModeForName(jsonValue.GetString("ContributorInsightsMode"));
    m_contributorInsightsModeHasBeenSet = true;
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
