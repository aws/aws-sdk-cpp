/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mwaa/model/LoggingLevel.h>
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
namespace MWAA
{
namespace Model
{

  /**
   * <p>Defines the type of logs to send for the Apache Airflow log type (e.g.
   * <code>DagProcessingLogs</code>). Valid values:
   * <code>CloudWatchLogGroupArn</code>, <code>Enabled</code>,
   * <code>LogLevel</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/ModuleLoggingConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_MWAA_API ModuleLoggingConfiguration
  {
  public:
    ModuleLoggingConfiguration();
    ModuleLoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ModuleLoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) for the CloudWatch Logs group where the Apache
     * Airflow log type (e.g. <code>DagProcessingLogs</code>) is published. For
     * example,
     * <code>arn:aws:logs:us-east-1:123456789012:log-group:airflow-MyMWAAEnvironment-MwaaEnvironment-DAGProcessing:*</code>.</p>
     */
    inline const Aws::String& GetCloudWatchLogGroupArn() const{ return m_cloudWatchLogGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the CloudWatch Logs group where the Apache
     * Airflow log type (e.g. <code>DagProcessingLogs</code>) is published. For
     * example,
     * <code>arn:aws:logs:us-east-1:123456789012:log-group:airflow-MyMWAAEnvironment-MwaaEnvironment-DAGProcessing:*</code>.</p>
     */
    inline bool CloudWatchLogGroupArnHasBeenSet() const { return m_cloudWatchLogGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the CloudWatch Logs group where the Apache
     * Airflow log type (e.g. <code>DagProcessingLogs</code>) is published. For
     * example,
     * <code>arn:aws:logs:us-east-1:123456789012:log-group:airflow-MyMWAAEnvironment-MwaaEnvironment-DAGProcessing:*</code>.</p>
     */
    inline void SetCloudWatchLogGroupArn(const Aws::String& value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the CloudWatch Logs group where the Apache
     * Airflow log type (e.g. <code>DagProcessingLogs</code>) is published. For
     * example,
     * <code>arn:aws:logs:us-east-1:123456789012:log-group:airflow-MyMWAAEnvironment-MwaaEnvironment-DAGProcessing:*</code>.</p>
     */
    inline void SetCloudWatchLogGroupArn(Aws::String&& value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the CloudWatch Logs group where the Apache
     * Airflow log type (e.g. <code>DagProcessingLogs</code>) is published. For
     * example,
     * <code>arn:aws:logs:us-east-1:123456789012:log-group:airflow-MyMWAAEnvironment-MwaaEnvironment-DAGProcessing:*</code>.</p>
     */
    inline void SetCloudWatchLogGroupArn(const char* value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the CloudWatch Logs group where the Apache
     * Airflow log type (e.g. <code>DagProcessingLogs</code>) is published. For
     * example,
     * <code>arn:aws:logs:us-east-1:123456789012:log-group:airflow-MyMWAAEnvironment-MwaaEnvironment-DAGProcessing:*</code>.</p>
     */
    inline ModuleLoggingConfiguration& WithCloudWatchLogGroupArn(const Aws::String& value) { SetCloudWatchLogGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the CloudWatch Logs group where the Apache
     * Airflow log type (e.g. <code>DagProcessingLogs</code>) is published. For
     * example,
     * <code>arn:aws:logs:us-east-1:123456789012:log-group:airflow-MyMWAAEnvironment-MwaaEnvironment-DAGProcessing:*</code>.</p>
     */
    inline ModuleLoggingConfiguration& WithCloudWatchLogGroupArn(Aws::String&& value) { SetCloudWatchLogGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the CloudWatch Logs group where the Apache
     * Airflow log type (e.g. <code>DagProcessingLogs</code>) is published. For
     * example,
     * <code>arn:aws:logs:us-east-1:123456789012:log-group:airflow-MyMWAAEnvironment-MwaaEnvironment-DAGProcessing:*</code>.</p>
     */
    inline ModuleLoggingConfiguration& WithCloudWatchLogGroupArn(const char* value) { SetCloudWatchLogGroupArn(value); return *this;}


    /**
     * <p>Indicates whether to enable the Apache Airflow log type (e.g.
     * <code>DagProcessingLogs</code>) in CloudWatch Logs.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates whether to enable the Apache Airflow log type (e.g.
     * <code>DagProcessingLogs</code>) in CloudWatch Logs.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Indicates whether to enable the Apache Airflow log type (e.g.
     * <code>DagProcessingLogs</code>) in CloudWatch Logs.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Indicates whether to enable the Apache Airflow log type (e.g.
     * <code>DagProcessingLogs</code>) in CloudWatch Logs.</p>
     */
    inline ModuleLoggingConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>Defines the Apache Airflow logs to send for the log type (e.g.
     * <code>DagProcessingLogs</code>) to CloudWatch Logs. Valid values:
     * <code>CRITICAL</code>, <code>ERROR</code>, <code>WARNING</code>,
     * <code>INFO</code>.</p>
     */
    inline const LoggingLevel& GetLogLevel() const{ return m_logLevel; }

    /**
     * <p>Defines the Apache Airflow logs to send for the log type (e.g.
     * <code>DagProcessingLogs</code>) to CloudWatch Logs. Valid values:
     * <code>CRITICAL</code>, <code>ERROR</code>, <code>WARNING</code>,
     * <code>INFO</code>.</p>
     */
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }

    /**
     * <p>Defines the Apache Airflow logs to send for the log type (e.g.
     * <code>DagProcessingLogs</code>) to CloudWatch Logs. Valid values:
     * <code>CRITICAL</code>, <code>ERROR</code>, <code>WARNING</code>,
     * <code>INFO</code>.</p>
     */
    inline void SetLogLevel(const LoggingLevel& value) { m_logLevelHasBeenSet = true; m_logLevel = value; }

    /**
     * <p>Defines the Apache Airflow logs to send for the log type (e.g.
     * <code>DagProcessingLogs</code>) to CloudWatch Logs. Valid values:
     * <code>CRITICAL</code>, <code>ERROR</code>, <code>WARNING</code>,
     * <code>INFO</code>.</p>
     */
    inline void SetLogLevel(LoggingLevel&& value) { m_logLevelHasBeenSet = true; m_logLevel = std::move(value); }

    /**
     * <p>Defines the Apache Airflow logs to send for the log type (e.g.
     * <code>DagProcessingLogs</code>) to CloudWatch Logs. Valid values:
     * <code>CRITICAL</code>, <code>ERROR</code>, <code>WARNING</code>,
     * <code>INFO</code>.</p>
     */
    inline ModuleLoggingConfiguration& WithLogLevel(const LoggingLevel& value) { SetLogLevel(value); return *this;}

    /**
     * <p>Defines the Apache Airflow logs to send for the log type (e.g.
     * <code>DagProcessingLogs</code>) to CloudWatch Logs. Valid values:
     * <code>CRITICAL</code>, <code>ERROR</code>, <code>WARNING</code>,
     * <code>INFO</code>.</p>
     */
    inline ModuleLoggingConfiguration& WithLogLevel(LoggingLevel&& value) { SetLogLevel(std::move(value)); return *this;}

  private:

    Aws::String m_cloudWatchLogGroupArn;
    bool m_cloudWatchLogGroupArnHasBeenSet;

    bool m_enabled;
    bool m_enabledHasBeenSet;

    LoggingLevel m_logLevel;
    bool m_logLevelHasBeenSet;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
