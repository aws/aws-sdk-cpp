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

DescribeBotVersionResult::DescribeBotVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeBotVersionResult& DescribeBotVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("botId"))
  {
    m_botId = jsonValue.GetString("botId");
    m_botIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("botName"))
  {
    m_botName = jsonValue.GetString("botName");
    m_botNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("botVersion"))
  {
    m_botVersion = jsonValue.GetString("botVersion");
    m_botVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataPrivacy"))
  {
    m_dataPrivacy = jsonValue.GetObject("dataPrivacy");
    m_dataPrivacyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("idleSessionTTLInSeconds"))
  {
    m_idleSessionTTLInSeconds = jsonValue.GetInteger("idleSessionTTLInSeconds");
    m_idleSessionTTLInSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("botStatus"))
  {
    m_botStatus = BotStatusMapper::GetBotStatusForName(jsonValue.GetString("botStatus"));
    m_botStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureReasons"))
  {
    Aws::Utils::Array<JsonView> failureReasonsJsonList = jsonValue.GetArray("failureReasons");
    for(unsigned failureReasonsIndex = 0; failureReasonsIndex < failureReasonsJsonList.GetLength(); ++failureReasonsIndex)
    {
      m_failureReasons.push_back(failureReasonsJsonList[failureReasonsIndex].AsString());
    }
    m_failureReasonsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");
    m_creationDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parentBotNetworks"))
  {
    Aws::Utils::Array<JsonView> parentBotNetworksJsonList = jsonValue.GetArray("parentBotNetworks");
    for(unsigned parentBotNetworksIndex = 0; parentBotNetworksIndex < parentBotNetworksJsonList.GetLength(); ++parentBotNetworksIndex)
    {
      m_parentBotNetworks.push_back(parentBotNetworksJsonList[parentBotNetworksIndex].AsObject());
    }
    m_parentBotNetworksHasBeenSet = true;
  }
  if(jsonValue.ValueExists("botType"))
  {
    m_botType = BotTypeMapper::GetBotTypeForName(jsonValue.GetString("botType"));
    m_botTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("botMembers"))
  {
    Aws::Utils::Array<JsonView> botMembersJsonList = jsonValue.GetArray("botMembers");
    for(unsigned botMembersIndex = 0; botMembersIndex < botMembersJsonList.GetLength(); ++botMembersIndex)
    {
      m_botMembers.push_back(botMembersJsonList[botMembersIndex].AsObject());
    }
    m_botMembersHasBeenSet = true;
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
