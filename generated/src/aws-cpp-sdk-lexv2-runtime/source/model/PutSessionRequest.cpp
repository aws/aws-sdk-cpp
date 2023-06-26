/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/PutSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LexRuntimeV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutSessionRequest::PutSessionRequest() : 
    m_botIdHasBeenSet(false),
    m_botAliasIdHasBeenSet(false),
    m_localeIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_messagesHasBeenSet(false),
    m_sessionStateHasBeenSet(false),
    m_requestAttributesHasBeenSet(false),
    m_responseContentTypeHasBeenSet(false)
{
}

Aws::String PutSessionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_messagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> messagesJsonList(m_messages.size());
   for(unsigned messagesIndex = 0; messagesIndex < messagesJsonList.GetLength(); ++messagesIndex)
   {
     messagesJsonList[messagesIndex].AsObject(m_messages[messagesIndex].Jsonize());
   }
   payload.WithArray("messages", std::move(messagesJsonList));

  }

  if(m_sessionStateHasBeenSet)
  {
   payload.WithObject("sessionState", m_sessionState.Jsonize());

  }

  if(m_requestAttributesHasBeenSet)
  {
   JsonValue requestAttributesJsonMap;
   for(auto& requestAttributesItem : m_requestAttributes)
   {
     requestAttributesJsonMap.WithString(requestAttributesItem.first, requestAttributesItem.second);
   }
   payload.WithObject("requestAttributes", std::move(requestAttributesJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutSessionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_responseContentTypeHasBeenSet)
  {
    ss << m_responseContentType;
    headers.emplace("responsecontenttype",  ss.str());
    ss.str("");
  }

  return headers;

}




