/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/BillEstimateLineItemSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BCMPricingCalculator
{
namespace Model
{

BillEstimateLineItemSummary::BillEstimateLineItemSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

BillEstimateLineItemSummary& BillEstimateLineItemSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serviceCode"))
  {
    m_serviceCode = jsonValue.GetString("serviceCode");
    m_serviceCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("usageType"))
  {
    m_usageType = jsonValue.GetString("usageType");
    m_usageTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("operation"))
  {
    m_operation = jsonValue.GetString("operation");
    m_operationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetString("location");
    m_locationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("availabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("availabilityZone");
    m_availabilityZoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lineItemId"))
  {
    m_lineItemId = jsonValue.GetString("lineItemId");
    m_lineItemIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lineItemType"))
  {
    m_lineItemType = jsonValue.GetString("lineItemType");
    m_lineItemTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("payerAccountId"))
  {
    m_payerAccountId = jsonValue.GetString("payerAccountId");
    m_payerAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("usageAccountId"))
  {
    m_usageAccountId = jsonValue.GetString("usageAccountId");
    m_usageAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("estimatedUsageQuantity"))
  {
    m_estimatedUsageQuantity = jsonValue.GetObject("estimatedUsageQuantity");
    m_estimatedUsageQuantityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("estimatedCost"))
  {
    m_estimatedCost = jsonValue.GetObject("estimatedCost");
    m_estimatedCostHasBeenSet = true;
  }
  if(jsonValue.ValueExists("historicalUsageQuantity"))
  {
    m_historicalUsageQuantity = jsonValue.GetObject("historicalUsageQuantity");
    m_historicalUsageQuantityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("historicalCost"))
  {
    m_historicalCost = jsonValue.GetObject("historicalCost");
    m_historicalCostHasBeenSet = true;
  }
  if(jsonValue.ValueExists("savingsPlanArns"))
  {
    Aws::Utils::Array<JsonView> savingsPlanArnsJsonList = jsonValue.GetArray("savingsPlanArns");
    for(unsigned savingsPlanArnsIndex = 0; savingsPlanArnsIndex < savingsPlanArnsJsonList.GetLength(); ++savingsPlanArnsIndex)
    {
      m_savingsPlanArns.push_back(savingsPlanArnsJsonList[savingsPlanArnsIndex].AsString());
    }
    m_savingsPlanArnsHasBeenSet = true;
  }
  return *this;
}

JsonValue BillEstimateLineItemSummary::Jsonize() const
{
  JsonValue payload;

  if(m_serviceCodeHasBeenSet)
  {
   payload.WithString("serviceCode", m_serviceCode);

  }

  if(m_usageTypeHasBeenSet)
  {
   payload.WithString("usageType", m_usageType);

  }

  if(m_operationHasBeenSet)
  {
   payload.WithString("operation", m_operation);

  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("location", m_location);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("availabilityZone", m_availabilityZone);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_lineItemIdHasBeenSet)
  {
   payload.WithString("lineItemId", m_lineItemId);

  }

  if(m_lineItemTypeHasBeenSet)
  {
   payload.WithString("lineItemType", m_lineItemType);

  }

  if(m_payerAccountIdHasBeenSet)
  {
   payload.WithString("payerAccountId", m_payerAccountId);

  }

  if(m_usageAccountIdHasBeenSet)
  {
   payload.WithString("usageAccountId", m_usageAccountId);

  }

  if(m_estimatedUsageQuantityHasBeenSet)
  {
   payload.WithObject("estimatedUsageQuantity", m_estimatedUsageQuantity.Jsonize());

  }

  if(m_estimatedCostHasBeenSet)
  {
   payload.WithObject("estimatedCost", m_estimatedCost.Jsonize());

  }

  if(m_historicalUsageQuantityHasBeenSet)
  {
   payload.WithObject("historicalUsageQuantity", m_historicalUsageQuantity.Jsonize());

  }

  if(m_historicalCostHasBeenSet)
  {
   payload.WithObject("historicalCost", m_historicalCost.Jsonize());

  }

  if(m_savingsPlanArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> savingsPlanArnsJsonList(m_savingsPlanArns.size());
   for(unsigned savingsPlanArnsIndex = 0; savingsPlanArnsIndex < savingsPlanArnsJsonList.GetLength(); ++savingsPlanArnsIndex)
   {
     savingsPlanArnsJsonList[savingsPlanArnsIndex].AsString(m_savingsPlanArns[savingsPlanArnsIndex]);
   }
   payload.WithArray("savingsPlanArns", std::move(savingsPlanArnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
