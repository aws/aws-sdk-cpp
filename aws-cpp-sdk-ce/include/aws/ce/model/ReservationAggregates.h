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

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>The aggregated numbers for your Reserved Instance (RI) usage.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ReservationAggregates">AWS
   * API Reference</a></p>
   */
  class AWS_COSTEXPLORER_API ReservationAggregates
  {
  public:
    ReservationAggregates();
    ReservationAggregates(Aws::Utils::Json::JsonView jsonValue);
    ReservationAggregates& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The percentage of RI time that you used.</p>
     */
    inline const Aws::String& GetUtilizationPercentage() const{ return m_utilizationPercentage; }

    /**
     * <p>The percentage of RI time that you used.</p>
     */
    inline void SetUtilizationPercentage(const Aws::String& value) { m_utilizationPercentageHasBeenSet = true; m_utilizationPercentage = value; }

    /**
     * <p>The percentage of RI time that you used.</p>
     */
    inline void SetUtilizationPercentage(Aws::String&& value) { m_utilizationPercentageHasBeenSet = true; m_utilizationPercentage = std::move(value); }

    /**
     * <p>The percentage of RI time that you used.</p>
     */
    inline void SetUtilizationPercentage(const char* value) { m_utilizationPercentageHasBeenSet = true; m_utilizationPercentage.assign(value); }

    /**
     * <p>The percentage of RI time that you used.</p>
     */
    inline ReservationAggregates& WithUtilizationPercentage(const Aws::String& value) { SetUtilizationPercentage(value); return *this;}

    /**
     * <p>The percentage of RI time that you used.</p>
     */
    inline ReservationAggregates& WithUtilizationPercentage(Aws::String&& value) { SetUtilizationPercentage(std::move(value)); return *this;}

    /**
     * <p>The percentage of RI time that you used.</p>
     */
    inline ReservationAggregates& WithUtilizationPercentage(const char* value) { SetUtilizationPercentage(value); return *this;}


    /**
     * <p>How many RI hours that you purchased.</p>
     */
    inline const Aws::String& GetPurchasedHours() const{ return m_purchasedHours; }

    /**
     * <p>How many RI hours that you purchased.</p>
     */
    inline void SetPurchasedHours(const Aws::String& value) { m_purchasedHoursHasBeenSet = true; m_purchasedHours = value; }

    /**
     * <p>How many RI hours that you purchased.</p>
     */
    inline void SetPurchasedHours(Aws::String&& value) { m_purchasedHoursHasBeenSet = true; m_purchasedHours = std::move(value); }

    /**
     * <p>How many RI hours that you purchased.</p>
     */
    inline void SetPurchasedHours(const char* value) { m_purchasedHoursHasBeenSet = true; m_purchasedHours.assign(value); }

    /**
     * <p>How many RI hours that you purchased.</p>
     */
    inline ReservationAggregates& WithPurchasedHours(const Aws::String& value) { SetPurchasedHours(value); return *this;}

    /**
     * <p>How many RI hours that you purchased.</p>
     */
    inline ReservationAggregates& WithPurchasedHours(Aws::String&& value) { SetPurchasedHours(std::move(value)); return *this;}

    /**
     * <p>How many RI hours that you purchased.</p>
     */
    inline ReservationAggregates& WithPurchasedHours(const char* value) { SetPurchasedHours(value); return *this;}


    /**
     * <p>The total number of RI hours that you used.</p>
     */
    inline const Aws::String& GetTotalActualHours() const{ return m_totalActualHours; }

    /**
     * <p>The total number of RI hours that you used.</p>
     */
    inline void SetTotalActualHours(const Aws::String& value) { m_totalActualHoursHasBeenSet = true; m_totalActualHours = value; }

    /**
     * <p>The total number of RI hours that you used.</p>
     */
    inline void SetTotalActualHours(Aws::String&& value) { m_totalActualHoursHasBeenSet = true; m_totalActualHours = std::move(value); }

    /**
     * <p>The total number of RI hours that you used.</p>
     */
    inline void SetTotalActualHours(const char* value) { m_totalActualHoursHasBeenSet = true; m_totalActualHours.assign(value); }

    /**
     * <p>The total number of RI hours that you used.</p>
     */
    inline ReservationAggregates& WithTotalActualHours(const Aws::String& value) { SetTotalActualHours(value); return *this;}

    /**
     * <p>The total number of RI hours that you used.</p>
     */
    inline ReservationAggregates& WithTotalActualHours(Aws::String&& value) { SetTotalActualHours(std::move(value)); return *this;}

    /**
     * <p>The total number of RI hours that you used.</p>
     */
    inline ReservationAggregates& WithTotalActualHours(const char* value) { SetTotalActualHours(value); return *this;}


    /**
     * <p>The number of RI hours that you didn't use.</p>
     */
    inline const Aws::String& GetUnusedHours() const{ return m_unusedHours; }

    /**
     * <p>The number of RI hours that you didn't use.</p>
     */
    inline void SetUnusedHours(const Aws::String& value) { m_unusedHoursHasBeenSet = true; m_unusedHours = value; }

    /**
     * <p>The number of RI hours that you didn't use.</p>
     */
    inline void SetUnusedHours(Aws::String&& value) { m_unusedHoursHasBeenSet = true; m_unusedHours = std::move(value); }

    /**
     * <p>The number of RI hours that you didn't use.</p>
     */
    inline void SetUnusedHours(const char* value) { m_unusedHoursHasBeenSet = true; m_unusedHours.assign(value); }

    /**
     * <p>The number of RI hours that you didn't use.</p>
     */
    inline ReservationAggregates& WithUnusedHours(const Aws::String& value) { SetUnusedHours(value); return *this;}

    /**
     * <p>The number of RI hours that you didn't use.</p>
     */
    inline ReservationAggregates& WithUnusedHours(Aws::String&& value) { SetUnusedHours(std::move(value)); return *this;}

    /**
     * <p>The number of RI hours that you didn't use.</p>
     */
    inline ReservationAggregates& WithUnusedHours(const char* value) { SetUnusedHours(value); return *this;}


    /**
     * <p>How much your RIs would cost if charged On-Demand rates.</p>
     */
    inline const Aws::String& GetOnDemandCostOfRIHoursUsed() const{ return m_onDemandCostOfRIHoursUsed; }

    /**
     * <p>How much your RIs would cost if charged On-Demand rates.</p>
     */
    inline void SetOnDemandCostOfRIHoursUsed(const Aws::String& value) { m_onDemandCostOfRIHoursUsedHasBeenSet = true; m_onDemandCostOfRIHoursUsed = value; }

    /**
     * <p>How much your RIs would cost if charged On-Demand rates.</p>
     */
    inline void SetOnDemandCostOfRIHoursUsed(Aws::String&& value) { m_onDemandCostOfRIHoursUsedHasBeenSet = true; m_onDemandCostOfRIHoursUsed = std::move(value); }

    /**
     * <p>How much your RIs would cost if charged On-Demand rates.</p>
     */
    inline void SetOnDemandCostOfRIHoursUsed(const char* value) { m_onDemandCostOfRIHoursUsedHasBeenSet = true; m_onDemandCostOfRIHoursUsed.assign(value); }

    /**
     * <p>How much your RIs would cost if charged On-Demand rates.</p>
     */
    inline ReservationAggregates& WithOnDemandCostOfRIHoursUsed(const Aws::String& value) { SetOnDemandCostOfRIHoursUsed(value); return *this;}

    /**
     * <p>How much your RIs would cost if charged On-Demand rates.</p>
     */
    inline ReservationAggregates& WithOnDemandCostOfRIHoursUsed(Aws::String&& value) { SetOnDemandCostOfRIHoursUsed(std::move(value)); return *this;}

    /**
     * <p>How much your RIs would cost if charged On-Demand rates.</p>
     */
    inline ReservationAggregates& WithOnDemandCostOfRIHoursUsed(const char* value) { SetOnDemandCostOfRIHoursUsed(value); return *this;}


    /**
     * <p>How much you saved due to purchasing and utilizing RIs. AWS calculates this
     * by subtracting <code>TotalAmortizedFee</code> from
     * <code>OnDemandCostOfRIHoursUsed</code>.</p>
     */
    inline const Aws::String& GetNetRISavings() const{ return m_netRISavings; }

    /**
     * <p>How much you saved due to purchasing and utilizing RIs. AWS calculates this
     * by subtracting <code>TotalAmortizedFee</code> from
     * <code>OnDemandCostOfRIHoursUsed</code>.</p>
     */
    inline void SetNetRISavings(const Aws::String& value) { m_netRISavingsHasBeenSet = true; m_netRISavings = value; }

    /**
     * <p>How much you saved due to purchasing and utilizing RIs. AWS calculates this
     * by subtracting <code>TotalAmortizedFee</code> from
     * <code>OnDemandCostOfRIHoursUsed</code>.</p>
     */
    inline void SetNetRISavings(Aws::String&& value) { m_netRISavingsHasBeenSet = true; m_netRISavings = std::move(value); }

    /**
     * <p>How much you saved due to purchasing and utilizing RIs. AWS calculates this
     * by subtracting <code>TotalAmortizedFee</code> from
     * <code>OnDemandCostOfRIHoursUsed</code>.</p>
     */
    inline void SetNetRISavings(const char* value) { m_netRISavingsHasBeenSet = true; m_netRISavings.assign(value); }

    /**
     * <p>How much you saved due to purchasing and utilizing RIs. AWS calculates this
     * by subtracting <code>TotalAmortizedFee</code> from
     * <code>OnDemandCostOfRIHoursUsed</code>.</p>
     */
    inline ReservationAggregates& WithNetRISavings(const Aws::String& value) { SetNetRISavings(value); return *this;}

    /**
     * <p>How much you saved due to purchasing and utilizing RIs. AWS calculates this
     * by subtracting <code>TotalAmortizedFee</code> from
     * <code>OnDemandCostOfRIHoursUsed</code>.</p>
     */
    inline ReservationAggregates& WithNetRISavings(Aws::String&& value) { SetNetRISavings(std::move(value)); return *this;}

    /**
     * <p>How much you saved due to purchasing and utilizing RIs. AWS calculates this
     * by subtracting <code>TotalAmortizedFee</code> from
     * <code>OnDemandCostOfRIHoursUsed</code>.</p>
     */
    inline ReservationAggregates& WithNetRISavings(const char* value) { SetNetRISavings(value); return *this;}


    /**
     * <p>How much you could save if you use your entire reservation.</p>
     */
    inline const Aws::String& GetTotalPotentialRISavings() const{ return m_totalPotentialRISavings; }

    /**
     * <p>How much you could save if you use your entire reservation.</p>
     */
    inline void SetTotalPotentialRISavings(const Aws::String& value) { m_totalPotentialRISavingsHasBeenSet = true; m_totalPotentialRISavings = value; }

    /**
     * <p>How much you could save if you use your entire reservation.</p>
     */
    inline void SetTotalPotentialRISavings(Aws::String&& value) { m_totalPotentialRISavingsHasBeenSet = true; m_totalPotentialRISavings = std::move(value); }

    /**
     * <p>How much you could save if you use your entire reservation.</p>
     */
    inline void SetTotalPotentialRISavings(const char* value) { m_totalPotentialRISavingsHasBeenSet = true; m_totalPotentialRISavings.assign(value); }

    /**
     * <p>How much you could save if you use your entire reservation.</p>
     */
    inline ReservationAggregates& WithTotalPotentialRISavings(const Aws::String& value) { SetTotalPotentialRISavings(value); return *this;}

    /**
     * <p>How much you could save if you use your entire reservation.</p>
     */
    inline ReservationAggregates& WithTotalPotentialRISavings(Aws::String&& value) { SetTotalPotentialRISavings(std::move(value)); return *this;}

    /**
     * <p>How much you could save if you use your entire reservation.</p>
     */
    inline ReservationAggregates& WithTotalPotentialRISavings(const char* value) { SetTotalPotentialRISavings(value); return *this;}


    /**
     * <p>The upfront cost of your RI, amortized over the RI period.</p>
     */
    inline const Aws::String& GetAmortizedUpfrontFee() const{ return m_amortizedUpfrontFee; }

    /**
     * <p>The upfront cost of your RI, amortized over the RI period.</p>
     */
    inline void SetAmortizedUpfrontFee(const Aws::String& value) { m_amortizedUpfrontFeeHasBeenSet = true; m_amortizedUpfrontFee = value; }

    /**
     * <p>The upfront cost of your RI, amortized over the RI period.</p>
     */
    inline void SetAmortizedUpfrontFee(Aws::String&& value) { m_amortizedUpfrontFeeHasBeenSet = true; m_amortizedUpfrontFee = std::move(value); }

    /**
     * <p>The upfront cost of your RI, amortized over the RI period.</p>
     */
    inline void SetAmortizedUpfrontFee(const char* value) { m_amortizedUpfrontFeeHasBeenSet = true; m_amortizedUpfrontFee.assign(value); }

    /**
     * <p>The upfront cost of your RI, amortized over the RI period.</p>
     */
    inline ReservationAggregates& WithAmortizedUpfrontFee(const Aws::String& value) { SetAmortizedUpfrontFee(value); return *this;}

    /**
     * <p>The upfront cost of your RI, amortized over the RI period.</p>
     */
    inline ReservationAggregates& WithAmortizedUpfrontFee(Aws::String&& value) { SetAmortizedUpfrontFee(std::move(value)); return *this;}

    /**
     * <p>The upfront cost of your RI, amortized over the RI period.</p>
     */
    inline ReservationAggregates& WithAmortizedUpfrontFee(const char* value) { SetAmortizedUpfrontFee(value); return *this;}


    /**
     * <p>The monthly cost of your RI, amortized over the RI period.</p>
     */
    inline const Aws::String& GetAmortizedRecurringFee() const{ return m_amortizedRecurringFee; }

    /**
     * <p>The monthly cost of your RI, amortized over the RI period.</p>
     */
    inline void SetAmortizedRecurringFee(const Aws::String& value) { m_amortizedRecurringFeeHasBeenSet = true; m_amortizedRecurringFee = value; }

    /**
     * <p>The monthly cost of your RI, amortized over the RI period.</p>
     */
    inline void SetAmortizedRecurringFee(Aws::String&& value) { m_amortizedRecurringFeeHasBeenSet = true; m_amortizedRecurringFee = std::move(value); }

    /**
     * <p>The monthly cost of your RI, amortized over the RI period.</p>
     */
    inline void SetAmortizedRecurringFee(const char* value) { m_amortizedRecurringFeeHasBeenSet = true; m_amortizedRecurringFee.assign(value); }

    /**
     * <p>The monthly cost of your RI, amortized over the RI period.</p>
     */
    inline ReservationAggregates& WithAmortizedRecurringFee(const Aws::String& value) { SetAmortizedRecurringFee(value); return *this;}

    /**
     * <p>The monthly cost of your RI, amortized over the RI period.</p>
     */
    inline ReservationAggregates& WithAmortizedRecurringFee(Aws::String&& value) { SetAmortizedRecurringFee(std::move(value)); return *this;}

    /**
     * <p>The monthly cost of your RI, amortized over the RI period.</p>
     */
    inline ReservationAggregates& WithAmortizedRecurringFee(const char* value) { SetAmortizedRecurringFee(value); return *this;}


    /**
     * <p>The total cost of your RI, amortized over the RI period.</p>
     */
    inline const Aws::String& GetTotalAmortizedFee() const{ return m_totalAmortizedFee; }

    /**
     * <p>The total cost of your RI, amortized over the RI period.</p>
     */
    inline void SetTotalAmortizedFee(const Aws::String& value) { m_totalAmortizedFeeHasBeenSet = true; m_totalAmortizedFee = value; }

    /**
     * <p>The total cost of your RI, amortized over the RI period.</p>
     */
    inline void SetTotalAmortizedFee(Aws::String&& value) { m_totalAmortizedFeeHasBeenSet = true; m_totalAmortizedFee = std::move(value); }

    /**
     * <p>The total cost of your RI, amortized over the RI period.</p>
     */
    inline void SetTotalAmortizedFee(const char* value) { m_totalAmortizedFeeHasBeenSet = true; m_totalAmortizedFee.assign(value); }

    /**
     * <p>The total cost of your RI, amortized over the RI period.</p>
     */
    inline ReservationAggregates& WithTotalAmortizedFee(const Aws::String& value) { SetTotalAmortizedFee(value); return *this;}

    /**
     * <p>The total cost of your RI, amortized over the RI period.</p>
     */
    inline ReservationAggregates& WithTotalAmortizedFee(Aws::String&& value) { SetTotalAmortizedFee(std::move(value)); return *this;}

    /**
     * <p>The total cost of your RI, amortized over the RI period.</p>
     */
    inline ReservationAggregates& WithTotalAmortizedFee(const char* value) { SetTotalAmortizedFee(value); return *this;}

  private:

    Aws::String m_utilizationPercentage;
    bool m_utilizationPercentageHasBeenSet;

    Aws::String m_purchasedHours;
    bool m_purchasedHoursHasBeenSet;

    Aws::String m_totalActualHours;
    bool m_totalActualHoursHasBeenSet;

    Aws::String m_unusedHours;
    bool m_unusedHoursHasBeenSet;

    Aws::String m_onDemandCostOfRIHoursUsed;
    bool m_onDemandCostOfRIHoursUsedHasBeenSet;

    Aws::String m_netRISavings;
    bool m_netRISavingsHasBeenSet;

    Aws::String m_totalPotentialRISavings;
    bool m_totalPotentialRISavingsHasBeenSet;

    Aws::String m_amortizedUpfrontFee;
    bool m_amortizedUpfrontFeeHasBeenSet;

    Aws::String m_amortizedRecurringFee;
    bool m_amortizedRecurringFeeHasBeenSet;

    Aws::String m_totalAmortizedFee;
    bool m_totalAmortizedFeeHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
