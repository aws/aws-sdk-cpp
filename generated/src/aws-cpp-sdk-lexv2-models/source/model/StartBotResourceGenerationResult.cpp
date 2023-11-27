/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/StartBotResourceGenerationResult.h>
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

StartBotResourceGenerationResult::StartBotResourceGenerationResult() : 
    m_generationStatus(GenerationStatus::NOT_SET)
{
}

StartBotResourceGenerationResult::StartBotResourceGenerationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_generationStatus(GenerationStatus::NOT_SET)
{
  *this = result;
}

StartBotResourceGenerationResult& StartBotResourceGenerationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("generationInputPrompt"))
  {
    m_generationInputPrompt = jsonValue.GetString("generationInputPrompt");

  }

  if(jsonValue.ValueExists("generationId"))
  {
    m_generationId = jsonValue.GetString("generationId");

  }

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

  if(jsonValue.ValueExists("generationStatus"))
  {
    m_generationStatus = GenerationStatusMapper::GetGenerationStatusForName(jsonValue.GetString("generationStatus"));

  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
