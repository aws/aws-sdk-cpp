/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/DeleteAnomalySubscriptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAnomalySubscriptionRequest::DeleteAnomalySubscriptionRequest() : 
    m_subscriptionArnHasBeenSet(false)
{
}

Aws::String DeleteAnomalySubscriptionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_subscriptionArnHasBeenSet)
  {
   payload.WithString("SubscriptionArn", m_subscriptionArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteAnomalySubscriptionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSInsightsIndexService.DeleteAnomalySubscription"));
  return headers;

}




