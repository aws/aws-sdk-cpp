﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ListContributorInsightsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListContributorInsightsResult::ListContributorInsightsResult()
{
}

ListContributorInsightsResult::ListContributorInsightsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListContributorInsightsResult& ListContributorInsightsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ContributorInsightsSummaries"))
  {
    Array<JsonView> contributorInsightsSummariesJsonList = jsonValue.GetArray("ContributorInsightsSummaries");
    for(unsigned contributorInsightsSummariesIndex = 0; contributorInsightsSummariesIndex < contributorInsightsSummariesJsonList.GetLength(); ++contributorInsightsSummariesIndex)
    {
      m_contributorInsightsSummaries.push_back(contributorInsightsSummariesJsonList[contributorInsightsSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
