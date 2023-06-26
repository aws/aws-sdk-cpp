/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/ComputationPreference.h>
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

ComputationPreference::ComputationPreference() : 
    m_pricingPlanArnHasBeenSet(false)
{
}

ComputationPreference::ComputationPreference(JsonView jsonValue) : 
    m_pricingPlanArnHasBeenSet(false)
{
  *this = jsonValue;
}

ComputationPreference& ComputationPreference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PricingPlanArn"))
  {
    m_pricingPlanArn = jsonValue.GetString("PricingPlanArn");

    m_pricingPlanArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ComputationPreference::Jsonize() const
{
  JsonValue payload;

  if(m_pricingPlanArnHasBeenSet)
  {
   payload.WithString("PricingPlanArn", m_pricingPlanArn);

  }

  return payload;
}

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
