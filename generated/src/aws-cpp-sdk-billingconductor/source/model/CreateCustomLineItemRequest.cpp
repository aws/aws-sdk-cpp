/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/CreateCustomLineItemRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BillingConductor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCustomLineItemRequest::CreateCustomLineItemRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_billingGroupArnHasBeenSet(false),
    m_billingPeriodRangeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_chargeDetailsHasBeenSet(false),
    m_accountIdHasBeenSet(false)
{
}

Aws::String CreateCustomLineItemRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_billingGroupArnHasBeenSet)
  {
   payload.WithString("BillingGroupArn", m_billingGroupArn);

  }

  if(m_billingPeriodRangeHasBeenSet)
  {
   payload.WithObject("BillingPeriodRange", m_billingPeriodRange.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_chargeDetailsHasBeenSet)
  {
   payload.WithObject("ChargeDetails", m_chargeDetails.Jsonize());

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateCustomLineItemRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_clientTokenHasBeenSet)
  {
    ss << m_clientToken;
    headers.emplace("x-amzn-client-token",  ss.str());
    ss.str("");
  }

  return headers;

}




