/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/CreateSubscriptionRequestRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSubscriptionRequestRequest::CreateSubscriptionRequestRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_domainIdentifierHasBeenSet(false),
    m_requestReasonHasBeenSet(false),
    m_subscribedListingsHasBeenSet(false),
    m_subscribedPrincipalsHasBeenSet(false)
{
}

Aws::String CreateSubscriptionRequestRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_requestReasonHasBeenSet)
  {
   payload.WithString("requestReason", m_requestReason);

  }

  if(m_subscribedListingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subscribedListingsJsonList(m_subscribedListings.size());
   for(unsigned subscribedListingsIndex = 0; subscribedListingsIndex < subscribedListingsJsonList.GetLength(); ++subscribedListingsIndex)
   {
     subscribedListingsJsonList[subscribedListingsIndex].AsObject(m_subscribedListings[subscribedListingsIndex].Jsonize());
   }
   payload.WithArray("subscribedListings", std::move(subscribedListingsJsonList));

  }

  if(m_subscribedPrincipalsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subscribedPrincipalsJsonList(m_subscribedPrincipals.size());
   for(unsigned subscribedPrincipalsIndex = 0; subscribedPrincipalsIndex < subscribedPrincipalsJsonList.GetLength(); ++subscribedPrincipalsIndex)
   {
     subscribedPrincipalsJsonList[subscribedPrincipalsIndex].AsObject(m_subscribedPrincipals[subscribedPrincipalsIndex].Jsonize());
   }
   payload.WithArray("subscribedPrincipals", std::move(subscribedPrincipalsJsonList));

  }

  return payload.View().WriteReadable();
}




