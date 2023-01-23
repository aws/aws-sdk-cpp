/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/UpdateContributorInsightsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateContributorInsightsResult::UpdateContributorInsightsResult() : 
    m_contributorInsightsStatus(ContributorInsightsStatus::NOT_SET)
{
}

UpdateContributorInsightsResult::UpdateContributorInsightsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_contributorInsightsStatus(ContributorInsightsStatus::NOT_SET)
{
  *this = result;
}

UpdateContributorInsightsResult& UpdateContributorInsightsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("ContributorInsightsStatus"))
  {
    m_contributorInsightsStatus = ContributorInsightsStatusMapper::GetContributorInsightsStatusForName(jsonValue.GetString("ContributorInsightsStatus"));

  }



  return *this;
}
