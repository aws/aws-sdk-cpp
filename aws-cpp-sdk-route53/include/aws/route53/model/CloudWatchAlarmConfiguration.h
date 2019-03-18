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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/ComparisonOperator.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/Statistic.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/model/Dimension.h>
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
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains information about the CloudWatch alarm that
   * Amazon Route 53 is monitoring for this health check.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/CloudWatchAlarmConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API CloudWatchAlarmConfiguration
  {
  public:
    CloudWatchAlarmConfiguration();
    CloudWatchAlarmConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    CloudWatchAlarmConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the number of
     * periods that the metric is compared to the threshold.</p>
     */
    inline int GetEvaluationPeriods() const{ return m_evaluationPeriods; }

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the number of
     * periods that the metric is compared to the threshold.</p>
     */
    inline bool EvaluationPeriodsHasBeenSet() const { return m_evaluationPeriodsHasBeenSet; }

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the number of
     * periods that the metric is compared to the threshold.</p>
     */
    inline void SetEvaluationPeriods(int value) { m_evaluationPeriodsHasBeenSet = true; m_evaluationPeriods = value; }

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the number of
     * periods that the metric is compared to the threshold.</p>
     */
    inline CloudWatchAlarmConfiguration& WithEvaluationPeriods(int value) { SetEvaluationPeriods(value); return *this;}


    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the value the
     * metric is compared with.</p>
     */
    inline double GetThreshold() const{ return m_threshold; }

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the value the
     * metric is compared with.</p>
     */
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the value the
     * metric is compared with.</p>
     */
    inline void SetThreshold(double value) { m_thresholdHasBeenSet = true; m_threshold = value; }

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the value the
     * metric is compared with.</p>
     */
    inline CloudWatchAlarmConfiguration& WithThreshold(double value) { SetThreshold(value); return *this;}


    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the arithmetic
     * operation that is used for the comparison.</p>
     */
    inline const ComparisonOperator& GetComparisonOperator() const{ return m_comparisonOperator; }

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the arithmetic
     * operation that is used for the comparison.</p>
     */
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the arithmetic
     * operation that is used for the comparison.</p>
     */
    inline void SetComparisonOperator(const ComparisonOperator& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the arithmetic
     * operation that is used for the comparison.</p>
     */
    inline void SetComparisonOperator(ComparisonOperator&& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = std::move(value); }

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the arithmetic
     * operation that is used for the comparison.</p>
     */
    inline CloudWatchAlarmConfiguration& WithComparisonOperator(const ComparisonOperator& value) { SetComparisonOperator(value); return *this;}

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the arithmetic
     * operation that is used for the comparison.</p>
     */
    inline CloudWatchAlarmConfiguration& WithComparisonOperator(ComparisonOperator&& value) { SetComparisonOperator(std::move(value)); return *this;}


    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the duration of
     * one evaluation period in seconds.</p>
     */
    inline int GetPeriod() const{ return m_period; }

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the duration of
     * one evaluation period in seconds.</p>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the duration of
     * one evaluation period in seconds.</p>
     */
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the duration of
     * one evaluation period in seconds.</p>
     */
    inline CloudWatchAlarmConfiguration& WithPeriod(int value) { SetPeriod(value); return *this;}


    /**
     * <p>The name of the CloudWatch metric that the alarm is associated with.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the CloudWatch metric that the alarm is associated with.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The name of the CloudWatch metric that the alarm is associated with.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the CloudWatch metric that the alarm is associated with.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The name of the CloudWatch metric that the alarm is associated with.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The name of the CloudWatch metric that the alarm is associated with.</p>
     */
    inline CloudWatchAlarmConfiguration& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the CloudWatch metric that the alarm is associated with.</p>
     */
    inline CloudWatchAlarmConfiguration& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the CloudWatch metric that the alarm is associated with.</p>
     */
    inline CloudWatchAlarmConfiguration& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The namespace of the metric that the alarm is associated with. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/CW_Support_For_AWS.html">Amazon
     * CloudWatch Namespaces, Dimensions, and Metrics Reference</a> in the <i>Amazon
     * CloudWatch User Guide</i>.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace of the metric that the alarm is associated with. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/CW_Support_For_AWS.html">Amazon
     * CloudWatch Namespaces, Dimensions, and Metrics Reference</a> in the <i>Amazon
     * CloudWatch User Guide</i>.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace of the metric that the alarm is associated with. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/CW_Support_For_AWS.html">Amazon
     * CloudWatch Namespaces, Dimensions, and Metrics Reference</a> in the <i>Amazon
     * CloudWatch User Guide</i>.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace of the metric that the alarm is associated with. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/CW_Support_For_AWS.html">Amazon
     * CloudWatch Namespaces, Dimensions, and Metrics Reference</a> in the <i>Amazon
     * CloudWatch User Guide</i>.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace of the metric that the alarm is associated with. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/CW_Support_For_AWS.html">Amazon
     * CloudWatch Namespaces, Dimensions, and Metrics Reference</a> in the <i>Amazon
     * CloudWatch User Guide</i>.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace of the metric that the alarm is associated with. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/CW_Support_For_AWS.html">Amazon
     * CloudWatch Namespaces, Dimensions, and Metrics Reference</a> in the <i>Amazon
     * CloudWatch User Guide</i>.</p>
     */
    inline CloudWatchAlarmConfiguration& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace of the metric that the alarm is associated with. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/CW_Support_For_AWS.html">Amazon
     * CloudWatch Namespaces, Dimensions, and Metrics Reference</a> in the <i>Amazon
     * CloudWatch User Guide</i>.</p>
     */
    inline CloudWatchAlarmConfiguration& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the metric that the alarm is associated with. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/CW_Support_For_AWS.html">Amazon
     * CloudWatch Namespaces, Dimensions, and Metrics Reference</a> in the <i>Amazon
     * CloudWatch User Guide</i>.</p>
     */
    inline CloudWatchAlarmConfiguration& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the statistic
     * that is applied to the metric.</p>
     */
    inline const Statistic& GetStatistic() const{ return m_statistic; }

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the statistic
     * that is applied to the metric.</p>
     */
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the statistic
     * that is applied to the metric.</p>
     */
    inline void SetStatistic(const Statistic& value) { m_statisticHasBeenSet = true; m_statistic = value; }

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the statistic
     * that is applied to the metric.</p>
     */
    inline void SetStatistic(Statistic&& value) { m_statisticHasBeenSet = true; m_statistic = std::move(value); }

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the statistic
     * that is applied to the metric.</p>
     */
    inline CloudWatchAlarmConfiguration& WithStatistic(const Statistic& value) { SetStatistic(value); return *this;}

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, the statistic
     * that is applied to the metric.</p>
     */
    inline CloudWatchAlarmConfiguration& WithStatistic(Statistic&& value) { SetStatistic(std::move(value)); return *this;}


    /**
     * <p>For the metric that the CloudWatch alarm is associated with, a complex type
     * that contains information about the dimensions for the metric. For information,
     * see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/CW_Support_For_AWS.html">Amazon
     * CloudWatch Namespaces, Dimensions, and Metrics Reference</a> in the <i>Amazon
     * CloudWatch User Guide</i>.</p>
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, a complex type
     * that contains information about the dimensions for the metric. For information,
     * see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/CW_Support_For_AWS.html">Amazon
     * CloudWatch Namespaces, Dimensions, and Metrics Reference</a> in the <i>Amazon
     * CloudWatch User Guide</i>.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, a complex type
     * that contains information about the dimensions for the metric. For information,
     * see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/CW_Support_For_AWS.html">Amazon
     * CloudWatch Namespaces, Dimensions, and Metrics Reference</a> in the <i>Amazon
     * CloudWatch User Guide</i>.</p>
     */
    inline void SetDimensions(const Aws::Vector<Dimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, a complex type
     * that contains information about the dimensions for the metric. For information,
     * see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/CW_Support_For_AWS.html">Amazon
     * CloudWatch Namespaces, Dimensions, and Metrics Reference</a> in the <i>Amazon
     * CloudWatch User Guide</i>.</p>
     */
    inline void SetDimensions(Aws::Vector<Dimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, a complex type
     * that contains information about the dimensions for the metric. For information,
     * see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/CW_Support_For_AWS.html">Amazon
     * CloudWatch Namespaces, Dimensions, and Metrics Reference</a> in the <i>Amazon
     * CloudWatch User Guide</i>.</p>
     */
    inline CloudWatchAlarmConfiguration& WithDimensions(const Aws::Vector<Dimension>& value) { SetDimensions(value); return *this;}

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, a complex type
     * that contains information about the dimensions for the metric. For information,
     * see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/CW_Support_For_AWS.html">Amazon
     * CloudWatch Namespaces, Dimensions, and Metrics Reference</a> in the <i>Amazon
     * CloudWatch User Guide</i>.</p>
     */
    inline CloudWatchAlarmConfiguration& WithDimensions(Aws::Vector<Dimension>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, a complex type
     * that contains information about the dimensions for the metric. For information,
     * see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/CW_Support_For_AWS.html">Amazon
     * CloudWatch Namespaces, Dimensions, and Metrics Reference</a> in the <i>Amazon
     * CloudWatch User Guide</i>.</p>
     */
    inline CloudWatchAlarmConfiguration& AddDimensions(const Dimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p>For the metric that the CloudWatch alarm is associated with, a complex type
     * that contains information about the dimensions for the metric. For information,
     * see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/CW_Support_For_AWS.html">Amazon
     * CloudWatch Namespaces, Dimensions, and Metrics Reference</a> in the <i>Amazon
     * CloudWatch User Guide</i>.</p>
     */
    inline CloudWatchAlarmConfiguration& AddDimensions(Dimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }

  private:

    int m_evaluationPeriods;
    bool m_evaluationPeriodsHasBeenSet;

    double m_threshold;
    bool m_thresholdHasBeenSet;

    ComparisonOperator m_comparisonOperator;
    bool m_comparisonOperatorHasBeenSet;

    int m_period;
    bool m_periodHasBeenSet;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet;

    Statistic m_statistic;
    bool m_statisticHasBeenSet;

    Aws::Vector<Dimension> m_dimensions;
    bool m_dimensionsHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
