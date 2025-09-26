/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/BillingViewElement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Billing
{
namespace Model
{

BillingViewElement::BillingViewElement(JsonView jsonValue)
{
  *this = jsonValue;
}

BillingViewElement& BillingViewElement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("billingViewType"))
  {
    m_billingViewType = BillingViewTypeMapper::GetBillingViewTypeForName(jsonValue.GetString("billingViewType"));
    m_billingViewTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ownerAccountId"))
  {
    m_ownerAccountId = jsonValue.GetString("ownerAccountId");
    m_ownerAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceAccountId"))
  {
    m_sourceAccountId = jsonValue.GetString("sourceAccountId");
    m_sourceAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataFilterExpression"))
  {
    m_dataFilterExpression = jsonValue.GetObject("dataFilterExpression");
    m_dataFilterExpressionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("derivedViewCount"))
  {
    m_derivedViewCount = jsonValue.GetInteger("derivedViewCount");
    m_derivedViewCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceViewCount"))
  {
    m_sourceViewCount = jsonValue.GetInteger("sourceViewCount");
    m_sourceViewCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("viewDefinitionLastUpdatedAt"))
  {
    m_viewDefinitionLastUpdatedAt = jsonValue.GetDouble("viewDefinitionLastUpdatedAt");
    m_viewDefinitionLastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("healthStatus"))
  {
    m_healthStatus = jsonValue.GetObject("healthStatus");
    m_healthStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue BillingViewElement::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_billingViewTypeHasBeenSet)
  {
   payload.WithString("billingViewType", BillingViewTypeMapper::GetNameForBillingViewType(m_billingViewType));
  }

  if(m_ownerAccountIdHasBeenSet)
  {
   payload.WithString("ownerAccountId", m_ownerAccountId);

  }

  if(m_sourceAccountIdHasBeenSet)
  {
   payload.WithString("sourceAccountId", m_sourceAccountId);

  }

  if(m_dataFilterExpressionHasBeenSet)
  {
   payload.WithObject("dataFilterExpression", m_dataFilterExpression.Jsonize());

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_derivedViewCountHasBeenSet)
  {
   payload.WithInteger("derivedViewCount", m_derivedViewCount);

  }

  if(m_sourceViewCountHasBeenSet)
  {
   payload.WithInteger("sourceViewCount", m_sourceViewCount);

  }

  if(m_viewDefinitionLastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("viewDefinitionLastUpdatedAt", m_viewDefinitionLastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_healthStatusHasBeenSet)
  {
   payload.WithObject("healthStatus", m_healthStatus.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Billing
} // namespace Aws
