/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/SavingsOpportunity.h>
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
    AWS_COMPUTEOPTIMIZER_API ECSServiceRecommendationOption();
    AWS_COMPUTEOPTIMIZER_API ECSServiceRecommendationOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API ECSServiceRecommendationOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The memory size of the ECS service recommendation option. </p>
     */
    inline int GetMemory() const{ return m_memory; }

    /**
     * <p> The memory size of the ECS service recommendation option. </p>
     */
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }

    /**
     * <p> The memory size of the ECS service recommendation option. </p>
     */
    inline void SetMemory(int value) { m_memoryHasBeenSet = true; m_memory = value; }

    /**
     * <p> The memory size of the ECS service recommendation option. </p>
     */
    inline ECSServiceRecommendationOption& WithMemory(int value) { SetMemory(value); return *this;}


    /**
     * <p> The CPU size of the ECS service recommendation option. </p>
     */
    inline int GetCpu() const{ return m_cpu; }

    /**
     * <p> The CPU size of the ECS service recommendation option. </p>
     */
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }

    /**
     * <p> The CPU size of the ECS service recommendation option. </p>
     */
    inline void SetCpu(int value) { m_cpuHasBeenSet = true; m_cpu = value; }

    /**
     * <p> The CPU size of the ECS service recommendation option. </p>
     */
    inline ECSServiceRecommendationOption& WithCpu(int value) { SetCpu(value); return *this;}


    
    inline const SavingsOpportunity& GetSavingsOpportunity() const{ return m_savingsOpportunity; }

    
    inline bool SavingsOpportunityHasBeenSet() const { return m_savingsOpportunityHasBeenSet; }

    
    inline void SetSavingsOpportunity(const SavingsOpportunity& value) { m_savingsOpportunityHasBeenSet = true; m_savingsOpportunity = value; }

    
    inline void SetSavingsOpportunity(SavingsOpportunity&& value) { m_savingsOpportunityHasBeenSet = true; m_savingsOpportunity = std::move(value); }

    
    inline ECSServiceRecommendationOption& WithSavingsOpportunity(const SavingsOpportunity& value) { SetSavingsOpportunity(value); return *this;}

    
    inline ECSServiceRecommendationOption& WithSavingsOpportunity(SavingsOpportunity&& value) { SetSavingsOpportunity(std::move(value)); return *this;}


    /**
     * <p> An array of objects that describe the projected utilization metrics of the
     * ECS service recommendation option. </p>
     */
    inline const Aws::Vector<ECSServiceProjectedUtilizationMetric>& GetProjectedUtilizationMetrics() const{ return m_projectedUtilizationMetrics; }

    /**
     * <p> An array of objects that describe the projected utilization metrics of the
     * ECS service recommendation option. </p>
     */
    inline bool ProjectedUtilizationMetricsHasBeenSet() const { return m_projectedUtilizationMetricsHasBeenSet; }

    /**
     * <p> An array of objects that describe the projected utilization metrics of the
     * ECS service recommendation option. </p>
     */
    inline void SetProjectedUtilizationMetrics(const Aws::Vector<ECSServiceProjectedUtilizationMetric>& value) { m_projectedUtilizationMetricsHasBeenSet = true; m_projectedUtilizationMetrics = value; }

    /**
     * <p> An array of objects that describe the projected utilization metrics of the
     * ECS service recommendation option. </p>
     */
    inline void SetProjectedUtilizationMetrics(Aws::Vector<ECSServiceProjectedUtilizationMetric>&& value) { m_projectedUtilizationMetricsHasBeenSet = true; m_projectedUtilizationMetrics = std::move(value); }

    /**
     * <p> An array of objects that describe the projected utilization metrics of the
     * ECS service recommendation option. </p>
     */
    inline ECSServiceRecommendationOption& WithProjectedUtilizationMetrics(const Aws::Vector<ECSServiceProjectedUtilizationMetric>& value) { SetProjectedUtilizationMetrics(value); return *this;}

    /**
     * <p> An array of objects that describe the projected utilization metrics of the
     * ECS service recommendation option. </p>
     */
    inline ECSServiceRecommendationOption& WithProjectedUtilizationMetrics(Aws::Vector<ECSServiceProjectedUtilizationMetric>&& value) { SetProjectedUtilizationMetrics(std::move(value)); return *this;}

    /**
     * <p> An array of objects that describe the projected utilization metrics of the
     * ECS service recommendation option. </p>
     */
    inline ECSServiceRecommendationOption& AddProjectedUtilizationMetrics(const ECSServiceProjectedUtilizationMetric& value) { m_projectedUtilizationMetricsHasBeenSet = true; m_projectedUtilizationMetrics.push_back(value); return *this; }

    /**
     * <p> An array of objects that describe the projected utilization metrics of the
     * ECS service recommendation option. </p>
     */
    inline ECSServiceRecommendationOption& AddProjectedUtilizationMetrics(ECSServiceProjectedUtilizationMetric&& value) { m_projectedUtilizationMetricsHasBeenSet = true; m_projectedUtilizationMetrics.push_back(std::move(value)); return *this; }


    /**
     * <p> The CPU and memory size recommendations for the containers within the task
     * of your ECS service. </p>
     */
    inline const Aws::Vector<ContainerRecommendation>& GetContainerRecommendations() const{ return m_containerRecommendations; }

    /**
     * <p> The CPU and memory size recommendations for the containers within the task
     * of your ECS service. </p>
     */
    inline bool ContainerRecommendationsHasBeenSet() const { return m_containerRecommendationsHasBeenSet; }

    /**
     * <p> The CPU and memory size recommendations for the containers within the task
     * of your ECS service. </p>
     */
    inline void SetContainerRecommendations(const Aws::Vector<ContainerRecommendation>& value) { m_containerRecommendationsHasBeenSet = true; m_containerRecommendations = value; }

    /**
     * <p> The CPU and memory size recommendations for the containers within the task
     * of your ECS service. </p>
     */
    inline void SetContainerRecommendations(Aws::Vector<ContainerRecommendation>&& value) { m_containerRecommendationsHasBeenSet = true; m_containerRecommendations = std::move(value); }

    /**
     * <p> The CPU and memory size recommendations for the containers within the task
     * of your ECS service. </p>
     */
    inline ECSServiceRecommendationOption& WithContainerRecommendations(const Aws::Vector<ContainerRecommendation>& value) { SetContainerRecommendations(value); return *this;}

    /**
     * <p> The CPU and memory size recommendations for the containers within the task
     * of your ECS service. </p>
     */
    inline ECSServiceRecommendationOption& WithContainerRecommendations(Aws::Vector<ContainerRecommendation>&& value) { SetContainerRecommendations(std::move(value)); return *this;}

    /**
     * <p> The CPU and memory size recommendations for the containers within the task
     * of your ECS service. </p>
     */
    inline ECSServiceRecommendationOption& AddContainerRecommendations(const ContainerRecommendation& value) { m_containerRecommendationsHasBeenSet = true; m_containerRecommendations.push_back(value); return *this; }

    /**
     * <p> The CPU and memory size recommendations for the containers within the task
     * of your ECS service. </p>
     */
    inline ECSServiceRecommendationOption& AddContainerRecommendations(ContainerRecommendation&& value) { m_containerRecommendationsHasBeenSet = true; m_containerRecommendations.push_back(std::move(value)); return *this; }

  private:

    int m_memory;
    bool m_memoryHasBeenSet = false;

    int m_cpu;
    bool m_cpuHasBeenSet = false;

    SavingsOpportunity m_savingsOpportunity;
    bool m_savingsOpportunityHasBeenSet = false;

    Aws::Vector<ECSServiceProjectedUtilizationMetric> m_projectedUtilizationMetrics;
    bool m_projectedUtilizationMetricsHasBeenSet = false;

    Aws::Vector<ContainerRecommendation> m_containerRecommendations;
    bool m_containerRecommendationsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
