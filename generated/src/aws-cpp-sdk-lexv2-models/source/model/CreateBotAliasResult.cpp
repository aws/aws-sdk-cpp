/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/CreateBotAliasResult.h>
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

CreateBotAliasResult::CreateBotAliasResult() : 
    m_botAliasStatus(BotAliasStatus::NOT_SET)
{
}

CreateBotAliasResult::CreateBotAliasResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_botAliasStatus(BotAliasStatus::NOT_SET)
{
  *this = result;
}

CreateBotAliasResult& CreateBotAliasResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("botAliasId"))
  {
    m_botAliasId = jsonValue.GetString("botAliasId");

  }

  if(jsonValue.ValueExists("botAliasName"))
  {
    m_botAliasName = jsonValue.GetString("botAliasName");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("botVersion"))
  {
    m_botVersion = jsonValue.GetString("botVersion");

  }

  if(jsonValue.ValueExists("botAliasLocaleSettings"))
  {
    Aws::Map<Aws::String, JsonView> botAliasLocaleSettingsJsonMap = jsonValue.GetObject("botAliasLocaleSettings").GetAllObjects();
    for(auto& botAliasLocaleSettingsItem : botAliasLocaleSettingsJsonMap)
    {
      m_botAliasLocaleSettings[botAliasLocaleSettingsItem.first] = botAliasLocaleSettingsItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("conversationLogSettings"))
  {
    m_conversationLogSettings = jsonValue.GetObject("conversationLogSettings");

  }

  if(jsonValue.ValueExists("sentimentAnalysisSettings"))
  {
    m_sentimentAnalysisSettings = jsonValue.GetObject("sentimentAnalysisSettings");

  }

  if(jsonValue.ValueExists("botAliasStatus"))
  {
    m_botAliasStatus = BotAliasStatusMapper::GetBotAliasStatusForName(jsonValue.GetString("botAliasStatus"));

  }

  if(jsonValue.ValueExists("botId"))
  {
    m_botId = jsonValue.GetString("botId");

  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
