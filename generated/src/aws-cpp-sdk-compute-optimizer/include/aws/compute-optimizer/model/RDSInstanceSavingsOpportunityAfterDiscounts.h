/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/RDSInstanceEstimatedMonthlySavings.h>
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
   * <p> Describes the savings opportunity for Amazon RDS instance recommendations
   * after applying Savings Plans discounts. </p> <p> Savings opportunity represents
   * the estimated monthly savings after applying Savings Plans discounts. You can
   * achieve this by implementing a given Compute Optimizer recommendation.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/RDSInstanceSavingsOpportunityAfterDiscounts">AWS
   * API Reference</a></p>
   */
  class RDSInstanceSavingsOpportunityAfterDiscounts
  {
  public:
    AWS_COMPUTEOPTIMIZER_API RDSInstanceSavingsOpportunityAfterDiscounts();
    AWS_COMPUTEOPTIMIZER_API RDSInstanceSavingsOpportunityAfterDiscounts(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API RDSInstanceSavingsOpportunityAfterDiscounts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The estimated monthly savings possible as a percentage of monthly cost by
     * adopting Compute Optimizer’s Amazon RDS instance recommendations. This includes
     * any applicable Savings Plans discounts. </p>
     */
    inline double GetSavingsOpportunityPercentage() const{ return m_savingsOpportunityPercentage; }
    inline bool SavingsOpportunityPercentageHasBeenSet() const { return m_savingsOpportunityPercentageHasBeenSet; }
    inline void SetSavingsOpportunityPercentage(double value) { m_savingsOpportunityPercentageHasBeenSet = true; m_savingsOpportunityPercentage = value; }
    inline RDSInstanceSavingsOpportunityAfterDiscounts& WithSavingsOpportunityPercentage(double value) { SetSavingsOpportunityPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The estimated monthly savings possible by adopting Compute Optimizer’s
     * Amazon RDS instance recommendations. This includes any applicable Savings Plans
     * discounts. </p>
     */
    inline const RDSInstanceEstimatedMonthlySavings& GetEstimatedMonthlySavings() const{ return m_estimatedMonthlySavings; }
    inline bool EstimatedMonthlySavingsHasBeenSet() const { return m_estimatedMonthlySavingsHasBeenSet; }
    inline void SetEstimatedMonthlySavings(const RDSInstanceEstimatedMonthlySavings& value) { m_estimatedMonthlySavingsHasBeenSet = true; m_estimatedMonthlySavings = value; }
    inline void SetEstimatedMonthlySavings(RDSInstanceEstimatedMonthlySavings&& value) { m_estimatedMonthlySavingsHasBeenSet = true; m_estimatedMonthlySavings = std::move(value); }
    inline RDSInstanceSavingsOpportunityAfterDiscounts& WithEstimatedMonthlySavings(const RDSInstanceEstimatedMonthlySavings& value) { SetEstimatedMonthlySavings(value); return *this;}
    inline RDSInstanceSavingsOpportunityAfterDiscounts& WithEstimatedMonthlySavings(RDSInstanceEstimatedMonthlySavings&& value) { SetEstimatedMonthlySavings(std::move(value)); return *this;}
    ///@}
  private:

    double m_savingsOpportunityPercentage;
    bool m_savingsOpportunityPercentageHasBeenSet = false;

    RDSInstanceEstimatedMonthlySavings m_estimatedMonthlySavings;
    bool m_estimatedMonthlySavingsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
