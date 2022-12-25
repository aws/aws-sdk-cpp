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
    AWS_COMPUTEOPTIMIZER_API RecommendedOptionProjectedMetric();
    AWS_COMPUTEOPTIMIZER_API RecommendedOptionProjectedMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API RecommendedOptionProjectedMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The recommended instance type.</p>
     */
    inline const Aws::String& GetRecommendedInstanceType() const{ return m_recommendedInstanceType; }

    /**
     * <p>The recommended instance type.</p>
     */
    inline bool RecommendedInstanceTypeHasBeenSet() const { return m_recommendedInstanceTypeHasBeenSet; }

    /**
     * <p>The recommended instance type.</p>
     */
    inline void SetRecommendedInstanceType(const Aws::String& value) { m_recommendedInstanceTypeHasBeenSet = true; m_recommendedInstanceType = value; }

    /**
     * <p>The recommended instance type.</p>
     */
    inline void SetRecommendedInstanceType(Aws::String&& value) { m_recommendedInstanceTypeHasBeenSet = true; m_recommendedInstanceType = std::move(value); }

    /**
     * <p>The recommended instance type.</p>
     */
    inline void SetRecommendedInstanceType(const char* value) { m_recommendedInstanceTypeHasBeenSet = true; m_recommendedInstanceType.assign(value); }

    /**
     * <p>The recommended instance type.</p>
     */
    inline RecommendedOptionProjectedMetric& WithRecommendedInstanceType(const Aws::String& value) { SetRecommendedInstanceType(value); return *this;}

    /**
     * <p>The recommended instance type.</p>
     */
    inline RecommendedOptionProjectedMetric& WithRecommendedInstanceType(Aws::String&& value) { SetRecommendedInstanceType(std::move(value)); return *this;}

    /**
     * <p>The recommended instance type.</p>
     */
    inline RecommendedOptionProjectedMetric& WithRecommendedInstanceType(const char* value) { SetRecommendedInstanceType(value); return *this;}


    /**
     * <p>The rank of the recommendation option projected metric.</p> <p>The top
     * recommendation option is ranked as <code>1</code>.</p> <p>The projected metric
     * rank correlates to the recommendation option rank. For example, the projected
     * metric ranked as <code>1</code> is related to the recommendation option that is
     * also ranked as <code>1</code> in the same response.</p>
     */
    inline int GetRank() const{ return m_rank; }

    /**
     * <p>The rank of the recommendation option projected metric.</p> <p>The top
     * recommendation option is ranked as <code>1</code>.</p> <p>The projected metric
     * rank correlates to the recommendation option rank. For example, the projected
     * metric ranked as <code>1</code> is related to the recommendation option that is
     * also ranked as <code>1</code> in the same response.</p>
     */
    inline bool RankHasBeenSet() const { return m_rankHasBeenSet; }

    /**
     * <p>The rank of the recommendation option projected metric.</p> <p>The top
     * recommendation option is ranked as <code>1</code>.</p> <p>The projected metric
     * rank correlates to the recommendation option rank. For example, the projected
     * metric ranked as <code>1</code> is related to the recommendation option that is
     * also ranked as <code>1</code> in the same response.</p>
     */
    inline void SetRank(int value) { m_rankHasBeenSet = true; m_rank = value; }

    /**
     * <p>The rank of the recommendation option projected metric.</p> <p>The top
     * recommendation option is ranked as <code>1</code>.</p> <p>The projected metric
     * rank correlates to the recommendation option rank. For example, the projected
     * metric ranked as <code>1</code> is related to the recommendation option that is
     * also ranked as <code>1</code> in the same response.</p>
     */
    inline RecommendedOptionProjectedMetric& WithRank(int value) { SetRank(value); return *this;}


    /**
     * <p>An array of objects that describe a projected utilization metric.</p>
     */
    inline const Aws::Vector<ProjectedMetric>& GetProjectedMetrics() const{ return m_projectedMetrics; }

    /**
     * <p>An array of objects that describe a projected utilization metric.</p>
     */
    inline bool ProjectedMetricsHasBeenSet() const { return m_projectedMetricsHasBeenSet; }

    /**
     * <p>An array of objects that describe a projected utilization metric.</p>
     */
    inline void SetProjectedMetrics(const Aws::Vector<ProjectedMetric>& value) { m_projectedMetricsHasBeenSet = true; m_projectedMetrics = value; }

    /**
     * <p>An array of objects that describe a projected utilization metric.</p>
     */
    inline void SetProjectedMetrics(Aws::Vector<ProjectedMetric>&& value) { m_projectedMetricsHasBeenSet = true; m_projectedMetrics = std::move(value); }

    /**
     * <p>An array of objects that describe a projected utilization metric.</p>
     */
    inline RecommendedOptionProjectedMetric& WithProjectedMetrics(const Aws::Vector<ProjectedMetric>& value) { SetProjectedMetrics(value); return *this;}

    /**
     * <p>An array of objects that describe a projected utilization metric.</p>
     */
    inline RecommendedOptionProjectedMetric& WithProjectedMetrics(Aws::Vector<ProjectedMetric>&& value) { SetProjectedMetrics(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe a projected utilization metric.</p>
     */
    inline RecommendedOptionProjectedMetric& AddProjectedMetrics(const ProjectedMetric& value) { m_projectedMetricsHasBeenSet = true; m_projectedMetrics.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe a projected utilization metric.</p>
     */
    inline RecommendedOptionProjectedMetric& AddProjectedMetrics(ProjectedMetric&& value) { m_projectedMetricsHasBeenSet = true; m_projectedMetrics.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_recommendedInstanceType;
    bool m_recommendedInstanceTypeHasBeenSet = false;

    int m_rank;
    bool m_rankHasBeenSet = false;

    Aws::Vector<ProjectedMetric> m_projectedMetrics;
    bool m_projectedMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
