/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/DynamoDbReservedCapacityConfiguration.h>
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

DynamoDbReservedCapacityConfiguration::DynamoDbReservedCapacityConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

DynamoDbReservedCapacityConfiguration& DynamoDbReservedCapacityConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountScope"))
  {
    m_accountScope = jsonValue.GetString("accountScope");
    m_accountScopeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("service"))
  {
    m_service = jsonValue.GetString("service");
    m_serviceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("term"))
  {
    m_term = jsonValue.GetString("term");
    m_termHasBeenSet = true;
  }
  if(jsonValue.ValueExists("paymentOption"))
  {
    m_paymentOption = jsonValue.GetString("paymentOption");
    m_paymentOptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reservedInstancesRegion"))
  {
    m_reservedInstancesRegion = jsonValue.GetString("reservedInstancesRegion");
    m_reservedInstancesRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("upfrontCost"))
  {
    m_upfrontCost = jsonValue.GetString("upfrontCost");
    m_upfrontCostHasBeenSet = true;
  }
  if(jsonValue.ValueExists("monthlyRecurringCost"))
  {
    m_monthlyRecurringCost = jsonValue.GetString("monthlyRecurringCost");
    m_monthlyRecurringCostHasBeenSet = true;
  }
  if(jsonValue.ValueExists("numberOfCapacityUnitsToPurchase"))
  {
    m_numberOfCapacityUnitsToPurchase = jsonValue.GetString("numberOfCapacityUnitsToPurchase");
    m_numberOfCapacityUnitsToPurchaseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("capacityUnits"))
  {
    m_capacityUnits = jsonValue.GetString("capacityUnits");
    m_capacityUnitsHasBeenSet = true;
  }
  return *this;
}

JsonValue DynamoDbReservedCapacityConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_accountScopeHasBeenSet)
  {
   payload.WithString("accountScope", m_accountScope);

  }

  if(m_serviceHasBeenSet)
  {
   payload.WithString("service", m_service);

  }

  if(m_termHasBeenSet)
  {
   payload.WithString("term", m_term);

  }

  if(m_paymentOptionHasBeenSet)
  {
   payload.WithString("paymentOption", m_paymentOption);

  }

  if(m_reservedInstancesRegionHasBeenSet)
  {
   payload.WithString("reservedInstancesRegion", m_reservedInstancesRegion);

  }

  if(m_upfrontCostHasBeenSet)
  {
   payload.WithString("upfrontCost", m_upfrontCost);

  }

  if(m_monthlyRecurringCostHasBeenSet)
  {
   payload.WithString("monthlyRecurringCost", m_monthlyRecurringCost);

  }

  if(m_numberOfCapacityUnitsToPurchaseHasBeenSet)
  {
   payload.WithString("numberOfCapacityUnitsToPurchase", m_numberOfCapacityUnitsToPurchase);

  }

  if(m_capacityUnitsHasBeenSet)
  {
   payload.WithString("capacityUnits", m_capacityUnits);

  }

  return payload;
}

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
