/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/CreateBotLocaleResult.h>
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

CreateBotLocaleResult::CreateBotLocaleResult() : 
    m_nluIntentConfidenceThreshold(0.0),
    m_botLocaleStatus(BotLocaleStatus::NOT_SET)
{
}

CreateBotLocaleResult::CreateBotLocaleResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_nluIntentConfidenceThreshold(0.0),
    m_botLocaleStatus(BotLocaleStatus::NOT_SET)
{
  *this = result;
}

CreateBotLocaleResult& CreateBotLocaleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("localeName"))
  {
    m_localeName = jsonValue.GetString("localeName");

  }

  if(jsonValue.ValueExists("localeId"))
  {
    m_localeId = jsonValue.GetString("localeId");

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

  if(jsonValue.ValueExists("botLocaleStatus"))
  {
    m_botLocaleStatus = BotLocaleStatusMapper::GetBotLocaleStatusForName(jsonValue.GetString("botLocaleStatus"));

  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

  }

  if(jsonValue.ValueExists("generativeAISettings"))
  {
    m_generativeAISettings = jsonValue.GetObject("generativeAISettings");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
