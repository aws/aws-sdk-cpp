/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ListBotAliasesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBotAliasesResult::ListBotAliasesResult()
{
}

ListBotAliasesResult::ListBotAliasesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListBotAliasesResult& ListBotAliasesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("botAliasSummaries"))
  {
    Aws::Utils::Array<JsonView> botAliasSummariesJsonList = jsonValue.GetArray("botAliasSummaries");
    for(unsigned botAliasSummariesIndex = 0; botAliasSummariesIndex < botAliasSummariesJsonList.GetLength(); ++botAliasSummariesIndex)
    {
      m_botAliasSummaries.push_back(botAliasSummariesJsonList[botAliasSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("botId"))
  {
    m_botId = jsonValue.GetString("botId");

  }



  return *this;
}
