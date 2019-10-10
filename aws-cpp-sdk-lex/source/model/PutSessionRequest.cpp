/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    m_acceptHasBeenSet(false)
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
   Array<JsonValue> recentIntentSummaryViewJsonList(m_recentIntentSummaryView.size());
   for(unsigned recentIntentSummaryViewIndex = 0; recentIntentSummaryViewIndex < recentIntentSummaryViewJsonList.GetLength(); ++recentIntentSummaryViewIndex)
   {
     recentIntentSummaryViewJsonList[recentIntentSummaryViewIndex].AsObject(m_recentIntentSummaryView[recentIntentSummaryViewIndex].Jsonize());
   }
   payload.WithArray("recentIntentSummaryView", std::move(recentIntentSummaryViewJsonList));

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




