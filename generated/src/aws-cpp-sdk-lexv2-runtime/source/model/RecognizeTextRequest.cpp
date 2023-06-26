/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/RecognizeTextRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexRuntimeV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RecognizeTextRequest::RecognizeTextRequest() : 
    m_botIdHasBeenSet(false),
    m_botAliasIdHasBeenSet(false),
    m_localeIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_textHasBeenSet(false),
    m_sessionStateHasBeenSet(false),
    m_requestAttributesHasBeenSet(false)
{
}

Aws::String RecognizeTextRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithString("text", m_text);

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




