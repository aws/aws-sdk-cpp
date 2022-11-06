/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/ListGamesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GameSparks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListGamesResult::ListGamesResult()
{
}

ListGamesResult::ListGamesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListGamesResult& ListGamesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Games"))
  {
    Aws::Utils::Array<JsonView> gamesJsonList = jsonValue.GetArray("Games");
    for(unsigned gamesIndex = 0; gamesIndex < gamesJsonList.GetLength(); ++gamesIndex)
    {
      m_games.push_back(gamesJsonList[gamesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
