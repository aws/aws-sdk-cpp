/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex/model/PostTextResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexRuntimeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PostTextResult::PostTextResult() : 
    m_messageFormat(MessageFormatType::NOT_SET),
    m_dialogState(DialogState::NOT_SET)
{
}

PostTextResult::PostTextResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_messageFormat(MessageFormatType::NOT_SET),
    m_dialogState(DialogState::NOT_SET)
{
  *this = result;
}

PostTextResult& PostTextResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("intentName"))
  {
    m_intentName = jsonValue.GetString("intentName");

  }

  if(jsonValue.ValueExists("nluIntentConfidence"))
  {
    m_nluIntentConfidence = jsonValue.GetObject("nluIntentConfidence");

  }

  if(jsonValue.ValueExists("alternativeIntents"))
  {
    Aws::Utils::Array<JsonView> alternativeIntentsJsonList = jsonValue.GetArray("alternativeIntents");
    for(unsigned alternativeIntentsIndex = 0; alternativeIntentsIndex < alternativeIntentsJsonList.GetLength(); ++alternativeIntentsIndex)
    {
      m_alternativeIntents.push_back(alternativeIntentsJsonList[alternativeIntentsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("slots"))
  {
    Aws::Map<Aws::String, JsonView> slotsJsonMap = jsonValue.GetObject("slots").GetAllObjects();
    for(auto& slotsItem : slotsJsonMap)
    {
      m_slots[slotsItem.first] = slotsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("sessionAttributes"))
  {
    Aws::Map<Aws::String, JsonView> sessionAttributesJsonMap = jsonValue.GetObject("sessionAttributes").GetAllObjects();
    for(auto& sessionAttributesItem : sessionAttributesJsonMap)
    {
      m_sessionAttributes[sessionAttributesItem.first] = sessionAttributesItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

  }

  if(jsonValue.ValueExists("sentimentResponse"))
  {
    m_sentimentResponse = jsonValue.GetObject("sentimentResponse");

  }

  if(jsonValue.ValueExists("messageFormat"))
  {
    m_messageFormat = MessageFormatTypeMapper::GetMessageFormatTypeForName(jsonValue.GetString("messageFormat"));

  }

  if(jsonValue.ValueExists("dialogState"))
  {
    m_dialogState = DialogStateMapper::GetDialogStateForName(jsonValue.GetString("dialogState"));

  }

  if(jsonValue.ValueExists("slotToElicit"))
  {
    m_slotToElicit = jsonValue.GetString("slotToElicit");

  }

  if(jsonValue.ValueExists("responseCard"))
  {
    m_responseCard = jsonValue.GetObject("responseCard");

  }

  if(jsonValue.ValueExists("sessionId"))
  {
    m_sessionId = jsonValue.GetString("sessionId");

  }

  if(jsonValue.ValueExists("botVersion"))
  {
    m_botVersion = jsonValue.GetString("botVersion");

  }

  if(jsonValue.ValueExists("activeContexts"))
  {
    Aws::Utils::Array<JsonView> activeContextsJsonList = jsonValue.GetArray("activeContexts");
    for(unsigned activeContextsIndex = 0; activeContextsIndex < activeContextsJsonList.GetLength(); ++activeContextsIndex)
    {
      m_activeContexts.push_back(activeContextsJsonList[activeContextsIndex].AsObject());
    }
  }



  return *this;
}
