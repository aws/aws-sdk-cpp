/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/ProjectedMetric.h>
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
   * <p>Describes a projected utilization metric of a recommendation option.</p>
   *  <p>The <code>Cpu</code> and <code>Memory</code> metrics are the only
   * projected utilization metrics returned when you run the
   * <a>GetEC2RecommendationProjectedMetrics</a> action. Additionally, the
   * <code>Memory</code> metric is returned only for resources that have the unified
   * CloudWatch agent installed on them. For more information, see <a
   * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/metrics.html#cw-agent">Enabling
   * Memory Utilization with the CloudWatch Agent</a>.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/RecommendedOptionProjectedMetric">AWS
   * API Reference</a></p>
   */
  class RecommendedOptionProjectedMetric
  {
  public:
    AWS_COMPUTEOPTIMIZER_API RecommendedOptionProjectedMetric() = default;
    AWS_COMPUTEOPTIMIZER_API RecommendedOptionProjectedMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API RecommendedOptionProjectedMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The recommended instance type.</p>
     */
    inline const Aws::String& GetRecommendedInstanceType() const { return m_recommendedInstanceType; }
    inline bool RecommendedInstanceTypeHasBeenSet() const { return m_recommendedInstanceTypeHasBeenSet; }
    template<typename RecommendedInstanceTypeT = Aws::String>
    void SetRecommendedInstanceType(RecommendedInstanceTypeT&& value) { m_recommendedInstanceTypeHasBeenSet = true; m_recommendedInstanceType = std::forward<RecommendedInstanceTypeT>(value); }
    template<typename RecommendedInstanceTypeT = Aws::String>
    RecommendedOptionProjectedMetric& WithRecommendedInstanceType(RecommendedInstanceTypeT&& value) { SetRecommendedInstanceType(std::forward<RecommendedInstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rank of the recommendation option projected metric.</p> <p>The top
     * recommendation option is ranked as <code>1</code>.</p> <p>The projected metric
     * rank correlates to the recommendation option rank. For example, the projected
     * metric ranked as <code>1</code> is related to the recommendation option that is
     * also ranked as <code>1</code> in the same response.</p>
     */
    inline int GetRank() const { return m_rank; }
    inline bool RankHasBeenSet() const { return m_rankHasBeenSet; }
    inline void SetRank(int value) { m_rankHasBeenSet = true; m_rank = value; }
    inline RecommendedOptionProjectedMetric& WithRank(int value) { SetRank(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe a projected utilization metric.</p>
     */
    inline const Aws::Vector<ProjectedMetric>& GetProjectedMetrics() const { return m_projectedMetrics; }
    inline bool ProjectedMetricsHasBeenSet() const { return m_projectedMetricsHasBeenSet; }
    template<typename ProjectedMetricsT = Aws::Vector<ProjectedMetric>>
    void SetProjectedMetrics(ProjectedMetricsT&& value) { m_projectedMetricsHasBeenSet = true; m_projectedMetrics = std::forward<ProjectedMetricsT>(value); }
    template<typename ProjectedMetricsT = Aws::Vector<ProjectedMetric>>
    RecommendedOptionProjectedMetric& WithProjectedMetrics(ProjectedMetricsT&& value) { SetProjectedMetrics(std::forward<ProjectedMetricsT>(value)); return *this;}
    template<typename ProjectedMetricsT = ProjectedMetric>
    RecommendedOptionProjectedMetric& AddProjectedMetrics(ProjectedMetricsT&& value) { m_projectedMetricsHasBeenSet = true; m_projectedMetrics.emplace_back(std::forward<ProjectedMetricsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_recommendedInstanceType;
    bool m_recommendedInstanceTypeHasBeenSet = false;

    int m_rank{0};
    bool m_rankHasBeenSet = false;

    Aws::Vector<ProjectedMetric> m_projectedMetrics;
    bool m_projectedMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
