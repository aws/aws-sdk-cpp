/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/BillingViewListElement.h>
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

BillingViewListElement::BillingViewListElement(JsonView jsonValue)
{
  *this = jsonValue;
}

BillingViewListElement& BillingViewListElement::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("ownerAccountId"))
  {
    m_ownerAccountId = jsonValue.GetString("ownerAccountId");
    m_ownerAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("billingViewType"))
  {
    m_billingViewType = BillingViewTypeMapper::GetBillingViewTypeForName(jsonValue.GetString("billingViewType"));
    m_billingViewTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue BillingViewListElement::Jsonize() const
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

  if(m_ownerAccountIdHasBeenSet)
  {
   payload.WithString("ownerAccountId", m_ownerAccountId);

  }

  if(m_billingViewTypeHasBeenSet)
  {
   payload.WithString("billingViewType", BillingViewTypeMapper::GetNameForBillingViewType(m_billingViewType));
  }

  return payload;
}

} // namespace Model
} // namespace Billing
} // namespace Aws
