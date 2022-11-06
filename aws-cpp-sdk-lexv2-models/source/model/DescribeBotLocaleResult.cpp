/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/DescribeBotLocaleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeBotLocaleResult::DescribeBotLocaleResult() : 
    m_nluIntentConfidenceThreshold(0.0),
    m_intentsCount(0),
    m_slotTypesCount(0),
    m_botLocaleStatus(BotLocaleStatus::NOT_SET)
{
}

DescribeBotLocaleResult::DescribeBotLocaleResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_nluIntentConfidenceThreshold(0.0),
    m_intentsCount(0),
    m_slotTypesCount(0),
    m_botLocaleStatus(BotLocaleStatus::NOT_SET)
{
  *this = result;
}

DescribeBotLocaleResult& DescribeBotLocaleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("localeId"))
  {
    m_localeId = jsonValue.GetString("localeId");

  }

  if(jsonValue.ValueExists("localeName"))
  {
    m_localeName = jsonValue.GetString("localeName");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("nluIntentConfidenceThreshold"))
  {
    m_nluIntentConfidenceThreshold = jsonValue.GetDouble("nluIntentConfidenceThreshold");

  }

  if(jsonValue.ValueExists("voiceSettings"))
  {
    m_voiceSettings = jsonValue.GetObject("voiceSettings");

  }

  if(jsonValue.ValueExists("intentsCount"))
  {
    m_intentsCount = jsonValue.GetInteger("intentsCount");

  }

  if(jsonValue.ValueExists("slotTypesCount"))
  {
    m_slotTypesCount = jsonValue.GetInteger("slotTypesCount");

  }

  if(jsonValue.ValueExists("botLocaleStatus"))
  {
    m_botLocaleStatus = BotLocaleStatusMapper::GetBotLocaleStatusForName(jsonValue.GetString("botLocaleStatus"));

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

  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("lastUpdatedDateTime");

  }

  if(jsonValue.ValueExists("lastBuildSubmittedDateTime"))
  {
    m_lastBuildSubmittedDateTime = jsonValue.GetDouble("lastBuildSubmittedDateTime");

  }

  if(jsonValue.ValueExists("botLocaleHistoryEvents"))
  {
    Aws::Utils::Array<JsonView> botLocaleHistoryEventsJsonList = jsonValue.GetArray("botLocaleHistoryEvents");
    for(unsigned botLocaleHistoryEventsIndex = 0; botLocaleHistoryEventsIndex < botLocaleHistoryEventsJsonList.GetLength(); ++botLocaleHistoryEventsIndex)
    {
      m_botLocaleHistoryEvents.push_back(botLocaleHistoryEventsJsonList[botLocaleHistoryEventsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("recommendedActions"))
  {
    Aws::Utils::Array<JsonView> recommendedActionsJsonList = jsonValue.GetArray("recommendedActions");
    for(unsigned recommendedActionsIndex = 0; recommendedActionsIndex < recommendedActionsJsonList.GetLength(); ++recommendedActionsIndex)
    {
      m_recommendedActions.push_back(recommendedActionsJsonList[recommendedActionsIndex].AsString());
    }
  }



  return *this;
}
