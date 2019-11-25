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
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <note> <p>This is the latest version of <b>AWS WAF</b>, named AWS WAFV2,
   * released in November, 2019. For information, including how to migrate your AWS
   * WAF resources from the prior release, see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. </p> </note> <p>Defines and enables Amazon CloudWatch
   * metrics and web request sample collection. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/VisibilityConfig">AWS
   * API Reference</a></p>
   */
  class AWS_WAFV2_API VisibilityConfig
  {
  public:
    VisibilityConfig();
    VisibilityConfig(Aws::Utils::Json::JsonView jsonValue);
    VisibilityConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A boolean indicating whether AWS WAF should store a sampling of the web
     * requests that match the rules. You can view the sampled requests through the AWS
     * WAF console. </p>
     */
    inline bool GetSampledRequestsEnabled() const{ return m_sampledRequestsEnabled; }

    /**
     * <p>A boolean indicating whether AWS WAF should store a sampling of the web
     * requests that match the rules. You can view the sampled requests through the AWS
     * WAF console. </p>
     */
    inline bool SampledRequestsEnabledHasBeenSet() const { return m_sampledRequestsEnabledHasBeenSet; }

    /**
     * <p>A boolean indicating whether AWS WAF should store a sampling of the web
     * requests that match the rules. You can view the sampled requests through the AWS
     * WAF console. </p>
     */
    inline void SetSampledRequestsEnabled(bool value) { m_sampledRequestsEnabledHasBeenSet = true; m_sampledRequestsEnabled = value; }

    /**
     * <p>A boolean indicating whether AWS WAF should store a sampling of the web
     * requests that match the rules. You can view the sampled requests through the AWS
     * WAF console. </p>
     */
    inline VisibilityConfig& WithSampledRequestsEnabled(bool value) { SetSampledRequestsEnabled(value); return *this;}


    /**
     * <p>A boolean indicating whether the associated resource sends metrics to
     * CloudWatch. For the list of available metrics, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/monitoring-cloudwatch.html#waf-metrics">AWS
     * WAF Metrics</a>.</p>
     */
    inline bool GetCloudWatchMetricsEnabled() const{ return m_cloudWatchMetricsEnabled; }

    /**
     * <p>A boolean indicating whether the associated resource sends metrics to
     * CloudWatch. For the list of available metrics, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/monitoring-cloudwatch.html#waf-metrics">AWS
     * WAF Metrics</a>.</p>
     */
    inline bool CloudWatchMetricsEnabledHasBeenSet() const { return m_cloudWatchMetricsEnabledHasBeenSet; }

    /**
     * <p>A boolean indicating whether the associated resource sends metrics to
     * CloudWatch. For the list of available metrics, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/monitoring-cloudwatch.html#waf-metrics">AWS
     * WAF Metrics</a>.</p>
     */
    inline void SetCloudWatchMetricsEnabled(bool value) { m_cloudWatchMetricsEnabledHasBeenSet = true; m_cloudWatchMetricsEnabled = value; }

    /**
     * <p>A boolean indicating whether the associated resource sends metrics to
     * CloudWatch. For the list of available metrics, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/monitoring-cloudwatch.html#waf-metrics">AWS
     * WAF Metrics</a>.</p>
     */
    inline VisibilityConfig& WithCloudWatchMetricsEnabled(bool value) { SetCloudWatchMetricsEnabled(value); return *this;}


    /**
     * <p>A friendly name of the CloudWatch metric. The name can contain only
     * alphanumeric characters (A-Z, a-z, 0-9), with length from one to 128 characters.
     * It can't contain whitespace or metric names reserved for AWS WAF, for example
     * "All" and "Default_Action." You can't change a <code>MetricName</code> after you
     * create a <code>VisibilityConfig</code>.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>A friendly name of the CloudWatch metric. The name can contain only
     * alphanumeric characters (A-Z, a-z, 0-9), with length from one to 128 characters.
     * It can't contain whitespace or metric names reserved for AWS WAF, for example
     * "All" and "Default_Action." You can't change a <code>MetricName</code> after you
     * create a <code>VisibilityConfig</code>.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>A friendly name of the CloudWatch metric. The name can contain only
     * alphanumeric characters (A-Z, a-z, 0-9), with length from one to 128 characters.
     * It can't contain whitespace or metric names reserved for AWS WAF, for example
     * "All" and "Default_Action." You can't change a <code>MetricName</code> after you
     * create a <code>VisibilityConfig</code>.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>A friendly name of the CloudWatch metric. The name can contain only
     * alphanumeric characters (A-Z, a-z, 0-9), with length from one to 128 characters.
     * It can't contain whitespace or metric names reserved for AWS WAF, for example
     * "All" and "Default_Action." You can't change a <code>MetricName</code> after you
     * create a <code>VisibilityConfig</code>.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>A friendly name of the CloudWatch metric. The name can contain only
     * alphanumeric characters (A-Z, a-z, 0-9), with length from one to 128 characters.
     * It can't contain whitespace or metric names reserved for AWS WAF, for example
     * "All" and "Default_Action." You can't change a <code>MetricName</code> after you
     * create a <code>VisibilityConfig</code>.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>A friendly name of the CloudWatch metric. The name can contain only
     * alphanumeric characters (A-Z, a-z, 0-9), with length from one to 128 characters.
     * It can't contain whitespace or metric names reserved for AWS WAF, for example
     * "All" and "Default_Action." You can't change a <code>MetricName</code> after you
     * create a <code>VisibilityConfig</code>.</p>
     */
    inline VisibilityConfig& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>A friendly name of the CloudWatch metric. The name can contain only
     * alphanumeric characters (A-Z, a-z, 0-9), with length from one to 128 characters.
     * It can't contain whitespace or metric names reserved for AWS WAF, for example
     * "All" and "Default_Action." You can't change a <code>MetricName</code> after you
     * create a <code>VisibilityConfig</code>.</p>
     */
    inline VisibilityConfig& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>A friendly name of the CloudWatch metric. The name can contain only
     * alphanumeric characters (A-Z, a-z, 0-9), with length from one to 128 characters.
     * It can't contain whitespace or metric names reserved for AWS WAF, for example
     * "All" and "Default_Action." You can't change a <code>MetricName</code> after you
     * create a <code>VisibilityConfig</code>.</p>
     */
    inline VisibilityConfig& WithMetricName(const char* value) { SetMetricName(value); return *this;}

  private:

    bool m_sampledRequestsEnabled;
    bool m_sampledRequestsEnabledHasBeenSet;

    bool m_cloudWatchMetricsEnabled;
    bool m_cloudWatchMetricsEnabledHasBeenSet;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
