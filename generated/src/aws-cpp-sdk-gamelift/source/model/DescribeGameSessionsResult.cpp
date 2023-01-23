/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DescribeGameSessionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeGameSessionsResult::DescribeGameSessionsResult()
{
}

DescribeGameSessionsResult::DescribeGameSessionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeGameSessionsResult& DescribeGameSessionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GameSessions"))
  {
    Aws::Utils::Array<JsonView> gameSessionsJsonList = jsonValue.GetArray("GameSessions");
    for(unsigned gameSessionsIndex = 0; gameSessionsIndex < gameSessionsJsonList.GetLength(); ++gameSessionsIndex)
    {
      m_gameSessions.push_back(gameSessionsJsonList[gameSessionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
