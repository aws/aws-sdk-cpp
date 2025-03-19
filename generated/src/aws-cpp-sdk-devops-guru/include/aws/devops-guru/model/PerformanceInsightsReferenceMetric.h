/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/PerformanceInsightsMetricQuery.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p>Information about a reference metric used to evaluate Performance
   * Insights.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/PerformanceInsightsReferenceMetric">AWS
   * API Reference</a></p>
   */
  class PerformanceInsightsReferenceMetric
  {
  public:
    AWS_DEVOPSGURU_API PerformanceInsightsReferenceMetric() = default;
    AWS_DEVOPSGURU_API PerformanceInsightsReferenceMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API PerformanceInsightsReferenceMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A query to be processed on the metric.</p>
     */
    inline const PerformanceInsightsMetricQuery& GetMetricQuery() const { return m_metricQuery; }
    inline bool MetricQueryHasBeenSet() const { return m_metricQueryHasBeenSet; }
    template<typename MetricQueryT = PerformanceInsightsMetricQuery>
    void SetMetricQuery(MetricQueryT&& value) { m_metricQueryHasBeenSet = true; m_metricQuery = std::forward<MetricQueryT>(value); }
    template<typename MetricQueryT = PerformanceInsightsMetricQuery>
    PerformanceInsightsReferenceMetric& WithMetricQuery(MetricQueryT&& value) { SetMetricQuery(std::forward<MetricQueryT>(value)); return *this;}
    ///@}
  private:

    PerformanceInsightsMetricQuery m_metricQuery;
    bool m_metricQueryHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
