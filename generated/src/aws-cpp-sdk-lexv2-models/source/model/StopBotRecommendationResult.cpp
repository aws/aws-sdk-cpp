/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/StopBotRecommendationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StopBotRecommendationResult::StopBotRecommendationResult() : 
    m_botRecommendationStatus(BotRecommendationStatus::NOT_SET)
{
}

StopBotRecommendationResult::StopBotRecommendationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_botRecommendationStatus(BotRecommendationStatus::NOT_SET)
{
  *this = result;
}

StopBotRecommendationResult& StopBotRecommendationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("botRecommendationStatus"))
  {
    m_botRecommendationStatus = BotRecommendationStatusMapper::GetBotRecommendationStatusForName(jsonValue.GetString("botRecommendationStatus"));

  }

  if(jsonValue.ValueExists("botRecommendationId"))
  {
    m_botRecommendationId = jsonValue.GetString("botRecommendationId");

  }



  return *this;
}
