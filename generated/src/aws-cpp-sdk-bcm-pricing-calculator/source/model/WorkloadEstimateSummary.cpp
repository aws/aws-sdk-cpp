/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/WorkloadEstimateSummary.h>
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

WorkloadEstimateSummary::WorkloadEstimateSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

WorkloadEstimateSummary& WorkloadEstimateSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("expiresAt"))
  {
    m_expiresAt = jsonValue.GetDouble("expiresAt");
    m_expiresAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rateType"))
  {
    m_rateType = WorkloadEstimateRateTypeMapper::GetWorkloadEstimateRateTypeForName(jsonValue.GetString("rateType"));
    m_rateTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rateTimestamp"))
  {
    m_rateTimestamp = jsonValue.GetDouble("rateTimestamp");
    m_rateTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = WorkloadEstimateStatusMapper::GetWorkloadEstimateStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("totalCost"))
  {
    m_totalCost = jsonValue.GetDouble("totalCost");
    m_totalCostHasBeenSet = true;
  }
  if(jsonValue.ValueExists("costCurrency"))
  {
    m_costCurrency = CurrencyCodeMapper::GetCurrencyCodeForName(jsonValue.GetString("costCurrency"));
    m_costCurrencyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureMessage"))
  {
    m_failureMessage = jsonValue.GetString("failureMessage");
    m_failureMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkloadEstimateSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_expiresAtHasBeenSet)
  {
   payload.WithDouble("expiresAt", m_expiresAt.SecondsWithMSPrecision());
  }

  if(m_rateTypeHasBeenSet)
  {
   payload.WithString("rateType", WorkloadEstimateRateTypeMapper::GetNameForWorkloadEstimateRateType(m_rateType));
  }

  if(m_rateTimestampHasBeenSet)
  {
   payload.WithDouble("rateTimestamp", m_rateTimestamp.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", WorkloadEstimateStatusMapper::GetNameForWorkloadEstimateStatus(m_status));
  }

  if(m_totalCostHasBeenSet)
  {
   payload.WithDouble("totalCost", m_totalCost);

  }

  if(m_costCurrencyHasBeenSet)
  {
   payload.WithString("costCurrency", CurrencyCodeMapper::GetNameForCurrencyCode(m_costCurrency));
  }

  if(m_failureMessageHasBeenSet)
  {
   payload.WithString("failureMessage", m_failureMessage);

  }

  return payload;
}

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
