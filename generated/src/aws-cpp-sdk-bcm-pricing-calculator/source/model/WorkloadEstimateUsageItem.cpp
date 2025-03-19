/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/WorkloadEstimateUsageItem.h>
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

WorkloadEstimateUsageItem::WorkloadEstimateUsageItem(JsonView jsonValue)
{
  *this = jsonValue;
}

WorkloadEstimateUsageItem& WorkloadEstimateUsageItem::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("usageAccountId"))
  {
    m_usageAccountId = jsonValue.GetString("usageAccountId");
    m_usageAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("group"))
  {
    m_group = jsonValue.GetString("group");
    m_groupHasBeenSet = true;
  }
  if(jsonValue.ValueExists("quantity"))
  {
    m_quantity = jsonValue.GetObject("quantity");
    m_quantityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cost"))
  {
    m_cost = jsonValue.GetDouble("cost");
    m_costHasBeenSet = true;
  }
  if(jsonValue.ValueExists("currency"))
  {
    m_currency = CurrencyCodeMapper::GetCurrencyCodeForName(jsonValue.GetString("currency"));
    m_currencyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = WorkloadEstimateCostStatusMapper::GetWorkloadEstimateCostStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("historicalUsage"))
  {
    m_historicalUsage = jsonValue.GetObject("historicalUsage");
    m_historicalUsageHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkloadEstimateUsageItem::Jsonize() const
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

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_usageAccountIdHasBeenSet)
  {
   payload.WithString("usageAccountId", m_usageAccountId);

  }

  if(m_groupHasBeenSet)
  {
   payload.WithString("group", m_group);

  }

  if(m_quantityHasBeenSet)
  {
   payload.WithObject("quantity", m_quantity.Jsonize());

  }

  if(m_costHasBeenSet)
  {
   payload.WithDouble("cost", m_cost);

  }

  if(m_currencyHasBeenSet)
  {
   payload.WithString("currency", CurrencyCodeMapper::GetNameForCurrencyCode(m_currency));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", WorkloadEstimateCostStatusMapper::GetNameForWorkloadEstimateCostStatus(m_status));
  }

  if(m_historicalUsageHasBeenSet)
  {
   payload.WithObject("historicalUsage", m_historicalUsage.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
