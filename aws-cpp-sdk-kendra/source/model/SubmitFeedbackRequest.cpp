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

#include <aws/kendra/model/SubmitFeedbackRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SubmitFeedbackRequest::SubmitFeedbackRequest() : 
    m_indexIdHasBeenSet(false),
    m_queryIdHasBeenSet(false),
    m_clickFeedbackItemsHasBeenSet(false),
    m_relevanceFeedbackItemsHasBeenSet(false)
{
}

Aws::String SubmitFeedbackRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_indexIdHasBeenSet)
  {
   payload.WithString("IndexId", m_indexId);

  }

  if(m_queryIdHasBeenSet)
  {
   payload.WithString("QueryId", m_queryId);

  }

  if(m_clickFeedbackItemsHasBeenSet)
  {
   Array<JsonValue> clickFeedbackItemsJsonList(m_clickFeedbackItems.size());
   for(unsigned clickFeedbackItemsIndex = 0; clickFeedbackItemsIndex < clickFeedbackItemsJsonList.GetLength(); ++clickFeedbackItemsIndex)
   {
     clickFeedbackItemsJsonList[clickFeedbackItemsIndex].AsObject(m_clickFeedbackItems[clickFeedbackItemsIndex].Jsonize());
   }
   payload.WithArray("ClickFeedbackItems", std::move(clickFeedbackItemsJsonList));

  }

  if(m_relevanceFeedbackItemsHasBeenSet)
  {
   Array<JsonValue> relevanceFeedbackItemsJsonList(m_relevanceFeedbackItems.size());
   for(unsigned relevanceFeedbackItemsIndex = 0; relevanceFeedbackItemsIndex < relevanceFeedbackItemsJsonList.GetLength(); ++relevanceFeedbackItemsIndex)
   {
     relevanceFeedbackItemsJsonList[relevanceFeedbackItemsIndex].AsObject(m_relevanceFeedbackItems[relevanceFeedbackItemsIndex].Jsonize());
   }
   payload.WithArray("RelevanceFeedbackItems", std::move(relevanceFeedbackItemsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SubmitFeedbackRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSKendraFrontendService.SubmitFeedback"));
  return headers;

}




