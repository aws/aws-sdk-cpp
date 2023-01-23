/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/ListCustomLineItemVersionsFilter.h>
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

ListCustomLineItemVersionsFilter::ListCustomLineItemVersionsFilter() : 
    m_billingPeriodRangeHasBeenSet(false)
{
}

ListCustomLineItemVersionsFilter::ListCustomLineItemVersionsFilter(JsonView jsonValue) : 
    m_billingPeriodRangeHasBeenSet(false)
{
  *this = jsonValue;
}

ListCustomLineItemVersionsFilter& ListCustomLineItemVersionsFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BillingPeriodRange"))
  {
    m_billingPeriodRange = jsonValue.GetObject("BillingPeriodRange");

    m_billingPeriodRangeHasBeenSet = true;
  }

  return *this;
}

JsonValue ListCustomLineItemVersionsFilter::Jsonize() const
{
  JsonValue payload;

  if(m_billingPeriodRangeHasBeenSet)
  {
   payload.WithObject("BillingPeriodRange", m_billingPeriodRange.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
