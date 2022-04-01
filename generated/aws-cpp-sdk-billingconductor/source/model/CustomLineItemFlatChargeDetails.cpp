/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/CustomLineItemFlatChargeDetails.h>
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

CustomLineItemFlatChargeDetails::CustomLineItemFlatChargeDetails() : 
    m_chargeValue(0.0),
    m_chargeValueHasBeenSet(false)
{
}

CustomLineItemFlatChargeDetails::CustomLineItemFlatChargeDetails(JsonView jsonValue) : 
    m_chargeValue(0.0),
    m_chargeValueHasBeenSet(false)
{
  *this = jsonValue;
}

CustomLineItemFlatChargeDetails& CustomLineItemFlatChargeDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ChargeValue"))
  {
    m_chargeValue = jsonValue.GetDouble("ChargeValue");

    m_chargeValueHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomLineItemFlatChargeDetails::Jsonize() const
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
