/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/RDSDatabaseProjectedMetric.h>
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
   * <p> Describes the projected metrics of an Amazon Aurora and RDS database
   * recommendation option. </p> <p> To determine the performance difference between
   * your current Amazon Aurora and RDS database and the recommended option, compare
   * the metric data of your service against its projected metric data.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/RDSDatabaseRecommendedOptionProjectedMetric">AWS
   * API Reference</a></p>
   */
  class RDSDatabaseRecommendedOptionProjectedMetric
  {
  public:
    AWS_COMPUTEOPTIMIZER_API RDSDatabaseRecommendedOptionProjectedMetric() = default;
    AWS_COMPUTEOPTIMIZER_API RDSDatabaseRecommendedOptionProjectedMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API RDSDatabaseRecommendedOptionProjectedMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The recommended DB instance class for the Amazon Aurora or RDS database.
     * </p>
     */
    inline const Aws::String& GetRecommendedDBInstanceClass() const { return m_recommendedDBInstanceClass; }
    inline bool RecommendedDBInstanceClassHasBeenSet() const { return m_recommendedDBInstanceClassHasBeenSet; }
    template<typename RecommendedDBInstanceClassT = Aws::String>
    void SetRecommendedDBInstanceClass(RecommendedDBInstanceClassT&& value) { m_recommendedDBInstanceClassHasBeenSet = true; m_recommendedDBInstanceClass = std::forward<RecommendedDBInstanceClassT>(value); }
    template<typename RecommendedDBInstanceClassT = Aws::String>
    RDSDatabaseRecommendedOptionProjectedMetric& WithRecommendedDBInstanceClass(RecommendedDBInstanceClassT&& value) { SetRecommendedDBInstanceClass(std::forward<RecommendedDBInstanceClassT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The rank identifier of the Amazon Aurora or RDS DB instance recommendation
     * option. </p>
     */
    inline int GetRank() const { return m_rank; }
    inline bool RankHasBeenSet() const { return m_rankHasBeenSet; }
    inline void SetRank(int value) { m_rankHasBeenSet = true; m_rank = value; }
    inline RDSDatabaseRecommendedOptionProjectedMetric& WithRank(int value) { SetRank(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of objects that describe the projected metric. </p>
     */
    inline const Aws::Vector<RDSDatabaseProjectedMetric>& GetProjectedMetrics() const { return m_projectedMetrics; }
    inline bool ProjectedMetricsHasBeenSet() const { return m_projectedMetricsHasBeenSet; }
    template<typename ProjectedMetricsT = Aws::Vector<RDSDatabaseProjectedMetric>>
    void SetProjectedMetrics(ProjectedMetricsT&& value) { m_projectedMetricsHasBeenSet = true; m_projectedMetrics = std::forward<ProjectedMetricsT>(value); }
    template<typename ProjectedMetricsT = Aws::Vector<RDSDatabaseProjectedMetric>>
    RDSDatabaseRecommendedOptionProjectedMetric& WithProjectedMetrics(ProjectedMetricsT&& value) { SetProjectedMetrics(std::forward<ProjectedMetricsT>(value)); return *this;}
    template<typename ProjectedMetricsT = RDSDatabaseProjectedMetric>
    RDSDatabaseRecommendedOptionProjectedMetric& AddProjectedMetrics(ProjectedMetricsT&& value) { m_projectedMetricsHasBeenSet = true; m_projectedMetrics.emplace_back(std::forward<ProjectedMetricsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_recommendedDBInstanceClass;
    bool m_recommendedDBInstanceClassHasBeenSet = false;

    int m_rank{0};
    bool m_rankHasBeenSet = false;

    Aws::Vector<RDSDatabaseProjectedMetric> m_projectedMetrics;
    bool m_projectedMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
