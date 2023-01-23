/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ListGameServerGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListGameServerGroupsResult::ListGameServerGroupsResult()
{
}

ListGameServerGroupsResult::ListGameServerGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListGameServerGroupsResult& ListGameServerGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GameServerGroups"))
  {
    Aws::Utils::Array<JsonView> gameServerGroupsJsonList = jsonValue.GetArray("GameServerGroups");
    for(unsigned gameServerGroupsIndex = 0; gameServerGroupsIndex < gameServerGroupsJsonList.GetLength(); ++gameServerGroupsIndex)
    {
      m_gameServerGroups.push_back(gameServerGroupsJsonList[gameServerGroupsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
