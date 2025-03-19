/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/StartBotRecommendationResult.h>
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

StartBotRecommendationResult::StartBotRecommendationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartBotRecommendationResult& StartBotRecommendationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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
  if(jsonValue.ValueExists("botRecommendationStatus"))
  {
    m_botRecommendationStatus = BotRecommendationStatusMapper::GetBotRecommendationStatusForName(jsonValue.GetString("botRecommendationStatus"));
    m_botRecommendationStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("botRecommendationId"))
  {
    m_botRecommendationId = jsonValue.GetString("botRecommendationId");
    m_botRecommendationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");
    m_creationDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("transcriptSourceSetting"))
  {
    m_transcriptSourceSetting = jsonValue.GetObject("transcriptSourceSetting");
    m_transcriptSourceSettingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("encryptionSetting"))
  {
    m_encryptionSetting = jsonValue.GetObject("encryptionSetting");
    m_encryptionSettingHasBeenSet = true;
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
