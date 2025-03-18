/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-linux-subscriptions/model/ListRegisteredSubscriptionProvidersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LicenseManagerLinuxSubscriptions::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListRegisteredSubscriptionProvidersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_subscriptionProviderSourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subscriptionProviderSourcesJsonList(m_subscriptionProviderSources.size());
   for(unsigned subscriptionProviderSourcesIndex = 0; subscriptionProviderSourcesIndex < subscriptionProviderSourcesJsonList.GetLength(); ++subscriptionProviderSourcesIndex)
   {
     subscriptionProviderSourcesJsonList[subscriptionProviderSourcesIndex].AsString(SubscriptionProviderSourceMapper::GetNameForSubscriptionProviderSource(m_subscriptionProviderSources[subscriptionProviderSourcesIndex]));
   }
   payload.WithArray("SubscriptionProviderSources", std::move(subscriptionProviderSourcesJsonList));

  }

  return payload.View().WriteReadable();
}




