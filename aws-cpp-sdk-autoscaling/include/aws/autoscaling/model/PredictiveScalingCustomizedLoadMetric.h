/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/MetricDataQuery.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Describes a custom load metric for a predictive scaling policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/PredictiveScalingCustomizedLoadMetric">AWS
   * API Reference</a></p>
   */
  class PredictiveScalingCustomizedLoadMetric
  {
  public:
    AWS_AUTOSCALING_API PredictiveScalingCustomizedLoadMetric();
    AWS_AUTOSCALING_API PredictiveScalingCustomizedLoadMetric(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API PredictiveScalingCustomizedLoadMetric& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>One or more metric data queries to provide the data points for a load metric.
     * Use multiple metric data queries only if you are performing a math expression on
     * returned data. </p>
     */
    inline const Aws::Vector<MetricDataQuery>& GetMetricDataQueries() const{ return m_metricDataQueries; }

    /**
     * <p>One or more metric data queries to provide the data points for a load metric.
     * Use multiple metric data queries only if you are performing a math expression on
     * returned data. </p>
     */
    inline bool MetricDataQueriesHasBeenSet() const { return m_metricDataQueriesHasBeenSet; }

    /**
     * <p>One or more metric data queries to provide the data points for a load metric.
     * Use multiple metric data queries only if you are performing a math expression on
     * returned data. </p>
     */
    inline void SetMetricDataQueries(const Aws::Vector<MetricDataQuery>& value) { m_metricDataQueriesHasBeenSet = true; m_metricDataQueries = value; }

    /**
     * <p>One or more metric data queries to provide the data points for a load metric.
     * Use multiple metric data queries only if you are performing a math expression on
     * returned data. </p>
     */
    inline void SetMetricDataQueries(Aws::Vector<MetricDataQuery>&& value) { m_metricDataQueriesHasBeenSet = true; m_metricDataQueries = std::move(value); }

    /**
     * <p>One or more metric data queries to provide the data points for a load metric.
     * Use multiple metric data queries only if you are performing a math expression on
     * returned data. </p>
     */
    inline PredictiveScalingCustomizedLoadMetric& WithMetricDataQueries(const Aws::Vector<MetricDataQuery>& value) { SetMetricDataQueries(value); return *this;}

    /**
     * <p>One or more metric data queries to provide the data points for a load metric.
     * Use multiple metric data queries only if you are performing a math expression on
     * returned data. </p>
     */
    inline PredictiveScalingCustomizedLoadMetric& WithMetricDataQueries(Aws::Vector<MetricDataQuery>&& value) { SetMetricDataQueries(std::move(value)); return *this;}

    /**
     * <p>One or more metric data queries to provide the data points for a load metric.
     * Use multiple metric data queries only if you are performing a math expression on
     * returned data. </p>
     */
    inline PredictiveScalingCustomizedLoadMetric& AddMetricDataQueries(const MetricDataQuery& value) { m_metricDataQueriesHasBeenSet = true; m_metricDataQueries.push_back(value); return *this; }

    /**
     * <p>One or more metric data queries to provide the data points for a load metric.
     * Use multiple metric data queries only if you are performing a math expression on
     * returned data. </p>
     */
    inline PredictiveScalingCustomizedLoadMetric& AddMetricDataQueries(MetricDataQuery&& value) { m_metricDataQueriesHasBeenSet = true; m_metricDataQueries.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<MetricDataQuery> m_metricDataQueries;
    bool m_metricDataQueriesHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
