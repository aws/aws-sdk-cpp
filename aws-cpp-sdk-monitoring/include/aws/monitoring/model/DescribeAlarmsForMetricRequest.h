/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   * <p>Describes the inputs for DescribeAlarmsForMetric.</p>
   */
  class AWS_CLOUDWATCH_API DescribeAlarmsForMetricRequest : public CloudWatchRequest
  {
  public:
    DescribeAlarmsForMetricRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the metric.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

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
    inline DescribeAlarmsForMetricRequest& WithMetricName(Aws::String&& value) { SetMetricName(value); return *this;}

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
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace of the metric.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

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
    inline DescribeAlarmsForMetricRequest& WithNamespace(Aws::String&& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace of the metric.</p>
     */
    inline DescribeAlarmsForMetricRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}

    /**
     * <p>The statistic for the metric.</p>
     */
    inline const Statistic& GetStatistic() const{ return m_statistic; }

    /**
     * <p>The statistic for the metric.</p>
     */
    inline void SetStatistic(const Statistic& value) { m_statisticHasBeenSet = true; m_statistic = value; }

    /**
     * <p>The statistic for the metric.</p>
     */
    inline void SetStatistic(Statistic&& value) { m_statisticHasBeenSet = true; m_statistic = value; }

    /**
     * <p>The statistic for the metric.</p>
     */
    inline DescribeAlarmsForMetricRequest& WithStatistic(const Statistic& value) { SetStatistic(value); return *this;}

    /**
     * <p>The statistic for the metric.</p>
     */
    inline DescribeAlarmsForMetricRequest& WithStatistic(Statistic&& value) { SetStatistic(value); return *this;}

    /**
     * <p>The list of dimensions associated with the metric. If the metric has any
     * associated dimensions, you must specify them in order for the
     * DescribeAlarmsForMetric to succeed.</p>
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>The list of dimensions associated with the metric. If the metric has any
     * associated dimensions, you must specify them in order for the
     * DescribeAlarmsForMetric to succeed.</p>
     */
    inline void SetDimensions(const Aws::Vector<Dimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The list of dimensions associated with the metric. If the metric has any
     * associated dimensions, you must specify them in order for the
     * DescribeAlarmsForMetric to succeed.</p>
     */
    inline void SetDimensions(Aws::Vector<Dimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The list of dimensions associated with the metric. If the metric has any
     * associated dimensions, you must specify them in order for the
     * DescribeAlarmsForMetric to succeed.</p>
     */
    inline DescribeAlarmsForMetricRequest& WithDimensions(const Aws::Vector<Dimension>& value) { SetDimensions(value); return *this;}

    /**
     * <p>The list of dimensions associated with the metric. If the metric has any
     * associated dimensions, you must specify them in order for the
     * DescribeAlarmsForMetric to succeed.</p>
     */
    inline DescribeAlarmsForMetricRequest& WithDimensions(Aws::Vector<Dimension>&& value) { SetDimensions(value); return *this;}

    /**
     * <p>The list of dimensions associated with the metric. If the metric has any
     * associated dimensions, you must specify them in order for the
     * DescribeAlarmsForMetric to succeed.</p>
     */
    inline DescribeAlarmsForMetricRequest& AddDimensions(const Dimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p>The list of dimensions associated with the metric. If the metric has any
     * associated dimensions, you must specify them in order for the
     * DescribeAlarmsForMetric to succeed.</p>
     */
    inline DescribeAlarmsForMetricRequest& AddDimensions(Dimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p>The period in seconds over which the statistic is applied.</p>
     */
    inline int GetPeriod() const{ return m_period; }

    /**
     * <p>The period in seconds over which the statistic is applied.</p>
     */
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>The period in seconds over which the statistic is applied.</p>
     */
    inline DescribeAlarmsForMetricRequest& WithPeriod(int value) { SetPeriod(value); return *this;}

    /**
     * <p>The unit for the metric.</p>
     */
    inline const StandardUnit& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit for the metric.</p>
     */
    inline void SetUnit(const StandardUnit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit for the metric.</p>
     */
    inline void SetUnit(StandardUnit&& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit for the metric.</p>
     */
    inline DescribeAlarmsForMetricRequest& WithUnit(const StandardUnit& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit for the metric.</p>
     */
    inline DescribeAlarmsForMetricRequest& WithUnit(StandardUnit&& value) { SetUnit(value); return *this;}

  private:
    Aws::String m_metricName;
    bool m_metricNameHasBeenSet;
    Aws::String m_namespace;
    bool m_namespaceHasBeenSet;
    Statistic m_statistic;
    bool m_statisticHasBeenSet;
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
