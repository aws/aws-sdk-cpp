/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/application-insights/model/LogFilter.h>
#include <aws/application-insights/model/CloudWatchEventSource.h>
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
namespace ApplicationInsights
{
namespace Model
{

  /**
   * <p>Describes an anomaly or error with the application.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/Observation">AWS
   * API Reference</a></p>
   */
  class Observation
  {
  public:
    AWS_APPLICATIONINSIGHTS_API Observation();
    AWS_APPLICATIONINSIGHTS_API Observation(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONINSIGHTS_API Observation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONINSIGHTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the observation type.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the observation type.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the observation type.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the observation type.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the observation type.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the observation type.</p>
     */
    inline Observation& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the observation type.</p>
     */
    inline Observation& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the observation type.</p>
     */
    inline Observation& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The time when the observation was first detected, in epoch seconds.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time when the observation was first detected, in epoch seconds.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time when the observation was first detected, in epoch seconds.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time when the observation was first detected, in epoch seconds.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time when the observation was first detected, in epoch seconds.</p>
     */
    inline Observation& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time when the observation was first detected, in epoch seconds.</p>
     */
    inline Observation& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The time when the observation ended, in epoch seconds.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time when the observation ended, in epoch seconds.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The time when the observation ended, in epoch seconds.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time when the observation ended, in epoch seconds.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The time when the observation ended, in epoch seconds.</p>
     */
    inline Observation& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time when the observation ended, in epoch seconds.</p>
     */
    inline Observation& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The source type of the observation.</p>
     */
    inline const Aws::String& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>The source type of the observation.</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>The source type of the observation.</p>
     */
    inline void SetSourceType(const Aws::String& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The source type of the observation.</p>
     */
    inline void SetSourceType(Aws::String&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>The source type of the observation.</p>
     */
    inline void SetSourceType(const char* value) { m_sourceTypeHasBeenSet = true; m_sourceType.assign(value); }

    /**
     * <p>The source type of the observation.</p>
     */
    inline Observation& WithSourceType(const Aws::String& value) { SetSourceType(value); return *this;}

    /**
     * <p>The source type of the observation.</p>
     */
    inline Observation& WithSourceType(Aws::String&& value) { SetSourceType(std::move(value)); return *this;}

    /**
     * <p>The source type of the observation.</p>
     */
    inline Observation& WithSourceType(const char* value) { SetSourceType(value); return *this;}


    /**
     * <p>The source resource ARN of the observation.</p>
     */
    inline const Aws::String& GetSourceARN() const{ return m_sourceARN; }

    /**
     * <p>The source resource ARN of the observation.</p>
     */
    inline bool SourceARNHasBeenSet() const { return m_sourceARNHasBeenSet; }

    /**
     * <p>The source resource ARN of the observation.</p>
     */
    inline void SetSourceARN(const Aws::String& value) { m_sourceARNHasBeenSet = true; m_sourceARN = value; }

    /**
     * <p>The source resource ARN of the observation.</p>
     */
    inline void SetSourceARN(Aws::String&& value) { m_sourceARNHasBeenSet = true; m_sourceARN = std::move(value); }

    /**
     * <p>The source resource ARN of the observation.</p>
     */
    inline void SetSourceARN(const char* value) { m_sourceARNHasBeenSet = true; m_sourceARN.assign(value); }

    /**
     * <p>The source resource ARN of the observation.</p>
     */
    inline Observation& WithSourceARN(const Aws::String& value) { SetSourceARN(value); return *this;}

    /**
     * <p>The source resource ARN of the observation.</p>
     */
    inline Observation& WithSourceARN(Aws::String&& value) { SetSourceARN(std::move(value)); return *this;}

    /**
     * <p>The source resource ARN of the observation.</p>
     */
    inline Observation& WithSourceARN(const char* value) { SetSourceARN(value); return *this;}


    /**
     * <p>The log group name.</p>
     */
    inline const Aws::String& GetLogGroup() const{ return m_logGroup; }

    /**
     * <p>The log group name.</p>
     */
    inline bool LogGroupHasBeenSet() const { return m_logGroupHasBeenSet; }

    /**
     * <p>The log group name.</p>
     */
    inline void SetLogGroup(const Aws::String& value) { m_logGroupHasBeenSet = true; m_logGroup = value; }

    /**
     * <p>The log group name.</p>
     */
    inline void SetLogGroup(Aws::String&& value) { m_logGroupHasBeenSet = true; m_logGroup = std::move(value); }

    /**
     * <p>The log group name.</p>
     */
    inline void SetLogGroup(const char* value) { m_logGroupHasBeenSet = true; m_logGroup.assign(value); }

    /**
     * <p>The log group name.</p>
     */
    inline Observation& WithLogGroup(const Aws::String& value) { SetLogGroup(value); return *this;}

    /**
     * <p>The log group name.</p>
     */
    inline Observation& WithLogGroup(Aws::String&& value) { SetLogGroup(std::move(value)); return *this;}

    /**
     * <p>The log group name.</p>
     */
    inline Observation& WithLogGroup(const char* value) { SetLogGroup(value); return *this;}


    /**
     * <p>The timestamp in the CloudWatch Logs that specifies when the matched line
     * occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetLineTime() const{ return m_lineTime; }

    /**
     * <p>The timestamp in the CloudWatch Logs that specifies when the matched line
     * occurred.</p>
     */
    inline bool LineTimeHasBeenSet() const { return m_lineTimeHasBeenSet; }

    /**
     * <p>The timestamp in the CloudWatch Logs that specifies when the matched line
     * occurred.</p>
     */
    inline void SetLineTime(const Aws::Utils::DateTime& value) { m_lineTimeHasBeenSet = true; m_lineTime = value; }

    /**
     * <p>The timestamp in the CloudWatch Logs that specifies when the matched line
     * occurred.</p>
     */
    inline void SetLineTime(Aws::Utils::DateTime&& value) { m_lineTimeHasBeenSet = true; m_lineTime = std::move(value); }

    /**
     * <p>The timestamp in the CloudWatch Logs that specifies when the matched line
     * occurred.</p>
     */
    inline Observation& WithLineTime(const Aws::Utils::DateTime& value) { SetLineTime(value); return *this;}

    /**
     * <p>The timestamp in the CloudWatch Logs that specifies when the matched line
     * occurred.</p>
     */
    inline Observation& WithLineTime(Aws::Utils::DateTime&& value) { SetLineTime(std::move(value)); return *this;}


    /**
     * <p>The log text of the observation.</p>
     */
    inline const Aws::String& GetLogText() const{ return m_logText; }

    /**
     * <p>The log text of the observation.</p>
     */
    inline bool LogTextHasBeenSet() const { return m_logTextHasBeenSet; }

    /**
     * <p>The log text of the observation.</p>
     */
    inline void SetLogText(const Aws::String& value) { m_logTextHasBeenSet = true; m_logText = value; }

    /**
     * <p>The log text of the observation.</p>
     */
    inline void SetLogText(Aws::String&& value) { m_logTextHasBeenSet = true; m_logText = std::move(value); }

    /**
     * <p>The log text of the observation.</p>
     */
    inline void SetLogText(const char* value) { m_logTextHasBeenSet = true; m_logText.assign(value); }

    /**
     * <p>The log text of the observation.</p>
     */
    inline Observation& WithLogText(const Aws::String& value) { SetLogText(value); return *this;}

    /**
     * <p>The log text of the observation.</p>
     */
    inline Observation& WithLogText(Aws::String&& value) { SetLogText(std::move(value)); return *this;}

    /**
     * <p>The log text of the observation.</p>
     */
    inline Observation& WithLogText(const char* value) { SetLogText(value); return *this;}


    /**
     * <p>The log filter of the observation.</p>
     */
    inline const LogFilter& GetLogFilter() const{ return m_logFilter; }

    /**
     * <p>The log filter of the observation.</p>
     */
    inline bool LogFilterHasBeenSet() const { return m_logFilterHasBeenSet; }

    /**
     * <p>The log filter of the observation.</p>
     */
    inline void SetLogFilter(const LogFilter& value) { m_logFilterHasBeenSet = true; m_logFilter = value; }

    /**
     * <p>The log filter of the observation.</p>
     */
    inline void SetLogFilter(LogFilter&& value) { m_logFilterHasBeenSet = true; m_logFilter = std::move(value); }

    /**
     * <p>The log filter of the observation.</p>
     */
    inline Observation& WithLogFilter(const LogFilter& value) { SetLogFilter(value); return *this;}

    /**
     * <p>The log filter of the observation.</p>
     */
    inline Observation& WithLogFilter(LogFilter&& value) { SetLogFilter(std::move(value)); return *this;}


    /**
     * <p>The namespace of the observation metric.</p>
     */
    inline const Aws::String& GetMetricNamespace() const{ return m_metricNamespace; }

    /**
     * <p>The namespace of the observation metric.</p>
     */
    inline bool MetricNamespaceHasBeenSet() const { return m_metricNamespaceHasBeenSet; }

    /**
     * <p>The namespace of the observation metric.</p>
     */
    inline void SetMetricNamespace(const Aws::String& value) { m_metricNamespaceHasBeenSet = true; m_metricNamespace = value; }

    /**
     * <p>The namespace of the observation metric.</p>
     */
    inline void SetMetricNamespace(Aws::String&& value) { m_metricNamespaceHasBeenSet = true; m_metricNamespace = std::move(value); }

    /**
     * <p>The namespace of the observation metric.</p>
     */
    inline void SetMetricNamespace(const char* value) { m_metricNamespaceHasBeenSet = true; m_metricNamespace.assign(value); }

    /**
     * <p>The namespace of the observation metric.</p>
     */
    inline Observation& WithMetricNamespace(const Aws::String& value) { SetMetricNamespace(value); return *this;}

    /**
     * <p>The namespace of the observation metric.</p>
     */
    inline Observation& WithMetricNamespace(Aws::String&& value) { SetMetricNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the observation metric.</p>
     */
    inline Observation& WithMetricNamespace(const char* value) { SetMetricNamespace(value); return *this;}


    /**
     * <p>The name of the observation metric.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the observation metric.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The name of the observation metric.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the observation metric.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The name of the observation metric.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The name of the observation metric.</p>
     */
    inline Observation& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the observation metric.</p>
     */
    inline Observation& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the observation metric.</p>
     */
    inline Observation& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The unit of the source observation metric.</p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit of the source observation metric.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit of the source observation metric.</p>
     */
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit of the source observation metric.</p>
     */
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit of the source observation metric.</p>
     */
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }

    /**
     * <p>The unit of the source observation metric.</p>
     */
    inline Observation& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit of the source observation metric.</p>
     */
    inline Observation& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}

    /**
     * <p>The unit of the source observation metric.</p>
     */
    inline Observation& WithUnit(const char* value) { SetUnit(value); return *this;}


    /**
     * <p>The value of the source observation metric.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The value of the source observation metric.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the source observation metric.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the source observation metric.</p>
     */
    inline Observation& WithValue(double value) { SetValue(value); return *this;}


    /**
     * <p> The ID of the CloudWatch Event-based observation related to the detected
     * problem. </p>
     */
    inline const Aws::String& GetCloudWatchEventId() const{ return m_cloudWatchEventId; }

    /**
     * <p> The ID of the CloudWatch Event-based observation related to the detected
     * problem. </p>
     */
    inline bool CloudWatchEventIdHasBeenSet() const { return m_cloudWatchEventIdHasBeenSet; }

    /**
     * <p> The ID of the CloudWatch Event-based observation related to the detected
     * problem. </p>
     */
    inline void SetCloudWatchEventId(const Aws::String& value) { m_cloudWatchEventIdHasBeenSet = true; m_cloudWatchEventId = value; }

    /**
     * <p> The ID of the CloudWatch Event-based observation related to the detected
     * problem. </p>
     */
    inline void SetCloudWatchEventId(Aws::String&& value) { m_cloudWatchEventIdHasBeenSet = true; m_cloudWatchEventId = std::move(value); }

    /**
     * <p> The ID of the CloudWatch Event-based observation related to the detected
     * problem. </p>
     */
    inline void SetCloudWatchEventId(const char* value) { m_cloudWatchEventIdHasBeenSet = true; m_cloudWatchEventId.assign(value); }

    /**
     * <p> The ID of the CloudWatch Event-based observation related to the detected
     * problem. </p>
     */
    inline Observation& WithCloudWatchEventId(const Aws::String& value) { SetCloudWatchEventId(value); return *this;}

    /**
     * <p> The ID of the CloudWatch Event-based observation related to the detected
     * problem. </p>
     */
    inline Observation& WithCloudWatchEventId(Aws::String&& value) { SetCloudWatchEventId(std::move(value)); return *this;}

    /**
     * <p> The ID of the CloudWatch Event-based observation related to the detected
     * problem. </p>
     */
    inline Observation& WithCloudWatchEventId(const char* value) { SetCloudWatchEventId(value); return *this;}


    /**
     * <p> The source of the CloudWatch Event. </p>
     */
    inline const CloudWatchEventSource& GetCloudWatchEventSource() const{ return m_cloudWatchEventSource; }

    /**
     * <p> The source of the CloudWatch Event. </p>
     */
    inline bool CloudWatchEventSourceHasBeenSet() const { return m_cloudWatchEventSourceHasBeenSet; }

    /**
     * <p> The source of the CloudWatch Event. </p>
     */
    inline void SetCloudWatchEventSource(const CloudWatchEventSource& value) { m_cloudWatchEventSourceHasBeenSet = true; m_cloudWatchEventSource = value; }

    /**
     * <p> The source of the CloudWatch Event. </p>
     */
    inline void SetCloudWatchEventSource(CloudWatchEventSource&& value) { m_cloudWatchEventSourceHasBeenSet = true; m_cloudWatchEventSource = std::move(value); }

    /**
     * <p> The source of the CloudWatch Event. </p>
     */
    inline Observation& WithCloudWatchEventSource(const CloudWatchEventSource& value) { SetCloudWatchEventSource(value); return *this;}

    /**
     * <p> The source of the CloudWatch Event. </p>
     */
    inline Observation& WithCloudWatchEventSource(CloudWatchEventSource&& value) { SetCloudWatchEventSource(std::move(value)); return *this;}


    /**
     * <p> The detail type of the CloudWatch Event-based observation, for example,
     * <code>EC2 Instance State-change Notification</code>. </p>
     */
    inline const Aws::String& GetCloudWatchEventDetailType() const{ return m_cloudWatchEventDetailType; }

    /**
     * <p> The detail type of the CloudWatch Event-based observation, for example,
     * <code>EC2 Instance State-change Notification</code>. </p>
     */
    inline bool CloudWatchEventDetailTypeHasBeenSet() const { return m_cloudWatchEventDetailTypeHasBeenSet; }

    /**
     * <p> The detail type of the CloudWatch Event-based observation, for example,
     * <code>EC2 Instance State-change Notification</code>. </p>
     */
    inline void SetCloudWatchEventDetailType(const Aws::String& value) { m_cloudWatchEventDetailTypeHasBeenSet = true; m_cloudWatchEventDetailType = value; }

    /**
     * <p> The detail type of the CloudWatch Event-based observation, for example,
     * <code>EC2 Instance State-change Notification</code>. </p>
     */
    inline void SetCloudWatchEventDetailType(Aws::String&& value) { m_cloudWatchEventDetailTypeHasBeenSet = true; m_cloudWatchEventDetailType = std::move(value); }

    /**
     * <p> The detail type of the CloudWatch Event-based observation, for example,
     * <code>EC2 Instance State-change Notification</code>. </p>
     */
    inline void SetCloudWatchEventDetailType(const char* value) { m_cloudWatchEventDetailTypeHasBeenSet = true; m_cloudWatchEventDetailType.assign(value); }

    /**
     * <p> The detail type of the CloudWatch Event-based observation, for example,
     * <code>EC2 Instance State-change Notification</code>. </p>
     */
    inline Observation& WithCloudWatchEventDetailType(const Aws::String& value) { SetCloudWatchEventDetailType(value); return *this;}

    /**
     * <p> The detail type of the CloudWatch Event-based observation, for example,
     * <code>EC2 Instance State-change Notification</code>. </p>
     */
    inline Observation& WithCloudWatchEventDetailType(Aws::String&& value) { SetCloudWatchEventDetailType(std::move(value)); return *this;}

    /**
     * <p> The detail type of the CloudWatch Event-based observation, for example,
     * <code>EC2 Instance State-change Notification</code>. </p>
     */
    inline Observation& WithCloudWatchEventDetailType(const char* value) { SetCloudWatchEventDetailType(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the AWS Health Event-based
     * observation.</p>
     */
    inline const Aws::String& GetHealthEventArn() const{ return m_healthEventArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the AWS Health Event-based
     * observation.</p>
     */
    inline bool HealthEventArnHasBeenSet() const { return m_healthEventArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the AWS Health Event-based
     * observation.</p>
     */
    inline void SetHealthEventArn(const Aws::String& value) { m_healthEventArnHasBeenSet = true; m_healthEventArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the AWS Health Event-based
     * observation.</p>
     */
    inline void SetHealthEventArn(Aws::String&& value) { m_healthEventArnHasBeenSet = true; m_healthEventArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the AWS Health Event-based
     * observation.</p>
     */
    inline void SetHealthEventArn(const char* value) { m_healthEventArnHasBeenSet = true; m_healthEventArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the AWS Health Event-based
     * observation.</p>
     */
    inline Observation& WithHealthEventArn(const Aws::String& value) { SetHealthEventArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the AWS Health Event-based
     * observation.</p>
     */
    inline Observation& WithHealthEventArn(Aws::String&& value) { SetHealthEventArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the AWS Health Event-based
     * observation.</p>
     */
    inline Observation& WithHealthEventArn(const char* value) { SetHealthEventArn(value); return *this;}


    /**
     * <p> The service to which the AWS Health Event belongs, such as EC2. </p>
     */
    inline const Aws::String& GetHealthService() const{ return m_healthService; }

    /**
     * <p> The service to which the AWS Health Event belongs, such as EC2. </p>
     */
    inline bool HealthServiceHasBeenSet() const { return m_healthServiceHasBeenSet; }

    /**
     * <p> The service to which the AWS Health Event belongs, such as EC2. </p>
     */
    inline void SetHealthService(const Aws::String& value) { m_healthServiceHasBeenSet = true; m_healthService = value; }

    /**
     * <p> The service to which the AWS Health Event belongs, such as EC2. </p>
     */
    inline void SetHealthService(Aws::String&& value) { m_healthServiceHasBeenSet = true; m_healthService = std::move(value); }

    /**
     * <p> The service to which the AWS Health Event belongs, such as EC2. </p>
     */
    inline void SetHealthService(const char* value) { m_healthServiceHasBeenSet = true; m_healthService.assign(value); }

    /**
     * <p> The service to which the AWS Health Event belongs, such as EC2. </p>
     */
    inline Observation& WithHealthService(const Aws::String& value) { SetHealthService(value); return *this;}

    /**
     * <p> The service to which the AWS Health Event belongs, such as EC2. </p>
     */
    inline Observation& WithHealthService(Aws::String&& value) { SetHealthService(std::move(value)); return *this;}

    /**
     * <p> The service to which the AWS Health Event belongs, such as EC2. </p>
     */
    inline Observation& WithHealthService(const char* value) { SetHealthService(value); return *this;}


    /**
     * <p> The type of the AWS Health event, for example,
     * <code>AWS_EC2_POWER_CONNECTIVITY_ISSUE</code>. </p>
     */
    inline const Aws::String& GetHealthEventTypeCode() const{ return m_healthEventTypeCode; }

    /**
     * <p> The type of the AWS Health event, for example,
     * <code>AWS_EC2_POWER_CONNECTIVITY_ISSUE</code>. </p>
     */
    inline bool HealthEventTypeCodeHasBeenSet() const { return m_healthEventTypeCodeHasBeenSet; }

    /**
     * <p> The type of the AWS Health event, for example,
     * <code>AWS_EC2_POWER_CONNECTIVITY_ISSUE</code>. </p>
     */
    inline void SetHealthEventTypeCode(const Aws::String& value) { m_healthEventTypeCodeHasBeenSet = true; m_healthEventTypeCode = value; }

    /**
     * <p> The type of the AWS Health event, for example,
     * <code>AWS_EC2_POWER_CONNECTIVITY_ISSUE</code>. </p>
     */
    inline void SetHealthEventTypeCode(Aws::String&& value) { m_healthEventTypeCodeHasBeenSet = true; m_healthEventTypeCode = std::move(value); }

    /**
     * <p> The type of the AWS Health event, for example,
     * <code>AWS_EC2_POWER_CONNECTIVITY_ISSUE</code>. </p>
     */
    inline void SetHealthEventTypeCode(const char* value) { m_healthEventTypeCodeHasBeenSet = true; m_healthEventTypeCode.assign(value); }

    /**
     * <p> The type of the AWS Health event, for example,
     * <code>AWS_EC2_POWER_CONNECTIVITY_ISSUE</code>. </p>
     */
    inline Observation& WithHealthEventTypeCode(const Aws::String& value) { SetHealthEventTypeCode(value); return *this;}

    /**
     * <p> The type of the AWS Health event, for example,
     * <code>AWS_EC2_POWER_CONNECTIVITY_ISSUE</code>. </p>
     */
    inline Observation& WithHealthEventTypeCode(Aws::String&& value) { SetHealthEventTypeCode(std::move(value)); return *this;}

    /**
     * <p> The type of the AWS Health event, for example,
     * <code>AWS_EC2_POWER_CONNECTIVITY_ISSUE</code>. </p>
     */
    inline Observation& WithHealthEventTypeCode(const char* value) { SetHealthEventTypeCode(value); return *this;}


    /**
     * <p> The category of the AWS Health event, such as <code>issue</code>. </p>
     */
    inline const Aws::String& GetHealthEventTypeCategory() const{ return m_healthEventTypeCategory; }

    /**
     * <p> The category of the AWS Health event, such as <code>issue</code>. </p>
     */
    inline bool HealthEventTypeCategoryHasBeenSet() const { return m_healthEventTypeCategoryHasBeenSet; }

    /**
     * <p> The category of the AWS Health event, such as <code>issue</code>. </p>
     */
    inline void SetHealthEventTypeCategory(const Aws::String& value) { m_healthEventTypeCategoryHasBeenSet = true; m_healthEventTypeCategory = value; }

    /**
     * <p> The category of the AWS Health event, such as <code>issue</code>. </p>
     */
    inline void SetHealthEventTypeCategory(Aws::String&& value) { m_healthEventTypeCategoryHasBeenSet = true; m_healthEventTypeCategory = std::move(value); }

    /**
     * <p> The category of the AWS Health event, such as <code>issue</code>. </p>
     */
    inline void SetHealthEventTypeCategory(const char* value) { m_healthEventTypeCategoryHasBeenSet = true; m_healthEventTypeCategory.assign(value); }

    /**
     * <p> The category of the AWS Health event, such as <code>issue</code>. </p>
     */
    inline Observation& WithHealthEventTypeCategory(const Aws::String& value) { SetHealthEventTypeCategory(value); return *this;}

    /**
     * <p> The category of the AWS Health event, such as <code>issue</code>. </p>
     */
    inline Observation& WithHealthEventTypeCategory(Aws::String&& value) { SetHealthEventTypeCategory(std::move(value)); return *this;}

    /**
     * <p> The category of the AWS Health event, such as <code>issue</code>. </p>
     */
    inline Observation& WithHealthEventTypeCategory(const char* value) { SetHealthEventTypeCategory(value); return *this;}


    /**
     * <p> The description of the AWS Health event provided by the service, such as
     * Amazon EC2. </p>
     */
    inline const Aws::String& GetHealthEventDescription() const{ return m_healthEventDescription; }

    /**
     * <p> The description of the AWS Health event provided by the service, such as
     * Amazon EC2. </p>
     */
    inline bool HealthEventDescriptionHasBeenSet() const { return m_healthEventDescriptionHasBeenSet; }

    /**
     * <p> The description of the AWS Health event provided by the service, such as
     * Amazon EC2. </p>
     */
    inline void SetHealthEventDescription(const Aws::String& value) { m_healthEventDescriptionHasBeenSet = true; m_healthEventDescription = value; }

    /**
     * <p> The description of the AWS Health event provided by the service, such as
     * Amazon EC2. </p>
     */
    inline void SetHealthEventDescription(Aws::String&& value) { m_healthEventDescriptionHasBeenSet = true; m_healthEventDescription = std::move(value); }

    /**
     * <p> The description of the AWS Health event provided by the service, such as
     * Amazon EC2. </p>
     */
    inline void SetHealthEventDescription(const char* value) { m_healthEventDescriptionHasBeenSet = true; m_healthEventDescription.assign(value); }

    /**
     * <p> The description of the AWS Health event provided by the service, such as
     * Amazon EC2. </p>
     */
    inline Observation& WithHealthEventDescription(const Aws::String& value) { SetHealthEventDescription(value); return *this;}

    /**
     * <p> The description of the AWS Health event provided by the service, such as
     * Amazon EC2. </p>
     */
    inline Observation& WithHealthEventDescription(Aws::String&& value) { SetHealthEventDescription(std::move(value)); return *this;}

    /**
     * <p> The description of the AWS Health event provided by the service, such as
     * Amazon EC2. </p>
     */
    inline Observation& WithHealthEventDescription(const char* value) { SetHealthEventDescription(value); return *this;}


    /**
     * <p> The deployment ID of the CodeDeploy-based observation related to the
     * detected problem. </p>
     */
    inline const Aws::String& GetCodeDeployDeploymentId() const{ return m_codeDeployDeploymentId; }

    /**
     * <p> The deployment ID of the CodeDeploy-based observation related to the
     * detected problem. </p>
     */
    inline bool CodeDeployDeploymentIdHasBeenSet() const { return m_codeDeployDeploymentIdHasBeenSet; }

    /**
     * <p> The deployment ID of the CodeDeploy-based observation related to the
     * detected problem. </p>
     */
    inline void SetCodeDeployDeploymentId(const Aws::String& value) { m_codeDeployDeploymentIdHasBeenSet = true; m_codeDeployDeploymentId = value; }

    /**
     * <p> The deployment ID of the CodeDeploy-based observation related to the
     * detected problem. </p>
     */
    inline void SetCodeDeployDeploymentId(Aws::String&& value) { m_codeDeployDeploymentIdHasBeenSet = true; m_codeDeployDeploymentId = std::move(value); }

    /**
     * <p> The deployment ID of the CodeDeploy-based observation related to the
     * detected problem. </p>
     */
    inline void SetCodeDeployDeploymentId(const char* value) { m_codeDeployDeploymentIdHasBeenSet = true; m_codeDeployDeploymentId.assign(value); }

    /**
     * <p> The deployment ID of the CodeDeploy-based observation related to the
     * detected problem. </p>
     */
    inline Observation& WithCodeDeployDeploymentId(const Aws::String& value) { SetCodeDeployDeploymentId(value); return *this;}

    /**
     * <p> The deployment ID of the CodeDeploy-based observation related to the
     * detected problem. </p>
     */
    inline Observation& WithCodeDeployDeploymentId(Aws::String&& value) { SetCodeDeployDeploymentId(std::move(value)); return *this;}

    /**
     * <p> The deployment ID of the CodeDeploy-based observation related to the
     * detected problem. </p>
     */
    inline Observation& WithCodeDeployDeploymentId(const char* value) { SetCodeDeployDeploymentId(value); return *this;}


    /**
     * <p> The deployment group to which the CodeDeploy deployment belongs. </p>
     */
    inline const Aws::String& GetCodeDeployDeploymentGroup() const{ return m_codeDeployDeploymentGroup; }

    /**
     * <p> The deployment group to which the CodeDeploy deployment belongs. </p>
     */
    inline bool CodeDeployDeploymentGroupHasBeenSet() const { return m_codeDeployDeploymentGroupHasBeenSet; }

    /**
     * <p> The deployment group to which the CodeDeploy deployment belongs. </p>
     */
    inline void SetCodeDeployDeploymentGroup(const Aws::String& value) { m_codeDeployDeploymentGroupHasBeenSet = true; m_codeDeployDeploymentGroup = value; }

    /**
     * <p> The deployment group to which the CodeDeploy deployment belongs. </p>
     */
    inline void SetCodeDeployDeploymentGroup(Aws::String&& value) { m_codeDeployDeploymentGroupHasBeenSet = true; m_codeDeployDeploymentGroup = std::move(value); }

    /**
     * <p> The deployment group to which the CodeDeploy deployment belongs. </p>
     */
    inline void SetCodeDeployDeploymentGroup(const char* value) { m_codeDeployDeploymentGroupHasBeenSet = true; m_codeDeployDeploymentGroup.assign(value); }

    /**
     * <p> The deployment group to which the CodeDeploy deployment belongs. </p>
     */
    inline Observation& WithCodeDeployDeploymentGroup(const Aws::String& value) { SetCodeDeployDeploymentGroup(value); return *this;}

    /**
     * <p> The deployment group to which the CodeDeploy deployment belongs. </p>
     */
    inline Observation& WithCodeDeployDeploymentGroup(Aws::String&& value) { SetCodeDeployDeploymentGroup(std::move(value)); return *this;}

    /**
     * <p> The deployment group to which the CodeDeploy deployment belongs. </p>
     */
    inline Observation& WithCodeDeployDeploymentGroup(const char* value) { SetCodeDeployDeploymentGroup(value); return *this;}


    /**
     * <p> The status of the CodeDeploy deployment, for example <code>SUCCESS</code> or
     * <code> FAILURE</code>. </p>
     */
    inline const Aws::String& GetCodeDeployState() const{ return m_codeDeployState; }

    /**
     * <p> The status of the CodeDeploy deployment, for example <code>SUCCESS</code> or
     * <code> FAILURE</code>. </p>
     */
    inline bool CodeDeployStateHasBeenSet() const { return m_codeDeployStateHasBeenSet; }

    /**
     * <p> The status of the CodeDeploy deployment, for example <code>SUCCESS</code> or
     * <code> FAILURE</code>. </p>
     */
    inline void SetCodeDeployState(const Aws::String& value) { m_codeDeployStateHasBeenSet = true; m_codeDeployState = value; }

    /**
     * <p> The status of the CodeDeploy deployment, for example <code>SUCCESS</code> or
     * <code> FAILURE</code>. </p>
     */
    inline void SetCodeDeployState(Aws::String&& value) { m_codeDeployStateHasBeenSet = true; m_codeDeployState = std::move(value); }

    /**
     * <p> The status of the CodeDeploy deployment, for example <code>SUCCESS</code> or
     * <code> FAILURE</code>. </p>
     */
    inline void SetCodeDeployState(const char* value) { m_codeDeployStateHasBeenSet = true; m_codeDeployState.assign(value); }

    /**
     * <p> The status of the CodeDeploy deployment, for example <code>SUCCESS</code> or
     * <code> FAILURE</code>. </p>
     */
    inline Observation& WithCodeDeployState(const Aws::String& value) { SetCodeDeployState(value); return *this;}

    /**
     * <p> The status of the CodeDeploy deployment, for example <code>SUCCESS</code> or
     * <code> FAILURE</code>. </p>
     */
    inline Observation& WithCodeDeployState(Aws::String&& value) { SetCodeDeployState(std::move(value)); return *this;}

    /**
     * <p> The status of the CodeDeploy deployment, for example <code>SUCCESS</code> or
     * <code> FAILURE</code>. </p>
     */
    inline Observation& WithCodeDeployState(const char* value) { SetCodeDeployState(value); return *this;}


    /**
     * <p> The CodeDeploy application to which the deployment belongs. </p>
     */
    inline const Aws::String& GetCodeDeployApplication() const{ return m_codeDeployApplication; }

    /**
     * <p> The CodeDeploy application to which the deployment belongs. </p>
     */
    inline bool CodeDeployApplicationHasBeenSet() const { return m_codeDeployApplicationHasBeenSet; }

    /**
     * <p> The CodeDeploy application to which the deployment belongs. </p>
     */
    inline void SetCodeDeployApplication(const Aws::String& value) { m_codeDeployApplicationHasBeenSet = true; m_codeDeployApplication = value; }

    /**
     * <p> The CodeDeploy application to which the deployment belongs. </p>
     */
    inline void SetCodeDeployApplication(Aws::String&& value) { m_codeDeployApplicationHasBeenSet = true; m_codeDeployApplication = std::move(value); }

    /**
     * <p> The CodeDeploy application to which the deployment belongs. </p>
     */
    inline void SetCodeDeployApplication(const char* value) { m_codeDeployApplicationHasBeenSet = true; m_codeDeployApplication.assign(value); }

    /**
     * <p> The CodeDeploy application to which the deployment belongs. </p>
     */
    inline Observation& WithCodeDeployApplication(const Aws::String& value) { SetCodeDeployApplication(value); return *this;}

    /**
     * <p> The CodeDeploy application to which the deployment belongs. </p>
     */
    inline Observation& WithCodeDeployApplication(Aws::String&& value) { SetCodeDeployApplication(std::move(value)); return *this;}

    /**
     * <p> The CodeDeploy application to which the deployment belongs. </p>
     */
    inline Observation& WithCodeDeployApplication(const char* value) { SetCodeDeployApplication(value); return *this;}


    /**
     * <p> The instance group to which the CodeDeploy instance belongs. </p>
     */
    inline const Aws::String& GetCodeDeployInstanceGroupId() const{ return m_codeDeployInstanceGroupId; }

    /**
     * <p> The instance group to which the CodeDeploy instance belongs. </p>
     */
    inline bool CodeDeployInstanceGroupIdHasBeenSet() const { return m_codeDeployInstanceGroupIdHasBeenSet; }

    /**
     * <p> The instance group to which the CodeDeploy instance belongs. </p>
     */
    inline void SetCodeDeployInstanceGroupId(const Aws::String& value) { m_codeDeployInstanceGroupIdHasBeenSet = true; m_codeDeployInstanceGroupId = value; }

    /**
     * <p> The instance group to which the CodeDeploy instance belongs. </p>
     */
    inline void SetCodeDeployInstanceGroupId(Aws::String&& value) { m_codeDeployInstanceGroupIdHasBeenSet = true; m_codeDeployInstanceGroupId = std::move(value); }

    /**
     * <p> The instance group to which the CodeDeploy instance belongs. </p>
     */
    inline void SetCodeDeployInstanceGroupId(const char* value) { m_codeDeployInstanceGroupIdHasBeenSet = true; m_codeDeployInstanceGroupId.assign(value); }

    /**
     * <p> The instance group to which the CodeDeploy instance belongs. </p>
     */
    inline Observation& WithCodeDeployInstanceGroupId(const Aws::String& value) { SetCodeDeployInstanceGroupId(value); return *this;}

    /**
     * <p> The instance group to which the CodeDeploy instance belongs. </p>
     */
    inline Observation& WithCodeDeployInstanceGroupId(Aws::String&& value) { SetCodeDeployInstanceGroupId(std::move(value)); return *this;}

    /**
     * <p> The instance group to which the CodeDeploy instance belongs. </p>
     */
    inline Observation& WithCodeDeployInstanceGroupId(const char* value) { SetCodeDeployInstanceGroupId(value); return *this;}


    /**
     * <p> The state of the instance, such as <code>STOPPING</code> or
     * <code>TERMINATING</code>. </p>
     */
    inline const Aws::String& GetEc2State() const{ return m_ec2State; }

    /**
     * <p> The state of the instance, such as <code>STOPPING</code> or
     * <code>TERMINATING</code>. </p>
     */
    inline bool Ec2StateHasBeenSet() const { return m_ec2StateHasBeenSet; }

    /**
     * <p> The state of the instance, such as <code>STOPPING</code> or
     * <code>TERMINATING</code>. </p>
     */
    inline void SetEc2State(const Aws::String& value) { m_ec2StateHasBeenSet = true; m_ec2State = value; }

    /**
     * <p> The state of the instance, such as <code>STOPPING</code> or
     * <code>TERMINATING</code>. </p>
     */
    inline void SetEc2State(Aws::String&& value) { m_ec2StateHasBeenSet = true; m_ec2State = std::move(value); }

    /**
     * <p> The state of the instance, such as <code>STOPPING</code> or
     * <code>TERMINATING</code>. </p>
     */
    inline void SetEc2State(const char* value) { m_ec2StateHasBeenSet = true; m_ec2State.assign(value); }

    /**
     * <p> The state of the instance, such as <code>STOPPING</code> or
     * <code>TERMINATING</code>. </p>
     */
    inline Observation& WithEc2State(const Aws::String& value) { SetEc2State(value); return *this;}

    /**
     * <p> The state of the instance, such as <code>STOPPING</code> or
     * <code>TERMINATING</code>. </p>
     */
    inline Observation& WithEc2State(Aws::String&& value) { SetEc2State(std::move(value)); return *this;}

    /**
     * <p> The state of the instance, such as <code>STOPPING</code> or
     * <code>TERMINATING</code>. </p>
     */
    inline Observation& WithEc2State(const char* value) { SetEc2State(value); return *this;}


    /**
     * <p> The category of an RDS event. </p>
     */
    inline const Aws::String& GetRdsEventCategories() const{ return m_rdsEventCategories; }

    /**
     * <p> The category of an RDS event. </p>
     */
    inline bool RdsEventCategoriesHasBeenSet() const { return m_rdsEventCategoriesHasBeenSet; }

    /**
     * <p> The category of an RDS event. </p>
     */
    inline void SetRdsEventCategories(const Aws::String& value) { m_rdsEventCategoriesHasBeenSet = true; m_rdsEventCategories = value; }

    /**
     * <p> The category of an RDS event. </p>
     */
    inline void SetRdsEventCategories(Aws::String&& value) { m_rdsEventCategoriesHasBeenSet = true; m_rdsEventCategories = std::move(value); }

    /**
     * <p> The category of an RDS event. </p>
     */
    inline void SetRdsEventCategories(const char* value) { m_rdsEventCategoriesHasBeenSet = true; m_rdsEventCategories.assign(value); }

    /**
     * <p> The category of an RDS event. </p>
     */
    inline Observation& WithRdsEventCategories(const Aws::String& value) { SetRdsEventCategories(value); return *this;}

    /**
     * <p> The category of an RDS event. </p>
     */
    inline Observation& WithRdsEventCategories(Aws::String&& value) { SetRdsEventCategories(std::move(value)); return *this;}

    /**
     * <p> The category of an RDS event. </p>
     */
    inline Observation& WithRdsEventCategories(const char* value) { SetRdsEventCategories(value); return *this;}


    /**
     * <p> The message of an RDS event. </p>
     */
    inline const Aws::String& GetRdsEventMessage() const{ return m_rdsEventMessage; }

    /**
     * <p> The message of an RDS event. </p>
     */
    inline bool RdsEventMessageHasBeenSet() const { return m_rdsEventMessageHasBeenSet; }

    /**
     * <p> The message of an RDS event. </p>
     */
    inline void SetRdsEventMessage(const Aws::String& value) { m_rdsEventMessageHasBeenSet = true; m_rdsEventMessage = value; }

    /**
     * <p> The message of an RDS event. </p>
     */
    inline void SetRdsEventMessage(Aws::String&& value) { m_rdsEventMessageHasBeenSet = true; m_rdsEventMessage = std::move(value); }

    /**
     * <p> The message of an RDS event. </p>
     */
    inline void SetRdsEventMessage(const char* value) { m_rdsEventMessageHasBeenSet = true; m_rdsEventMessage.assign(value); }

    /**
     * <p> The message of an RDS event. </p>
     */
    inline Observation& WithRdsEventMessage(const Aws::String& value) { SetRdsEventMessage(value); return *this;}

    /**
     * <p> The message of an RDS event. </p>
     */
    inline Observation& WithRdsEventMessage(Aws::String&& value) { SetRdsEventMessage(std::move(value)); return *this;}

    /**
     * <p> The message of an RDS event. </p>
     */
    inline Observation& WithRdsEventMessage(const char* value) { SetRdsEventMessage(value); return *this;}


    /**
     * <p> The name of the S3 CloudWatch Event-based observation. </p>
     */
    inline const Aws::String& GetS3EventName() const{ return m_s3EventName; }

    /**
     * <p> The name of the S3 CloudWatch Event-based observation. </p>
     */
    inline bool S3EventNameHasBeenSet() const { return m_s3EventNameHasBeenSet; }

    /**
     * <p> The name of the S3 CloudWatch Event-based observation. </p>
     */
    inline void SetS3EventName(const Aws::String& value) { m_s3EventNameHasBeenSet = true; m_s3EventName = value; }

    /**
     * <p> The name of the S3 CloudWatch Event-based observation. </p>
     */
    inline void SetS3EventName(Aws::String&& value) { m_s3EventNameHasBeenSet = true; m_s3EventName = std::move(value); }

    /**
     * <p> The name of the S3 CloudWatch Event-based observation. </p>
     */
    inline void SetS3EventName(const char* value) { m_s3EventNameHasBeenSet = true; m_s3EventName.assign(value); }

    /**
     * <p> The name of the S3 CloudWatch Event-based observation. </p>
     */
    inline Observation& WithS3EventName(const Aws::String& value) { SetS3EventName(value); return *this;}

    /**
     * <p> The name of the S3 CloudWatch Event-based observation. </p>
     */
    inline Observation& WithS3EventName(Aws::String&& value) { SetS3EventName(std::move(value)); return *this;}

    /**
     * <p> The name of the S3 CloudWatch Event-based observation. </p>
     */
    inline Observation& WithS3EventName(const char* value) { SetS3EventName(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the step function execution-based
     * observation. </p>
     */
    inline const Aws::String& GetStatesExecutionArn() const{ return m_statesExecutionArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the step function execution-based
     * observation. </p>
     */
    inline bool StatesExecutionArnHasBeenSet() const { return m_statesExecutionArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the step function execution-based
     * observation. </p>
     */
    inline void SetStatesExecutionArn(const Aws::String& value) { m_statesExecutionArnHasBeenSet = true; m_statesExecutionArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the step function execution-based
     * observation. </p>
     */
    inline void SetStatesExecutionArn(Aws::String&& value) { m_statesExecutionArnHasBeenSet = true; m_statesExecutionArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the step function execution-based
     * observation. </p>
     */
    inline void SetStatesExecutionArn(const char* value) { m_statesExecutionArnHasBeenSet = true; m_statesExecutionArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the step function execution-based
     * observation. </p>
     */
    inline Observation& WithStatesExecutionArn(const Aws::String& value) { SetStatesExecutionArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the step function execution-based
     * observation. </p>
     */
    inline Observation& WithStatesExecutionArn(Aws::String&& value) { SetStatesExecutionArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the step function execution-based
     * observation. </p>
     */
    inline Observation& WithStatesExecutionArn(const char* value) { SetStatesExecutionArn(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the step function-based observation. </p>
     */
    inline const Aws::String& GetStatesArn() const{ return m_statesArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the step function-based observation. </p>
     */
    inline bool StatesArnHasBeenSet() const { return m_statesArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the step function-based observation. </p>
     */
    inline void SetStatesArn(const Aws::String& value) { m_statesArnHasBeenSet = true; m_statesArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the step function-based observation. </p>
     */
    inline void SetStatesArn(Aws::String&& value) { m_statesArnHasBeenSet = true; m_statesArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the step function-based observation. </p>
     */
    inline void SetStatesArn(const char* value) { m_statesArnHasBeenSet = true; m_statesArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the step function-based observation. </p>
     */
    inline Observation& WithStatesArn(const Aws::String& value) { SetStatesArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the step function-based observation. </p>
     */
    inline Observation& WithStatesArn(Aws::String&& value) { SetStatesArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the step function-based observation. </p>
     */
    inline Observation& WithStatesArn(const char* value) { SetStatesArn(value); return *this;}


    /**
     * <p> The status of the step function-related observation. </p>
     */
    inline const Aws::String& GetStatesStatus() const{ return m_statesStatus; }

    /**
     * <p> The status of the step function-related observation. </p>
     */
    inline bool StatesStatusHasBeenSet() const { return m_statesStatusHasBeenSet; }

    /**
     * <p> The status of the step function-related observation. </p>
     */
    inline void SetStatesStatus(const Aws::String& value) { m_statesStatusHasBeenSet = true; m_statesStatus = value; }

    /**
     * <p> The status of the step function-related observation. </p>
     */
    inline void SetStatesStatus(Aws::String&& value) { m_statesStatusHasBeenSet = true; m_statesStatus = std::move(value); }

    /**
     * <p> The status of the step function-related observation. </p>
     */
    inline void SetStatesStatus(const char* value) { m_statesStatusHasBeenSet = true; m_statesStatus.assign(value); }

    /**
     * <p> The status of the step function-related observation. </p>
     */
    inline Observation& WithStatesStatus(const Aws::String& value) { SetStatesStatus(value); return *this;}

    /**
     * <p> The status of the step function-related observation. </p>
     */
    inline Observation& WithStatesStatus(Aws::String&& value) { SetStatesStatus(std::move(value)); return *this;}

    /**
     * <p> The status of the step function-related observation. </p>
     */
    inline Observation& WithStatesStatus(const char* value) { SetStatesStatus(value); return *this;}


    /**
     * <p> The input to the step function-based observation. </p>
     */
    inline const Aws::String& GetStatesInput() const{ return m_statesInput; }

    /**
     * <p> The input to the step function-based observation. </p>
     */
    inline bool StatesInputHasBeenSet() const { return m_statesInputHasBeenSet; }

    /**
     * <p> The input to the step function-based observation. </p>
     */
    inline void SetStatesInput(const Aws::String& value) { m_statesInputHasBeenSet = true; m_statesInput = value; }

    /**
     * <p> The input to the step function-based observation. </p>
     */
    inline void SetStatesInput(Aws::String&& value) { m_statesInputHasBeenSet = true; m_statesInput = std::move(value); }

    /**
     * <p> The input to the step function-based observation. </p>
     */
    inline void SetStatesInput(const char* value) { m_statesInputHasBeenSet = true; m_statesInput.assign(value); }

    /**
     * <p> The input to the step function-based observation. </p>
     */
    inline Observation& WithStatesInput(const Aws::String& value) { SetStatesInput(value); return *this;}

    /**
     * <p> The input to the step function-based observation. </p>
     */
    inline Observation& WithStatesInput(Aws::String&& value) { SetStatesInput(std::move(value)); return *this;}

    /**
     * <p> The input to the step function-based observation. </p>
     */
    inline Observation& WithStatesInput(const char* value) { SetStatesInput(value); return *this;}


    /**
     * <p> The type of EBS CloudWatch event, such as <code>createVolume</code>,
     * <code>deleteVolume</code> or <code>attachVolume</code>. </p>
     */
    inline const Aws::String& GetEbsEvent() const{ return m_ebsEvent; }

    /**
     * <p> The type of EBS CloudWatch event, such as <code>createVolume</code>,
     * <code>deleteVolume</code> or <code>attachVolume</code>. </p>
     */
    inline bool EbsEventHasBeenSet() const { return m_ebsEventHasBeenSet; }

    /**
     * <p> The type of EBS CloudWatch event, such as <code>createVolume</code>,
     * <code>deleteVolume</code> or <code>attachVolume</code>. </p>
     */
    inline void SetEbsEvent(const Aws::String& value) { m_ebsEventHasBeenSet = true; m_ebsEvent = value; }

    /**
     * <p> The type of EBS CloudWatch event, such as <code>createVolume</code>,
     * <code>deleteVolume</code> or <code>attachVolume</code>. </p>
     */
    inline void SetEbsEvent(Aws::String&& value) { m_ebsEventHasBeenSet = true; m_ebsEvent = std::move(value); }

    /**
     * <p> The type of EBS CloudWatch event, such as <code>createVolume</code>,
     * <code>deleteVolume</code> or <code>attachVolume</code>. </p>
     */
    inline void SetEbsEvent(const char* value) { m_ebsEventHasBeenSet = true; m_ebsEvent.assign(value); }

    /**
     * <p> The type of EBS CloudWatch event, such as <code>createVolume</code>,
     * <code>deleteVolume</code> or <code>attachVolume</code>. </p>
     */
    inline Observation& WithEbsEvent(const Aws::String& value) { SetEbsEvent(value); return *this;}

    /**
     * <p> The type of EBS CloudWatch event, such as <code>createVolume</code>,
     * <code>deleteVolume</code> or <code>attachVolume</code>. </p>
     */
    inline Observation& WithEbsEvent(Aws::String&& value) { SetEbsEvent(std::move(value)); return *this;}

    /**
     * <p> The type of EBS CloudWatch event, such as <code>createVolume</code>,
     * <code>deleteVolume</code> or <code>attachVolume</code>. </p>
     */
    inline Observation& WithEbsEvent(const char* value) { SetEbsEvent(value); return *this;}


    /**
     * <p> The result of an EBS CloudWatch event, such as <code>failed</code> or
     * <code>succeeded</code>. </p>
     */
    inline const Aws::String& GetEbsResult() const{ return m_ebsResult; }

    /**
     * <p> The result of an EBS CloudWatch event, such as <code>failed</code> or
     * <code>succeeded</code>. </p>
     */
    inline bool EbsResultHasBeenSet() const { return m_ebsResultHasBeenSet; }

    /**
     * <p> The result of an EBS CloudWatch event, such as <code>failed</code> or
     * <code>succeeded</code>. </p>
     */
    inline void SetEbsResult(const Aws::String& value) { m_ebsResultHasBeenSet = true; m_ebsResult = value; }

    /**
     * <p> The result of an EBS CloudWatch event, such as <code>failed</code> or
     * <code>succeeded</code>. </p>
     */
    inline void SetEbsResult(Aws::String&& value) { m_ebsResultHasBeenSet = true; m_ebsResult = std::move(value); }

    /**
     * <p> The result of an EBS CloudWatch event, such as <code>failed</code> or
     * <code>succeeded</code>. </p>
     */
    inline void SetEbsResult(const char* value) { m_ebsResultHasBeenSet = true; m_ebsResult.assign(value); }

    /**
     * <p> The result of an EBS CloudWatch event, such as <code>failed</code> or
     * <code>succeeded</code>. </p>
     */
    inline Observation& WithEbsResult(const Aws::String& value) { SetEbsResult(value); return *this;}

    /**
     * <p> The result of an EBS CloudWatch event, such as <code>failed</code> or
     * <code>succeeded</code>. </p>
     */
    inline Observation& WithEbsResult(Aws::String&& value) { SetEbsResult(std::move(value)); return *this;}

    /**
     * <p> The result of an EBS CloudWatch event, such as <code>failed</code> or
     * <code>succeeded</code>. </p>
     */
    inline Observation& WithEbsResult(const char* value) { SetEbsResult(value); return *this;}


    /**
     * <p> The cause of an EBS CloudWatch event. </p>
     */
    inline const Aws::String& GetEbsCause() const{ return m_ebsCause; }

    /**
     * <p> The cause of an EBS CloudWatch event. </p>
     */
    inline bool EbsCauseHasBeenSet() const { return m_ebsCauseHasBeenSet; }

    /**
     * <p> The cause of an EBS CloudWatch event. </p>
     */
    inline void SetEbsCause(const Aws::String& value) { m_ebsCauseHasBeenSet = true; m_ebsCause = value; }

    /**
     * <p> The cause of an EBS CloudWatch event. </p>
     */
    inline void SetEbsCause(Aws::String&& value) { m_ebsCauseHasBeenSet = true; m_ebsCause = std::move(value); }

    /**
     * <p> The cause of an EBS CloudWatch event. </p>
     */
    inline void SetEbsCause(const char* value) { m_ebsCauseHasBeenSet = true; m_ebsCause.assign(value); }

    /**
     * <p> The cause of an EBS CloudWatch event. </p>
     */
    inline Observation& WithEbsCause(const Aws::String& value) { SetEbsCause(value); return *this;}

    /**
     * <p> The cause of an EBS CloudWatch event. </p>
     */
    inline Observation& WithEbsCause(Aws::String&& value) { SetEbsCause(std::move(value)); return *this;}

    /**
     * <p> The cause of an EBS CloudWatch event. </p>
     */
    inline Observation& WithEbsCause(const char* value) { SetEbsCause(value); return *this;}


    /**
     * <p> The request ID of an EBS CloudWatch event. </p>
     */
    inline const Aws::String& GetEbsRequestId() const{ return m_ebsRequestId; }

    /**
     * <p> The request ID of an EBS CloudWatch event. </p>
     */
    inline bool EbsRequestIdHasBeenSet() const { return m_ebsRequestIdHasBeenSet; }

    /**
     * <p> The request ID of an EBS CloudWatch event. </p>
     */
    inline void SetEbsRequestId(const Aws::String& value) { m_ebsRequestIdHasBeenSet = true; m_ebsRequestId = value; }

    /**
     * <p> The request ID of an EBS CloudWatch event. </p>
     */
    inline void SetEbsRequestId(Aws::String&& value) { m_ebsRequestIdHasBeenSet = true; m_ebsRequestId = std::move(value); }

    /**
     * <p> The request ID of an EBS CloudWatch event. </p>
     */
    inline void SetEbsRequestId(const char* value) { m_ebsRequestIdHasBeenSet = true; m_ebsRequestId.assign(value); }

    /**
     * <p> The request ID of an EBS CloudWatch event. </p>
     */
    inline Observation& WithEbsRequestId(const Aws::String& value) { SetEbsRequestId(value); return *this;}

    /**
     * <p> The request ID of an EBS CloudWatch event. </p>
     */
    inline Observation& WithEbsRequestId(Aws::String&& value) { SetEbsRequestId(std::move(value)); return *this;}

    /**
     * <p> The request ID of an EBS CloudWatch event. </p>
     */
    inline Observation& WithEbsRequestId(const char* value) { SetEbsRequestId(value); return *this;}


    /**
     * <p> The X-Ray request fault percentage for this node. </p>
     */
    inline int GetXRayFaultPercent() const{ return m_xRayFaultPercent; }

    /**
     * <p> The X-Ray request fault percentage for this node. </p>
     */
    inline bool XRayFaultPercentHasBeenSet() const { return m_xRayFaultPercentHasBeenSet; }

    /**
     * <p> The X-Ray request fault percentage for this node. </p>
     */
    inline void SetXRayFaultPercent(int value) { m_xRayFaultPercentHasBeenSet = true; m_xRayFaultPercent = value; }

    /**
     * <p> The X-Ray request fault percentage for this node. </p>
     */
    inline Observation& WithXRayFaultPercent(int value) { SetXRayFaultPercent(value); return *this;}


    /**
     * <p> The X-Ray request throttle percentage for this node. </p>
     */
    inline int GetXRayThrottlePercent() const{ return m_xRayThrottlePercent; }

    /**
     * <p> The X-Ray request throttle percentage for this node. </p>
     */
    inline bool XRayThrottlePercentHasBeenSet() const { return m_xRayThrottlePercentHasBeenSet; }

    /**
     * <p> The X-Ray request throttle percentage for this node. </p>
     */
    inline void SetXRayThrottlePercent(int value) { m_xRayThrottlePercentHasBeenSet = true; m_xRayThrottlePercent = value; }

    /**
     * <p> The X-Ray request throttle percentage for this node. </p>
     */
    inline Observation& WithXRayThrottlePercent(int value) { SetXRayThrottlePercent(value); return *this;}


    /**
     * <p> The X-Ray request error percentage for this node. </p>
     */
    inline int GetXRayErrorPercent() const{ return m_xRayErrorPercent; }

    /**
     * <p> The X-Ray request error percentage for this node. </p>
     */
    inline bool XRayErrorPercentHasBeenSet() const { return m_xRayErrorPercentHasBeenSet; }

    /**
     * <p> The X-Ray request error percentage for this node. </p>
     */
    inline void SetXRayErrorPercent(int value) { m_xRayErrorPercentHasBeenSet = true; m_xRayErrorPercent = value; }

    /**
     * <p> The X-Ray request error percentage for this node. </p>
     */
    inline Observation& WithXRayErrorPercent(int value) { SetXRayErrorPercent(value); return *this;}


    /**
     * <p> The X-Ray request count for this node. </p>
     */
    inline int GetXRayRequestCount() const{ return m_xRayRequestCount; }

    /**
     * <p> The X-Ray request count for this node. </p>
     */
    inline bool XRayRequestCountHasBeenSet() const { return m_xRayRequestCountHasBeenSet; }

    /**
     * <p> The X-Ray request count for this node. </p>
     */
    inline void SetXRayRequestCount(int value) { m_xRayRequestCountHasBeenSet = true; m_xRayRequestCount = value; }

    /**
     * <p> The X-Ray request count for this node. </p>
     */
    inline Observation& WithXRayRequestCount(int value) { SetXRayRequestCount(value); return *this;}


    /**
     * <p> The X-Ray node request average latency for this node. </p>
     */
    inline long long GetXRayRequestAverageLatency() const{ return m_xRayRequestAverageLatency; }

    /**
     * <p> The X-Ray node request average latency for this node. </p>
     */
    inline bool XRayRequestAverageLatencyHasBeenSet() const { return m_xRayRequestAverageLatencyHasBeenSet; }

    /**
     * <p> The X-Ray node request average latency for this node. </p>
     */
    inline void SetXRayRequestAverageLatency(long long value) { m_xRayRequestAverageLatencyHasBeenSet = true; m_xRayRequestAverageLatency = value; }

    /**
     * <p> The X-Ray node request average latency for this node. </p>
     */
    inline Observation& WithXRayRequestAverageLatency(long long value) { SetXRayRequestAverageLatency(value); return *this;}


    /**
     * <p> The name of the X-Ray node. </p>
     */
    inline const Aws::String& GetXRayNodeName() const{ return m_xRayNodeName; }

    /**
     * <p> The name of the X-Ray node. </p>
     */
    inline bool XRayNodeNameHasBeenSet() const { return m_xRayNodeNameHasBeenSet; }

    /**
     * <p> The name of the X-Ray node. </p>
     */
    inline void SetXRayNodeName(const Aws::String& value) { m_xRayNodeNameHasBeenSet = true; m_xRayNodeName = value; }

    /**
     * <p> The name of the X-Ray node. </p>
     */
    inline void SetXRayNodeName(Aws::String&& value) { m_xRayNodeNameHasBeenSet = true; m_xRayNodeName = std::move(value); }

    /**
     * <p> The name of the X-Ray node. </p>
     */
    inline void SetXRayNodeName(const char* value) { m_xRayNodeNameHasBeenSet = true; m_xRayNodeName.assign(value); }

    /**
     * <p> The name of the X-Ray node. </p>
     */
    inline Observation& WithXRayNodeName(const Aws::String& value) { SetXRayNodeName(value); return *this;}

    /**
     * <p> The name of the X-Ray node. </p>
     */
    inline Observation& WithXRayNodeName(Aws::String&& value) { SetXRayNodeName(std::move(value)); return *this;}

    /**
     * <p> The name of the X-Ray node. </p>
     */
    inline Observation& WithXRayNodeName(const char* value) { SetXRayNodeName(value); return *this;}


    /**
     * <p> The type of the X-Ray node. </p>
     */
    inline const Aws::String& GetXRayNodeType() const{ return m_xRayNodeType; }

    /**
     * <p> The type of the X-Ray node. </p>
     */
    inline bool XRayNodeTypeHasBeenSet() const { return m_xRayNodeTypeHasBeenSet; }

    /**
     * <p> The type of the X-Ray node. </p>
     */
    inline void SetXRayNodeType(const Aws::String& value) { m_xRayNodeTypeHasBeenSet = true; m_xRayNodeType = value; }

    /**
     * <p> The type of the X-Ray node. </p>
     */
    inline void SetXRayNodeType(Aws::String&& value) { m_xRayNodeTypeHasBeenSet = true; m_xRayNodeType = std::move(value); }

    /**
     * <p> The type of the X-Ray node. </p>
     */
    inline void SetXRayNodeType(const char* value) { m_xRayNodeTypeHasBeenSet = true; m_xRayNodeType.assign(value); }

    /**
     * <p> The type of the X-Ray node. </p>
     */
    inline Observation& WithXRayNodeType(const Aws::String& value) { SetXRayNodeType(value); return *this;}

    /**
     * <p> The type of the X-Ray node. </p>
     */
    inline Observation& WithXRayNodeType(Aws::String&& value) { SetXRayNodeType(std::move(value)); return *this;}

    /**
     * <p> The type of the X-Ray node. </p>
     */
    inline Observation& WithXRayNodeType(const char* value) { SetXRayNodeType(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    Aws::String m_sourceARN;
    bool m_sourceARNHasBeenSet = false;

    Aws::String m_logGroup;
    bool m_logGroupHasBeenSet = false;

    Aws::Utils::DateTime m_lineTime;
    bool m_lineTimeHasBeenSet = false;

    Aws::String m_logText;
    bool m_logTextHasBeenSet = false;

    LogFilter m_logFilter;
    bool m_logFilterHasBeenSet = false;

    Aws::String m_metricNamespace;
    bool m_metricNamespaceHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;

    double m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_cloudWatchEventId;
    bool m_cloudWatchEventIdHasBeenSet = false;

    CloudWatchEventSource m_cloudWatchEventSource;
    bool m_cloudWatchEventSourceHasBeenSet = false;

    Aws::String m_cloudWatchEventDetailType;
    bool m_cloudWatchEventDetailTypeHasBeenSet = false;

    Aws::String m_healthEventArn;
    bool m_healthEventArnHasBeenSet = false;

    Aws::String m_healthService;
    bool m_healthServiceHasBeenSet = false;

    Aws::String m_healthEventTypeCode;
    bool m_healthEventTypeCodeHasBeenSet = false;

    Aws::String m_healthEventTypeCategory;
    bool m_healthEventTypeCategoryHasBeenSet = false;

    Aws::String m_healthEventDescription;
    bool m_healthEventDescriptionHasBeenSet = false;

    Aws::String m_codeDeployDeploymentId;
    bool m_codeDeployDeploymentIdHasBeenSet = false;

    Aws::String m_codeDeployDeploymentGroup;
    bool m_codeDeployDeploymentGroupHasBeenSet = false;

    Aws::String m_codeDeployState;
    bool m_codeDeployStateHasBeenSet = false;

    Aws::String m_codeDeployApplication;
    bool m_codeDeployApplicationHasBeenSet = false;

    Aws::String m_codeDeployInstanceGroupId;
    bool m_codeDeployInstanceGroupIdHasBeenSet = false;

    Aws::String m_ec2State;
    bool m_ec2StateHasBeenSet = false;

    Aws::String m_rdsEventCategories;
    bool m_rdsEventCategoriesHasBeenSet = false;

    Aws::String m_rdsEventMessage;
    bool m_rdsEventMessageHasBeenSet = false;

    Aws::String m_s3EventName;
    bool m_s3EventNameHasBeenSet = false;

    Aws::String m_statesExecutionArn;
    bool m_statesExecutionArnHasBeenSet = false;

    Aws::String m_statesArn;
    bool m_statesArnHasBeenSet = false;

    Aws::String m_statesStatus;
    bool m_statesStatusHasBeenSet = false;

    Aws::String m_statesInput;
    bool m_statesInputHasBeenSet = false;

    Aws::String m_ebsEvent;
    bool m_ebsEventHasBeenSet = false;

    Aws::String m_ebsResult;
    bool m_ebsResultHasBeenSet = false;

    Aws::String m_ebsCause;
    bool m_ebsCauseHasBeenSet = false;

    Aws::String m_ebsRequestId;
    bool m_ebsRequestIdHasBeenSet = false;

    int m_xRayFaultPercent;
    bool m_xRayFaultPercentHasBeenSet = false;

    int m_xRayThrottlePercent;
    bool m_xRayThrottlePercentHasBeenSet = false;

    int m_xRayErrorPercent;
    bool m_xRayErrorPercentHasBeenSet = false;

    int m_xRayRequestCount;
    bool m_xRayRequestCountHasBeenSet = false;

    long long m_xRayRequestAverageLatency;
    bool m_xRayRequestAverageLatencyHasBeenSet = false;

    Aws::String m_xRayNodeName;
    bool m_xRayNodeNameHasBeenSet = false;

    Aws::String m_xRayNodeType;
    bool m_xRayNodeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
