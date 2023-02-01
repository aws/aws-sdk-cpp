/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/CreateSubscriptionDefinitionVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSubscriptionDefinitionVersionRequest::CreateSubscriptionDefinitionVersionRequest() : 
    m_amznClientTokenHasBeenSet(false),
    m_subscriptionDefinitionIdHasBeenSet(false),
    m_subscriptionsHasBeenSet(false)
{
}

Aws::String CreateSubscriptionDefinitionVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_subscriptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subscriptionsJsonList(m_subscriptions.size());
   for(unsigned subscriptionsIndex = 0; subscriptionsIndex < subscriptionsJsonList.GetLength(); ++subscriptionsIndex)
   {
     subscriptionsJsonList[subscriptionsIndex].AsObject(m_subscriptions[subscriptionsIndex].Jsonize());
   }
   payload.WithArray("Subscriptions", std::move(subscriptionsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateSubscriptionDefinitionVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_amznClientTokenHasBeenSet)
  {
    ss << m_amznClientToken;
    headers.emplace("x-amzn-client-token",  ss.str());
    ss.str("");
  }

  return headers;

}




