/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/CustomLineItemBillingPeriodRange.h>
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

CustomLineItemBillingPeriodRange::CustomLineItemBillingPeriodRange() : 
    m_inclusiveStartBillingPeriodHasBeenSet(false),
    m_exclusiveEndBillingPeriodHasBeenSet(false)
{
}

CustomLineItemBillingPeriodRange::CustomLineItemBillingPeriodRange(JsonView jsonValue) : 
    m_inclusiveStartBillingPeriodHasBeenSet(false),
    m_exclusiveEndBillingPeriodHasBeenSet(false)
{
  *this = jsonValue;
}

CustomLineItemBillingPeriodRange& CustomLineItemBillingPeriodRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InclusiveStartBillingPeriod"))
  {
    m_inclusiveStartBillingPeriod = jsonValue.GetString("InclusiveStartBillingPeriod");

    m_inclusiveStartBillingPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExclusiveEndBillingPeriod"))
  {
    m_exclusiveEndBillingPeriod = jsonValue.GetString("ExclusiveEndBillingPeriod");

    m_exclusiveEndBillingPeriodHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomLineItemBillingPeriodRange::Jsonize() const
{
  JsonValue payload;

  if(m_inclusiveStartBillingPeriodHasBeenSet)
  {
   payload.WithString("InclusiveStartBillingPeriod", m_inclusiveStartBillingPeriod);

  }

  if(m_exclusiveEndBillingPeriodHasBeenSet)
  {
   payload.WithString("ExclusiveEndBillingPeriod", m_exclusiveEndBillingPeriod);

  }

  return payload;
}

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
