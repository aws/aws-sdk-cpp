/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ListRestoreJobSummariesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRestoreJobSummariesResult::ListRestoreJobSummariesResult()
{
}

ListRestoreJobSummariesResult::ListRestoreJobSummariesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRestoreJobSummariesResult& ListRestoreJobSummariesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RestoreJobSummaries"))
  {
    Aws::Utils::Array<JsonView> restoreJobSummariesJsonList = jsonValue.GetArray("RestoreJobSummaries");
    for(unsigned restoreJobSummariesIndex = 0; restoreJobSummariesIndex < restoreJobSummariesJsonList.GetLength(); ++restoreJobSummariesIndex)
    {
      m_restoreJobSummaries.push_back(restoreJobSummariesJsonList[restoreJobSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("AggregationPeriod"))
  {
    m_aggregationPeriod = jsonValue.GetString("AggregationPeriod");

  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
