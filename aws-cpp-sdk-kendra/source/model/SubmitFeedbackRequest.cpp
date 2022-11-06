/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   Aws::Utils::Array<JsonValue> clickFeedbackItemsJsonList(m_clickFeedbackItems.size());
   for(unsigned clickFeedbackItemsIndex = 0; clickFeedbackItemsIndex < clickFeedbackItemsJsonList.GetLength(); ++clickFeedbackItemsIndex)
   {
     clickFeedbackItemsJsonList[clickFeedbackItemsIndex].AsObject(m_clickFeedbackItems[clickFeedbackItemsIndex].Jsonize());
   }
   payload.WithArray("ClickFeedbackItems", std::move(clickFeedbackItemsJsonList));

  }

  if(m_relevanceFeedbackItemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> relevanceFeedbackItemsJsonList(m_relevanceFeedbackItems.size());
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




