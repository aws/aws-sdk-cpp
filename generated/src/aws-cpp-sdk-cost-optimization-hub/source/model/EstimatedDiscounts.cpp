/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/EstimatedDiscounts.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostOptimizationHub
{
namespace Model
{

EstimatedDiscounts::EstimatedDiscounts(JsonView jsonValue)
{
  *this = jsonValue;
}

EstimatedDiscounts& EstimatedDiscounts::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("savingsPlansDiscount"))
  {
    m_savingsPlansDiscount = jsonValue.GetDouble("savingsPlansDiscount");
    m_savingsPlansDiscountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reservedInstancesDiscount"))
  {
    m_reservedInstancesDiscount = jsonValue.GetDouble("reservedInstancesDiscount");
    m_reservedInstancesDiscountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("otherDiscount"))
  {
    m_otherDiscount = jsonValue.GetDouble("otherDiscount");
    m_otherDiscountHasBeenSet = true;
  }
  return *this;
}

JsonValue EstimatedDiscounts::Jsonize() const
{
  JsonValue payload;

  if(m_savingsPlansDiscountHasBeenSet)
  {
   payload.WithDouble("savingsPlansDiscount", m_savingsPlansDiscount);

  }

  if(m_reservedInstancesDiscountHasBeenSet)
  {
   payload.WithDouble("reservedInstancesDiscount", m_reservedInstancesDiscount);

  }

  if(m_otherDiscountHasBeenSet)
  {
   payload.WithDouble("otherDiscount", m_otherDiscount);

  }

  return payload;
}

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
