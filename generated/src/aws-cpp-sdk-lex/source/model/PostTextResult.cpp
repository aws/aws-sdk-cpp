/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex/model/PostTextResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LexRuntimeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PostTextResult::PostTextResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PostTextResult& PostTextResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("intentName"))
  {
    m_intentName = jsonValue.GetString("intentName");
    m_intentNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nluIntentConfidence"))
  {
    m_nluIntentConfidence = jsonValue.GetObject("nluIntentConfidence");
    m_nluIntentConfidenceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("alternativeIntents"))
  {
    Aws::Utils::Array<JsonView> alternativeIntentsJsonList = jsonValue.GetArray("alternativeIntents");
    for(unsigned alternativeIntentsIndex = 0; alternativeIntentsIndex < alternativeIntentsJsonList.GetLength(); ++alternativeIntentsIndex)
    {
      m_alternativeIntents.push_back(alternativeIntentsJsonList[alternativeIntentsIndex].AsObject());
    }
    m_alternativeIntentsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("slots"))
  {
    Aws::Map<Aws::String, JsonView> slotsJsonMap = jsonValue.GetObject("slots").GetAllObjects();
    for(auto& slotsItem : slotsJsonMap)
    {
      m_slots[slotsItem.first] = slotsItem.second.AsString();
    }
    m_slotsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sessionAttributes"))
  {
    Aws::Map<Aws::String, JsonView> sessionAttributesJsonMap = jsonValue.GetObject("sessionAttributes").GetAllObjects();
    for(auto& sessionAttributesItem : sessionAttributesJsonMap)
    {
      m_sessionAttributes[sessionAttributesItem.first] = sessionAttributesItem.second.AsString();
    }
    m_sessionAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sentimentResponse"))
  {
    m_sentimentResponse = jsonValue.GetObject("sentimentResponse");
    m_sentimentResponseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("messageFormat"))
  {
    m_messageFormat = MessageFormatTypeMapper::GetMessageFormatTypeForName(jsonValue.GetString("messageFormat"));
    m_messageFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dialogState"))
  {
    m_dialogState = DialogStateMapper::GetDialogStateForName(jsonValue.GetString("dialogState"));
    m_dialogStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("slotToElicit"))
  {
    m_slotToElicit = jsonValue.GetString("slotToElicit");
    m_slotToElicitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("responseCard"))
  {
    m_responseCard = jsonValue.GetObject("responseCard");
    m_responseCardHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sessionId"))
  {
    m_sessionId = jsonValue.GetString("sessionId");
    m_sessionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("botVersion"))
  {
    m_botVersion = jsonValue.GetString("botVersion");
    m_botVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("activeContexts"))
  {
    Aws::Utils::Array<JsonView> activeContextsJsonList = jsonValue.GetArray("activeContexts");
    for(unsigned activeContextsIndex = 0; activeContextsIndex < activeContextsJsonList.GetLength(); ++activeContextsIndex)
    {
      m_activeContexts.push_back(activeContextsJsonList[activeContextsIndex].AsObject());
    }
    m_activeContextsHasBeenSet = true;
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
