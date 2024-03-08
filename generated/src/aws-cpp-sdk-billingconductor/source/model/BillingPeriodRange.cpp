/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/BillingPeriodRange.h>
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

BillingPeriodRange::BillingPeriodRange() : 
    m_inclusiveStartBillingPeriodHasBeenSet(false),
    m_exclusiveEndBillingPeriodHasBeenSet(false)
{
}

BillingPeriodRange::BillingPeriodRange(JsonView jsonValue) : 
    m_inclusiveStartBillingPeriodHasBeenSet(false),
    m_exclusiveEndBillingPeriodHasBeenSet(false)
{
  *this = jsonValue;
}

BillingPeriodRange& BillingPeriodRange::operator =(JsonView jsonValue)
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

JsonValue BillingPeriodRange::Jsonize() const
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
