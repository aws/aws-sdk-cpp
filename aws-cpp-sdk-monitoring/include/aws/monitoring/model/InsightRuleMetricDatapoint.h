/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>One data point from the metric time series returned in a Contributor Insights
   * rule report.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetInsightRuleReport.html">GetInsightRuleReport</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/InsightRuleMetricDatapoint">AWS
   * API Reference</a></p>
   */
  class InsightRuleMetricDatapoint
  {
  public:
    AWS_CLOUDWATCH_API InsightRuleMetricDatapoint();
    AWS_CLOUDWATCH_API InsightRuleMetricDatapoint(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API InsightRuleMetricDatapoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The timestamp of the data point.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The timestamp of the data point.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The timestamp of the data point.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The timestamp of the data point.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>The timestamp of the data point.</p>
     */
    inline InsightRuleMetricDatapoint& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The timestamp of the data point.</p>
     */
    inline InsightRuleMetricDatapoint& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}


    /**
     * <p>The number of unique contributors who published data during this
     * timestamp.</p> <p>This statistic is returned only if you included it in the
     * <code>Metrics</code> array in your request.</p>
     */
    inline double GetUniqueContributors() const{ return m_uniqueContributors; }

    /**
     * <p>The number of unique contributors who published data during this
     * timestamp.</p> <p>This statistic is returned only if you included it in the
     * <code>Metrics</code> array in your request.</p>
     */
    inline bool UniqueContributorsHasBeenSet() const { return m_uniqueContributorsHasBeenSet; }

    /**
     * <p>The number of unique contributors who published data during this
     * timestamp.</p> <p>This statistic is returned only if you included it in the
     * <code>Metrics</code> array in your request.</p>
     */
    inline void SetUniqueContributors(double value) { m_uniqueContributorsHasBeenSet = true; m_uniqueContributors = value; }

    /**
     * <p>The number of unique contributors who published data during this
     * timestamp.</p> <p>This statistic is returned only if you included it in the
     * <code>Metrics</code> array in your request.</p>
     */
    inline InsightRuleMetricDatapoint& WithUniqueContributors(double value) { SetUniqueContributors(value); return *this;}


    /**
     * <p>The maximum value provided by one contributor during this timestamp. Each
     * timestamp is evaluated separately, so the identity of the max contributor could
     * be different for each timestamp.</p> <p>This statistic is returned only if you
     * included it in the <code>Metrics</code> array in your request.</p>
     */
    inline double GetMaxContributorValue() const{ return m_maxContributorValue; }

    /**
     * <p>The maximum value provided by one contributor during this timestamp. Each
     * timestamp is evaluated separately, so the identity of the max contributor could
     * be different for each timestamp.</p> <p>This statistic is returned only if you
     * included it in the <code>Metrics</code> array in your request.</p>
     */
    inline bool MaxContributorValueHasBeenSet() const { return m_maxContributorValueHasBeenSet; }

    /**
     * <p>The maximum value provided by one contributor during this timestamp. Each
     * timestamp is evaluated separately, so the identity of the max contributor could
     * be different for each timestamp.</p> <p>This statistic is returned only if you
     * included it in the <code>Metrics</code> array in your request.</p>
     */
    inline void SetMaxContributorValue(double value) { m_maxContributorValueHasBeenSet = true; m_maxContributorValue = value; }

    /**
     * <p>The maximum value provided by one contributor during this timestamp. Each
     * timestamp is evaluated separately, so the identity of the max contributor could
     * be different for each timestamp.</p> <p>This statistic is returned only if you
     * included it in the <code>Metrics</code> array in your request.</p>
     */
    inline InsightRuleMetricDatapoint& WithMaxContributorValue(double value) { SetMaxContributorValue(value); return *this;}


    /**
     * <p>The number of occurrences that matched the rule during this data point.</p>
     * <p>This statistic is returned only if you included it in the
     * <code>Metrics</code> array in your request.</p>
     */
    inline double GetSampleCount() const{ return m_sampleCount; }

    /**
     * <p>The number of occurrences that matched the rule during this data point.</p>
     * <p>This statistic is returned only if you included it in the
     * <code>Metrics</code> array in your request.</p>
     */
    inline bool SampleCountHasBeenSet() const { return m_sampleCountHasBeenSet; }

    /**
     * <p>The number of occurrences that matched the rule during this data point.</p>
     * <p>This statistic is returned only if you included it in the
     * <code>Metrics</code> array in your request.</p>
     */
    inline void SetSampleCount(double value) { m_sampleCountHasBeenSet = true; m_sampleCount = value; }

    /**
     * <p>The number of occurrences that matched the rule during this data point.</p>
     * <p>This statistic is returned only if you included it in the
     * <code>Metrics</code> array in your request.</p>
     */
    inline InsightRuleMetricDatapoint& WithSampleCount(double value) { SetSampleCount(value); return *this;}


    /**
     * <p>The average value from all contributors during the time period represented by
     * that data point.</p> <p>This statistic is returned only if you included it in
     * the <code>Metrics</code> array in your request.</p>
     */
    inline double GetAverage() const{ return m_average; }

    /**
     * <p>The average value from all contributors during the time period represented by
     * that data point.</p> <p>This statistic is returned only if you included it in
     * the <code>Metrics</code> array in your request.</p>
     */
    inline bool AverageHasBeenSet() const { return m_averageHasBeenSet; }

    /**
     * <p>The average value from all contributors during the time period represented by
     * that data point.</p> <p>This statistic is returned only if you included it in
     * the <code>Metrics</code> array in your request.</p>
     */
    inline void SetAverage(double value) { m_averageHasBeenSet = true; m_average = value; }

    /**
     * <p>The average value from all contributors during the time period represented by
     * that data point.</p> <p>This statistic is returned only if you included it in
     * the <code>Metrics</code> array in your request.</p>
     */
    inline InsightRuleMetricDatapoint& WithAverage(double value) { SetAverage(value); return *this;}


    /**
     * <p>The sum of the values from all contributors during the time period
     * represented by that data point.</p> <p>This statistic is returned only if you
     * included it in the <code>Metrics</code> array in your request.</p>
     */
    inline double GetSum() const{ return m_sum; }

    /**
     * <p>The sum of the values from all contributors during the time period
     * represented by that data point.</p> <p>This statistic is returned only if you
     * included it in the <code>Metrics</code> array in your request.</p>
     */
    inline bool SumHasBeenSet() const { return m_sumHasBeenSet; }

    /**
     * <p>The sum of the values from all contributors during the time period
     * represented by that data point.</p> <p>This statistic is returned only if you
     * included it in the <code>Metrics</code> array in your request.</p>
     */
    inline void SetSum(double value) { m_sumHasBeenSet = true; m_sum = value; }

    /**
     * <p>The sum of the values from all contributors during the time period
     * represented by that data point.</p> <p>This statistic is returned only if you
     * included it in the <code>Metrics</code> array in your request.</p>
     */
    inline InsightRuleMetricDatapoint& WithSum(double value) { SetSum(value); return *this;}


    /**
     * <p>The minimum value from a single contributor during the time period
     * represented by that data point.</p> <p>This statistic is returned only if you
     * included it in the <code>Metrics</code> array in your request.</p>
     */
    inline double GetMinimum() const{ return m_minimum; }

    /**
     * <p>The minimum value from a single contributor during the time period
     * represented by that data point.</p> <p>This statistic is returned only if you
     * included it in the <code>Metrics</code> array in your request.</p>
     */
    inline bool MinimumHasBeenSet() const { return m_minimumHasBeenSet; }

    /**
     * <p>The minimum value from a single contributor during the time period
     * represented by that data point.</p> <p>This statistic is returned only if you
     * included it in the <code>Metrics</code> array in your request.</p>
     */
    inline void SetMinimum(double value) { m_minimumHasBeenSet = true; m_minimum = value; }

    /**
     * <p>The minimum value from a single contributor during the time period
     * represented by that data point.</p> <p>This statistic is returned only if you
     * included it in the <code>Metrics</code> array in your request.</p>
     */
    inline InsightRuleMetricDatapoint& WithMinimum(double value) { SetMinimum(value); return *this;}


    /**
     * <p>The maximum value from a single occurence from a single contributor during
     * the time period represented by that data point.</p> <p>This statistic is
     * returned only if you included it in the <code>Metrics</code> array in your
     * request.</p>
     */
    inline double GetMaximum() const{ return m_maximum; }

    /**
     * <p>The maximum value from a single occurence from a single contributor during
     * the time period represented by that data point.</p> <p>This statistic is
     * returned only if you included it in the <code>Metrics</code> array in your
     * request.</p>
     */
    inline bool MaximumHasBeenSet() const { return m_maximumHasBeenSet; }

    /**
     * <p>The maximum value from a single occurence from a single contributor during
     * the time period represented by that data point.</p> <p>This statistic is
     * returned only if you included it in the <code>Metrics</code> array in your
     * request.</p>
     */
    inline void SetMaximum(double value) { m_maximumHasBeenSet = true; m_maximum = value; }

    /**
     * <p>The maximum value from a single occurence from a single contributor during
     * the time period represented by that data point.</p> <p>This statistic is
     * returned only if you included it in the <code>Metrics</code> array in your
     * request.</p>
     */
    inline InsightRuleMetricDatapoint& WithMaximum(double value) { SetMaximum(value); return *this;}

  private:

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;

    double m_uniqueContributors;
    bool m_uniqueContributorsHasBeenSet = false;

    double m_maxContributorValue;
    bool m_maxContributorValueHasBeenSet = false;

    double m_sampleCount;
    bool m_sampleCountHasBeenSet = false;

    double m_average;
    bool m_averageHasBeenSet = false;

    double m_sum;
    bool m_sumHasBeenSet = false;

    double m_minimum;
    bool m_minimumHasBeenSet = false;

    double m_maximum;
    bool m_maximumHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
