/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/AutoScalingGroupConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_COMPUTEOPTIMIZER_API AutoScalingGroupRecommendationOption
  {
  public:
    AutoScalingGroupRecommendationOption();
    AutoScalingGroupRecommendationOption(Aws::Utils::Json::JsonView jsonValue);
    AutoScalingGroupRecommendationOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of objects that describe an Auto Scaling group configuration.</p>
     */
    inline const AutoScalingGroupConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>An array of objects that describe an Auto Scaling group configuration.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>An array of objects that describe an Auto Scaling group configuration.</p>
     */
    inline void SetConfiguration(const AutoScalingGroupConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>An array of objects that describe an Auto Scaling group configuration.</p>
     */
    inline void SetConfiguration(AutoScalingGroupConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>An array of objects that describe an Auto Scaling group configuration.</p>
     */
    inline AutoScalingGroupRecommendationOption& WithConfiguration(const AutoScalingGroupConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>An array of objects that describe an Auto Scaling group configuration.</p>
     */
    inline AutoScalingGroupRecommendationOption& WithConfiguration(AutoScalingGroupConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


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
    inline bool ProjectedUtilizationMetricsHasBeenSet() const { return m_projectedUtilizationMetricsHasBeenSet; }

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
    inline void SetProjectedUtilizationMetrics(const Aws::Vector<UtilizationMetric>& value) { m_projectedUtilizationMetricsHasBeenSet = true; m_projectedUtilizationMetrics = value; }

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
    inline void SetProjectedUtilizationMetrics(Aws::Vector<UtilizationMetric>&& value) { m_projectedUtilizationMetricsHasBeenSet = true; m_projectedUtilizationMetrics = std::move(value); }

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
    inline AutoScalingGroupRecommendationOption& WithProjectedUtilizationMetrics(const Aws::Vector<UtilizationMetric>& value) { SetProjectedUtilizationMetrics(value); return *this;}

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
    inline AutoScalingGroupRecommendationOption& WithProjectedUtilizationMetrics(Aws::Vector<UtilizationMetric>&& value) { SetProjectedUtilizationMetrics(std::move(value)); return *this;}

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
    inline AutoScalingGroupRecommendationOption& AddProjectedUtilizationMetrics(const UtilizationMetric& value) { m_projectedUtilizationMetricsHasBeenSet = true; m_projectedUtilizationMetrics.push_back(value); return *this; }

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
    inline AutoScalingGroupRecommendationOption& AddProjectedUtilizationMetrics(UtilizationMetric&& value) { m_projectedUtilizationMetricsHasBeenSet = true; m_projectedUtilizationMetrics.push_back(std::move(value)); return *this; }


    /**
     * <p>The performance risk of the Auto Scaling group configuration
     * recommendation.</p> <p>Performance risk is the likelihood of the recommended
     * instance type not meeting the performance requirement of your workload.</p>
     * <p>The lowest performance risk is categorized as <code>0</code>, and the highest
     * as <code>5</code>.</p>
     */
    inline double GetPerformanceRisk() const{ return m_performanceRisk; }

    /**
     * <p>The performance risk of the Auto Scaling group configuration
     * recommendation.</p> <p>Performance risk is the likelihood of the recommended
     * instance type not meeting the performance requirement of your workload.</p>
     * <p>The lowest performance risk is categorized as <code>0</code>, and the highest
     * as <code>5</code>.</p>
     */
    inline bool PerformanceRiskHasBeenSet() const { return m_performanceRiskHasBeenSet; }

    /**
     * <p>The performance risk of the Auto Scaling group configuration
     * recommendation.</p> <p>Performance risk is the likelihood of the recommended
     * instance type not meeting the performance requirement of your workload.</p>
     * <p>The lowest performance risk is categorized as <code>0</code>, and the highest
     * as <code>5</code>.</p>
     */
    inline void SetPerformanceRisk(double value) { m_performanceRiskHasBeenSet = true; m_performanceRisk = value; }

    /**
     * <p>The performance risk of the Auto Scaling group configuration
     * recommendation.</p> <p>Performance risk is the likelihood of the recommended
     * instance type not meeting the performance requirement of your workload.</p>
     * <p>The lowest performance risk is categorized as <code>0</code>, and the highest
     * as <code>5</code>.</p>
     */
    inline AutoScalingGroupRecommendationOption& WithPerformanceRisk(double value) { SetPerformanceRisk(value); return *this;}


    /**
     * <p>The rank of the Auto Scaling group recommendation option.</p> <p>The top
     * recommendation option is ranked as <code>1</code>.</p>
     */
    inline int GetRank() const{ return m_rank; }

    /**
     * <p>The rank of the Auto Scaling group recommendation option.</p> <p>The top
     * recommendation option is ranked as <code>1</code>.</p>
     */
    inline bool RankHasBeenSet() const { return m_rankHasBeenSet; }

    /**
     * <p>The rank of the Auto Scaling group recommendation option.</p> <p>The top
     * recommendation option is ranked as <code>1</code>.</p>
     */
    inline void SetRank(int value) { m_rankHasBeenSet = true; m_rank = value; }

    /**
     * <p>The rank of the Auto Scaling group recommendation option.</p> <p>The top
     * recommendation option is ranked as <code>1</code>.</p>
     */
    inline AutoScalingGroupRecommendationOption& WithRank(int value) { SetRank(value); return *this;}

  private:

    AutoScalingGroupConfiguration m_configuration;
    bool m_configurationHasBeenSet;

    Aws::Vector<UtilizationMetric> m_projectedUtilizationMetrics;
    bool m_projectedUtilizationMetricsHasBeenSet;

    double m_performanceRisk;
    bool m_performanceRiskHasBeenSet;

    int m_rank;
    bool m_rankHasBeenSet;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
