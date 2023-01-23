/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DescribeGameSessionQueuesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeGameSessionQueuesResult::DescribeGameSessionQueuesResult()
{
}

DescribeGameSessionQueuesResult::DescribeGameSessionQueuesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeGameSessionQueuesResult& DescribeGameSessionQueuesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GameSessionQueues"))
  {
    Aws::Utils::Array<JsonView> gameSessionQueuesJsonList = jsonValue.GetArray("GameSessionQueues");
    for(unsigned gameSessionQueuesIndex = 0; gameSessionQueuesIndex < gameSessionQueuesJsonList.GetLength(); ++gameSessionQueuesIndex)
    {
      m_gameSessionQueues.push_back(gameSessionQueuesJsonList[gameSessionQueuesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
