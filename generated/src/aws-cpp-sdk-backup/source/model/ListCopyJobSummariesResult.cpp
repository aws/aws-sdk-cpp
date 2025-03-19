/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ListCopyJobSummariesResult.h>
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

ListCopyJobSummariesResult::ListCopyJobSummariesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCopyJobSummariesResult& ListCopyJobSummariesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CopyJobSummaries"))
  {
    Aws::Utils::Array<JsonView> copyJobSummariesJsonList = jsonValue.GetArray("CopyJobSummaries");
    for(unsigned copyJobSummariesIndex = 0; copyJobSummariesIndex < copyJobSummariesJsonList.GetLength(); ++copyJobSummariesIndex)
    {
      m_copyJobSummaries.push_back(copyJobSummariesJsonList[copyJobSummariesIndex].AsObject());
    }
    m_copyJobSummariesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AggregationPeriod"))
  {
    m_aggregationPeriod = jsonValue.GetString("AggregationPeriod");
    m_aggregationPeriodHasBeenSet = true;
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
