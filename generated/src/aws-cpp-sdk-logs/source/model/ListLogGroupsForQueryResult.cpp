/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/ListLogGroupsForQueryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLogGroupsForQueryResult::ListLogGroupsForQueryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLogGroupsForQueryResult& ListLogGroupsForQueryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("logGroupIdentifiers"))
  {
    Aws::Utils::Array<JsonView> logGroupIdentifiersJsonList = jsonValue.GetArray("logGroupIdentifiers");
    for(unsigned logGroupIdentifiersIndex = 0; logGroupIdentifiersIndex < logGroupIdentifiersJsonList.GetLength(); ++logGroupIdentifiersIndex)
    {
      m_logGroupIdentifiers.push_back(logGroupIdentifiersJsonList[logGroupIdentifiersIndex].AsString());
    }
    m_logGroupIdentifiersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
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
