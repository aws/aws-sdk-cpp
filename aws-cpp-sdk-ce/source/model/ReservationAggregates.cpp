/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_purchasedHoursHasBeenSet(false),
    m_totalActualHoursHasBeenSet(false),
    m_unusedHoursHasBeenSet(false),
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
    m_purchasedHoursHasBeenSet(false),
    m_totalActualHoursHasBeenSet(false),
    m_unusedHoursHasBeenSet(false),
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

  if(jsonValue.ValueExists("PurchasedHours"))
  {
    m_purchasedHours = jsonValue.GetString("PurchasedHours");

    m_purchasedHoursHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalActualHours"))
  {
    m_totalActualHours = jsonValue.GetString("TotalActualHours");

    m_totalActualHoursHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UnusedHours"))
  {
    m_unusedHours = jsonValue.GetString("UnusedHours");

    m_unusedHoursHasBeenSet = true;
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

  if(m_purchasedHoursHasBeenSet)
  {
   payload.WithString("PurchasedHours", m_purchasedHours);

  }

  if(m_totalActualHoursHasBeenSet)
  {
   payload.WithString("TotalActualHours", m_totalActualHours);

  }

  if(m_unusedHoursHasBeenSet)
  {
   payload.WithString("UnusedHours", m_unusedHours);

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
