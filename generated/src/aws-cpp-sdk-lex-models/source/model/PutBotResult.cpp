/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/PutBotResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutBotResult::PutBotResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutBotResult& PutBotResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("intents"))
  {
    Aws::Utils::Array<JsonView> intentsJsonList = jsonValue.GetArray("intents");
    for(unsigned intentsIndex = 0; intentsIndex < intentsJsonList.GetLength(); ++intentsIndex)
    {
      m_intents.push_back(intentsJsonList[intentsIndex].AsObject());
    }
    m_intentsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("enableModelImprovements"))
  {
    m_enableModelImprovements = jsonValue.GetBool("enableModelImprovements");
    m_enableModelImprovementsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nluIntentConfidenceThreshold"))
  {
    m_nluIntentConfidenceThreshold = jsonValue.GetDouble("nluIntentConfidenceThreshold");
    m_nluIntentConfidenceThresholdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clarificationPrompt"))
  {
    m_clarificationPrompt = jsonValue.GetObject("clarificationPrompt");
    m_clarificationPromptHasBeenSet = true;
  }
  if(jsonValue.ValueExists("abortStatement"))
  {
    m_abortStatement = jsonValue.GetObject("abortStatement");
    m_abortStatementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");
    m_failureReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedDate"))
  {
    m_lastUpdatedDate = jsonValue.GetDouble("lastUpdatedDate");
    m_lastUpdatedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetDouble("createdDate");
    m_createdDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("idleSessionTTLInSeconds"))
  {
    m_idleSessionTTLInSeconds = jsonValue.GetInteger("idleSessionTTLInSeconds");
    m_idleSessionTTLInSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("voiceId"))
  {
    m_voiceId = jsonValue.GetString("voiceId");
    m_voiceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("checksum"))
  {
    m_checksum = jsonValue.GetString("checksum");
    m_checksumHasBeenSet = true;
  }
  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("locale"))
  {
    m_locale = LocaleMapper::GetLocaleForName(jsonValue.GetString("locale"));
    m_localeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("childDirected"))
  {
    m_childDirected = jsonValue.GetBool("childDirected");
    m_childDirectedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createVersion"))
  {
    m_createVersion = jsonValue.GetBool("createVersion");
    m_createVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("detectSentiment"))
  {
    m_detectSentiment = jsonValue.GetBool("detectSentiment");
    m_detectSentimentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
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
