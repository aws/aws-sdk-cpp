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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/monitoring/model/StatisticSet.h>
#include <aws/monitoring/model/StandardUnit.h>
#include <aws/monitoring/model/Dimension.h>
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
   * <p>Encapsulates the information sent to either create a metric or add new values
   * to be aggregated into an existing metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/MetricDatum">AWS
   * API Reference</a></p>
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
    inline MetricDatum& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the metric.</p>
     */
    inline MetricDatum& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the metric.</p>
     */
    inline MetricDatum& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The dimensions associated with the metric.</p>
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>The dimensions associated with the metric.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>The dimensions associated with the metric.</p>
     */
    inline void SetDimensions(const Aws::Vector<Dimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The dimensions associated with the metric.</p>
     */
    inline void SetDimensions(Aws::Vector<Dimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>The dimensions associated with the metric.</p>
     */
    inline MetricDatum& WithDimensions(const Aws::Vector<Dimension>& value) { SetDimensions(value); return *this;}

    /**
     * <p>The dimensions associated with the metric.</p>
     */
    inline MetricDatum& WithDimensions(Aws::Vector<Dimension>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * <p>The dimensions associated with the metric.</p>
     */
    inline MetricDatum& AddDimensions(const Dimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p>The dimensions associated with the metric.</p>
     */
    inline MetricDatum& AddDimensions(Dimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }


    /**
     * <p>The time the metric data was received, expressed as the number of
     * milliseconds since Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The time the metric data was received, expressed as the number of
     * milliseconds since Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The time the metric data was received, expressed as the number of
     * milliseconds since Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The time the metric data was received, expressed as the number of
     * milliseconds since Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>The time the metric data was received, expressed as the number of
     * milliseconds since Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline MetricDatum& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The time the metric data was received, expressed as the number of
     * milliseconds since Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline MetricDatum& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}


    /**
     * <p>The value for the metric.</p> <p>Although the parameter accepts numbers of
     * type Double, CloudWatch rejects values that are either too small or too large.
     * Values must be in the range of 8.515920e-109 to 1.174271e+108 (Base 10) or
     * 2e-360 to 2e360 (Base 2). In addition, special values (for example, NaN,
     * +Infinity, -Infinity) are not supported.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The value for the metric.</p> <p>Although the parameter accepts numbers of
     * type Double, CloudWatch rejects values that are either too small or too large.
     * Values must be in the range of 8.515920e-109 to 1.174271e+108 (Base 10) or
     * 2e-360 to 2e360 (Base 2). In addition, special values (for example, NaN,
     * +Infinity, -Infinity) are not supported.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value for the metric.</p> <p>Although the parameter accepts numbers of
     * type Double, CloudWatch rejects values that are either too small or too large.
     * Values must be in the range of 8.515920e-109 to 1.174271e+108 (Base 10) or
     * 2e-360 to 2e360 (Base 2). In addition, special values (for example, NaN,
     * +Infinity, -Infinity) are not supported.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value for the metric.</p> <p>Although the parameter accepts numbers of
     * type Double, CloudWatch rejects values that are either too small or too large.
     * Values must be in the range of 8.515920e-109 to 1.174271e+108 (Base 10) or
     * 2e-360 to 2e360 (Base 2). In addition, special values (for example, NaN,
     * +Infinity, -Infinity) are not supported.</p>
     */
    inline MetricDatum& WithValue(double value) { SetValue(value); return *this;}


    /**
     * <p>The statistical values for the metric.</p>
     */
    inline const StatisticSet& GetStatisticValues() const{ return m_statisticValues; }

    /**
     * <p>The statistical values for the metric.</p>
     */
    inline bool StatisticValuesHasBeenSet() const { return m_statisticValuesHasBeenSet; }

    /**
     * <p>The statistical values for the metric.</p>
     */
    inline void SetStatisticValues(const StatisticSet& value) { m_statisticValuesHasBeenSet = true; m_statisticValues = value; }

    /**
     * <p>The statistical values for the metric.</p>
     */
    inline void SetStatisticValues(StatisticSet&& value) { m_statisticValuesHasBeenSet = true; m_statisticValues = std::move(value); }

    /**
     * <p>The statistical values for the metric.</p>
     */
    inline MetricDatum& WithStatisticValues(const StatisticSet& value) { SetStatisticValues(value); return *this;}

    /**
     * <p>The statistical values for the metric.</p>
     */
    inline MetricDatum& WithStatisticValues(StatisticSet&& value) { SetStatisticValues(std::move(value)); return *this;}


    /**
     * <p>Array of numbers representing the values for the metric during the period.
     * Each unique value is listed just once in this array, and the corresponding
     * number in the <code>Counts</code> array specifies the number of times that value
     * occurred during the period. You can include up to 150 unique values in each
     * <code>PutMetricData</code> action that specifies a <code>Values</code>
     * array.</p> <p>Although the <code>Values</code> array accepts numbers of type
     * <code>Double</code>, CloudWatch rejects values that are either too small or too
     * large. Values must be in the range of 8.515920e-109 to 1.174271e+108 (Base 10)
     * or 2e-360 to 2e360 (Base 2). In addition, special values (for example, NaN,
     * +Infinity, -Infinity) are not supported.</p>
     */
    inline const Aws::Vector<double>& GetValues() const{ return m_values; }

    /**
     * <p>Array of numbers representing the values for the metric during the period.
     * Each unique value is listed just once in this array, and the corresponding
     * number in the <code>Counts</code> array specifies the number of times that value
     * occurred during the period. You can include up to 150 unique values in each
     * <code>PutMetricData</code> action that specifies a <code>Values</code>
     * array.</p> <p>Although the <code>Values</code> array accepts numbers of type
     * <code>Double</code>, CloudWatch rejects values that are either too small or too
     * large. Values must be in the range of 8.515920e-109 to 1.174271e+108 (Base 10)
     * or 2e-360 to 2e360 (Base 2). In addition, special values (for example, NaN,
     * +Infinity, -Infinity) are not supported.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>Array of numbers representing the values for the metric during the period.
     * Each unique value is listed just once in this array, and the corresponding
     * number in the <code>Counts</code> array specifies the number of times that value
     * occurred during the period. You can include up to 150 unique values in each
     * <code>PutMetricData</code> action that specifies a <code>Values</code>
     * array.</p> <p>Although the <code>Values</code> array accepts numbers of type
     * <code>Double</code>, CloudWatch rejects values that are either too small or too
     * large. Values must be in the range of 8.515920e-109 to 1.174271e+108 (Base 10)
     * or 2e-360 to 2e360 (Base 2). In addition, special values (for example, NaN,
     * +Infinity, -Infinity) are not supported.</p>
     */
    inline void SetValues(const Aws::Vector<double>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>Array of numbers representing the values for the metric during the period.
     * Each unique value is listed just once in this array, and the corresponding
     * number in the <code>Counts</code> array specifies the number of times that value
     * occurred during the period. You can include up to 150 unique values in each
     * <code>PutMetricData</code> action that specifies a <code>Values</code>
     * array.</p> <p>Although the <code>Values</code> array accepts numbers of type
     * <code>Double</code>, CloudWatch rejects values that are either too small or too
     * large. Values must be in the range of 8.515920e-109 to 1.174271e+108 (Base 10)
     * or 2e-360 to 2e360 (Base 2). In addition, special values (for example, NaN,
     * +Infinity, -Infinity) are not supported.</p>
     */
    inline void SetValues(Aws::Vector<double>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>Array of numbers representing the values for the metric during the period.
     * Each unique value is listed just once in this array, and the corresponding
     * number in the <code>Counts</code> array specifies the number of times that value
     * occurred during the period. You can include up to 150 unique values in each
     * <code>PutMetricData</code> action that specifies a <code>Values</code>
     * array.</p> <p>Although the <code>Values</code> array accepts numbers of type
     * <code>Double</code>, CloudWatch rejects values that are either too small or too
     * large. Values must be in the range of 8.515920e-109 to 1.174271e+108 (Base 10)
     * or 2e-360 to 2e360 (Base 2). In addition, special values (for example, NaN,
     * +Infinity, -Infinity) are not supported.</p>
     */
    inline MetricDatum& WithValues(const Aws::Vector<double>& value) { SetValues(value); return *this;}

    /**
     * <p>Array of numbers representing the values for the metric during the period.
     * Each unique value is listed just once in this array, and the corresponding
     * number in the <code>Counts</code> array specifies the number of times that value
     * occurred during the period. You can include up to 150 unique values in each
     * <code>PutMetricData</code> action that specifies a <code>Values</code>
     * array.</p> <p>Although the <code>Values</code> array accepts numbers of type
     * <code>Double</code>, CloudWatch rejects values that are either too small or too
     * large. Values must be in the range of 8.515920e-109 to 1.174271e+108 (Base 10)
     * or 2e-360 to 2e360 (Base 2). In addition, special values (for example, NaN,
     * +Infinity, -Infinity) are not supported.</p>
     */
    inline MetricDatum& WithValues(Aws::Vector<double>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>Array of numbers representing the values for the metric during the period.
     * Each unique value is listed just once in this array, and the corresponding
     * number in the <code>Counts</code> array specifies the number of times that value
     * occurred during the period. You can include up to 150 unique values in each
     * <code>PutMetricData</code> action that specifies a <code>Values</code>
     * array.</p> <p>Although the <code>Values</code> array accepts numbers of type
     * <code>Double</code>, CloudWatch rejects values that are either too small or too
     * large. Values must be in the range of 8.515920e-109 to 1.174271e+108 (Base 10)
     * or 2e-360 to 2e360 (Base 2). In addition, special values (for example, NaN,
     * +Infinity, -Infinity) are not supported.</p>
     */
    inline MetricDatum& AddValues(double value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p>Array of numbers that is used along with the <code>Values</code> array. Each
     * number in the <code>Count</code> array is the number of times the corresponding
     * value in the <code>Values</code> array occurred during the period. </p> <p>If
     * you omit the <code>Counts</code> array, the default of 1 is used as the value
     * for each count. If you include a <code>Counts</code> array, it must include the
     * same amount of values as the <code>Values</code> array.</p>
     */
    inline const Aws::Vector<double>& GetCounts() const{ return m_counts; }

    /**
     * <p>Array of numbers that is used along with the <code>Values</code> array. Each
     * number in the <code>Count</code> array is the number of times the corresponding
     * value in the <code>Values</code> array occurred during the period. </p> <p>If
     * you omit the <code>Counts</code> array, the default of 1 is used as the value
     * for each count. If you include a <code>Counts</code> array, it must include the
     * same amount of values as the <code>Values</code> array.</p>
     */
    inline bool CountsHasBeenSet() const { return m_countsHasBeenSet; }

    /**
     * <p>Array of numbers that is used along with the <code>Values</code> array. Each
     * number in the <code>Count</code> array is the number of times the corresponding
     * value in the <code>Values</code> array occurred during the period. </p> <p>If
     * you omit the <code>Counts</code> array, the default of 1 is used as the value
     * for each count. If you include a <code>Counts</code> array, it must include the
     * same amount of values as the <code>Values</code> array.</p>
     */
    inline void SetCounts(const Aws::Vector<double>& value) { m_countsHasBeenSet = true; m_counts = value; }

    /**
     * <p>Array of numbers that is used along with the <code>Values</code> array. Each
     * number in the <code>Count</code> array is the number of times the corresponding
     * value in the <code>Values</code> array occurred during the period. </p> <p>If
     * you omit the <code>Counts</code> array, the default of 1 is used as the value
     * for each count. If you include a <code>Counts</code> array, it must include the
     * same amount of values as the <code>Values</code> array.</p>
     */
    inline void SetCounts(Aws::Vector<double>&& value) { m_countsHasBeenSet = true; m_counts = std::move(value); }

    /**
     * <p>Array of numbers that is used along with the <code>Values</code> array. Each
     * number in the <code>Count</code> array is the number of times the corresponding
     * value in the <code>Values</code> array occurred during the period. </p> <p>If
     * you omit the <code>Counts</code> array, the default of 1 is used as the value
     * for each count. If you include a <code>Counts</code> array, it must include the
     * same amount of values as the <code>Values</code> array.</p>
     */
    inline MetricDatum& WithCounts(const Aws::Vector<double>& value) { SetCounts(value); return *this;}

    /**
     * <p>Array of numbers that is used along with the <code>Values</code> array. Each
     * number in the <code>Count</code> array is the number of times the corresponding
     * value in the <code>Values</code> array occurred during the period. </p> <p>If
     * you omit the <code>Counts</code> array, the default of 1 is used as the value
     * for each count. If you include a <code>Counts</code> array, it must include the
     * same amount of values as the <code>Values</code> array.</p>
     */
    inline MetricDatum& WithCounts(Aws::Vector<double>&& value) { SetCounts(std::move(value)); return *this;}

    /**
     * <p>Array of numbers that is used along with the <code>Values</code> array. Each
     * number in the <code>Count</code> array is the number of times the corresponding
     * value in the <code>Values</code> array occurred during the period. </p> <p>If
     * you omit the <code>Counts</code> array, the default of 1 is used as the value
     * for each count. If you include a <code>Counts</code> array, it must include the
     * same amount of values as the <code>Values</code> array.</p>
     */
    inline MetricDatum& AddCounts(double value) { m_countsHasBeenSet = true; m_counts.push_back(value); return *this; }


    /**
     * <p>When you are using a <code>Put</code> operation, this defines what unit you
     * want to use when storing the metric. In a <code>Get</code> operation, this
     * displays the unit that is used for the metric.</p>
     */
    inline const StandardUnit& GetUnit() const{ return m_unit; }

    /**
     * <p>When you are using a <code>Put</code> operation, this defines what unit you
     * want to use when storing the metric. In a <code>Get</code> operation, this
     * displays the unit that is used for the metric.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>When you are using a <code>Put</code> operation, this defines what unit you
     * want to use when storing the metric. In a <code>Get</code> operation, this
     * displays the unit that is used for the metric.</p>
     */
    inline void SetUnit(const StandardUnit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>When you are using a <code>Put</code> operation, this defines what unit you
     * want to use when storing the metric. In a <code>Get</code> operation, this
     * displays the unit that is used for the metric.</p>
     */
    inline void SetUnit(StandardUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>When you are using a <code>Put</code> operation, this defines what unit you
     * want to use when storing the metric. In a <code>Get</code> operation, this
     * displays the unit that is used for the metric.</p>
     */
    inline MetricDatum& WithUnit(const StandardUnit& value) { SetUnit(value); return *this;}

    /**
     * <p>When you are using a <code>Put</code> operation, this defines what unit you
     * want to use when storing the metric. In a <code>Get</code> operation, this
     * displays the unit that is used for the metric.</p>
     */
    inline MetricDatum& WithUnit(StandardUnit&& value) { SetUnit(std::move(value)); return *this;}


    /**
     * <p>Valid values are 1 and 60. Setting this to 1 specifies this metric as a
     * high-resolution metric, so that CloudWatch stores the metric with sub-minute
     * resolution down to one second. Setting this to 60 specifies this metric as a
     * regular-resolution metric, which CloudWatch stores at 1-minute resolution.
     * Currently, high resolution is available only for custom metrics. For more
     * information about high-resolution metrics, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/publishingMetrics.html#high-resolution-metrics">High-Resolution
     * Metrics</a> in the <i>Amazon CloudWatch User Guide</i>. </p> <p>This field is
     * optional, if you do not specify it the default of 60 is used.</p>
     */
    inline int GetStorageResolution() const{ return m_storageResolution; }

    /**
     * <p>Valid values are 1 and 60. Setting this to 1 specifies this metric as a
     * high-resolution metric, so that CloudWatch stores the metric with sub-minute
     * resolution down to one second. Setting this to 60 specifies this metric as a
     * regular-resolution metric, which CloudWatch stores at 1-minute resolution.
     * Currently, high resolution is available only for custom metrics. For more
     * information about high-resolution metrics, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/publishingMetrics.html#high-resolution-metrics">High-Resolution
     * Metrics</a> in the <i>Amazon CloudWatch User Guide</i>. </p> <p>This field is
     * optional, if you do not specify it the default of 60 is used.</p>
     */
    inline bool StorageResolutionHasBeenSet() const { return m_storageResolutionHasBeenSet; }

    /**
     * <p>Valid values are 1 and 60. Setting this to 1 specifies this metric as a
     * high-resolution metric, so that CloudWatch stores the metric with sub-minute
     * resolution down to one second. Setting this to 60 specifies this metric as a
     * regular-resolution metric, which CloudWatch stores at 1-minute resolution.
     * Currently, high resolution is available only for custom metrics. For more
     * information about high-resolution metrics, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/publishingMetrics.html#high-resolution-metrics">High-Resolution
     * Metrics</a> in the <i>Amazon CloudWatch User Guide</i>. </p> <p>This field is
     * optional, if you do not specify it the default of 60 is used.</p>
     */
    inline void SetStorageResolution(int value) { m_storageResolutionHasBeenSet = true; m_storageResolution = value; }

    /**
     * <p>Valid values are 1 and 60. Setting this to 1 specifies this metric as a
     * high-resolution metric, so that CloudWatch stores the metric with sub-minute
     * resolution down to one second. Setting this to 60 specifies this metric as a
     * regular-resolution metric, which CloudWatch stores at 1-minute resolution.
     * Currently, high resolution is available only for custom metrics. For more
     * information about high-resolution metrics, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/publishingMetrics.html#high-resolution-metrics">High-Resolution
     * Metrics</a> in the <i>Amazon CloudWatch User Guide</i>. </p> <p>This field is
     * optional, if you do not specify it the default of 60 is used.</p>
     */
    inline MetricDatum& WithStorageResolution(int value) { SetStorageResolution(value); return *this;}

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

    Aws::Vector<double> m_values;
    bool m_valuesHasBeenSet;

    Aws::Vector<double> m_counts;
    bool m_countsHasBeenSet;

    StandardUnit m_unit;
    bool m_unitHasBeenSet;

    int m_storageResolution;
    bool m_storageResolutionHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
