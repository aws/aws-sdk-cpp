/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/DescribeBotResourceGenerationResult.h>
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

DescribeBotResourceGenerationResult::DescribeBotResourceGenerationResult() : 
    m_generationStatus(GenerationStatus::NOT_SET)
{
}

DescribeBotResourceGenerationResult::DescribeBotResourceGenerationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_generationStatus(GenerationStatus::NOT_SET)
{
  *this = result;
}

DescribeBotResourceGenerationResult& DescribeBotResourceGenerationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("generationId"))
  {
    m_generationId = jsonValue.GetString("generationId");

  }

  if(jsonValue.ValueExists("failureReasons"))
  {
    Aws::Utils::Array<JsonView> failureReasonsJsonList = jsonValue.GetArray("failureReasons");
    for(unsigned failureReasonsIndex = 0; failureReasonsIndex < failureReasonsJsonList.GetLength(); ++failureReasonsIndex)
    {
      m_failureReasons.push_back(failureReasonsJsonList[failureReasonsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("generationStatus"))
  {
    m_generationStatus = GenerationStatusMapper::GetGenerationStatusForName(jsonValue.GetString("generationStatus"));

  }

  if(jsonValue.ValueExists("generationInputPrompt"))
  {
    m_generationInputPrompt = jsonValue.GetString("generationInputPrompt");

  }

  if(jsonValue.ValueExists("generatedBotLocaleUrl"))
  {
    m_generatedBotLocaleUrl = jsonValue.GetString("generatedBotLocaleUrl");

  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

  }

  if(jsonValue.ValueExists("modelArn"))
  {
    m_modelArn = jsonValue.GetString("modelArn");

  }

  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("lastUpdatedDateTime");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
