/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/ListCustomLineItemVersionsBillingPeriodRangeFilter.h>
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

ListCustomLineItemVersionsBillingPeriodRangeFilter::ListCustomLineItemVersionsBillingPeriodRangeFilter() : 
    m_startBillingPeriodHasBeenSet(false),
    m_endBillingPeriodHasBeenSet(false)
{
}

ListCustomLineItemVersionsBillingPeriodRangeFilter::ListCustomLineItemVersionsBillingPeriodRangeFilter(JsonView jsonValue) : 
    m_startBillingPeriodHasBeenSet(false),
    m_endBillingPeriodHasBeenSet(false)
{
  *this = jsonValue;
}

ListCustomLineItemVersionsBillingPeriodRangeFilter& ListCustomLineItemVersionsBillingPeriodRangeFilter::operator =(JsonView jsonValue)
{
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

JsonValue ListCustomLineItemVersionsBillingPeriodRangeFilter::Jsonize() const
{
  JsonValue payload;

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
