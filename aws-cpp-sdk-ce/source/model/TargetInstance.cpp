/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/TargetInstance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

TargetInstance::TargetInstance() : 
    m_estimatedMonthlyCostHasBeenSet(false),
    m_estimatedMonthlySavingsHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_defaultTargetInstance(false),
    m_defaultTargetInstanceHasBeenSet(false),
    m_resourceDetailsHasBeenSet(false),
    m_expectedResourceUtilizationHasBeenSet(false)
{
}

TargetInstance::TargetInstance(JsonView jsonValue) : 
    m_estimatedMonthlyCostHasBeenSet(false),
    m_estimatedMonthlySavingsHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_defaultTargetInstance(false),
    m_defaultTargetInstanceHasBeenSet(false),
    m_resourceDetailsHasBeenSet(false),
    m_expectedResourceUtilizationHasBeenSet(false)
{
  *this = jsonValue;
}

TargetInstance& TargetInstance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EstimatedMonthlyCost"))
  {
    m_estimatedMonthlyCost = jsonValue.GetString("EstimatedMonthlyCost");

    m_estimatedMonthlyCostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EstimatedMonthlySavings"))
  {
    m_estimatedMonthlySavings = jsonValue.GetString("EstimatedMonthlySavings");

    m_estimatedMonthlySavingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrencyCode"))
  {
    m_currencyCode = jsonValue.GetString("CurrencyCode");

    m_currencyCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultTargetInstance"))
  {
    m_defaultTargetInstance = jsonValue.GetBool("DefaultTargetInstance");

    m_defaultTargetInstanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceDetails"))
  {
    m_resourceDetails = jsonValue.GetObject("ResourceDetails");

    m_resourceDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpectedResourceUtilization"))
  {
    m_expectedResourceUtilization = jsonValue.GetObject("ExpectedResourceUtilization");

    m_expectedResourceUtilizationHasBeenSet = true;
  }

  return *this;
}

JsonValue TargetInstance::Jsonize() const
{
  JsonValue payload;

  if(m_estimatedMonthlyCostHasBeenSet)
  {
   payload.WithString("EstimatedMonthlyCost", m_estimatedMonthlyCost);

  }

  if(m_estimatedMonthlySavingsHasBeenSet)
  {
   payload.WithString("EstimatedMonthlySavings", m_estimatedMonthlySavings);

  }

  if(m_currencyCodeHasBeenSet)
  {
   payload.WithString("CurrencyCode", m_currencyCode);

  }

  if(m_defaultTargetInstanceHasBeenSet)
  {
   payload.WithBool("DefaultTargetInstance", m_defaultTargetInstance);

  }

  if(m_resourceDetailsHasBeenSet)
  {
   payload.WithObject("ResourceDetails", m_resourceDetails.Jsonize());

  }

  if(m_expectedResourceUtilizationHasBeenSet)
  {
   payload.WithObject("ExpectedResourceUtilization", m_expectedResourceUtilization.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
