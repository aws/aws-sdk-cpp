﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/PutIntentResult.h>
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

PutIntentResult::PutIntentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutIntentResult& PutIntentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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
  if(jsonValue.ValueExists("slots"))
  {
    Aws::Utils::Array<JsonView> slotsJsonList = jsonValue.GetArray("slots");
    for(unsigned slotsIndex = 0; slotsIndex < slotsJsonList.GetLength(); ++slotsIndex)
    {
      m_slots.push_back(slotsJsonList[slotsIndex].AsObject());
    }
    m_slotsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sampleUtterances"))
  {
    Aws::Utils::Array<JsonView> sampleUtterancesJsonList = jsonValue.GetArray("sampleUtterances");
    for(unsigned sampleUtterancesIndex = 0; sampleUtterancesIndex < sampleUtterancesJsonList.GetLength(); ++sampleUtterancesIndex)
    {
      m_sampleUtterances.push_back(sampleUtterancesJsonList[sampleUtterancesIndex].AsString());
    }
    m_sampleUtterancesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("confirmationPrompt"))
  {
    m_confirmationPrompt = jsonValue.GetObject("confirmationPrompt");
    m_confirmationPromptHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rejectionStatement"))
  {
    m_rejectionStatement = jsonValue.GetObject("rejectionStatement");
    m_rejectionStatementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("followUpPrompt"))
  {
    m_followUpPrompt = jsonValue.GetObject("followUpPrompt");
    m_followUpPromptHasBeenSet = true;
  }
  if(jsonValue.ValueExists("conclusionStatement"))
  {
    m_conclusionStatement = jsonValue.GetObject("conclusionStatement");
    m_conclusionStatementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dialogCodeHook"))
  {
    m_dialogCodeHook = jsonValue.GetObject("dialogCodeHook");
    m_dialogCodeHookHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fulfillmentActivity"))
  {
    m_fulfillmentActivity = jsonValue.GetObject("fulfillmentActivity");
    m_fulfillmentActivityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parentIntentSignature"))
  {
    m_parentIntentSignature = jsonValue.GetString("parentIntentSignature");
    m_parentIntentSignatureHasBeenSet = true;
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
  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("checksum"))
  {
    m_checksum = jsonValue.GetString("checksum");
    m_checksumHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createVersion"))
  {
    m_createVersion = jsonValue.GetBool("createVersion");
    m_createVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kendraConfiguration"))
  {
    m_kendraConfiguration = jsonValue.GetObject("kendraConfiguration");
    m_kendraConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputContexts"))
  {
    Aws::Utils::Array<JsonView> inputContextsJsonList = jsonValue.GetArray("inputContexts");
    for(unsigned inputContextsIndex = 0; inputContextsIndex < inputContextsJsonList.GetLength(); ++inputContextsIndex)
    {
      m_inputContexts.push_back(inputContextsJsonList[inputContextsIndex].AsObject());
    }
    m_inputContextsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputContexts"))
  {
    Aws::Utils::Array<JsonView> outputContextsJsonList = jsonValue.GetArray("outputContexts");
    for(unsigned outputContextsIndex = 0; outputContextsIndex < outputContextsJsonList.GetLength(); ++outputContextsIndex)
    {
      m_outputContexts.push_back(outputContextsJsonList[outputContextsIndex].AsObject());
    }
    m_outputContextsHasBeenSet = true;
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
