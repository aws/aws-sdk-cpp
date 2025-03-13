/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Describes an action that captures a CloudWatch metric.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CloudwatchMetricAction">AWS
   * API Reference</a></p>
   */
  class CloudwatchMetricAction
  {
  public:
    AWS_IOT_API CloudwatchMetricAction() = default;
    AWS_IOT_API CloudwatchMetricAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API CloudwatchMetricAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IAM role that allows access to the CloudWatch metric.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CloudwatchMetricAction& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CloudWatch metric namespace name.</p>
     */
    inline const Aws::String& GetMetricNamespace() const { return m_metricNamespace; }
    inline bool MetricNamespaceHasBeenSet() const { return m_metricNamespaceHasBeenSet; }
    template<typename MetricNamespaceT = Aws::String>
    void SetMetricNamespace(MetricNamespaceT&& value) { m_metricNamespaceHasBeenSet = true; m_metricNamespace = std::forward<MetricNamespaceT>(value); }
    template<typename MetricNamespaceT = Aws::String>
    CloudwatchMetricAction& WithMetricNamespace(MetricNamespaceT&& value) { SetMetricNamespace(std::forward<MetricNamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CloudWatch metric name.</p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    CloudwatchMetricAction& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CloudWatch metric value.</p>
     */
    inline const Aws::String& GetMetricValue() const { return m_metricValue; }
    inline bool MetricValueHasBeenSet() const { return m_metricValueHasBeenSet; }
    template<typename MetricValueT = Aws::String>
    void SetMetricValue(MetricValueT&& value) { m_metricValueHasBeenSet = true; m_metricValue = std::forward<MetricValueT>(value); }
    template<typename MetricValueT = Aws::String>
    CloudwatchMetricAction& WithMetricValue(MetricValueT&& value) { SetMetricValue(std::forward<MetricValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/cloudwatch_concepts.html#Unit">metric
     * unit</a> supported by CloudWatch.</p>
     */
    inline const Aws::String& GetMetricUnit() const { return m_metricUnit; }
    inline bool MetricUnitHasBeenSet() const { return m_metricUnitHasBeenSet; }
    template<typename MetricUnitT = Aws::String>
    void SetMetricUnit(MetricUnitT&& value) { m_metricUnitHasBeenSet = true; m_metricUnit = std::forward<MetricUnitT>(value); }
    template<typename MetricUnitT = Aws::String>
    CloudwatchMetricAction& WithMetricUnit(MetricUnitT&& value) { SetMetricUnit(std::forward<MetricUnitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/cloudwatch_concepts.html#about_timestamp">Unix
     * timestamp</a>.</p>
     */
    inline const Aws::String& GetMetricTimestamp() const { return m_metricTimestamp; }
    inline bool MetricTimestampHasBeenSet() const { return m_metricTimestampHasBeenSet; }
    template<typename MetricTimestampT = Aws::String>
    void SetMetricTimestamp(MetricTimestampT&& value) { m_metricTimestampHasBeenSet = true; m_metricTimestamp = std::forward<MetricTimestampT>(value); }
    template<typename MetricTimestampT = Aws::String>
    CloudwatchMetricAction& WithMetricTimestamp(MetricTimestampT&& value) { SetMetricTimestamp(std::forward<MetricTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_metricNamespace;
    bool m_metricNamespaceHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_metricValue;
    bool m_metricValueHasBeenSet = false;

    Aws::String m_metricUnit;
    bool m_metricUnitHasBeenSet = false;

    Aws::String m_metricTimestamp;
    bool m_metricTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
