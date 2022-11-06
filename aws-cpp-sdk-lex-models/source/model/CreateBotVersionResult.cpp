/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/CreateBotVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateBotVersionResult::CreateBotVersionResult() : 
    m_status(Status::NOT_SET),
    m_idleSessionTTLInSeconds(0),
    m_locale(Locale::NOT_SET),
    m_childDirected(false),
    m_enableModelImprovements(false),
    m_detectSentiment(false)
{
}

CreateBotVersionResult::CreateBotVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(Status::NOT_SET),
    m_idleSessionTTLInSeconds(0),
    m_locale(Locale::NOT_SET),
    m_childDirected(false),
    m_enableModelImprovements(false),
    m_detectSentiment(false)
{
  *this = result;
}

CreateBotVersionResult& CreateBotVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("intents"))
  {
    Aws::Utils::Array<JsonView> intentsJsonList = jsonValue.GetArray("intents");
    for(unsigned intentsIndex = 0; intentsIndex < intentsJsonList.GetLength(); ++intentsIndex)
    {
      m_intents.push_back(intentsJsonList[intentsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("clarificationPrompt"))
  {
    m_clarificationPrompt = jsonValue.GetObject("clarificationPrompt");

  }

  if(jsonValue.ValueExists("abortStatement"))
  {
    m_abortStatement = jsonValue.GetObject("abortStatement");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");

  }

  if(jsonValue.ValueExists("lastUpdatedDate"))
  {
    m_lastUpdatedDate = jsonValue.GetDouble("lastUpdatedDate");

  }

  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetDouble("createdDate");

  }

  if(jsonValue.ValueExists("idleSessionTTLInSeconds"))
  {
    m_idleSessionTTLInSeconds = jsonValue.GetInteger("idleSessionTTLInSeconds");

  }

  if(jsonValue.ValueExists("voiceId"))
  {
    m_voiceId = jsonValue.GetString("voiceId");

  }

  if(jsonValue.ValueExists("checksum"))
  {
    m_checksum = jsonValue.GetString("checksum");

  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

  }

  if(jsonValue.ValueExists("locale"))
  {
    m_locale = LocaleMapper::GetLocaleForName(jsonValue.GetString("locale"));

  }

  if(jsonValue.ValueExists("childDirected"))
  {
    m_childDirected = jsonValue.GetBool("childDirected");

  }

  if(jsonValue.ValueExists("enableModelImprovements"))
  {
    m_enableModelImprovements = jsonValue.GetBool("enableModelImprovements");

  }

  if(jsonValue.ValueExists("detectSentiment"))
  {
    m_detectSentiment = jsonValue.GetBool("detectSentiment");

  }



  return *this;
}
