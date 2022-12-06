/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/UpdatePricingRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BillingConductor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePricingRuleRequest::UpdatePricingRuleRequest() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_type(PricingRuleType::NOT_SET),
    m_typeHasBeenSet(false),
    m_modifierPercentage(0.0),
    m_modifierPercentageHasBeenSet(false),
    m_tieringHasBeenSet(false)
{
}

Aws::String UpdatePricingRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", PricingRuleTypeMapper::GetNameForPricingRuleType(m_type));
  }

  if(m_modifierPercentageHasBeenSet)
  {
   payload.WithDouble("ModifierPercentage", m_modifierPercentage);

  }

  if(m_tieringHasBeenSet)
  {
   payload.WithObject("Tiering", m_tiering.Jsonize());

  }

  return payload.View().WriteReadable();
}




