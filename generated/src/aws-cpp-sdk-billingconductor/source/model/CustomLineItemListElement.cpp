/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/CustomLineItemListElement.h>
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

CustomLineItemListElement::CustomLineItemListElement() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_chargeDetailsHasBeenSet(false),
    m_currencyCode(CurrencyCode::NOT_SET),
    m_currencyCodeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_productCodeHasBeenSet(false),
    m_billingGroupArnHasBeenSet(false),
    m_creationTime(0),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTime(0),
    m_lastModifiedTimeHasBeenSet(false),
    m_associationSize(0),
    m_associationSizeHasBeenSet(false),
    m_accountIdHasBeenSet(false)
{
}

CustomLineItemListElement::CustomLineItemListElement(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_chargeDetailsHasBeenSet(false),
    m_currencyCode(CurrencyCode::NOT_SET),
    m_currencyCodeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_productCodeHasBeenSet(false),
    m_billingGroupArnHasBeenSet(false),
    m_creationTime(0),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTime(0),
    m_lastModifiedTimeHasBeenSet(false),
    m_associationSize(0),
    m_associationSizeHasBeenSet(false),
    m_accountIdHasBeenSet(false)
{
  *this = jsonValue;
}

CustomLineItemListElement& CustomLineItemListElement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChargeDetails"))
  {
    m_chargeDetails = jsonValue.GetObject("ChargeDetails");

    m_chargeDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrencyCode"))
  {
    m_currencyCode = CurrencyCodeMapper::GetCurrencyCodeForName(jsonValue.GetString("CurrencyCode"));

    m_currencyCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductCode"))
  {
    m_productCode = jsonValue.GetString("ProductCode");

    m_productCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BillingGroupArn"))
  {
    m_billingGroupArn = jsonValue.GetString("BillingGroupArn");

    m_billingGroupArnHasBeenSet = true;
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

  if(jsonValue.ValueExists("AssociationSize"))
  {
    m_associationSize = jsonValue.GetInt64("AssociationSize");

    m_associationSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomLineItemListElement::Jsonize() const
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

  if(m_chargeDetailsHasBeenSet)
  {
   payload.WithObject("ChargeDetails", m_chargeDetails.Jsonize());

  }

  if(m_currencyCodeHasBeenSet)
  {
   payload.WithString("CurrencyCode", CurrencyCodeMapper::GetNameForCurrencyCode(m_currencyCode));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_productCodeHasBeenSet)
  {
   payload.WithString("ProductCode", m_productCode);

  }

  if(m_billingGroupArnHasBeenSet)
  {
   payload.WithString("BillingGroupArn", m_billingGroupArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithInt64("CreationTime", m_creationTime);

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithInt64("LastModifiedTime", m_lastModifiedTime);

  }

  if(m_associationSizeHasBeenSet)
  {
   payload.WithInt64("AssociationSize", m_associationSize);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  return payload;
}

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
