/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/ListCustomLineItemPercentageChargeDetails.h>
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

ListCustomLineItemPercentageChargeDetails::ListCustomLineItemPercentageChargeDetails() : 
    m_percentageValue(0.0),
    m_percentageValueHasBeenSet(false)
{
}

ListCustomLineItemPercentageChargeDetails::ListCustomLineItemPercentageChargeDetails(JsonView jsonValue) : 
    m_percentageValue(0.0),
    m_percentageValueHasBeenSet(false)
{
  *this = jsonValue;
}

ListCustomLineItemPercentageChargeDetails& ListCustomLineItemPercentageChargeDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PercentageValue"))
  {
    m_percentageValue = jsonValue.GetDouble("PercentageValue");

    m_percentageValueHasBeenSet = true;
  }

  return *this;
}

JsonValue ListCustomLineItemPercentageChargeDetails::Jsonize() const
{
  JsonValue payload;

  if(m_percentageValueHasBeenSet)
  {
   payload.WithDouble("PercentageValue", m_percentageValue);

  }

  return payload;
}

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
