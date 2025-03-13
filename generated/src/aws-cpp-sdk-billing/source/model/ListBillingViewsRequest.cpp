/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/ListBillingViewsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Billing::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListBillingViewsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_activeTimeRangeHasBeenSet)
  {
   payload.WithObject("activeTimeRange", m_activeTimeRange.Jsonize());

  }

  if(m_arnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> arnsJsonList(m_arns.size());
   for(unsigned arnsIndex = 0; arnsIndex < arnsJsonList.GetLength(); ++arnsIndex)
   {
     arnsJsonList[arnsIndex].AsString(m_arns[arnsIndex]);
   }
   payload.WithArray("arns", std::move(arnsJsonList));

  }

  if(m_billingViewTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> billingViewTypesJsonList(m_billingViewTypes.size());
   for(unsigned billingViewTypesIndex = 0; billingViewTypesIndex < billingViewTypesJsonList.GetLength(); ++billingViewTypesIndex)
   {
     billingViewTypesJsonList[billingViewTypesIndex].AsString(BillingViewTypeMapper::GetNameForBillingViewType(m_billingViewTypes[billingViewTypesIndex]));
   }
   payload.WithArray("billingViewTypes", std::move(billingViewTypesJsonList));

  }

  if(m_ownerAccountIdHasBeenSet)
  {
   payload.WithString("ownerAccountId", m_ownerAccountId);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListBillingViewsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBilling.ListBillingViews"));
  return headers;

}




