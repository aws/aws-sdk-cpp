/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/UpdateCustomLineItemChargeDetails.h>
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

UpdateCustomLineItemChargeDetails::UpdateCustomLineItemChargeDetails() : 
    m_flatHasBeenSet(false),
    m_percentageHasBeenSet(false)
{
}

UpdateCustomLineItemChargeDetails::UpdateCustomLineItemChargeDetails(JsonView jsonValue) : 
    m_flatHasBeenSet(false),
    m_percentageHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateCustomLineItemChargeDetails& UpdateCustomLineItemChargeDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Flat"))
  {
    m_flat = jsonValue.GetObject("Flat");

    m_flatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Percentage"))
  {
    m_percentage = jsonValue.GetObject("Percentage");

    m_percentageHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateCustomLineItemChargeDetails::Jsonize() const
{
  JsonValue payload;

  if(m_flatHasBeenSet)
  {
   payload.WithObject("Flat", m_flat.Jsonize());

  }

  if(m_percentageHasBeenSet)
  {
   payload.WithObject("Percentage", m_percentage.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
