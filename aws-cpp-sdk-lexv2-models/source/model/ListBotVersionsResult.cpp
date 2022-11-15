/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ListBotVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBotVersionsResult::ListBotVersionsResult()
{
}

ListBotVersionsResult::ListBotVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListBotVersionsResult& ListBotVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("botId"))
  {
    m_botId = jsonValue.GetString("botId");

  }

  if(jsonValue.ValueExists("botVersionSummaries"))
  {
    Aws::Utils::Array<JsonView> botVersionSummariesJsonList = jsonValue.GetArray("botVersionSummaries");
    for(unsigned botVersionSummariesIndex = 0; botVersionSummariesIndex < botVersionSummariesJsonList.GetLength(); ++botVersionSummariesIndex)
    {
      m_botVersionSummaries.push_back(botVersionSummariesJsonList[botVersionSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
