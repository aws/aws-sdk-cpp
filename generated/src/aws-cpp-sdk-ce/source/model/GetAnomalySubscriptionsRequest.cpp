/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GetAnomalySubscriptionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAnomalySubscriptionsRequest::GetAnomalySubscriptionsRequest() : 
    m_subscriptionArnListHasBeenSet(false),
    m_monitorArnHasBeenSet(false),
    m_nextPageTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String GetAnomalySubscriptionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_subscriptionArnListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subscriptionArnListJsonList(m_subscriptionArnList.size());
   for(unsigned subscriptionArnListIndex = 0; subscriptionArnListIndex < subscriptionArnListJsonList.GetLength(); ++subscriptionArnListIndex)
   {
     subscriptionArnListJsonList[subscriptionArnListIndex].AsString(m_subscriptionArnList[subscriptionArnListIndex]);
   }
   payload.WithArray("SubscriptionArnList", std::move(subscriptionArnListJsonList));

  }

  if(m_monitorArnHasBeenSet)
  {
   payload.WithString("MonitorArn", m_monitorArn);

  }

  if(m_nextPageTokenHasBeenSet)
  {
   payload.WithString("NextPageToken", m_nextPageToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetAnomalySubscriptionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSInsightsIndexService.GetAnomalySubscriptions"));
  return headers;

}




