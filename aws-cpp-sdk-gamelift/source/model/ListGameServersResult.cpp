/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ListGameServersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListGameServersResult::ListGameServersResult()
{
}

ListGameServersResult::ListGameServersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListGameServersResult& ListGameServersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GameServers"))
  {
    Aws::Utils::Array<JsonView> gameServersJsonList = jsonValue.GetArray("GameServers");
    for(unsigned gameServersIndex = 0; gameServersIndex < gameServersJsonList.GetLength(); ++gameServersIndex)
    {
      m_gameServers.push_back(gameServersJsonList[gameServersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
