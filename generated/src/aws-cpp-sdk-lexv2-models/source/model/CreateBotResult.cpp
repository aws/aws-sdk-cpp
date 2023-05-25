/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/CreateBotResult.h>
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

CreateBotResult::CreateBotResult() : 
    m_idleSessionTTLInSeconds(0),
    m_botStatus(BotStatus::NOT_SET),
    m_botType(BotType::NOT_SET)
{
}

CreateBotResult::CreateBotResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_idleSessionTTLInSeconds(0),
    m_botStatus(BotStatus::NOT_SET),
    m_botType(BotType::NOT_SET)
{
  *this = result;
}

CreateBotResult& CreateBotResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("botId"))
  {
    m_botId = jsonValue.GetString("botId");

  }

  if(jsonValue.ValueExists("botName"))
  {
    m_botName = jsonValue.GetString("botName");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }

  if(jsonValue.ValueExists("dataPrivacy"))
  {
    m_dataPrivacy = jsonValue.GetObject("dataPrivacy");

  }

  if(jsonValue.ValueExists("idleSessionTTLInSeconds"))
  {
    m_idleSessionTTLInSeconds = jsonValue.GetInteger("idleSessionTTLInSeconds");

  }

  if(jsonValue.ValueExists("botStatus"))
  {
    m_botStatus = BotStatusMapper::GetBotStatusForName(jsonValue.GetString("botStatus"));

  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

  }

  if(jsonValue.ValueExists("botTags"))
  {
    Aws::Map<Aws::String, JsonView> botTagsJsonMap = jsonValue.GetObject("botTags").GetAllObjects();
    for(auto& botTagsItem : botTagsJsonMap)
    {
      m_botTags[botTagsItem.first] = botTagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("testBotAliasTags"))
  {
    Aws::Map<Aws::String, JsonView> testBotAliasTagsJsonMap = jsonValue.GetObject("testBotAliasTags").GetAllObjects();
    for(auto& testBotAliasTagsItem : testBotAliasTagsJsonMap)
    {
      m_testBotAliasTags[testBotAliasTagsItem.first] = testBotAliasTagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("botType"))
  {
    m_botType = BotTypeMapper::GetBotTypeForName(jsonValue.GetString("botType"));

  }

  if(jsonValue.ValueExists("botMembers"))
  {
    Aws::Utils::Array<JsonView> botMembersJsonList = jsonValue.GetArray("botMembers");
    for(unsigned botMembersIndex = 0; botMembersIndex < botMembersJsonList.GetLength(); ++botMembersIndex)
    {
      m_botMembers.push_back(botMembersJsonList[botMembersIndex].AsObject());
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
