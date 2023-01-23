/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/CreatePricingPlanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BillingConductor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePricingPlanRequest::CreatePricingPlanRequest() : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_pricingRuleArnsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreatePricingPlanRequest::SerializePayload() const
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

  if(m_pricingRuleArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pricingRuleArnsJsonList(m_pricingRuleArns.size());
   for(unsigned pricingRuleArnsIndex = 0; pricingRuleArnsIndex < pricingRuleArnsJsonList.GetLength(); ++pricingRuleArnsIndex)
   {
     pricingRuleArnsJsonList[pricingRuleArnsIndex].AsString(m_pricingRuleArns[pricingRuleArnsIndex]);
   }
   payload.WithArray("PricingRuleArns", std::move(pricingRuleArnsJsonList));

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreatePricingPlanRequest::GetRequestSpecificHeaders() const
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




