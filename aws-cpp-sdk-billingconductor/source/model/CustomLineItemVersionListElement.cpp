/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/CustomLineItemVersionListElement.h>
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

CustomLineItemVersionListElement::CustomLineItemVersionListElement() : 
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
    m_startBillingPeriodHasBeenSet(false),
    m_endBillingPeriodHasBeenSet(false)
{
}

CustomLineItemVersionListElement::CustomLineItemVersionListElement(JsonView jsonValue) : 
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
    m_startBillingPeriodHasBeenSet(false),
    m_endBillingPeriodHasBeenSet(false)
{
  *this = jsonValue;
}

CustomLineItemVersionListElement& CustomLineItemVersionListElement::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("StartBillingPeriod"))
  {
    m_startBillingPeriod = jsonValue.GetString("StartBillingPeriod");

    m_startBillingPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndBillingPeriod"))
  {
    m_endBillingPeriod = jsonValue.GetString("EndBillingPeriod");

    m_endBillingPeriodHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomLineItemVersionListElement::Jsonize() const
{
  JsonValue payload;

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

  if(m_startBillingPeriodHasBeenSet)
  {
   payload.WithString("StartBillingPeriod", m_startBillingPeriod);

  }

  if(m_endBillingPeriodHasBeenSet)
  {
   payload.WithString("EndBillingPeriod", m_endBillingPeriod);

  }

  return payload;
}

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
