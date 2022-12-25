/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex/model/PutSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LexRuntimeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutSessionRequest::PutSessionRequest() : 
    m_botNameHasBeenSet(false),
    m_botAliasHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_sessionAttributesHasBeenSet(false),
    m_dialogActionHasBeenSet(false),
    m_recentIntentSummaryViewHasBeenSet(false),
    m_acceptHasBeenSet(false),
    m_activeContextsHasBeenSet(false)
{
}

Aws::String PutSessionRequest::SerializePayload() const
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

  if(m_dialogActionHasBeenSet)
  {
   payload.WithObject("dialogAction", m_dialogAction.Jsonize());

  }

  if(m_recentIntentSummaryViewHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recentIntentSummaryViewJsonList(m_recentIntentSummaryView.size());
   for(unsigned recentIntentSummaryViewIndex = 0; recentIntentSummaryViewIndex < recentIntentSummaryViewJsonList.GetLength(); ++recentIntentSummaryViewIndex)
   {
     recentIntentSummaryViewJsonList[recentIntentSummaryViewIndex].AsObject(m_recentIntentSummaryView[recentIntentSummaryViewIndex].Jsonize());
   }
   payload.WithArray("recentIntentSummaryView", std::move(recentIntentSummaryViewJsonList));

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

Aws::Http::HeaderValueCollection PutSessionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_acceptHasBeenSet)
  {
    ss << m_accept;
    headers.emplace("accept",  ss.str());
    ss.str("");
  }

  return headers;

}




