/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/CreateAnomalySubscriptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAnomalySubscriptionRequest::CreateAnomalySubscriptionRequest() : 
    m_anomalySubscriptionHasBeenSet(false),
    m_resourceTagsHasBeenSet(false)
{
}

Aws::String CreateAnomalySubscriptionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_anomalySubscriptionHasBeenSet)
  {
   payload.WithObject("AnomalySubscription", m_anomalySubscription.Jsonize());

  }

  if(m_resourceTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceTagsJsonList(m_resourceTags.size());
   for(unsigned resourceTagsIndex = 0; resourceTagsIndex < resourceTagsJsonList.GetLength(); ++resourceTagsIndex)
   {
     resourceTagsJsonList[resourceTagsIndex].AsObject(m_resourceTags[resourceTagsIndex].Jsonize());
   }
   payload.WithArray("ResourceTags", std::move(resourceTagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateAnomalySubscriptionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSInsightsIndexService.CreateAnomalySubscription"));
  return headers;

}




