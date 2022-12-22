/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/CreatePricingRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BillingConductor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePricingRuleRequest::CreatePricingRuleRequest() : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_scope(PricingRuleScope::NOT_SET),
    m_scopeHasBeenSet(false),
    m_type(PricingRuleType::NOT_SET),
    m_typeHasBeenSet(false),
    m_modifierPercentage(0.0),
    m_modifierPercentageHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_billingEntityHasBeenSet(false),
    m_tieringHasBeenSet(false)
{
}

Aws::String CreatePricingRuleRequest::SerializePayload() const
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

  if(m_scopeHasBeenSet)
  {
   payload.WithString("Scope", PricingRuleScopeMapper::GetNameForPricingRuleScope(m_scope));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", PricingRuleTypeMapper::GetNameForPricingRuleType(m_type));
  }

  if(m_modifierPercentageHasBeenSet)
  {
   payload.WithDouble("ModifierPercentage", m_modifierPercentage);

  }

  if(m_serviceHasBeenSet)
  {
   payload.WithString("Service", m_service);

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

  if(m_billingEntityHasBeenSet)
  {
   payload.WithString("BillingEntity", m_billingEntity);

  }

  if(m_tieringHasBeenSet)
  {
   payload.WithObject("Tiering", m_tiering.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreatePricingRuleRequest::GetRequestSpecificHeaders() const
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




