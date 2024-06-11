﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/AutoScalingGroupConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/SavingsOpportunity.h>
#include <aws/compute-optimizer/model/MigrationEffort.h>
#include <aws/compute-optimizer/model/GpuInfo.h>
#include <aws/compute-optimizer/model/AutoScalingGroupSavingsOpportunityAfterDiscounts.h>
#include <aws/compute-optimizer/model/UtilizationMetric.h>
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
   * <p>Describes a recommendation option for an Auto Scaling group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/AutoScalingGroupRecommendationOption">AWS
   * API Reference</a></p>
   */
  class AutoScalingGroupRecommendationOption
  {
  public:
    AWS_COMPUTEOPTIMIZER_API AutoScalingGroupRecommendationOption();
    AWS_COMPUTEOPTIMIZER_API AutoScalingGroupRecommendationOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API AutoScalingGroupRecommendationOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of objects that describe an Auto Scaling group configuration.</p>
     */
    inline const AutoScalingGroupConfiguration& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const AutoScalingGroupConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(AutoScalingGroupConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline AutoScalingGroupRecommendationOption& WithConfiguration(const AutoScalingGroupConfiguration& value) { SetConfiguration(value); return *this;}
    inline AutoScalingGroupRecommendationOption& WithConfiguration(AutoScalingGroupConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe the projected utilization metrics of the
     * Auto Scaling group recommendation option.</p>  <p>The <code>Cpu</code> and
     * <code>Memory</code> metrics are the only projected utilization metrics returned.
     * Additionally, the <code>Memory</code> metric is returned only for resources that
     * have the unified CloudWatch agent installed on them. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/metrics.html#cw-agent">Enabling
     * Memory Utilization with the CloudWatch Agent</a>.</p> 
     */
    inline const Aws::Vector<UtilizationMetric>& GetProjectedUtilizationMetrics() const{ return m_projectedUtilizationMetrics; }
    inline bool ProjectedUtilizationMetricsHasBeenSet() const { return m_projectedUtilizationMetricsHasBeenSet; }
    inline void SetProjectedUtilizationMetrics(const Aws::Vector<UtilizationMetric>& value) { m_projectedUtilizationMetricsHasBeenSet = true; m_projectedUtilizationMetrics = value; }
    inline void SetProjectedUtilizationMetrics(Aws::Vector<UtilizationMetric>&& value) { m_projectedUtilizationMetricsHasBeenSet = true; m_projectedUtilizationMetrics = std::move(value); }
    inline AutoScalingGroupRecommendationOption& WithProjectedUtilizationMetrics(const Aws::Vector<UtilizationMetric>& value) { SetProjectedUtilizationMetrics(value); return *this;}
    inline AutoScalingGroupRecommendationOption& WithProjectedUtilizationMetrics(Aws::Vector<UtilizationMetric>&& value) { SetProjectedUtilizationMetrics(std::move(value)); return *this;}
    inline AutoScalingGroupRecommendationOption& AddProjectedUtilizationMetrics(const UtilizationMetric& value) { m_projectedUtilizationMetricsHasBeenSet = true; m_projectedUtilizationMetrics.push_back(value); return *this; }
    inline AutoScalingGroupRecommendationOption& AddProjectedUtilizationMetrics(UtilizationMetric&& value) { m_projectedUtilizationMetricsHasBeenSet = true; m_projectedUtilizationMetrics.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The performance risk of the Auto Scaling group configuration
     * recommendation.</p> <p>Performance risk indicates the likelihood of the
     * recommended instance type not meeting the resource needs of your workload.
     * Compute Optimizer calculates an individual performance risk score for each
     * specification of the recommended instance, including CPU, memory, EBS
     * throughput, EBS IOPS, disk throughput, disk IOPS, network throughput, and
     * network PPS. The performance risk of the recommended instance is calculated as
     * the maximum performance risk score across the analyzed resource
     * specifications.</p> <p>The value ranges from <code>0</code> - <code>4</code>,
     * with <code>0</code> meaning that the recommended resource is predicted to always
     * provide enough hardware capability. The higher the performance risk is, the more
     * likely you should validate whether the recommendation will meet the performance
     * requirements of your workload before migrating your resource.</p>
     */
    inline double GetPerformanceRisk() const{ return m_performanceRisk; }
    inline bool PerformanceRiskHasBeenSet() const { return m_performanceRiskHasBeenSet; }
    inline void SetPerformanceRisk(double value) { m_performanceRiskHasBeenSet = true; m_performanceRisk = value; }
    inline AutoScalingGroupRecommendationOption& WithPerformanceRisk(double value) { SetPerformanceRisk(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rank of the Auto Scaling group recommendation option.</p> <p>The top
     * recommendation option is ranked as <code>1</code>.</p>
     */
    inline int GetRank() const{ return m_rank; }
    inline bool RankHasBeenSet() const { return m_rankHasBeenSet; }
    inline void SetRank(int value) { m_rankHasBeenSet = true; m_rank = value; }
    inline AutoScalingGroupRecommendationOption& WithRank(int value) { SetRank(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the savings opportunity for the Auto Scaling group
     * recommendation option. Savings opportunity includes the estimated monthly
     * savings amount and percentage.</p>
     */
    inline const SavingsOpportunity& GetSavingsOpportunity() const{ return m_savingsOpportunity; }
    inline bool SavingsOpportunityHasBeenSet() const { return m_savingsOpportunityHasBeenSet; }
    inline void SetSavingsOpportunity(const SavingsOpportunity& value) { m_savingsOpportunityHasBeenSet = true; m_savingsOpportunity = value; }
    inline void SetSavingsOpportunity(SavingsOpportunity&& value) { m_savingsOpportunityHasBeenSet = true; m_savingsOpportunity = std::move(value); }
    inline AutoScalingGroupRecommendationOption& WithSavingsOpportunity(const SavingsOpportunity& value) { SetSavingsOpportunity(value); return *this;}
    inline AutoScalingGroupRecommendationOption& WithSavingsOpportunity(SavingsOpportunity&& value) { SetSavingsOpportunity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of effort required to migrate from the current instance type to the
     * recommended instance type.</p> <p>For example, the migration effort is
     * <code>Low</code> if Amazon EMR is the inferred workload type and an Amazon Web
     * Services Graviton instance type is recommended. The migration effort is
     * <code>Medium</code> if a workload type couldn't be inferred but an Amazon Web
     * Services Graviton instance type is recommended. The migration effort is
     * <code>VeryLow</code> if both the current and recommended instance types are of
     * the same CPU architecture.</p>
     */
    inline const MigrationEffort& GetMigrationEffort() const{ return m_migrationEffort; }
    inline bool MigrationEffortHasBeenSet() const { return m_migrationEffortHasBeenSet; }
    inline void SetMigrationEffort(const MigrationEffort& value) { m_migrationEffortHasBeenSet = true; m_migrationEffort = value; }
    inline void SetMigrationEffort(MigrationEffort&& value) { m_migrationEffortHasBeenSet = true; m_migrationEffort = std::move(value); }
    inline AutoScalingGroupRecommendationOption& WithMigrationEffort(const MigrationEffort& value) { SetMigrationEffort(value); return *this;}
    inline AutoScalingGroupRecommendationOption& WithMigrationEffort(MigrationEffort&& value) { SetMigrationEffort(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the GPU accelerator settings for the recommended instance type of
     * the Auto Scaling group. </p>
     */
    inline const GpuInfo& GetInstanceGpuInfo() const{ return m_instanceGpuInfo; }
    inline bool InstanceGpuInfoHasBeenSet() const { return m_instanceGpuInfoHasBeenSet; }
    inline void SetInstanceGpuInfo(const GpuInfo& value) { m_instanceGpuInfoHasBeenSet = true; m_instanceGpuInfo = value; }
    inline void SetInstanceGpuInfo(GpuInfo&& value) { m_instanceGpuInfoHasBeenSet = true; m_instanceGpuInfo = std::move(value); }
    inline AutoScalingGroupRecommendationOption& WithInstanceGpuInfo(const GpuInfo& value) { SetInstanceGpuInfo(value); return *this;}
    inline AutoScalingGroupRecommendationOption& WithInstanceGpuInfo(GpuInfo&& value) { SetInstanceGpuInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An object that describes the savings opportunity for the Auto Scaling group
     * recommendation option that includes Savings Plans and Reserved Instances
     * discounts. Savings opportunity includes the estimated monthly savings and
     * percentage. </p>
     */
    inline const AutoScalingGroupSavingsOpportunityAfterDiscounts& GetSavingsOpportunityAfterDiscounts() const{ return m_savingsOpportunityAfterDiscounts; }
    inline bool SavingsOpportunityAfterDiscountsHasBeenSet() const { return m_savingsOpportunityAfterDiscountsHasBeenSet; }
    inline void SetSavingsOpportunityAfterDiscounts(const AutoScalingGroupSavingsOpportunityAfterDiscounts& value) { m_savingsOpportunityAfterDiscountsHasBeenSet = true; m_savingsOpportunityAfterDiscounts = value; }
    inline void SetSavingsOpportunityAfterDiscounts(AutoScalingGroupSavingsOpportunityAfterDiscounts&& value) { m_savingsOpportunityAfterDiscountsHasBeenSet = true; m_savingsOpportunityAfterDiscounts = std::move(value); }
    inline AutoScalingGroupRecommendationOption& WithSavingsOpportunityAfterDiscounts(const AutoScalingGroupSavingsOpportunityAfterDiscounts& value) { SetSavingsOpportunityAfterDiscounts(value); return *this;}
    inline AutoScalingGroupRecommendationOption& WithSavingsOpportunityAfterDiscounts(AutoScalingGroupSavingsOpportunityAfterDiscounts&& value) { SetSavingsOpportunityAfterDiscounts(std::move(value)); return *this;}
    ///@}
  private:

    AutoScalingGroupConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::Vector<UtilizationMetric> m_projectedUtilizationMetrics;
    bool m_projectedUtilizationMetricsHasBeenSet = false;

    double m_performanceRisk;
    bool m_performanceRiskHasBeenSet = false;

    int m_rank;
    bool m_rankHasBeenSet = false;

    SavingsOpportunity m_savingsOpportunity;
    bool m_savingsOpportunityHasBeenSet = false;

    MigrationEffort m_migrationEffort;
    bool m_migrationEffortHasBeenSet = false;

    GpuInfo m_instanceGpuInfo;
    bool m_instanceGpuInfoHasBeenSet = false;

    AutoScalingGroupSavingsOpportunityAfterDiscounts m_savingsOpportunityAfterDiscounts;
    bool m_savingsOpportunityAfterDiscountsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
