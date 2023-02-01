/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/GetBotAliasesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBotAliasesResult::GetBotAliasesResult()
{
}

GetBotAliasesResult::GetBotAliasesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetBotAliasesResult& GetBotAliasesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BotAliases"))
  {
    Aws::Utils::Array<JsonView> botAliasesJsonList = jsonValue.GetArray("BotAliases");
    for(unsigned botAliasesIndex = 0; botAliasesIndex < botAliasesJsonList.GetLength(); ++botAliasesIndex)
    {
      m_botAliases.push_back(botAliasesJsonList[botAliasesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
