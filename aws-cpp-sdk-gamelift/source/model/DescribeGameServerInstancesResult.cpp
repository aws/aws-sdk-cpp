/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DescribeGameServerInstancesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeGameServerInstancesResult::DescribeGameServerInstancesResult()
{
}

DescribeGameServerInstancesResult::DescribeGameServerInstancesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeGameServerInstancesResult& DescribeGameServerInstancesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GameServerInstances"))
  {
    Aws::Utils::Array<JsonView> gameServerInstancesJsonList = jsonValue.GetArray("GameServerInstances");
    for(unsigned gameServerInstancesIndex = 0; gameServerInstancesIndex < gameServerInstancesJsonList.GetLength(); ++gameServerInstancesIndex)
    {
      m_gameServerInstances.push_back(gameServerInstancesJsonList[gameServerInstancesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
