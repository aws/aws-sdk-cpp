/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/IdleEstimatedMonthlySavings.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p>Describes the savings opportunity for idle resource recommendations after
   * applying discounts.</p> <p>Savings opportunity represents the estimated monthly
   * savings after applying discounts. You can achieve this by implementing a given
   * Compute Optimizer recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/IdleSavingsOpportunityAfterDiscounts">AWS
   * API Reference</a></p>
   */
  class IdleSavingsOpportunityAfterDiscounts
  {
  public:
    AWS_COMPUTEOPTIMIZER_API IdleSavingsOpportunityAfterDiscounts() = default;
    AWS_COMPUTEOPTIMIZER_API IdleSavingsOpportunityAfterDiscounts(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API IdleSavingsOpportunityAfterDiscounts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The estimated monthly savings possible as a percentage of monthly cost by
     * adopting Compute Optimizer's idle resource recommendations. This includes any
     * applicable discounts.</p>
     */
    inline double GetSavingsOpportunityPercentage() const { return m_savingsOpportunityPercentage; }
    inline bool SavingsOpportunityPercentageHasBeenSet() const { return m_savingsOpportunityPercentageHasBeenSet; }
    inline void SetSavingsOpportunityPercentage(double value) { m_savingsOpportunityPercentageHasBeenSet = true; m_savingsOpportunityPercentage = value; }
    inline IdleSavingsOpportunityAfterDiscounts& WithSavingsOpportunityPercentage(double value) { SetSavingsOpportunityPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated monthly savings possible by adopting Compute Optimizer's idle
     * resource recommendations. This includes any applicable discounts.</p>
     */
    inline const IdleEstimatedMonthlySavings& GetEstimatedMonthlySavings() const { return m_estimatedMonthlySavings; }
    inline bool EstimatedMonthlySavingsHasBeenSet() const { return m_estimatedMonthlySavingsHasBeenSet; }
    template<typename EstimatedMonthlySavingsT = IdleEstimatedMonthlySavings>
    void SetEstimatedMonthlySavings(EstimatedMonthlySavingsT&& value) { m_estimatedMonthlySavingsHasBeenSet = true; m_estimatedMonthlySavings = std::forward<EstimatedMonthlySavingsT>(value); }
    template<typename EstimatedMonthlySavingsT = IdleEstimatedMonthlySavings>
    IdleSavingsOpportunityAfterDiscounts& WithEstimatedMonthlySavings(EstimatedMonthlySavingsT&& value) { SetEstimatedMonthlySavings(std::forward<EstimatedMonthlySavingsT>(value)); return *this;}
    ///@}
  private:

    double m_savingsOpportunityPercentage{0.0};
    bool m_savingsOpportunityPercentageHasBeenSet = false;

    IdleEstimatedMonthlySavings m_estimatedMonthlySavings;
    bool m_estimatedMonthlySavingsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
