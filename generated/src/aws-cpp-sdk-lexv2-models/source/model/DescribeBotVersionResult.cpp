﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/DescribeBotVersionResult.h>
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

DescribeBotVersionResult::DescribeBotVersionResult() : 
    m_idleSessionTTLInSeconds(0),
    m_botStatus(BotStatus::NOT_SET),
    m_botType(BotType::NOT_SET)
{
}

DescribeBotVersionResult::DescribeBotVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_idleSessionTTLInSeconds(0),
    m_botStatus(BotStatus::NOT_SET),
    m_botType(BotType::NOT_SET)
{
  *this = result;
}

DescribeBotVersionResult& DescribeBotVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("botVersion"))
  {
    m_botVersion = jsonValue.GetString("botVersion");

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

  if(jsonValue.ValueExists("failureReasons"))
  {
    Aws::Utils::Array<JsonView> failureReasonsJsonList = jsonValue.GetArray("failureReasons");
    for(unsigned failureReasonsIndex = 0; failureReasonsIndex < failureReasonsJsonList.GetLength(); ++failureReasonsIndex)
    {
      m_failureReasons.push_back(failureReasonsJsonList[failureReasonsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

  }

  if(jsonValue.ValueExists("parentBotNetworks"))
  {
    Aws::Utils::Array<JsonView> parentBotNetworksJsonList = jsonValue.GetArray("parentBotNetworks");
    for(unsigned parentBotNetworksIndex = 0; parentBotNetworksIndex < parentBotNetworksJsonList.GetLength(); ++parentBotNetworksIndex)
    {
      m_parentBotNetworks.push_back(parentBotNetworksJsonList[parentBotNetworksIndex].AsObject());
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
