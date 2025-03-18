/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/AutoScalingGroupEstimatedMonthlySavings.h>
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
   * <p> Describes the savings opportunity for Auto Scaling group recommendations
   * after applying the Savings Plans and Reserved Instances discounts. </p>
   * <p>Savings opportunity represents the estimated monthly savings you can achieve
   * by implementing Compute Optimizer recommendations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/AutoScalingGroupSavingsOpportunityAfterDiscounts">AWS
   * API Reference</a></p>
   */
  class AutoScalingGroupSavingsOpportunityAfterDiscounts
  {
  public:
    AWS_COMPUTEOPTIMIZER_API AutoScalingGroupSavingsOpportunityAfterDiscounts() = default;
    AWS_COMPUTEOPTIMIZER_API AutoScalingGroupSavingsOpportunityAfterDiscounts(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API AutoScalingGroupSavingsOpportunityAfterDiscounts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The estimated monthly savings possible as a percentage of monthly cost after
     * applying the Savings Plans and Reserved Instances discounts. This saving can be
     * achieved by adopting Compute Optimizer’s Auto Scaling group recommendations.
     * </p>
     */
    inline double GetSavingsOpportunityPercentage() const { return m_savingsOpportunityPercentage; }
    inline bool SavingsOpportunityPercentageHasBeenSet() const { return m_savingsOpportunityPercentageHasBeenSet; }
    inline void SetSavingsOpportunityPercentage(double value) { m_savingsOpportunityPercentageHasBeenSet = true; m_savingsOpportunityPercentage = value; }
    inline AutoScalingGroupSavingsOpportunityAfterDiscounts& WithSavingsOpportunityPercentage(double value) { SetSavingsOpportunityPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An object that describes the estimated monthly savings possible by adopting
     * Compute Optimizer’s Auto Scaling group recommendations. This is based on the
     * Savings Plans and Reserved Instances pricing discounts. </p>
     */
    inline const AutoScalingGroupEstimatedMonthlySavings& GetEstimatedMonthlySavings() const { return m_estimatedMonthlySavings; }
    inline bool EstimatedMonthlySavingsHasBeenSet() const { return m_estimatedMonthlySavingsHasBeenSet; }
    template<typename EstimatedMonthlySavingsT = AutoScalingGroupEstimatedMonthlySavings>
    void SetEstimatedMonthlySavings(EstimatedMonthlySavingsT&& value) { m_estimatedMonthlySavingsHasBeenSet = true; m_estimatedMonthlySavings = std::forward<EstimatedMonthlySavingsT>(value); }
    template<typename EstimatedMonthlySavingsT = AutoScalingGroupEstimatedMonthlySavings>
    AutoScalingGroupSavingsOpportunityAfterDiscounts& WithEstimatedMonthlySavings(EstimatedMonthlySavingsT&& value) { SetEstimatedMonthlySavings(std::forward<EstimatedMonthlySavingsT>(value)); return *this;}
    ///@}
  private:

    double m_savingsOpportunityPercentage{0.0};
    bool m_savingsOpportunityPercentageHasBeenSet = false;

    AutoScalingGroupEstimatedMonthlySavings m_estimatedMonthlySavings;
    bool m_estimatedMonthlySavingsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
