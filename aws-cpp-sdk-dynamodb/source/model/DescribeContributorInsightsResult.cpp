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

#include <aws/dynamodb/model/DescribeContributorInsightsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeContributorInsightsResult::DescribeContributorInsightsResult() : 
    m_contributorInsightsStatus(ContributorInsightsStatus::NOT_SET)
{
}

DescribeContributorInsightsResult::DescribeContributorInsightsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_contributorInsightsStatus(ContributorInsightsStatus::NOT_SET)
{
  *this = result;
}

DescribeContributorInsightsResult& DescribeContributorInsightsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

  }

  if(jsonValue.ValueExists("IndexName"))
  {
    m_indexName = jsonValue.GetString("IndexName");

  }

  if(jsonValue.ValueExists("ContributorInsightsRuleList"))
  {
    Array<JsonView> contributorInsightsRuleListJsonList = jsonValue.GetArray("ContributorInsightsRuleList");
    for(unsigned contributorInsightsRuleListIndex = 0; contributorInsightsRuleListIndex < contributorInsightsRuleListJsonList.GetLength(); ++contributorInsightsRuleListIndex)
    {
      m_contributorInsightsRuleList.push_back(contributorInsightsRuleListJsonList[contributorInsightsRuleListIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("ContributorInsightsStatus"))
  {
    m_contributorInsightsStatus = ContributorInsightsStatusMapper::GetContributorInsightsStatusForName(jsonValue.GetString("ContributorInsightsStatus"));

  }

  if(jsonValue.ValueExists("LastUpdateDateTime"))
  {
    m_lastUpdateDateTime = jsonValue.GetDouble("LastUpdateDateTime");

  }

  if(jsonValue.ValueExists("FailureException"))
  {
    m_failureException = jsonValue.GetObject("FailureException");

  }



  return *this;
}
