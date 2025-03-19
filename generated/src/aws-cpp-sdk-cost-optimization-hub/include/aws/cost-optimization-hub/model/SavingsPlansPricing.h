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
   * <p>Pricing information about a Savings Plan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/SavingsPlansPricing">AWS
   * API Reference</a></p>
   */
  class SavingsPlansPricing
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API SavingsPlansPricing() = default;
    AWS_COSTOPTIMIZATIONHUB_API SavingsPlansPricing(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API SavingsPlansPricing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The cost of paying for the recommended Savings Plan monthly.</p>
     */
    inline double GetMonthlySavingsPlansEligibleCost() const { return m_monthlySavingsPlansEligibleCost; }
    inline bool MonthlySavingsPlansEligibleCostHasBeenSet() const { return m_monthlySavingsPlansEligibleCostHasBeenSet; }
    inline void SetMonthlySavingsPlansEligibleCost(double value) { m_monthlySavingsPlansEligibleCostHasBeenSet = true; m_monthlySavingsPlansEligibleCost = value; }
    inline SavingsPlansPricing& WithMonthlySavingsPlansEligibleCost(double value) { SetMonthlySavingsPlansEligibleCost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Estimated monthly commitment for the Savings Plan.</p>
     */
    inline double GetEstimatedMonthlyCommitment() const { return m_estimatedMonthlyCommitment; }
    inline bool EstimatedMonthlyCommitmentHasBeenSet() const { return m_estimatedMonthlyCommitmentHasBeenSet; }
    inline void SetEstimatedMonthlyCommitment(double value) { m_estimatedMonthlyCommitmentHasBeenSet = true; m_estimatedMonthlyCommitment = value; }
    inline SavingsPlansPricing& WithEstimatedMonthlyCommitment(double value) { SetEstimatedMonthlyCommitment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Estimated savings as a percentage of your overall costs after buying the
     * Savings Plan.</p>
     */
    inline double GetSavingsPercentage() const { return m_savingsPercentage; }
    inline bool SavingsPercentageHasBeenSet() const { return m_savingsPercentageHasBeenSet; }
    inline void SetSavingsPercentage(double value) { m_savingsPercentageHasBeenSet = true; m_savingsPercentage = value; }
    inline SavingsPlansPricing& WithSavingsPercentage(double value) { SetSavingsPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Estimated On-Demand cost you will pay after buying the Savings Plan.</p>
     */
    inline double GetEstimatedOnDemandCost() const { return m_estimatedOnDemandCost; }
    inline bool EstimatedOnDemandCostHasBeenSet() const { return m_estimatedOnDemandCostHasBeenSet; }
    inline void SetEstimatedOnDemandCost(double value) { m_estimatedOnDemandCostHasBeenSet = true; m_estimatedOnDemandCost = value; }
    inline SavingsPlansPricing& WithEstimatedOnDemandCost(double value) { SetEstimatedOnDemandCost(value); return *this;}
    ///@}
  private:

    double m_monthlySavingsPlansEligibleCost{0.0};
    bool m_monthlySavingsPlansEligibleCostHasBeenSet = false;

    double m_estimatedMonthlyCommitment{0.0};
    bool m_estimatedMonthlyCommitmentHasBeenSet = false;

    double m_savingsPercentage{0.0};
    bool m_savingsPercentageHasBeenSet = false;

    double m_estimatedOnDemandCost{0.0};
    bool m_estimatedOnDemandCostHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
