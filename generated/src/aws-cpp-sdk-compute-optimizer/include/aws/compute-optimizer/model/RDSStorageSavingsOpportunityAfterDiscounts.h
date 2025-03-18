﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/RDSStorageEstimatedMonthlySavings.h>
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
   * <p> Describes the savings opportunity for Amazon RDS storage recommendations
   * after applying Savings Plans discounts. </p> <p> Savings opportunity represents
   * the estimated monthly savings after applying Savings Plans discounts. You can
   * achieve this by implementing a given Compute Optimizer recommendation.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/RDSStorageSavingsOpportunityAfterDiscounts">AWS
   * API Reference</a></p>
   */
  class RDSStorageSavingsOpportunityAfterDiscounts
  {
  public:
    AWS_COMPUTEOPTIMIZER_API RDSStorageSavingsOpportunityAfterDiscounts() = default;
    AWS_COMPUTEOPTIMIZER_API RDSStorageSavingsOpportunityAfterDiscounts(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API RDSStorageSavingsOpportunityAfterDiscounts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The estimated monthly savings possible as a percentage of monthly cost by
     * adopting Compute Optimizer’s Amazon RDS storage recommendations. This includes
     * any applicable Savings Plans discounts. </p>
     */
    inline double GetSavingsOpportunityPercentage() const { return m_savingsOpportunityPercentage; }
    inline bool SavingsOpportunityPercentageHasBeenSet() const { return m_savingsOpportunityPercentageHasBeenSet; }
    inline void SetSavingsOpportunityPercentage(double value) { m_savingsOpportunityPercentageHasBeenSet = true; m_savingsOpportunityPercentage = value; }
    inline RDSStorageSavingsOpportunityAfterDiscounts& WithSavingsOpportunityPercentage(double value) { SetSavingsOpportunityPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The estimated monthly savings possible by adopting Compute Optimizer’s
     * Amazon RDS storage recommendations. This includes any applicable Savings Plans
     * discounts. </p>
     */
    inline const RDSStorageEstimatedMonthlySavings& GetEstimatedMonthlySavings() const { return m_estimatedMonthlySavings; }
    inline bool EstimatedMonthlySavingsHasBeenSet() const { return m_estimatedMonthlySavingsHasBeenSet; }
    template<typename EstimatedMonthlySavingsT = RDSStorageEstimatedMonthlySavings>
    void SetEstimatedMonthlySavings(EstimatedMonthlySavingsT&& value) { m_estimatedMonthlySavingsHasBeenSet = true; m_estimatedMonthlySavings = std::forward<EstimatedMonthlySavingsT>(value); }
    template<typename EstimatedMonthlySavingsT = RDSStorageEstimatedMonthlySavings>
    RDSStorageSavingsOpportunityAfterDiscounts& WithEstimatedMonthlySavings(EstimatedMonthlySavingsT&& value) { SetEstimatedMonthlySavings(std::forward<EstimatedMonthlySavingsT>(value)); return *this;}
    ///@}
  private:

    double m_savingsOpportunityPercentage{0.0};
    bool m_savingsOpportunityPercentageHasBeenSet = false;

    RDSStorageEstimatedMonthlySavings m_estimatedMonthlySavings;
    bool m_estimatedMonthlySavingsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
