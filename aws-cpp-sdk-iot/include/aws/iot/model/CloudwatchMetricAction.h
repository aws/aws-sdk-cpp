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
  class AWS_IOT_API CloudwatchMetricAction
  {
  public:
    CloudwatchMetricAction();
    CloudwatchMetricAction(Aws::Utils::Json::JsonView jsonValue);
    CloudwatchMetricAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IAM role that allows access to the CloudWatch metric.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The IAM role that allows access to the CloudWatch metric.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The IAM role that allows access to the CloudWatch metric.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The IAM role that allows access to the CloudWatch metric.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The IAM role that allows access to the CloudWatch metric.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The IAM role that allows access to the CloudWatch metric.</p>
     */
    inline CloudwatchMetricAction& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The IAM role that allows access to the CloudWatch metric.</p>
     */
    inline CloudwatchMetricAction& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM role that allows access to the CloudWatch metric.</p>
     */
    inline CloudwatchMetricAction& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The CloudWatch metric namespace name.</p>
     */
    inline const Aws::String& GetMetricNamespace() const{ return m_metricNamespace; }

    /**
     * <p>The CloudWatch metric namespace name.</p>
     */
    inline bool MetricNamespaceHasBeenSet() const { return m_metricNamespaceHasBeenSet; }

    /**
     * <p>The CloudWatch metric namespace name.</p>
     */
    inline void SetMetricNamespace(const Aws::String& value) { m_metricNamespaceHasBeenSet = true; m_metricNamespace = value; }

    /**
     * <p>The CloudWatch metric namespace name.</p>
     */
    inline void SetMetricNamespace(Aws::String&& value) { m_metricNamespaceHasBeenSet = true; m_metricNamespace = std::move(value); }

    /**
     * <p>The CloudWatch metric namespace name.</p>
     */
    inline void SetMetricNamespace(const char* value) { m_metricNamespaceHasBeenSet = true; m_metricNamespace.assign(value); }

    /**
     * <p>The CloudWatch metric namespace name.</p>
     */
    inline CloudwatchMetricAction& WithMetricNamespace(const Aws::String& value) { SetMetricNamespace(value); return *this;}

    /**
     * <p>The CloudWatch metric namespace name.</p>
     */
    inline CloudwatchMetricAction& WithMetricNamespace(Aws::String&& value) { SetMetricNamespace(std::move(value)); return *this;}

    /**
     * <p>The CloudWatch metric namespace name.</p>
     */
    inline CloudwatchMetricAction& WithMetricNamespace(const char* value) { SetMetricNamespace(value); return *this;}


    /**
     * <p>The CloudWatch metric name.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The CloudWatch metric name.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The CloudWatch metric name.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The CloudWatch metric name.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The CloudWatch metric name.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The CloudWatch metric name.</p>
     */
    inline CloudwatchMetricAction& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The CloudWatch metric name.</p>
     */
    inline CloudwatchMetricAction& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The CloudWatch metric name.</p>
     */
    inline CloudwatchMetricAction& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The CloudWatch metric value.</p>
     */
    inline const Aws::String& GetMetricValue() const{ return m_metricValue; }

    /**
     * <p>The CloudWatch metric value.</p>
     */
    inline bool MetricValueHasBeenSet() const { return m_metricValueHasBeenSet; }

    /**
     * <p>The CloudWatch metric value.</p>
     */
    inline void SetMetricValue(const Aws::String& value) { m_metricValueHasBeenSet = true; m_metricValue = value; }

    /**
     * <p>The CloudWatch metric value.</p>
     */
    inline void SetMetricValue(Aws::String&& value) { m_metricValueHasBeenSet = true; m_metricValue = std::move(value); }

    /**
     * <p>The CloudWatch metric value.</p>
     */
    inline void SetMetricValue(const char* value) { m_metricValueHasBeenSet = true; m_metricValue.assign(value); }

    /**
     * <p>The CloudWatch metric value.</p>
     */
    inline CloudwatchMetricAction& WithMetricValue(const Aws::String& value) { SetMetricValue(value); return *this;}

    /**
     * <p>The CloudWatch metric value.</p>
     */
    inline CloudwatchMetricAction& WithMetricValue(Aws::String&& value) { SetMetricValue(std::move(value)); return *this;}

    /**
     * <p>The CloudWatch metric value.</p>
     */
    inline CloudwatchMetricAction& WithMetricValue(const char* value) { SetMetricValue(value); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/cloudwatch_concepts.html#Unit">metric
     * unit</a> supported by CloudWatch.</p>
     */
    inline const Aws::String& GetMetricUnit() const{ return m_metricUnit; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/cloudwatch_concepts.html#Unit">metric
     * unit</a> supported by CloudWatch.</p>
     */
    inline bool MetricUnitHasBeenSet() const { return m_metricUnitHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/cloudwatch_concepts.html#Unit">metric
     * unit</a> supported by CloudWatch.</p>
     */
    inline void SetMetricUnit(const Aws::String& value) { m_metricUnitHasBeenSet = true; m_metricUnit = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/cloudwatch_concepts.html#Unit">metric
     * unit</a> supported by CloudWatch.</p>
     */
    inline void SetMetricUnit(Aws::String&& value) { m_metricUnitHasBeenSet = true; m_metricUnit = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/cloudwatch_concepts.html#Unit">metric
     * unit</a> supported by CloudWatch.</p>
     */
    inline void SetMetricUnit(const char* value) { m_metricUnitHasBeenSet = true; m_metricUnit.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/cloudwatch_concepts.html#Unit">metric
     * unit</a> supported by CloudWatch.</p>
     */
    inline CloudwatchMetricAction& WithMetricUnit(const Aws::String& value) { SetMetricUnit(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/cloudwatch_concepts.html#Unit">metric
     * unit</a> supported by CloudWatch.</p>
     */
    inline CloudwatchMetricAction& WithMetricUnit(Aws::String&& value) { SetMetricUnit(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/cloudwatch_concepts.html#Unit">metric
     * unit</a> supported by CloudWatch.</p>
     */
    inline CloudwatchMetricAction& WithMetricUnit(const char* value) { SetMetricUnit(value); return *this;}


    /**
     * <p>An optional <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/cloudwatch_concepts.html#about_timestamp">Unix
     * timestamp</a>.</p>
     */
    inline const Aws::String& GetMetricTimestamp() const{ return m_metricTimestamp; }

    /**
     * <p>An optional <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/cloudwatch_concepts.html#about_timestamp">Unix
     * timestamp</a>.</p>
     */
    inline bool MetricTimestampHasBeenSet() const { return m_metricTimestampHasBeenSet; }

    /**
     * <p>An optional <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/cloudwatch_concepts.html#about_timestamp">Unix
     * timestamp</a>.</p>
     */
    inline void SetMetricTimestamp(const Aws::String& value) { m_metricTimestampHasBeenSet = true; m_metricTimestamp = value; }

    /**
     * <p>An optional <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/cloudwatch_concepts.html#about_timestamp">Unix
     * timestamp</a>.</p>
     */
    inline void SetMetricTimestamp(Aws::String&& value) { m_metricTimestampHasBeenSet = true; m_metricTimestamp = std::move(value); }

    /**
     * <p>An optional <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/cloudwatch_concepts.html#about_timestamp">Unix
     * timestamp</a>.</p>
     */
    inline void SetMetricTimestamp(const char* value) { m_metricTimestampHasBeenSet = true; m_metricTimestamp.assign(value); }

    /**
     * <p>An optional <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/cloudwatch_concepts.html#about_timestamp">Unix
     * timestamp</a>.</p>
     */
    inline CloudwatchMetricAction& WithMetricTimestamp(const Aws::String& value) { SetMetricTimestamp(value); return *this;}

    /**
     * <p>An optional <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/cloudwatch_concepts.html#about_timestamp">Unix
     * timestamp</a>.</p>
     */
    inline CloudwatchMetricAction& WithMetricTimestamp(Aws::String&& value) { SetMetricTimestamp(std::move(value)); return *this;}

    /**
     * <p>An optional <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/cloudwatch_concepts.html#about_timestamp">Unix
     * timestamp</a>.</p>
     */
    inline CloudwatchMetricAction& WithMetricTimestamp(const char* value) { SetMetricTimestamp(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::String m_metricNamespace;
    bool m_metricNamespaceHasBeenSet;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet;

    Aws::String m_metricValue;
    bool m_metricValueHasBeenSet;

    Aws::String m_metricUnit;
    bool m_metricUnitHasBeenSet;

    Aws::String m_metricTimestamp;
    bool m_metricTimestampHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
