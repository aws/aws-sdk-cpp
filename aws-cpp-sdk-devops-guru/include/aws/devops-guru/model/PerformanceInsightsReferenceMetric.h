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
    AWS_DEVOPSGURU_API PerformanceInsightsReferenceMetric();
    AWS_DEVOPSGURU_API PerformanceInsightsReferenceMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API PerformanceInsightsReferenceMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A query to be processed on the metric.</p>
     */
    inline const PerformanceInsightsMetricQuery& GetMetricQuery() const{ return m_metricQuery; }

    /**
     * <p>A query to be processed on the metric.</p>
     */
    inline bool MetricQueryHasBeenSet() const { return m_metricQueryHasBeenSet; }

    /**
     * <p>A query to be processed on the metric.</p>
     */
    inline void SetMetricQuery(const PerformanceInsightsMetricQuery& value) { m_metricQueryHasBeenSet = true; m_metricQuery = value; }

    /**
     * <p>A query to be processed on the metric.</p>
     */
    inline void SetMetricQuery(PerformanceInsightsMetricQuery&& value) { m_metricQueryHasBeenSet = true; m_metricQuery = std::move(value); }

    /**
     * <p>A query to be processed on the metric.</p>
     */
    inline PerformanceInsightsReferenceMetric& WithMetricQuery(const PerformanceInsightsMetricQuery& value) { SetMetricQuery(value); return *this;}

    /**
     * <p>A query to be processed on the metric.</p>
     */
    inline PerformanceInsightsReferenceMetric& WithMetricQuery(PerformanceInsightsMetricQuery&& value) { SetMetricQuery(std::move(value)); return *this;}

  private:

    PerformanceInsightsMetricQuery m_metricQuery;
    bool m_metricQueryHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
