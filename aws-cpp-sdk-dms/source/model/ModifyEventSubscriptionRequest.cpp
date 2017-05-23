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

#include <aws/dms/model/ModifyEventSubscriptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ModifyEventSubscriptionRequest::ModifyEventSubscriptionRequest() : 
    m_subscriptionNameHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_eventCategoriesHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
}

Aws::String ModifyEventSubscriptionRequest::SerializePayload() const
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
   Array<JsonValue> eventCategoriesJsonList(m_eventCategories.size());
   for(unsigned eventCategoriesIndex = 0; eventCategoriesIndex < eventCategoriesJsonList.GetLength(); ++eventCategoriesIndex)
   {
     eventCategoriesJsonList[eventCategoriesIndex].AsString(m_eventCategories[eventCategoriesIndex]);
   }
   payload.WithArray("EventCategories", std::move(eventCategoriesJsonList));

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ModifyEventSubscriptionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.ModifyEventSubscription"));
  return headers;

}




