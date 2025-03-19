/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/SavingsOpportunity.h>
#include <aws/compute-optimizer/model/LambdaSavingsOpportunityAfterDiscounts.h>
#include <aws/compute-optimizer/model/LambdaFunctionMemoryProjectedMetric.h>
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
   * <p>Describes a recommendation option for an Lambda function.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/LambdaFunctionMemoryRecommendationOption">AWS
   * API Reference</a></p>
   */
  class LambdaFunctionMemoryRecommendationOption
  {
  public:
    AWS_COMPUTEOPTIMIZER_API LambdaFunctionMemoryRecommendationOption() = default;
    AWS_COMPUTEOPTIMIZER_API LambdaFunctionMemoryRecommendationOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API LambdaFunctionMemoryRecommendationOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The rank of the function recommendation option.</p> <p>The top recommendation
     * option is ranked as <code>1</code>.</p>
     */
    inline int GetRank() const { return m_rank; }
    inline bool RankHasBeenSet() const { return m_rankHasBeenSet; }
    inline void SetRank(int value) { m_rankHasBeenSet = true; m_rank = value; }
    inline LambdaFunctionMemoryRecommendationOption& WithRank(int value) { SetRank(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The memory size, in MB, of the function recommendation option.</p>
     */
    inline int GetMemorySize() const { return m_memorySize; }
    inline bool MemorySizeHasBeenSet() const { return m_memorySizeHasBeenSet; }
    inline void SetMemorySize(int value) { m_memorySizeHasBeenSet = true; m_memorySize = value; }
    inline LambdaFunctionMemoryRecommendationOption& WithMemorySize(int value) { SetMemorySize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe the projected utilization metrics of the
     * function recommendation option.</p>
     */
    inline const Aws::Vector<LambdaFunctionMemoryProjectedMetric>& GetProjectedUtilizationMetrics() const { return m_projectedUtilizationMetrics; }
    inline bool ProjectedUtilizationMetricsHasBeenSet() const { return m_projectedUtilizationMetricsHasBeenSet; }
    template<typename ProjectedUtilizationMetricsT = Aws::Vector<LambdaFunctionMemoryProjectedMetric>>
    void SetProjectedUtilizationMetrics(ProjectedUtilizationMetricsT&& value) { m_projectedUtilizationMetricsHasBeenSet = true; m_projectedUtilizationMetrics = std::forward<ProjectedUtilizationMetricsT>(value); }
    template<typename ProjectedUtilizationMetricsT = Aws::Vector<LambdaFunctionMemoryProjectedMetric>>
    LambdaFunctionMemoryRecommendationOption& WithProjectedUtilizationMetrics(ProjectedUtilizationMetricsT&& value) { SetProjectedUtilizationMetrics(std::forward<ProjectedUtilizationMetricsT>(value)); return *this;}
    template<typename ProjectedUtilizationMetricsT = LambdaFunctionMemoryProjectedMetric>
    LambdaFunctionMemoryRecommendationOption& AddProjectedUtilizationMetrics(ProjectedUtilizationMetricsT&& value) { m_projectedUtilizationMetricsHasBeenSet = true; m_projectedUtilizationMetrics.emplace_back(std::forward<ProjectedUtilizationMetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that describes the savings opportunity for the Lambda function
     * recommendation option. Savings opportunity includes the estimated monthly
     * savings amount and percentage.</p>
     */
    inline const SavingsOpportunity& GetSavingsOpportunity() const { return m_savingsOpportunity; }
    inline bool SavingsOpportunityHasBeenSet() const { return m_savingsOpportunityHasBeenSet; }
    template<typename SavingsOpportunityT = SavingsOpportunity>
    void SetSavingsOpportunity(SavingsOpportunityT&& value) { m_savingsOpportunityHasBeenSet = true; m_savingsOpportunity = std::forward<SavingsOpportunityT>(value); }
    template<typename SavingsOpportunityT = SavingsOpportunity>
    LambdaFunctionMemoryRecommendationOption& WithSavingsOpportunity(SavingsOpportunityT&& value) { SetSavingsOpportunity(std::forward<SavingsOpportunityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An object that describes the savings opportunity for the Lambda
     * recommendation option which includes Saving Plans discounts. Savings opportunity
     * includes the estimated monthly savings and percentage. </p>
     */
    inline const LambdaSavingsOpportunityAfterDiscounts& GetSavingsOpportunityAfterDiscounts() const { return m_savingsOpportunityAfterDiscounts; }
    inline bool SavingsOpportunityAfterDiscountsHasBeenSet() const { return m_savingsOpportunityAfterDiscountsHasBeenSet; }
    template<typename SavingsOpportunityAfterDiscountsT = LambdaSavingsOpportunityAfterDiscounts>
    void SetSavingsOpportunityAfterDiscounts(SavingsOpportunityAfterDiscountsT&& value) { m_savingsOpportunityAfterDiscountsHasBeenSet = true; m_savingsOpportunityAfterDiscounts = std::forward<SavingsOpportunityAfterDiscountsT>(value); }
    template<typename SavingsOpportunityAfterDiscountsT = LambdaSavingsOpportunityAfterDiscounts>
    LambdaFunctionMemoryRecommendationOption& WithSavingsOpportunityAfterDiscounts(SavingsOpportunityAfterDiscountsT&& value) { SetSavingsOpportunityAfterDiscounts(std::forward<SavingsOpportunityAfterDiscountsT>(value)); return *this;}
    ///@}
  private:

    int m_rank{0};
    bool m_rankHasBeenSet = false;

    int m_memorySize{0};
    bool m_memorySizeHasBeenSet = false;

    Aws::Vector<LambdaFunctionMemoryProjectedMetric> m_projectedUtilizationMetrics;
    bool m_projectedUtilizationMetricsHasBeenSet = false;

    SavingsOpportunity m_savingsOpportunity;
    bool m_savingsOpportunityHasBeenSet = false;

    LambdaSavingsOpportunityAfterDiscounts m_savingsOpportunityAfterDiscounts;
    bool m_savingsOpportunityAfterDiscountsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
