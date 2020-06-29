/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/ReservationAggregates.h>
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

ReservationAggregates::ReservationAggregates() : 
    m_utilizationPercentageHasBeenSet(false),
    m_utilizationPercentageInUnitsHasBeenSet(false),
    m_purchasedHoursHasBeenSet(false),
    m_purchasedUnitsHasBeenSet(false),
    m_totalActualHoursHasBeenSet(false),
    m_totalActualUnitsHasBeenSet(false),
    m_unusedHoursHasBeenSet(false),
    m_unusedUnitsHasBeenSet(false),
    m_onDemandCostOfRIHoursUsedHasBeenSet(false),
    m_netRISavingsHasBeenSet(false),
    m_totalPotentialRISavingsHasBeenSet(false),
    m_amortizedUpfrontFeeHasBeenSet(false),
    m_amortizedRecurringFeeHasBeenSet(false),
    m_totalAmortizedFeeHasBeenSet(false)
{
}

ReservationAggregates::ReservationAggregates(JsonView jsonValue) : 
    m_utilizationPercentageHasBeenSet(false),
    m_utilizationPercentageInUnitsHasBeenSet(false),
    m_purchasedHoursHasBeenSet(false),
    m_purchasedUnitsHasBeenSet(false),
    m_totalActualHoursHasBeenSet(false),
    m_totalActualUnitsHasBeenSet(false),
    m_unusedHoursHasBeenSet(false),
    m_unusedUnitsHasBeenSet(false),
    m_onDemandCostOfRIHoursUsedHasBeenSet(false),
    m_netRISavingsHasBeenSet(false),
    m_totalPotentialRISavingsHasBeenSet(false),
    m_amortizedUpfrontFeeHasBeenSet(false),
    m_amortizedRecurringFeeHasBeenSet(false),
    m_totalAmortizedFeeHasBeenSet(false)
{
  *this = jsonValue;
}

ReservationAggregates& ReservationAggregates::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UtilizationPercentage"))
  {
    m_utilizationPercentage = jsonValue.GetString("UtilizationPercentage");

    m_utilizationPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UtilizationPercentageInUnits"))
  {
    m_utilizationPercentageInUnits = jsonValue.GetString("UtilizationPercentageInUnits");

    m_utilizationPercentageInUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PurchasedHours"))
  {
    m_purchasedHours = jsonValue.GetString("PurchasedHours");

    m_purchasedHoursHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PurchasedUnits"))
  {
    m_purchasedUnits = jsonValue.GetString("PurchasedUnits");

    m_purchasedUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalActualHours"))
  {
    m_totalActualHours = jsonValue.GetString("TotalActualHours");

    m_totalActualHoursHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalActualUnits"))
  {
    m_totalActualUnits = jsonValue.GetString("TotalActualUnits");

    m_totalActualUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UnusedHours"))
  {
    m_unusedHours = jsonValue.GetString("UnusedHours");

    m_unusedHoursHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UnusedUnits"))
  {
    m_unusedUnits = jsonValue.GetString("UnusedUnits");

    m_unusedUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OnDemandCostOfRIHoursUsed"))
  {
    m_onDemandCostOfRIHoursUsed = jsonValue.GetString("OnDemandCostOfRIHoursUsed");

    m_onDemandCostOfRIHoursUsedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetRISavings"))
  {
    m_netRISavings = jsonValue.GetString("NetRISavings");

    m_netRISavingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalPotentialRISavings"))
  {
    m_totalPotentialRISavings = jsonValue.GetString("TotalPotentialRISavings");

    m_totalPotentialRISavingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AmortizedUpfrontFee"))
  {
    m_amortizedUpfrontFee = jsonValue.GetString("AmortizedUpfrontFee");

    m_amortizedUpfrontFeeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AmortizedRecurringFee"))
  {
    m_amortizedRecurringFee = jsonValue.GetString("AmortizedRecurringFee");

    m_amortizedRecurringFeeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalAmortizedFee"))
  {
    m_totalAmortizedFee = jsonValue.GetString("TotalAmortizedFee");

    m_totalAmortizedFeeHasBeenSet = true;
  }

  return *this;
}

JsonValue ReservationAggregates::Jsonize() const
{
  JsonValue payload;

  if(m_utilizationPercentageHasBeenSet)
  {
   payload.WithString("UtilizationPercentage", m_utilizationPercentage);

  }

  if(m_utilizationPercentageInUnitsHasBeenSet)
  {
   payload.WithString("UtilizationPercentageInUnits", m_utilizationPercentageInUnits);

  }

  if(m_purchasedHoursHasBeenSet)
  {
   payload.WithString("PurchasedHours", m_purchasedHours);

  }

  if(m_purchasedUnitsHasBeenSet)
  {
   payload.WithString("PurchasedUnits", m_purchasedUnits);

  }

  if(m_totalActualHoursHasBeenSet)
  {
   payload.WithString("TotalActualHours", m_totalActualHours);

  }

  if(m_totalActualUnitsHasBeenSet)
  {
   payload.WithString("TotalActualUnits", m_totalActualUnits);

  }

  if(m_unusedHoursHasBeenSet)
  {
   payload.WithString("UnusedHours", m_unusedHours);

  }

  if(m_unusedUnitsHasBeenSet)
  {
   payload.WithString("UnusedUnits", m_unusedUnits);

  }

  if(m_onDemandCostOfRIHoursUsedHasBeenSet)
  {
   payload.WithString("OnDemandCostOfRIHoursUsed", m_onDemandCostOfRIHoursUsed);

  }

  if(m_netRISavingsHasBeenSet)
  {
   payload.WithString("NetRISavings", m_netRISavings);

  }

  if(m_totalPotentialRISavingsHasBeenSet)
  {
   payload.WithString("TotalPotentialRISavings", m_totalPotentialRISavings);

  }

  if(m_amortizedUpfrontFeeHasBeenSet)
  {
   payload.WithString("AmortizedUpfrontFee", m_amortizedUpfrontFee);

  }

  if(m_amortizedRecurringFeeHasBeenSet)
  {
   payload.WithString("AmortizedRecurringFee", m_amortizedRecurringFee);

  }

  if(m_totalAmortizedFeeHasBeenSet)
  {
   payload.WithString("TotalAmortizedFee", m_totalAmortizedFee);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
