/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ListBotLocalesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBotLocalesResult::ListBotLocalesResult()
{
}

ListBotLocalesResult::ListBotLocalesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListBotLocalesResult& ListBotLocalesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("botId"))
  {
    m_botId = jsonValue.GetString("botId");

  }

  if(jsonValue.ValueExists("botVersion"))
  {
    m_botVersion = jsonValue.GetString("botVersion");

  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("botLocaleSummaries"))
  {
    Aws::Utils::Array<JsonView> botLocaleSummariesJsonList = jsonValue.GetArray("botLocaleSummaries");
    for(unsigned botLocaleSummariesIndex = 0; botLocaleSummariesIndex < botLocaleSummariesJsonList.GetLength(); ++botLocaleSummariesIndex)
    {
      m_botLocaleSummaries.push_back(botLocaleSummariesJsonList[botLocaleSummariesIndex].AsObject());
    }
  }



  return *this;
}
