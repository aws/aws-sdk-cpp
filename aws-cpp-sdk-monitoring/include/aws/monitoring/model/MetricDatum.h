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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/monitoring/model/StatisticSet.h>
#include <aws/monitoring/model/StandardUnit.h>
#include <aws/monitoring/model/Dimension.h>

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
   * <p> The <code>MetricDatum</code> data type encapsulates the information sent
   * with <a>PutMetricData</a> to either create a new metric or add new values to be
   * aggregated into an existing metric. </p>
   */
  class AWS_CLOUDWATCH_API MetricDatum
  {
  public:
    MetricDatum();
    MetricDatum(const Aws::Utils::Xml::XmlNode& xmlNode);
    MetricDatum& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

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
    inline MetricDatum& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the metric.</p>
     */
    inline MetricDatum& WithMetricName(Aws::String&& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the metric.</p>
     */
    inline MetricDatum& WithMetricName(const char* value) { SetMetricName(value); return *this;}

    /**
     * <p>A list of dimensions associated with the metric. Note, when using the
     * Dimensions value in a query, you need to append .member.N to it (e.g.,
     * Dimensions.member.N).</p>
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>A list of dimensions associated with the metric. Note, when using the
     * Dimensions value in a query, you need to append .member.N to it (e.g.,
     * Dimensions.member.N).</p>
     */
    inline void SetDimensions(const Aws::Vector<Dimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>A list of dimensions associated with the metric. Note, when using the
     * Dimensions value in a query, you need to append .member.N to it (e.g.,
     * Dimensions.member.N).</p>
     */
    inline void SetDimensions(Aws::Vector<Dimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>A list of dimensions associated with the metric. Note, when using the
     * Dimensions value in a query, you need to append .member.N to it (e.g.,
     * Dimensions.member.N).</p>
     */
    inline MetricDatum& WithDimensions(const Aws::Vector<Dimension>& value) { SetDimensions(value); return *this;}

    /**
     * <p>A list of dimensions associated with the metric. Note, when using the
     * Dimensions value in a query, you need to append .member.N to it (e.g.,
     * Dimensions.member.N).</p>
     */
    inline MetricDatum& WithDimensions(Aws::Vector<Dimension>&& value) { SetDimensions(value); return *this;}

    /**
     * <p>A list of dimensions associated with the metric. Note, when using the
     * Dimensions value in a query, you need to append .member.N to it (e.g.,
     * Dimensions.member.N).</p>
     */
    inline MetricDatum& AddDimensions(const Dimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p>A list of dimensions associated with the metric. Note, when using the
     * Dimensions value in a query, you need to append .member.N to it (e.g.,
     * Dimensions.member.N).</p>
     */
    inline MetricDatum& AddDimensions(Dimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p>The time stamp used for the metric in ISO 8601 Universal Coordinated Time
     * (UTC) format. If not specified, the default value is set to the time the metric
     * data was received.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The time stamp used for the metric in ISO 8601 Universal Coordinated Time
     * (UTC) format. If not specified, the default value is set to the time the metric
     * data was received.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The time stamp used for the metric in ISO 8601 Universal Coordinated Time
     * (UTC) format. If not specified, the default value is set to the time the metric
     * data was received.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The time stamp used for the metric in ISO 8601 Universal Coordinated Time
     * (UTC) format. If not specified, the default value is set to the time the metric
     * data was received.</p>
     */
    inline MetricDatum& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The time stamp used for the metric in ISO 8601 Universal Coordinated Time
     * (UTC) format. If not specified, the default value is set to the time the metric
     * data was received.</p>
     */
    inline MetricDatum& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The value for the metric.</p> <important> <p>Although the <code>Value</code>
     * parameter accepts numbers of type <code>Double</code>, Amazon CloudWatch rejects
     * values that are either too small or too large. Values must be in the range of
     * 8.515920e-109 to 1.174271e+108 (Base 10) or 2e-360 to 2e360 (Base 2). In
     * addition, special values (e.g., NaN, +Infinity, -Infinity) are not
     * supported.</p> </important>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The value for the metric.</p> <important> <p>Although the <code>Value</code>
     * parameter accepts numbers of type <code>Double</code>, Amazon CloudWatch rejects
     * values that are either too small or too large. Values must be in the range of
     * 8.515920e-109 to 1.174271e+108 (Base 10) or 2e-360 to 2e360 (Base 2). In
     * addition, special values (e.g., NaN, +Infinity, -Infinity) are not
     * supported.</p> </important>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value for the metric.</p> <important> <p>Although the <code>Value</code>
     * parameter accepts numbers of type <code>Double</code>, Amazon CloudWatch rejects
     * values that are either too small or too large. Values must be in the range of
     * 8.515920e-109 to 1.174271e+108 (Base 10) or 2e-360 to 2e360 (Base 2). In
     * addition, special values (e.g., NaN, +Infinity, -Infinity) are not
     * supported.</p> </important>
     */
    inline MetricDatum& WithValue(double value) { SetValue(value); return *this;}

    /**
     * <p>A set of statistical values describing the metric.</p>
     */
    inline const StatisticSet& GetStatisticValues() const{ return m_statisticValues; }

    /**
     * <p>A set of statistical values describing the metric.</p>
     */
    inline void SetStatisticValues(const StatisticSet& value) { m_statisticValuesHasBeenSet = true; m_statisticValues = value; }

    /**
     * <p>A set of statistical values describing the metric.</p>
     */
    inline void SetStatisticValues(StatisticSet&& value) { m_statisticValuesHasBeenSet = true; m_statisticValues = value; }

    /**
     * <p>A set of statistical values describing the metric.</p>
     */
    inline MetricDatum& WithStatisticValues(const StatisticSet& value) { SetStatisticValues(value); return *this;}

    /**
     * <p>A set of statistical values describing the metric.</p>
     */
    inline MetricDatum& WithStatisticValues(StatisticSet&& value) { SetStatisticValues(value); return *this;}

    /**
     * <p>The unit of the metric.</p>
     */
    inline const StandardUnit& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit of the metric.</p>
     */
    inline void SetUnit(const StandardUnit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit of the metric.</p>
     */
    inline void SetUnit(StandardUnit&& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit of the metric.</p>
     */
    inline MetricDatum& WithUnit(const StandardUnit& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit of the metric.</p>
     */
    inline MetricDatum& WithUnit(StandardUnit&& value) { SetUnit(value); return *this;}

  private:
    Aws::String m_metricName;
    bool m_metricNameHasBeenSet;
    Aws::Vector<Dimension> m_dimensions;
    bool m_dimensionsHasBeenSet;
    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet;
    double m_value;
    bool m_valueHasBeenSet;
    StatisticSet m_statisticValues;
    bool m_statisticValuesHasBeenSet;
    StandardUnit m_unit;
    bool m_unitHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
