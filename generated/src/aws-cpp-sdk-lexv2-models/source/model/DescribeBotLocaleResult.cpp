/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/DescribeBotLocaleResult.h>
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

DescribeBotLocaleResult::DescribeBotLocaleResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeBotLocaleResult& DescribeBotLocaleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("botId"))
  {
    m_botId = jsonValue.GetString("botId");
    m_botIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("botVersion"))
  {
    m_botVersion = jsonValue.GetString("botVersion");
    m_botVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("localeId"))
  {
    m_localeId = jsonValue.GetString("localeId");
    m_localeIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("localeName"))
  {
    m_localeName = jsonValue.GetString("localeName");
    m_localeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nluIntentConfidenceThreshold"))
  {
    m_nluIntentConfidenceThreshold = jsonValue.GetDouble("nluIntentConfidenceThreshold");
    m_nluIntentConfidenceThresholdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("voiceSettings"))
  {
    m_voiceSettings = jsonValue.GetObject("voiceSettings");
    m_voiceSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("intentsCount"))
  {
    m_intentsCount = jsonValue.GetInteger("intentsCount");
    m_intentsCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("slotTypesCount"))
  {
    m_slotTypesCount = jsonValue.GetInteger("slotTypesCount");
    m_slotTypesCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("botLocaleStatus"))
  {
    m_botLocaleStatus = BotLocaleStatusMapper::GetBotLocaleStatusForName(jsonValue.GetString("botLocaleStatus"));
    m_botLocaleStatusHasBeenSet = true;
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
  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("lastUpdatedDateTime");
    m_lastUpdatedDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastBuildSubmittedDateTime"))
  {
    m_lastBuildSubmittedDateTime = jsonValue.GetDouble("lastBuildSubmittedDateTime");
    m_lastBuildSubmittedDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("botLocaleHistoryEvents"))
  {
    Aws::Utils::Array<JsonView> botLocaleHistoryEventsJsonList = jsonValue.GetArray("botLocaleHistoryEvents");
    for(unsigned botLocaleHistoryEventsIndex = 0; botLocaleHistoryEventsIndex < botLocaleHistoryEventsJsonList.GetLength(); ++botLocaleHistoryEventsIndex)
    {
      m_botLocaleHistoryEvents.push_back(botLocaleHistoryEventsJsonList[botLocaleHistoryEventsIndex].AsObject());
    }
    m_botLocaleHistoryEventsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recommendedActions"))
  {
    Aws::Utils::Array<JsonView> recommendedActionsJsonList = jsonValue.GetArray("recommendedActions");
    for(unsigned recommendedActionsIndex = 0; recommendedActionsIndex < recommendedActionsJsonList.GetLength(); ++recommendedActionsIndex)
    {
      m_recommendedActions.push_back(recommendedActionsJsonList[recommendedActionsIndex].AsString());
    }
    m_recommendedActionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("generativeAISettings"))
  {
    m_generativeAISettings = jsonValue.GetObject("generativeAISettings");
    m_generativeAISettingsHasBeenSet = true;
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
