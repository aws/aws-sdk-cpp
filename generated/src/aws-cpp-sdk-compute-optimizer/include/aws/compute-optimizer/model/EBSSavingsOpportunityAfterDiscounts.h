﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/EBSEstimatedMonthlySavings.h>
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
   * <p> Describes the savings opportunity for Amazon EBS volume recommendations
   * after applying specific discounts. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/EBSSavingsOpportunityAfterDiscounts">AWS
   * API Reference</a></p>
   */
  class EBSSavingsOpportunityAfterDiscounts
  {
  public:
    AWS_COMPUTEOPTIMIZER_API EBSSavingsOpportunityAfterDiscounts();
    AWS_COMPUTEOPTIMIZER_API EBSSavingsOpportunityAfterDiscounts(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API EBSSavingsOpportunityAfterDiscounts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The estimated monthly savings possible as a percentage of monthly cost after
     * applying the specific discounts. This saving can be achieved by adopting Compute
     * Optimizer’s Amazon EBS volume recommendations. </p>
     */
    inline double GetSavingsOpportunityPercentage() const{ return m_savingsOpportunityPercentage; }
    inline bool SavingsOpportunityPercentageHasBeenSet() const { return m_savingsOpportunityPercentageHasBeenSet; }
    inline void SetSavingsOpportunityPercentage(double value) { m_savingsOpportunityPercentageHasBeenSet = true; m_savingsOpportunityPercentage = value; }
    inline EBSSavingsOpportunityAfterDiscounts& WithSavingsOpportunityPercentage(double value) { SetSavingsOpportunityPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The estimated monthly savings possible as a percentage of monthly cost by
     * adopting Compute Optimizer’s Amazon EBS volume recommendations. This saving
     * includes any applicable discounts. </p>
     */
    inline const EBSEstimatedMonthlySavings& GetEstimatedMonthlySavings() const{ return m_estimatedMonthlySavings; }
    inline bool EstimatedMonthlySavingsHasBeenSet() const { return m_estimatedMonthlySavingsHasBeenSet; }
    inline void SetEstimatedMonthlySavings(const EBSEstimatedMonthlySavings& value) { m_estimatedMonthlySavingsHasBeenSet = true; m_estimatedMonthlySavings = value; }
    inline void SetEstimatedMonthlySavings(EBSEstimatedMonthlySavings&& value) { m_estimatedMonthlySavingsHasBeenSet = true; m_estimatedMonthlySavings = std::move(value); }
    inline EBSSavingsOpportunityAfterDiscounts& WithEstimatedMonthlySavings(const EBSEstimatedMonthlySavings& value) { SetEstimatedMonthlySavings(value); return *this;}
    inline EBSSavingsOpportunityAfterDiscounts& WithEstimatedMonthlySavings(EBSEstimatedMonthlySavings&& value) { SetEstimatedMonthlySavings(std::move(value)); return *this;}
    ///@}
  private:

    double m_savingsOpportunityPercentage;
    bool m_savingsOpportunityPercentageHasBeenSet = false;

    EBSEstimatedMonthlySavings m_estimatedMonthlySavings;
    bool m_estimatedMonthlySavingsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
