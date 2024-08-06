/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/LogLevel.h>
#include <aws/cognito-idp/model/EventSourceName.h>
#include <aws/cognito-idp/model/CloudWatchLogsConfigurationType.h>
#include <aws/cognito-idp/model/S3ConfigurationType.h>
#include <aws/cognito-idp/model/FirehoseConfigurationType.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The logging parameters of a user pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/LogConfigurationType">AWS
   * API Reference</a></p>
   */
  class LogConfigurationType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API LogConfigurationType();
    AWS_COGNITOIDENTITYPROVIDER_API LogConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API LogConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>errorlevel</code> selection of logs that a user pool sends for
     * detailed activity logging. To send <code>userNotification</code> activity with
     * <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/tracking-quotas-and-usage-in-cloud-watch-logs.html">information
     * about message delivery</a>, choose <code>ERROR</code> with
     * <code>CloudWatchLogsConfiguration</code>. To send <code>userAuthEvents</code>
     * activity with user logs from advanced security features, choose
     * <code>INFO</code> with one of <code>CloudWatchLogsConfiguration</code>,
     * <code>FirehoseConfiguration</code>, or <code>S3Configuration</code>.</p>
     */
    inline const LogLevel& GetLogLevel() const{ return m_logLevel; }
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }
    inline void SetLogLevel(const LogLevel& value) { m_logLevelHasBeenSet = true; m_logLevel = value; }
    inline void SetLogLevel(LogLevel&& value) { m_logLevelHasBeenSet = true; m_logLevel = std::move(value); }
    inline LogConfigurationType& WithLogLevel(const LogLevel& value) { SetLogLevel(value); return *this;}
    inline LogConfigurationType& WithLogLevel(LogLevel&& value) { SetLogLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of events that your user pool sends for logging. To send
     * error-level logs about user notification activity, set to
     * <code>userNotification</code>. To send info-level logs about advanced security
     * features user activity, set to <code>userAuthEvents</code>.</p>
     */
    inline const EventSourceName& GetEventSource() const{ return m_eventSource; }
    inline bool EventSourceHasBeenSet() const { return m_eventSourceHasBeenSet; }
    inline void SetEventSource(const EventSourceName& value) { m_eventSourceHasBeenSet = true; m_eventSource = value; }
    inline void SetEventSource(EventSourceName&& value) { m_eventSourceHasBeenSet = true; m_eventSource = std::move(value); }
    inline LogConfigurationType& WithEventSource(const EventSourceName& value) { SetEventSource(value); return *this;}
    inline LogConfigurationType& WithEventSource(EventSourceName&& value) { SetEventSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CloudWatch log group destination of user pool detailed activity logs, or
     * of user activity log export with advanced security features.</p>
     */
    inline const CloudWatchLogsConfigurationType& GetCloudWatchLogsConfiguration() const{ return m_cloudWatchLogsConfiguration; }
    inline bool CloudWatchLogsConfigurationHasBeenSet() const { return m_cloudWatchLogsConfigurationHasBeenSet; }
    inline void SetCloudWatchLogsConfiguration(const CloudWatchLogsConfigurationType& value) { m_cloudWatchLogsConfigurationHasBeenSet = true; m_cloudWatchLogsConfiguration = value; }
    inline void SetCloudWatchLogsConfiguration(CloudWatchLogsConfigurationType&& value) { m_cloudWatchLogsConfigurationHasBeenSet = true; m_cloudWatchLogsConfiguration = std::move(value); }
    inline LogConfigurationType& WithCloudWatchLogsConfiguration(const CloudWatchLogsConfigurationType& value) { SetCloudWatchLogsConfiguration(value); return *this;}
    inline LogConfigurationType& WithCloudWatchLogsConfiguration(CloudWatchLogsConfigurationType&& value) { SetCloudWatchLogsConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket destination of user activity log export with advanced
     * security features. To activate this setting, <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-advanced-security.html">
     * advanced security features</a> must be active in your user pool.</p>
     */
    inline const S3ConfigurationType& GetS3Configuration() const{ return m_s3Configuration; }
    inline bool S3ConfigurationHasBeenSet() const { return m_s3ConfigurationHasBeenSet; }
    inline void SetS3Configuration(const S3ConfigurationType& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = value; }
    inline void SetS3Configuration(S3ConfigurationType&& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = std::move(value); }
    inline LogConfigurationType& WithS3Configuration(const S3ConfigurationType& value) { SetS3Configuration(value); return *this;}
    inline LogConfigurationType& WithS3Configuration(S3ConfigurationType&& value) { SetS3Configuration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Data Firehose stream destination of user activity log export with
     * advanced security features. To activate this setting, <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-advanced-security.html">
     * advanced security features</a> must be active in your user pool.</p>
     */
    inline const FirehoseConfigurationType& GetFirehoseConfiguration() const{ return m_firehoseConfiguration; }
    inline bool FirehoseConfigurationHasBeenSet() const { return m_firehoseConfigurationHasBeenSet; }
    inline void SetFirehoseConfiguration(const FirehoseConfigurationType& value) { m_firehoseConfigurationHasBeenSet = true; m_firehoseConfiguration = value; }
    inline void SetFirehoseConfiguration(FirehoseConfigurationType&& value) { m_firehoseConfigurationHasBeenSet = true; m_firehoseConfiguration = std::move(value); }
    inline LogConfigurationType& WithFirehoseConfiguration(const FirehoseConfigurationType& value) { SetFirehoseConfiguration(value); return *this;}
    inline LogConfigurationType& WithFirehoseConfiguration(FirehoseConfigurationType&& value) { SetFirehoseConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    LogLevel m_logLevel;
    bool m_logLevelHasBeenSet = false;

    EventSourceName m_eventSource;
    bool m_eventSourceHasBeenSet = false;

    CloudWatchLogsConfigurationType m_cloudWatchLogsConfiguration;
    bool m_cloudWatchLogsConfigurationHasBeenSet = false;

    S3ConfigurationType m_s3Configuration;
    bool m_s3ConfigurationHasBeenSet = false;

    FirehoseConfigurationType m_firehoseConfiguration;
    bool m_firehoseConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
