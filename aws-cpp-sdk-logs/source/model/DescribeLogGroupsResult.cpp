/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/DescribeLogGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeLogGroupsResult::DescribeLogGroupsResult()
{
}

DescribeLogGroupsResult::DescribeLogGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeLogGroupsResult& DescribeLogGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("logGroups"))
  {
    Aws::Utils::Array<JsonView> logGroupsJsonList = jsonValue.GetArray("logGroups");
    for(unsigned logGroupsIndex = 0; logGroupsIndex < logGroupsJsonList.GetLength(); ++logGroupsIndex)
    {
      m_logGroups.push_back(logGroupsJsonList[logGroupsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
