/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/CreateEventSubscriptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateEventSubscriptionRequest::CreateEventSubscriptionRequest() : 
    m_subscriptionNameHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_eventCategoriesHasBeenSet(false),
    m_sourceIdsHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateEventSubscriptionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_subscriptionNameHasBeenSet)
  {
   payload.WithString("SubscriptionName", m_subscriptionName);

  }

  if(m_snsTopicArnHasBeenSet)
  {
   payload.WithString("SnsTopicArn", m_snsTopicArn);

  }

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("SourceType", m_sourceType);

  }

  if(m_eventCategoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventCategoriesJsonList(m_eventCategories.size());
   for(unsigned eventCategoriesIndex = 0; eventCategoriesIndex < eventCategoriesJsonList.GetLength(); ++eventCategoriesIndex)
   {
     eventCategoriesJsonList[eventCategoriesIndex].AsString(m_eventCategories[eventCategoriesIndex]);
   }
   payload.WithArray("EventCategories", std::move(eventCategoriesJsonList));

  }

  if(m_sourceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceIdsJsonList(m_sourceIds.size());
   for(unsigned sourceIdsIndex = 0; sourceIdsIndex < sourceIdsJsonList.GetLength(); ++sourceIdsIndex)
   {
     sourceIdsJsonList[sourceIdsIndex].AsString(m_sourceIds[sourceIdsIndex]);
   }
   payload.WithArray("SourceIds", std::move(sourceIdsJsonList));

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateEventSubscriptionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.CreateEventSubscription"));
  return headers;

}




