/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/model/Statistic.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/StandardUnit.h>
#include <aws/monitoring/model/Dimension.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCH_API DescribeAlarmsForMetricRequest : public CloudWatchRequest
  {
  public:
    DescribeAlarmsForMetricRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAlarmsForMetric"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the metric.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the metric.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The name of the metric.</p>
     */
    inline DescribeAlarmsForMetricRequest& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the metric.</p>
     */
    inline DescribeAlarmsForMetricRequest& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the metric.</p>
     */
    inline DescribeAlarmsForMetricRequest& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The namespace of the metric.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace of the metric.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace of the metric.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace of the metric.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace of the metric.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace of the metric.</p>
     */
    inline DescribeAlarmsForMetricRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace of the metric.</p>
     */
    inline DescribeAlarmsForMetricRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the metric.</p>
     */
    inline DescribeAlarmsForMetricRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The statistic for the metric, other than percentiles. For percentile
     * statistics, use <code>ExtendedStatistics</code>.</p>
     */
    inline const Statistic& GetStatistic() const{ return m_statistic; }

    /**
     * <p>The statistic for the metric, other than percentiles. For percentile
     * statistics, use <code>ExtendedStatistics</code>.</p>
     */
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }

    /**
     * <p>The statistic for the metric, other than percentiles. For percentile
     * statistics, use <code>ExtendedStatistics</code>.</p>
     */
    inline void SetStatistic(const Statistic& value) { m_statisticHasBeenSet = true; m_statistic = value; }

    /**
     * <p>The statistic for the metric, other than percentiles. For percentile
     * statistics, use <code>ExtendedStatistics</code>.</p>
     */
    inline void SetStatistic(Statistic&& value) { m_statisticHasBeenSet = true; m_statistic = std::move(value); }

    /**
     * <p>The statistic for the metric, other than percentiles. For percentile
     * statistics, use <code>ExtendedStatistics</code>.</p>
     */
    inline DescribeAlarmsForMetricRequest& WithStatistic(const Statistic& value) { SetStatistic(value); return *this;}

    /**
     * <p>The statistic for the metric, other than percentiles. For percentile
     * statistics, use <code>ExtendedStatistics</code>.</p>
     */
    inline DescribeAlarmsForMetricRequest& WithStatistic(Statistic&& value) { SetStatistic(std::move(value)); return *this;}


    /**
     * <p>The percentile statistic for the metric. Specify a value between p0.0 and
     * p100.</p>
     */
    inline const Aws::String& GetExtendedStatistic() const{ return m_extendedStatistic; }

    /**
     * <p>The percentile statistic for the metric. Specify a value between p0.0 and
     * p100.</p>
     */
    inline bool ExtendedStatisticHasBeenSet() const { return m_extendedStatisticHasBeenSet; }

    /**
     * <p>The percentile statistic for the metric. Specify a value between p0.0 and
     * p100.</p>
     */
    inline void SetExtendedStatistic(const Aws::String& value) { m_extendedStatisticHasBeenSet = true; m_extendedStatistic = value; }

    /**
     * <p>The percentile statistic for the metric. Specify a value between p0.0 and
     * p100.</p>
     */
    inline void SetExtendedStatistic(Aws::String&& value) { m_extendedStatisticHasBeenSet = true; m_extendedStatistic = std::move(value); }

    /**
     * <p>The percentile statistic for the metric. Specify a value between p0.0 and
     * p100.</p>
     */
    inline void SetExtendedStatistic(const char* value) { m_extendedStatisticHasBeenSet = true; m_extendedStatistic.assign(value); }

    /**
     * <p>The percentile statistic for the metric. Specify a value between p0.0 and
     * p100.</p>
     */
    inline DescribeAlarmsForMetricRequest& WithExtendedStatistic(const Aws::String& value) { SetExtendedStatistic(value); return *this;}

    /**
     * <p>The percentile statistic for the metric. Specify a value between p0.0 and
     * p100.</p>
     */
    inline DescribeAlarmsForMetricRequest& WithExtendedStatistic(Aws::String&& value) { SetExtendedStatistic(std::move(value)); return *this;}

    /**
     * <p>The percentile statistic for the metric. Specify a value between p0.0 and
     * p100.</p>
     */
    inline DescribeAlarmsForMetricRequest& WithExtendedStatistic(const char* value) { SetExtendedStatistic(value); return *this;}


    /**
     * <p>The dimensions associated with the metric. If the metric has any associated
     * dimensions, you must specify them in order for the call to succeed.</p>
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>The dimensions associated with the metric. If the metric has any associated
     * dimensions, you must specify them in order for the call to succeed.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>The dimensions associated with the metric. If the metric has any associated
     * dimensions, you must specify them in order for the call to succeed.</p>
     */
    inline void SetDimensions(const Aws::Vector<Dimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The dimensions associated with the metric. If the metric has any associated
     * dimensions, you must specify them in order for the call to succeed.</p>
     */
    inline void SetDimensions(Aws::Vector<Dimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>The dimensions associated with the metric. If the metric has any associated
     * dimensions, you must specify them in order for the call to succeed.</p>
     */
    inline DescribeAlarmsForMetricRequest& WithDimensions(const Aws::Vector<Dimension>& value) { SetDimensions(value); return *this;}

    /**
     * <p>The dimensions associated with the metric. If the metric has any associated
     * dimensions, you must specify them in order for the call to succeed.</p>
     */
    inline DescribeAlarmsForMetricRequest& WithDimensions(Aws::Vector<Dimension>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * <p>The dimensions associated with the metric. If the metric has any associated
     * dimensions, you must specify them in order for the call to succeed.</p>
     */
    inline DescribeAlarmsForMetricRequest& AddDimensions(const Dimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p>The dimensions associated with the metric. If the metric has any associated
     * dimensions, you must specify them in order for the call to succeed.</p>
     */
    inline DescribeAlarmsForMetricRequest& AddDimensions(Dimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }


    /**
     * <p>The period, in seconds, over which the statistic is applied.</p>
     */
    inline int GetPeriod() const{ return m_period; }

    /**
     * <p>The period, in seconds, over which the statistic is applied.</p>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p>The period, in seconds, over which the statistic is applied.</p>
     */
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>The period, in seconds, over which the statistic is applied.</p>
     */
    inline DescribeAlarmsForMetricRequest& WithPeriod(int value) { SetPeriod(value); return *this;}


    /**
     * <p>The unit for the metric.</p>
     */
    inline const StandardUnit& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit for the metric.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit for the metric.</p>
     */
    inline void SetUnit(const StandardUnit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit for the metric.</p>
     */
    inline void SetUnit(StandardUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit for the metric.</p>
     */
    inline DescribeAlarmsForMetricRequest& WithUnit(const StandardUnit& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit for the metric.</p>
     */
    inline DescribeAlarmsForMetricRequest& WithUnit(StandardUnit&& value) { SetUnit(std::move(value)); return *this;}

  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet;

    Statistic m_statistic;
    bool m_statisticHasBeenSet;

    Aws::String m_extendedStatistic;
    bool m_extendedStatisticHasBeenSet;

    Aws::Vector<Dimension> m_dimensions;
    bool m_dimensionsHasBeenSet;

    int m_period;
    bool m_periodHasBeenSet;

    StandardUnit m_unit;
    bool m_unitHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
