/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/RecognizeTextResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LexRuntimeV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RecognizeTextResult::RecognizeTextResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

RecognizeTextResult& RecognizeTextResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("messages"))
  {
    Aws::Utils::Array<JsonView> messagesJsonList = jsonValue.GetArray("messages");
    for(unsigned messagesIndex = 0; messagesIndex < messagesJsonList.GetLength(); ++messagesIndex)
    {
      m_messages.push_back(messagesJsonList[messagesIndex].AsObject());
    }
    m_messagesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sessionState"))
  {
    m_sessionState = jsonValue.GetObject("sessionState");
    m_sessionStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("interpretations"))
  {
    Aws::Utils::Array<JsonView> interpretationsJsonList = jsonValue.GetArray("interpretations");
    for(unsigned interpretationsIndex = 0; interpretationsIndex < interpretationsJsonList.GetLength(); ++interpretationsIndex)
    {
      m_interpretations.push_back(interpretationsJsonList[interpretationsIndex].AsObject());
    }
    m_interpretationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("requestAttributes"))
  {
    Aws::Map<Aws::String, JsonView> requestAttributesJsonMap = jsonValue.GetObject("requestAttributes").GetAllObjects();
    for(auto& requestAttributesItem : requestAttributesJsonMap)
    {
      m_requestAttributes[requestAttributesItem.first] = requestAttributesItem.second.AsString();
    }
    m_requestAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sessionId"))
  {
    m_sessionId = jsonValue.GetString("sessionId");
    m_sessionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recognizedBotMember"))
  {
    m_recognizedBotMember = jsonValue.GetObject("recognizedBotMember");
    m_recognizedBotMemberHasBeenSet = true;
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
