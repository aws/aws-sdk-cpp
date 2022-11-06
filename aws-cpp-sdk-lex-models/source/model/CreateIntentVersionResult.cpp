/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/CreateIntentVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateIntentVersionResult::CreateIntentVersionResult()
{
}

CreateIntentVersionResult::CreateIntentVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateIntentVersionResult& CreateIntentVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("slots"))
  {
    Aws::Utils::Array<JsonView> slotsJsonList = jsonValue.GetArray("slots");
    for(unsigned slotsIndex = 0; slotsIndex < slotsJsonList.GetLength(); ++slotsIndex)
    {
      m_slots.push_back(slotsJsonList[slotsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("sampleUtterances"))
  {
    Aws::Utils::Array<JsonView> sampleUtterancesJsonList = jsonValue.GetArray("sampleUtterances");
    for(unsigned sampleUtterancesIndex = 0; sampleUtterancesIndex < sampleUtterancesJsonList.GetLength(); ++sampleUtterancesIndex)
    {
      m_sampleUtterances.push_back(sampleUtterancesJsonList[sampleUtterancesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("confirmationPrompt"))
  {
    m_confirmationPrompt = jsonValue.GetObject("confirmationPrompt");

  }

  if(jsonValue.ValueExists("rejectionStatement"))
  {
    m_rejectionStatement = jsonValue.GetObject("rejectionStatement");

  }

  if(jsonValue.ValueExists("followUpPrompt"))
  {
    m_followUpPrompt = jsonValue.GetObject("followUpPrompt");

  }

  if(jsonValue.ValueExists("conclusionStatement"))
  {
    m_conclusionStatement = jsonValue.GetObject("conclusionStatement");

  }

  if(jsonValue.ValueExists("dialogCodeHook"))
  {
    m_dialogCodeHook = jsonValue.GetObject("dialogCodeHook");

  }

  if(jsonValue.ValueExists("fulfillmentActivity"))
  {
    m_fulfillmentActivity = jsonValue.GetObject("fulfillmentActivity");

  }

  if(jsonValue.ValueExists("parentIntentSignature"))
  {
    m_parentIntentSignature = jsonValue.GetString("parentIntentSignature");

  }

  if(jsonValue.ValueExists("lastUpdatedDate"))
  {
    m_lastUpdatedDate = jsonValue.GetDouble("lastUpdatedDate");

  }

  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetDouble("createdDate");

  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

  }

  if(jsonValue.ValueExists("checksum"))
  {
    m_checksum = jsonValue.GetString("checksum");

  }

  if(jsonValue.ValueExists("kendraConfiguration"))
  {
    m_kendraConfiguration = jsonValue.GetObject("kendraConfiguration");

  }

  if(jsonValue.ValueExists("inputContexts"))
  {
    Aws::Utils::Array<JsonView> inputContextsJsonList = jsonValue.GetArray("inputContexts");
    for(unsigned inputContextsIndex = 0; inputContextsIndex < inputContextsJsonList.GetLength(); ++inputContextsIndex)
    {
      m_inputContexts.push_back(inputContextsJsonList[inputContextsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("outputContexts"))
  {
    Aws::Utils::Array<JsonView> outputContextsJsonList = jsonValue.GetArray("outputContexts");
    for(unsigned outputContextsIndex = 0; outputContextsIndex < outputContextsJsonList.GetLength(); ++outputContextsIndex)
    {
      m_outputContexts.push_back(outputContextsJsonList[outputContextsIndex].AsObject());
    }
  }



  return *this;
}
