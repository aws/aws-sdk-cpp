/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/SavingsOpportunity.h>
#include <aws/compute-optimizer/model/ECSSavingsOpportunityAfterDiscounts.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/ECSServiceProjectedUtilizationMetric.h>
#include <aws/compute-optimizer/model/ContainerRecommendation.h>
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
   * <p> Describes the recommendation options for an Amazon ECS service.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/ECSServiceRecommendationOption">AWS
   * API Reference</a></p>
   */
  class ECSServiceRecommendationOption
  {
  public:
    AWS_COMPUTEOPTIMIZER_API ECSServiceRecommendationOption() = default;
    AWS_COMPUTEOPTIMIZER_API ECSServiceRecommendationOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API ECSServiceRecommendationOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The memory size of the Amazon ECS service recommendation option. </p>
     */
    inline int GetMemory() const { return m_memory; }
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
    inline void SetMemory(int value) { m_memoryHasBeenSet = true; m_memory = value; }
    inline ECSServiceRecommendationOption& WithMemory(int value) { SetMemory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The CPU size of the Amazon ECS service recommendation option. </p>
     */
    inline int GetCpu() const { return m_cpu; }
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }
    inline void SetCpu(int value) { m_cpuHasBeenSet = true; m_cpu = value; }
    inline ECSServiceRecommendationOption& WithCpu(int value) { SetCpu(value); return *this;}
    ///@}

    ///@{
    
    inline const SavingsOpportunity& GetSavingsOpportunity() const { return m_savingsOpportunity; }
    inline bool SavingsOpportunityHasBeenSet() const { return m_savingsOpportunityHasBeenSet; }
    template<typename SavingsOpportunityT = SavingsOpportunity>
    void SetSavingsOpportunity(SavingsOpportunityT&& value) { m_savingsOpportunityHasBeenSet = true; m_savingsOpportunity = std::forward<SavingsOpportunityT>(value); }
    template<typename SavingsOpportunityT = SavingsOpportunity>
    ECSServiceRecommendationOption& WithSavingsOpportunity(SavingsOpportunityT&& value) { SetSavingsOpportunity(std::forward<SavingsOpportunityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the savings opportunity for Amazon ECS service recommendations or
     * for the recommendation option. </p> <p>Savings opportunity represents the
     * estimated monthly savings after applying Savings Plans discounts. You can
     * achieve this by implementing a given Compute Optimizer recommendation.</p>
     */
    inline const ECSSavingsOpportunityAfterDiscounts& GetSavingsOpportunityAfterDiscounts() const { return m_savingsOpportunityAfterDiscounts; }
    inline bool SavingsOpportunityAfterDiscountsHasBeenSet() const { return m_savingsOpportunityAfterDiscountsHasBeenSet; }
    template<typename SavingsOpportunityAfterDiscountsT = ECSSavingsOpportunityAfterDiscounts>
    void SetSavingsOpportunityAfterDiscounts(SavingsOpportunityAfterDiscountsT&& value) { m_savingsOpportunityAfterDiscountsHasBeenSet = true; m_savingsOpportunityAfterDiscounts = std::forward<SavingsOpportunityAfterDiscountsT>(value); }
    template<typename SavingsOpportunityAfterDiscountsT = ECSSavingsOpportunityAfterDiscounts>
    ECSServiceRecommendationOption& WithSavingsOpportunityAfterDiscounts(SavingsOpportunityAfterDiscountsT&& value) { SetSavingsOpportunityAfterDiscounts(std::forward<SavingsOpportunityAfterDiscountsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of objects that describe the projected utilization metrics of the
     * Amazon ECS service recommendation option. </p>
     */
    inline const Aws::Vector<ECSServiceProjectedUtilizationMetric>& GetProjectedUtilizationMetrics() const { return m_projectedUtilizationMetrics; }
    inline bool ProjectedUtilizationMetricsHasBeenSet() const { return m_projectedUtilizationMetricsHasBeenSet; }
    template<typename ProjectedUtilizationMetricsT = Aws::Vector<ECSServiceProjectedUtilizationMetric>>
    void SetProjectedUtilizationMetrics(ProjectedUtilizationMetricsT&& value) { m_projectedUtilizationMetricsHasBeenSet = true; m_projectedUtilizationMetrics = std::forward<ProjectedUtilizationMetricsT>(value); }
    template<typename ProjectedUtilizationMetricsT = Aws::Vector<ECSServiceProjectedUtilizationMetric>>
    ECSServiceRecommendationOption& WithProjectedUtilizationMetrics(ProjectedUtilizationMetricsT&& value) { SetProjectedUtilizationMetrics(std::forward<ProjectedUtilizationMetricsT>(value)); return *this;}
    template<typename ProjectedUtilizationMetricsT = ECSServiceProjectedUtilizationMetric>
    ECSServiceRecommendationOption& AddProjectedUtilizationMetrics(ProjectedUtilizationMetricsT&& value) { m_projectedUtilizationMetricsHasBeenSet = true; m_projectedUtilizationMetrics.emplace_back(std::forward<ProjectedUtilizationMetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The CPU and memory size recommendations for the containers within the task
     * of your Amazon ECS service. </p>
     */
    inline const Aws::Vector<ContainerRecommendation>& GetContainerRecommendations() const { return m_containerRecommendations; }
    inline bool ContainerRecommendationsHasBeenSet() const { return m_containerRecommendationsHasBeenSet; }
    template<typename ContainerRecommendationsT = Aws::Vector<ContainerRecommendation>>
    void SetContainerRecommendations(ContainerRecommendationsT&& value) { m_containerRecommendationsHasBeenSet = true; m_containerRecommendations = std::forward<ContainerRecommendationsT>(value); }
    template<typename ContainerRecommendationsT = Aws::Vector<ContainerRecommendation>>
    ECSServiceRecommendationOption& WithContainerRecommendations(ContainerRecommendationsT&& value) { SetContainerRecommendations(std::forward<ContainerRecommendationsT>(value)); return *this;}
    template<typename ContainerRecommendationsT = ContainerRecommendation>
    ECSServiceRecommendationOption& AddContainerRecommendations(ContainerRecommendationsT&& value) { m_containerRecommendationsHasBeenSet = true; m_containerRecommendations.emplace_back(std::forward<ContainerRecommendationsT>(value)); return *this; }
    ///@}
  private:

    int m_memory{0};
    bool m_memoryHasBeenSet = false;

    int m_cpu{0};
    bool m_cpuHasBeenSet = false;

    SavingsOpportunity m_savingsOpportunity;
    bool m_savingsOpportunityHasBeenSet = false;

    ECSSavingsOpportunityAfterDiscounts m_savingsOpportunityAfterDiscounts;
    bool m_savingsOpportunityAfterDiscountsHasBeenSet = false;

    Aws::Vector<ECSServiceProjectedUtilizationMetric> m_projectedUtilizationMetrics;
    bool m_projectedUtilizationMetricsHasBeenSet = false;

    Aws::Vector<ContainerRecommendation> m_containerRecommendations;
    bool m_containerRecommendationsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
