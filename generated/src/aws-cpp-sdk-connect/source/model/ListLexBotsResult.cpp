/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListLexBotsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLexBotsResult::ListLexBotsResult()
{
}

ListLexBotsResult::ListLexBotsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLexBotsResult& ListLexBotsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LexBots"))
  {
    Aws::Utils::Array<JsonView> lexBotsJsonList = jsonValue.GetArray("LexBots");
    for(unsigned lexBotsIndex = 0; lexBotsIndex < lexBotsJsonList.GetLength(); ++lexBotsIndex)
    {
      m_lexBots.push_back(lexBotsJsonList[lexBotsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
