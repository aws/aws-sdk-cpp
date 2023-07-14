/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/ListCustomLineItemFlatChargeDetails.h>
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

ListCustomLineItemFlatChargeDetails::ListCustomLineItemFlatChargeDetails() : 
    m_chargeValue(0.0),
    m_chargeValueHasBeenSet(false)
{
}

ListCustomLineItemFlatChargeDetails::ListCustomLineItemFlatChargeDetails(JsonView jsonValue) : 
    m_chargeValue(0.0),
    m_chargeValueHasBeenSet(false)
{
  *this = jsonValue;
}

ListCustomLineItemFlatChargeDetails& ListCustomLineItemFlatChargeDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ChargeValue"))
  {
    m_chargeValue = jsonValue.GetDouble("ChargeValue");

    m_chargeValueHasBeenSet = true;
  }

  return *this;
}

JsonValue ListCustomLineItemFlatChargeDetails::Jsonize() const
{
  JsonValue payload;

  if(m_chargeValueHasBeenSet)
  {
   payload.WithDouble("ChargeValue", m_chargeValue);

  }

  return payload;
}

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
