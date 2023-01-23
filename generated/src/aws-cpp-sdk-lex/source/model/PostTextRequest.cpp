/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex/model/PostTextRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexRuntimeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PostTextRequest::PostTextRequest() : 
    m_botNameHasBeenSet(false),
    m_botAliasHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_sessionAttributesHasBeenSet(false),
    m_requestAttributesHasBeenSet(false),
    m_inputTextHasBeenSet(false),
    m_activeContextsHasBeenSet(false)
{
}

Aws::String PostTextRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sessionAttributesHasBeenSet)
  {
   JsonValue sessionAttributesJsonMap;
   for(auto& sessionAttributesItem : m_sessionAttributes)
   {
     sessionAttributesJsonMap.WithString(sessionAttributesItem.first, sessionAttributesItem.second);
   }
   payload.WithObject("sessionAttributes", std::move(sessionAttributesJsonMap));

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

  if(m_inputTextHasBeenSet)
  {
   payload.WithString("inputText", m_inputText);

  }

  if(m_activeContextsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> activeContextsJsonList(m_activeContexts.size());
   for(unsigned activeContextsIndex = 0; activeContextsIndex < activeContextsJsonList.GetLength(); ++activeContextsIndex)
   {
     activeContextsJsonList[activeContextsIndex].AsObject(m_activeContexts[activeContextsIndex].Jsonize());
   }
   payload.WithArray("activeContexts", std::move(activeContextsJsonList));

  }

  return payload.View().WriteReadable();
}




