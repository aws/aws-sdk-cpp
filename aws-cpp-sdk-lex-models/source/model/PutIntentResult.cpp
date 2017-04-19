/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/lex-models/model/PutIntentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutIntentResult::PutIntentResult()
{
}

PutIntentResult::PutIntentResult(const AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutIntentResult& PutIntentResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
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
    Array<JsonValue> slotsJsonList = jsonValue.GetArray("slots");
    for(unsigned slotsIndex = 0; slotsIndex < slotsJsonList.GetLength(); ++slotsIndex)
    {
      m_slots.push_back(slotsJsonList[slotsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("sampleUtterances"))
  {
    Array<JsonValue> sampleUtterancesJsonList = jsonValue.GetArray("sampleUtterances");
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



  return *this;
}
