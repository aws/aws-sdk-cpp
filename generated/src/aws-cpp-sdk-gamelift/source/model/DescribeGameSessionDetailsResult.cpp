/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DescribeGameSessionDetailsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeGameSessionDetailsResult::DescribeGameSessionDetailsResult()
{
}

DescribeGameSessionDetailsResult::DescribeGameSessionDetailsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeGameSessionDetailsResult& DescribeGameSessionDetailsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GameSessionDetails"))
  {
    Aws::Utils::Array<JsonView> gameSessionDetailsJsonList = jsonValue.GetArray("GameSessionDetails");
    for(unsigned gameSessionDetailsIndex = 0; gameSessionDetailsIndex < gameSessionDetailsJsonList.GetLength(); ++gameSessionDetailsIndex)
    {
      m_gameSessionDetails.push_back(gameSessionDetailsJsonList[gameSessionDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
