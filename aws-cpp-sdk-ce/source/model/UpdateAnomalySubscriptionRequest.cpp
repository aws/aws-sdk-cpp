/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/UpdateAnomalySubscriptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAnomalySubscriptionRequest::UpdateAnomalySubscriptionRequest() : 
    m_subscriptionArnHasBeenSet(false),
    m_frequency(AnomalySubscriptionFrequency::NOT_SET),
    m_frequencyHasBeenSet(false),
    m_monitorArnListHasBeenSet(false),
    m_subscribersHasBeenSet(false),
    m_subscriptionNameHasBeenSet(false),
    m_thresholdExpressionHasBeenSet(false)
{
}

Aws::String UpdateAnomalySubscriptionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_subscriptionArnHasBeenSet)
  {
   payload.WithString("SubscriptionArn", m_subscriptionArn);

  }

  if(m_frequencyHasBeenSet)
  {
   payload.WithString("Frequency", AnomalySubscriptionFrequencyMapper::GetNameForAnomalySubscriptionFrequency(m_frequency));
  }

  if(m_monitorArnListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> monitorArnListJsonList(m_monitorArnList.size());
   for(unsigned monitorArnListIndex = 0; monitorArnListIndex < monitorArnListJsonList.GetLength(); ++monitorArnListIndex)
   {
     monitorArnListJsonList[monitorArnListIndex].AsString(m_monitorArnList[monitorArnListIndex]);
   }
   payload.WithArray("MonitorArnList", std::move(monitorArnListJsonList));

  }

  if(m_subscribersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subscribersJsonList(m_subscribers.size());
   for(unsigned subscribersIndex = 0; subscribersIndex < subscribersJsonList.GetLength(); ++subscribersIndex)
   {
     subscribersJsonList[subscribersIndex].AsObject(m_subscribers[subscribersIndex].Jsonize());
   }
   payload.WithArray("Subscribers", std::move(subscribersJsonList));

  }

  if(m_subscriptionNameHasBeenSet)
  {
   payload.WithString("SubscriptionName", m_subscriptionName);

  }

  if(m_thresholdExpressionHasBeenSet)
  {
   payload.WithObject("ThresholdExpression", m_thresholdExpression.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateAnomalySubscriptionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSInsightsIndexService.UpdateAnomalySubscription"));
  return headers;

}




