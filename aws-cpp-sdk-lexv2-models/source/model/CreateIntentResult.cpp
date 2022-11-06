/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/CreateIntentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateIntentResult::CreateIntentResult()
{
}

CreateIntentResult::CreateIntentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateIntentResult& CreateIntentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("intentId"))
  {
    m_intentId = jsonValue.GetString("intentId");

  }

  if(jsonValue.ValueExists("intentName"))
  {
    m_intentName = jsonValue.GetString("intentName");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("parentIntentSignature"))
  {
    m_parentIntentSignature = jsonValue.GetString("parentIntentSignature");

  }

  if(jsonValue.ValueExists("sampleUtterances"))
  {
    Aws::Utils::Array<JsonView> sampleUtterancesJsonList = jsonValue.GetArray("sampleUtterances");
    for(unsigned sampleUtterancesIndex = 0; sampleUtterancesIndex < sampleUtterancesJsonList.GetLength(); ++sampleUtterancesIndex)
    {
      m_sampleUtterances.push_back(sampleUtterancesJsonList[sampleUtterancesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("dialogCodeHook"))
  {
    m_dialogCodeHook = jsonValue.GetObject("dialogCodeHook");

  }

  if(jsonValue.ValueExists("fulfillmentCodeHook"))
  {
    m_fulfillmentCodeHook = jsonValue.GetObject("fulfillmentCodeHook");

  }

  if(jsonValue.ValueExists("intentConfirmationSetting"))
  {
    m_intentConfirmationSetting = jsonValue.GetObject("intentConfirmationSetting");

  }

  if(jsonValue.ValueExists("intentClosingSetting"))
  {
    m_intentClosingSetting = jsonValue.GetObject("intentClosingSetting");

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

  if(jsonValue.ValueExists("kendraConfiguration"))
  {
    m_kendraConfiguration = jsonValue.GetObject("kendraConfiguration");

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

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

  }

  if(jsonValue.ValueExists("initialResponseSetting"))
  {
    m_initialResponseSetting = jsonValue.GetObject("initialResponseSetting");

  }



  return *this;
}
