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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/ComparisonOperator.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/Statistic.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/model/Dimension.h>

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
   * <p>For CLOUDWATCH_METRIC health checks, a complex type that contains information
   * about the CloudWatch alarm that you're associating with the health check.</p>
   */
  class AWS_ROUTE53_API CloudWatchAlarmConfiguration
  {
  public:
    CloudWatchAlarmConfiguration();
    CloudWatchAlarmConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    CloudWatchAlarmConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * <p>The number of periods over which data is compared to the specified
     * threshold.</p>
     */
    inline long GetEvaluationPeriods() const{ return m_evaluationPeriods; }

    /**
     * <p>The number of periods over which data is compared to the specified
     * threshold.</p>
     */
    inline void SetEvaluationPeriods(long value) { m_evaluationPeriodsHasBeenSet = true; m_evaluationPeriods = value; }

    /**
     * <p>The number of periods over which data is compared to the specified
     * threshold.</p>
     */
    inline CloudWatchAlarmConfiguration& WithEvaluationPeriods(long value) { SetEvaluationPeriods(value); return *this;}

    /**
     * <p>The value that the metric is compared with to determine the state of the
     * alarm. For example, if you want the health check to fail if the average TCP
     * connection time is greater than 500 milliseconds for more than 60 seconds, the
     * threshold is 500.</p>
     */
    inline double GetThreshold() const{ return m_threshold; }

    /**
     * <p>The value that the metric is compared with to determine the state of the
     * alarm. For example, if you want the health check to fail if the average TCP
     * connection time is greater than 500 milliseconds for more than 60 seconds, the
     * threshold is 500.</p>
     */
    inline void SetThreshold(double value) { m_thresholdHasBeenSet = true; m_threshold = value; }

    /**
     * <p>The value that the metric is compared with to determine the state of the
     * alarm. For example, if you want the health check to fail if the average TCP
     * connection time is greater than 500 milliseconds for more than 60 seconds, the
     * threshold is 500.</p>
     */
    inline CloudWatchAlarmConfiguration& WithThreshold(double value) { SetThreshold(value); return *this;}

    /**
     * <p>The arithmetic operation to use when comparing the specified Statistic and
     * Threshold.</p> <p>Valid Values are <code>GreaterThanOrEqualToThreshold</code>,
     * <code>GreaterThanThreshold</code>, <code>LessThanThreshold</code> and
     * <code>LessThanOrEqualToThreshold</code></p>
     */
    inline const ComparisonOperator& GetComparisonOperator() const{ return m_comparisonOperator; }

    /**
     * <p>The arithmetic operation to use when comparing the specified Statistic and
     * Threshold.</p> <p>Valid Values are <code>GreaterThanOrEqualToThreshold</code>,
     * <code>GreaterThanThreshold</code>, <code>LessThanThreshold</code> and
     * <code>LessThanOrEqualToThreshold</code></p>
     */
    inline void SetComparisonOperator(const ComparisonOperator& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }

    /**
     * <p>The arithmetic operation to use when comparing the specified Statistic and
     * Threshold.</p> <p>Valid Values are <code>GreaterThanOrEqualToThreshold</code>,
     * <code>GreaterThanThreshold</code>, <code>LessThanThreshold</code> and
     * <code>LessThanOrEqualToThreshold</code></p>
     */
    inline void SetComparisonOperator(ComparisonOperator&& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }

    /**
     * <p>The arithmetic operation to use when comparing the specified Statistic and
     * Threshold.</p> <p>Valid Values are <code>GreaterThanOrEqualToThreshold</code>,
     * <code>GreaterThanThreshold</code>, <code>LessThanThreshold</code> and
     * <code>LessThanOrEqualToThreshold</code></p>
     */
    inline CloudWatchAlarmConfiguration& WithComparisonOperator(const ComparisonOperator& value) { SetComparisonOperator(value); return *this;}

    /**
     * <p>The arithmetic operation to use when comparing the specified Statistic and
     * Threshold.</p> <p>Valid Values are <code>GreaterThanOrEqualToThreshold</code>,
     * <code>GreaterThanThreshold</code>, <code>LessThanThreshold</code> and
     * <code>LessThanOrEqualToThreshold</code></p>
     */
    inline CloudWatchAlarmConfiguration& WithComparisonOperator(ComparisonOperator&& value) { SetComparisonOperator(value); return *this;}

    /**
     * <p>An integer that represents the period in seconds over which the statistic is
     * applied.</p>
     */
    inline long GetPeriod() const{ return m_period; }

    /**
     * <p>An integer that represents the period in seconds over which the statistic is
     * applied.</p>
     */
    inline void SetPeriod(long value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>An integer that represents the period in seconds over which the statistic is
     * applied.</p>
     */
    inline CloudWatchAlarmConfiguration& WithPeriod(long value) { SetPeriod(value); return *this;}

    /**
     * <p>The name of the CloudWatch metric that is associated with the CloudWatch
     * alarm.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the CloudWatch metric that is associated with the CloudWatch
     * alarm.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the CloudWatch metric that is associated with the CloudWatch
     * alarm.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the CloudWatch metric that is associated with the CloudWatch
     * alarm.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The name of the CloudWatch metric that is associated with the CloudWatch
     * alarm.</p>
     */
    inline CloudWatchAlarmConfiguration& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the CloudWatch metric that is associated with the CloudWatch
     * alarm.</p>
     */
    inline CloudWatchAlarmConfiguration& WithMetricName(Aws::String&& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the CloudWatch metric that is associated with the CloudWatch
     * alarm.</p>
     */
    inline CloudWatchAlarmConfiguration& WithMetricName(const char* value) { SetMetricName(value); return *this;}

    /**
     * <p>The namespace of the CloudWatch metric that is associated with the CloudWatch
     * alarm.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace of the CloudWatch metric that is associated with the CloudWatch
     * alarm.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace of the CloudWatch metric that is associated with the CloudWatch
     * alarm.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace of the CloudWatch metric that is associated with the CloudWatch
     * alarm.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace of the CloudWatch metric that is associated with the CloudWatch
     * alarm.</p>
     */
    inline CloudWatchAlarmConfiguration& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace of the CloudWatch metric that is associated with the CloudWatch
     * alarm.</p>
     */
    inline CloudWatchAlarmConfiguration& WithNamespace(Aws::String&& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace of the CloudWatch metric that is associated with the CloudWatch
     * alarm.</p>
     */
    inline CloudWatchAlarmConfiguration& WithNamespace(const char* value) { SetNamespace(value); return *this;}

    /**
     * <p>The statistic to apply to the CloudWatch metric that is associated with the
     * CloudWatch alarm.</p> <p>Valid Values are <code>SampleCount</code>,
     * <code>Average</code>, <code>Sum</code>, <code>Minimum</code> and
     * <code>Maximum</code></p>
     */
    inline const Statistic& GetStatistic() const{ return m_statistic; }

    /**
     * <p>The statistic to apply to the CloudWatch metric that is associated with the
     * CloudWatch alarm.</p> <p>Valid Values are <code>SampleCount</code>,
     * <code>Average</code>, <code>Sum</code>, <code>Minimum</code> and
     * <code>Maximum</code></p>
     */
    inline void SetStatistic(const Statistic& value) { m_statisticHasBeenSet = true; m_statistic = value; }

    /**
     * <p>The statistic to apply to the CloudWatch metric that is associated with the
     * CloudWatch alarm.</p> <p>Valid Values are <code>SampleCount</code>,
     * <code>Average</code>, <code>Sum</code>, <code>Minimum</code> and
     * <code>Maximum</code></p>
     */
    inline void SetStatistic(Statistic&& value) { m_statisticHasBeenSet = true; m_statistic = value; }

    /**
     * <p>The statistic to apply to the CloudWatch metric that is associated with the
     * CloudWatch alarm.</p> <p>Valid Values are <code>SampleCount</code>,
     * <code>Average</code>, <code>Sum</code>, <code>Minimum</code> and
     * <code>Maximum</code></p>
     */
    inline CloudWatchAlarmConfiguration& WithStatistic(const Statistic& value) { SetStatistic(value); return *this;}

    /**
     * <p>The statistic to apply to the CloudWatch metric that is associated with the
     * CloudWatch alarm.</p> <p>Valid Values are <code>SampleCount</code>,
     * <code>Average</code>, <code>Sum</code>, <code>Minimum</code> and
     * <code>Maximum</code></p>
     */
    inline CloudWatchAlarmConfiguration& WithStatistic(Statistic&& value) { SetStatistic(value); return *this;}

    /**
     * <p>A list of <code>Dimension</code> elements for the CloudWatch metric that is
     * associated with the CloudWatch alarm. For information about the metrics and
     * dimensions that CloudWatch supports, see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/CW_Support_For_AWS.html">Amazon
     * CloudWatch Namespaces, Dimensions, and Metrics Reference</a>.</p>
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>A list of <code>Dimension</code> elements for the CloudWatch metric that is
     * associated with the CloudWatch alarm. For information about the metrics and
     * dimensions that CloudWatch supports, see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/CW_Support_For_AWS.html">Amazon
     * CloudWatch Namespaces, Dimensions, and Metrics Reference</a>.</p>
     */
    inline void SetDimensions(const Aws::Vector<Dimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>A list of <code>Dimension</code> elements for the CloudWatch metric that is
     * associated with the CloudWatch alarm. For information about the metrics and
     * dimensions that CloudWatch supports, see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/CW_Support_For_AWS.html">Amazon
     * CloudWatch Namespaces, Dimensions, and Metrics Reference</a>.</p>
     */
    inline void SetDimensions(Aws::Vector<Dimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>A list of <code>Dimension</code> elements for the CloudWatch metric that is
     * associated with the CloudWatch alarm. For information about the metrics and
     * dimensions that CloudWatch supports, see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/CW_Support_For_AWS.html">Amazon
     * CloudWatch Namespaces, Dimensions, and Metrics Reference</a>.</p>
     */
    inline CloudWatchAlarmConfiguration& WithDimensions(const Aws::Vector<Dimension>& value) { SetDimensions(value); return *this;}

    /**
     * <p>A list of <code>Dimension</code> elements for the CloudWatch metric that is
     * associated with the CloudWatch alarm. For information about the metrics and
     * dimensions that CloudWatch supports, see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/CW_Support_For_AWS.html">Amazon
     * CloudWatch Namespaces, Dimensions, and Metrics Reference</a>.</p>
     */
    inline CloudWatchAlarmConfiguration& WithDimensions(Aws::Vector<Dimension>&& value) { SetDimensions(value); return *this;}

    /**
     * <p>A list of <code>Dimension</code> elements for the CloudWatch metric that is
     * associated with the CloudWatch alarm. For information about the metrics and
     * dimensions that CloudWatch supports, see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/CW_Support_For_AWS.html">Amazon
     * CloudWatch Namespaces, Dimensions, and Metrics Reference</a>.</p>
     */
    inline CloudWatchAlarmConfiguration& AddDimensions(const Dimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p>A list of <code>Dimension</code> elements for the CloudWatch metric that is
     * associated with the CloudWatch alarm. For information about the metrics and
     * dimensions that CloudWatch supports, see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/CW_Support_For_AWS.html">Amazon
     * CloudWatch Namespaces, Dimensions, and Metrics Reference</a>.</p>
     */
    inline CloudWatchAlarmConfiguration& AddDimensions(Dimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

  private:
    long m_evaluationPeriods;
    bool m_evaluationPeriodsHasBeenSet;
    double m_threshold;
    bool m_thresholdHasBeenSet;
    ComparisonOperator m_comparisonOperator;
    bool m_comparisonOperatorHasBeenSet;
    long m_period;
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
