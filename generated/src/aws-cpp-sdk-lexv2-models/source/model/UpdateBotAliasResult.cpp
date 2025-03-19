/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/UpdateBotAliasResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateBotAliasResult::UpdateBotAliasResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateBotAliasResult& UpdateBotAliasResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("botAliasId"))
  {
    m_botAliasId = jsonValue.GetString("botAliasId");
    m_botAliasIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("botAliasName"))
  {
    m_botAliasName = jsonValue.GetString("botAliasName");
    m_botAliasNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("botVersion"))
  {
    m_botVersion = jsonValue.GetString("botVersion");
    m_botVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("botAliasLocaleSettings"))
  {
    Aws::Map<Aws::String, JsonView> botAliasLocaleSettingsJsonMap = jsonValue.GetObject("botAliasLocaleSettings").GetAllObjects();
    for(auto& botAliasLocaleSettingsItem : botAliasLocaleSettingsJsonMap)
    {
      m_botAliasLocaleSettings[botAliasLocaleSettingsItem.first] = botAliasLocaleSettingsItem.second.AsObject();
    }
    m_botAliasLocaleSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("conversationLogSettings"))
  {
    m_conversationLogSettings = jsonValue.GetObject("conversationLogSettings");
    m_conversationLogSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sentimentAnalysisSettings"))
  {
    m_sentimentAnalysisSettings = jsonValue.GetObject("sentimentAnalysisSettings");
    m_sentimentAnalysisSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("botAliasStatus"))
  {
    m_botAliasStatus = BotAliasStatusMapper::GetBotAliasStatusForName(jsonValue.GetString("botAliasStatus"));
    m_botAliasStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("botId"))
  {
    m_botId = jsonValue.GetString("botId");
    m_botIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");
    m_creationDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("lastUpdatedDateTime");
    m_lastUpdatedDateTimeHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
