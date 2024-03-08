/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/InstanceEstimatedMonthlySavings.h>
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
   * <p> Describes the savings opportunity for instance recommendations after
   * applying the Savings Plans and Reserved Instances discounts. </p> <p>Savings
   * opportunity after discounts represents the estimated monthly savings you can
   * achieve by implementing Compute Optimizer recommendations.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/InstanceSavingsOpportunityAfterDiscounts">AWS
   * API Reference</a></p>
   */
  class InstanceSavingsOpportunityAfterDiscounts
  {
  public:
    AWS_COMPUTEOPTIMIZER_API InstanceSavingsOpportunityAfterDiscounts();
    AWS_COMPUTEOPTIMIZER_API InstanceSavingsOpportunityAfterDiscounts(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API InstanceSavingsOpportunityAfterDiscounts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The estimated monthly savings possible as a percentage of monthly cost after
     * applying the Savings Plans and Reserved Instances discounts. This saving can be
     * achieved by adopting Compute Optimizer’s EC2 instance recommendations. </p>
     */
    inline double GetSavingsOpportunityPercentage() const{ return m_savingsOpportunityPercentage; }

    /**
     * <p> The estimated monthly savings possible as a percentage of monthly cost after
     * applying the Savings Plans and Reserved Instances discounts. This saving can be
     * achieved by adopting Compute Optimizer’s EC2 instance recommendations. </p>
     */
    inline bool SavingsOpportunityPercentageHasBeenSet() const { return m_savingsOpportunityPercentageHasBeenSet; }

    /**
     * <p> The estimated monthly savings possible as a percentage of monthly cost after
     * applying the Savings Plans and Reserved Instances discounts. This saving can be
     * achieved by adopting Compute Optimizer’s EC2 instance recommendations. </p>
     */
    inline void SetSavingsOpportunityPercentage(double value) { m_savingsOpportunityPercentageHasBeenSet = true; m_savingsOpportunityPercentage = value; }

    /**
     * <p> The estimated monthly savings possible as a percentage of monthly cost after
     * applying the Savings Plans and Reserved Instances discounts. This saving can be
     * achieved by adopting Compute Optimizer’s EC2 instance recommendations. </p>
     */
    inline InstanceSavingsOpportunityAfterDiscounts& WithSavingsOpportunityPercentage(double value) { SetSavingsOpportunityPercentage(value); return *this;}


    /**
     * <p> An object that describes the estimated monthly savings possible by adopting
     * Compute Optimizer’s Amazon EC2 instance recommendations. This is based on
     * pricing after applying the Savings Plans and Reserved Instances discounts. </p>
     */
    inline const InstanceEstimatedMonthlySavings& GetEstimatedMonthlySavings() const{ return m_estimatedMonthlySavings; }

    /**
     * <p> An object that describes the estimated monthly savings possible by adopting
     * Compute Optimizer’s Amazon EC2 instance recommendations. This is based on
     * pricing after applying the Savings Plans and Reserved Instances discounts. </p>
     */
    inline bool EstimatedMonthlySavingsHasBeenSet() const { return m_estimatedMonthlySavingsHasBeenSet; }

    /**
     * <p> An object that describes the estimated monthly savings possible by adopting
     * Compute Optimizer’s Amazon EC2 instance recommendations. This is based on
     * pricing after applying the Savings Plans and Reserved Instances discounts. </p>
     */
    inline void SetEstimatedMonthlySavings(const InstanceEstimatedMonthlySavings& value) { m_estimatedMonthlySavingsHasBeenSet = true; m_estimatedMonthlySavings = value; }

    /**
     * <p> An object that describes the estimated monthly savings possible by adopting
     * Compute Optimizer’s Amazon EC2 instance recommendations. This is based on
     * pricing after applying the Savings Plans and Reserved Instances discounts. </p>
     */
    inline void SetEstimatedMonthlySavings(InstanceEstimatedMonthlySavings&& value) { m_estimatedMonthlySavingsHasBeenSet = true; m_estimatedMonthlySavings = std::move(value); }

    /**
     * <p> An object that describes the estimated monthly savings possible by adopting
     * Compute Optimizer’s Amazon EC2 instance recommendations. This is based on
     * pricing after applying the Savings Plans and Reserved Instances discounts. </p>
     */
    inline InstanceSavingsOpportunityAfterDiscounts& WithEstimatedMonthlySavings(const InstanceEstimatedMonthlySavings& value) { SetEstimatedMonthlySavings(value); return *this;}

    /**
     * <p> An object that describes the estimated monthly savings possible by adopting
     * Compute Optimizer’s Amazon EC2 instance recommendations. This is based on
     * pricing after applying the Savings Plans and Reserved Instances discounts. </p>
     */
    inline InstanceSavingsOpportunityAfterDiscounts& WithEstimatedMonthlySavings(InstanceEstimatedMonthlySavings&& value) { SetEstimatedMonthlySavings(std::move(value)); return *this;}

  private:

    double m_savingsOpportunityPercentage;
    bool m_savingsOpportunityPercentageHasBeenSet = false;

    InstanceEstimatedMonthlySavings m_estimatedMonthlySavings;
    bool m_estimatedMonthlySavingsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
