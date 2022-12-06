/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/PricingRuleListElement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BillingConductor
{
namespace Model
{

PricingRuleListElement::PricingRuleListElement() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_scope(PricingRuleScope::NOT_SET),
    m_scopeHasBeenSet(false),
    m_type(PricingRuleType::NOT_SET),
    m_typeHasBeenSet(false),
    m_modifierPercentage(0.0),
    m_modifierPercentageHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_associatedPricingPlanCount(0),
    m_associatedPricingPlanCountHasBeenSet(false),
    m_creationTime(0),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTime(0),
    m_lastModifiedTimeHasBeenSet(false),
    m_billingEntityHasBeenSet(false),
    m_tieringHasBeenSet(false)
{
}

PricingRuleListElement::PricingRuleListElement(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_scope(PricingRuleScope::NOT_SET),
    m_scopeHasBeenSet(false),
    m_type(PricingRuleType::NOT_SET),
    m_typeHasBeenSet(false),
    m_modifierPercentage(0.0),
    m_modifierPercentageHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_associatedPricingPlanCount(0),
    m_associatedPricingPlanCountHasBeenSet(false),
    m_creationTime(0),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTime(0),
    m_lastModifiedTimeHasBeenSet(false),
    m_billingEntityHasBeenSet(false),
    m_tieringHasBeenSet(false)
{
  *this = jsonValue;
}

PricingRuleListElement& PricingRuleListElement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Scope"))
  {
    m_scope = PricingRuleScopeMapper::GetPricingRuleScopeForName(jsonValue.GetString("Scope"));

    m_scopeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = PricingRuleTypeMapper::GetPricingRuleTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModifierPercentage"))
  {
    m_modifierPercentage = jsonValue.GetDouble("ModifierPercentage");

    m_modifierPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Service"))
  {
    m_service = jsonValue.GetString("Service");

    m_serviceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociatedPricingPlanCount"))
  {
    m_associatedPricingPlanCount = jsonValue.GetInt64("AssociatedPricingPlanCount");

    m_associatedPricingPlanCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetInt64("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetInt64("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BillingEntity"))
  {
    m_billingEntity = jsonValue.GetString("BillingEntity");

    m_billingEntityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tiering"))
  {
    m_tiering = jsonValue.GetObject("Tiering");

    m_tieringHasBeenSet = true;
  }

  return *this;
}

JsonValue PricingRuleListElement::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

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

  if(m_associatedPricingPlanCountHasBeenSet)
  {
   payload.WithInt64("AssociatedPricingPlanCount", m_associatedPricingPlanCount);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithInt64("CreationTime", m_creationTime);

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithInt64("LastModifiedTime", m_lastModifiedTime);

  }

  if(m_billingEntityHasBeenSet)
  {
   payload.WithString("BillingEntity", m_billingEntity);

  }

  if(m_tieringHasBeenSet)
  {
   payload.WithObject("Tiering", m_tiering.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
