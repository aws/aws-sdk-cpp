/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>

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
namespace CostOptimizationHub
{
namespace Model
{

  /**
   * <p>Pricing details for your recommended reserved instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/ReservedInstancesPricing">AWS
   * API Reference</a></p>
   */
  class ReservedInstancesPricing
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API ReservedInstancesPricing() = default;
    AWS_COSTOPTIMIZATIONHUB_API ReservedInstancesPricing(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API ReservedInstancesPricing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The remaining On-Demand cost estimated to not be covered by the recommended
     * reserved instance, over the length of the lookback period.</p>
     */
    inline double GetEstimatedOnDemandCost() const { return m_estimatedOnDemandCost; }
    inline bool EstimatedOnDemandCostHasBeenSet() const { return m_estimatedOnDemandCostHasBeenSet; }
    inline void SetEstimatedOnDemandCost(double value) { m_estimatedOnDemandCostHasBeenSet = true; m_estimatedOnDemandCost = value; }
    inline ReservedInstancesPricing& WithEstimatedOnDemandCost(double value) { SetEstimatedOnDemandCost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cost of paying for the recommended reserved instance monthly.</p>
     */
    inline double GetMonthlyReservationEligibleCost() const { return m_monthlyReservationEligibleCost; }
    inline bool MonthlyReservationEligibleCostHasBeenSet() const { return m_monthlyReservationEligibleCostHasBeenSet; }
    inline void SetMonthlyReservationEligibleCost(double value) { m_monthlyReservationEligibleCostHasBeenSet = true; m_monthlyReservationEligibleCost = value; }
    inline ReservedInstancesPricing& WithMonthlyReservationEligibleCost(double value) { SetMonthlyReservationEligibleCost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The savings percentage relative to the total On-Demand costs that are
     * associated with this instance.</p>
     */
    inline double GetSavingsPercentage() const { return m_savingsPercentage; }
    inline bool SavingsPercentageHasBeenSet() const { return m_savingsPercentageHasBeenSet; }
    inline void SetSavingsPercentage(double value) { m_savingsPercentageHasBeenSet = true; m_savingsPercentage = value; }
    inline ReservedInstancesPricing& WithSavingsPercentage(double value) { SetSavingsPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated cost of your recurring monthly fees for the recommended
     * reserved instance across the month.</p>
     */
    inline double GetEstimatedMonthlyAmortizedReservationCost() const { return m_estimatedMonthlyAmortizedReservationCost; }
    inline bool EstimatedMonthlyAmortizedReservationCostHasBeenSet() const { return m_estimatedMonthlyAmortizedReservationCostHasBeenSet; }
    inline void SetEstimatedMonthlyAmortizedReservationCost(double value) { m_estimatedMonthlyAmortizedReservationCostHasBeenSet = true; m_estimatedMonthlyAmortizedReservationCost = value; }
    inline ReservedInstancesPricing& WithEstimatedMonthlyAmortizedReservationCost(double value) { SetEstimatedMonthlyAmortizedReservationCost(value); return *this;}
    ///@}
  private:

    double m_estimatedOnDemandCost{0.0};
    bool m_estimatedOnDemandCostHasBeenSet = false;

    double m_monthlyReservationEligibleCost{0.0};
    bool m_monthlyReservationEligibleCostHasBeenSet = false;

    double m_savingsPercentage{0.0};
    bool m_savingsPercentageHasBeenSet = false;

    double m_estimatedMonthlyAmortizedReservationCost{0.0};
    bool m_estimatedMonthlyAmortizedReservationCostHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
