/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/MetricDataQuery.h>
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
namespace CloudWatch
{
namespace Model
{

  /**
   * <p>Indicates the CloudWatch math expression that provides the time series the
   * anomaly detector uses as input. The designated math expression must return a
   * single time series.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/MetricMathAnomalyDetector">AWS
   * API Reference</a></p>
   */
  class MetricMathAnomalyDetector
  {
  public:
    AWS_CLOUDWATCH_API MetricMathAnomalyDetector();
    AWS_CLOUDWATCH_API MetricMathAnomalyDetector(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API MetricMathAnomalyDetector& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>An array of metric data query structures that enables you to create an
     * anomaly detector based on the result of a metric math expression. Each item in
     * <code>MetricDataQueries</code> gets a metric or performs a math expression. One
     * item in <code>MetricDataQueries</code> is the expression that provides the time
     * series that the anomaly detector uses as input. Designate the expression by
     * setting <code>ReturnData</code> to <code>true</code> for this object in the
     * array. For all other expressions and metrics, set <code>ReturnData</code> to
     * <code>false</code>. The designated expression must return a single time
     * series.</p>
     */
    inline const Aws::Vector<MetricDataQuery>& GetMetricDataQueries() const{ return m_metricDataQueries; }

    /**
     * <p>An array of metric data query structures that enables you to create an
     * anomaly detector based on the result of a metric math expression. Each item in
     * <code>MetricDataQueries</code> gets a metric or performs a math expression. One
     * item in <code>MetricDataQueries</code> is the expression that provides the time
     * series that the anomaly detector uses as input. Designate the expression by
     * setting <code>ReturnData</code> to <code>true</code> for this object in the
     * array. For all other expressions and metrics, set <code>ReturnData</code> to
     * <code>false</code>. The designated expression must return a single time
     * series.</p>
     */
    inline bool MetricDataQueriesHasBeenSet() const { return m_metricDataQueriesHasBeenSet; }

    /**
     * <p>An array of metric data query structures that enables you to create an
     * anomaly detector based on the result of a metric math expression. Each item in
     * <code>MetricDataQueries</code> gets a metric or performs a math expression. One
     * item in <code>MetricDataQueries</code> is the expression that provides the time
     * series that the anomaly detector uses as input. Designate the expression by
     * setting <code>ReturnData</code> to <code>true</code> for this object in the
     * array. For all other expressions and metrics, set <code>ReturnData</code> to
     * <code>false</code>. The designated expression must return a single time
     * series.</p>
     */
    inline void SetMetricDataQueries(const Aws::Vector<MetricDataQuery>& value) { m_metricDataQueriesHasBeenSet = true; m_metricDataQueries = value; }

    /**
     * <p>An array of metric data query structures that enables you to create an
     * anomaly detector based on the result of a metric math expression. Each item in
     * <code>MetricDataQueries</code> gets a metric or performs a math expression. One
     * item in <code>MetricDataQueries</code> is the expression that provides the time
     * series that the anomaly detector uses as input. Designate the expression by
     * setting <code>ReturnData</code> to <code>true</code> for this object in the
     * array. For all other expressions and metrics, set <code>ReturnData</code> to
     * <code>false</code>. The designated expression must return a single time
     * series.</p>
     */
    inline void SetMetricDataQueries(Aws::Vector<MetricDataQuery>&& value) { m_metricDataQueriesHasBeenSet = true; m_metricDataQueries = std::move(value); }

    /**
     * <p>An array of metric data query structures that enables you to create an
     * anomaly detector based on the result of a metric math expression. Each item in
     * <code>MetricDataQueries</code> gets a metric or performs a math expression. One
     * item in <code>MetricDataQueries</code> is the expression that provides the time
     * series that the anomaly detector uses as input. Designate the expression by
     * setting <code>ReturnData</code> to <code>true</code> for this object in the
     * array. For all other expressions and metrics, set <code>ReturnData</code> to
     * <code>false</code>. The designated expression must return a single time
     * series.</p>
     */
    inline MetricMathAnomalyDetector& WithMetricDataQueries(const Aws::Vector<MetricDataQuery>& value) { SetMetricDataQueries(value); return *this;}

    /**
     * <p>An array of metric data query structures that enables you to create an
     * anomaly detector based on the result of a metric math expression. Each item in
     * <code>MetricDataQueries</code> gets a metric or performs a math expression. One
     * item in <code>MetricDataQueries</code> is the expression that provides the time
     * series that the anomaly detector uses as input. Designate the expression by
     * setting <code>ReturnData</code> to <code>true</code> for this object in the
     * array. For all other expressions and metrics, set <code>ReturnData</code> to
     * <code>false</code>. The designated expression must return a single time
     * series.</p>
     */
    inline MetricMathAnomalyDetector& WithMetricDataQueries(Aws::Vector<MetricDataQuery>&& value) { SetMetricDataQueries(std::move(value)); return *this;}

    /**
     * <p>An array of metric data query structures that enables you to create an
     * anomaly detector based on the result of a metric math expression. Each item in
     * <code>MetricDataQueries</code> gets a metric or performs a math expression. One
     * item in <code>MetricDataQueries</code> is the expression that provides the time
     * series that the anomaly detector uses as input. Designate the expression by
     * setting <code>ReturnData</code> to <code>true</code> for this object in the
     * array. For all other expressions and metrics, set <code>ReturnData</code> to
     * <code>false</code>. The designated expression must return a single time
     * series.</p>
     */
    inline MetricMathAnomalyDetector& AddMetricDataQueries(const MetricDataQuery& value) { m_metricDataQueriesHasBeenSet = true; m_metricDataQueries.push_back(value); return *this; }

    /**
     * <p>An array of metric data query structures that enables you to create an
     * anomaly detector based on the result of a metric math expression. Each item in
     * <code>MetricDataQueries</code> gets a metric or performs a math expression. One
     * item in <code>MetricDataQueries</code> is the expression that provides the time
     * series that the anomaly detector uses as input. Designate the expression by
     * setting <code>ReturnData</code> to <code>true</code> for this object in the
     * array. For all other expressions and metrics, set <code>ReturnData</code> to
     * <code>false</code>. The designated expression must return a single time
     * series.</p>
     */
    inline MetricMathAnomalyDetector& AddMetricDataQueries(MetricDataQuery&& value) { m_metricDataQueriesHasBeenSet = true; m_metricDataQueries.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<MetricDataQuery> m_metricDataQueries;
    bool m_metricDataQueriesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
