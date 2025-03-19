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
   * <p>The configuration of user event logs to an external Amazon Web Services
   * service like Amazon Data Firehose, Amazon S3, or Amazon CloudWatch
   * Logs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/LogConfigurationType">AWS
   * API Reference</a></p>
   */
  class LogConfigurationType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API LogConfigurationType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API LogConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API LogConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>errorlevel</code> selection of logs that a user pool sends for
     * detailed activity logging. To send <code>userNotification</code> activity with
     * <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/exporting-quotas-and-usage.html">information
     * about message delivery</a>, choose <code>ERROR</code> with
     * <code>CloudWatchLogsConfiguration</code>. To send <code>userAuthEvents</code>
     * activity with user logs from threat protection with the Plus feature plan,
     * choose <code>INFO</code> with one of <code>CloudWatchLogsConfiguration</code>,
     * <code>FirehoseConfiguration</code>, or <code>S3Configuration</code>.</p>
     */
    inline LogLevel GetLogLevel() const { return m_logLevel; }
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }
    inline void SetLogLevel(LogLevel value) { m_logLevelHasBeenSet = true; m_logLevel = value; }
    inline LogConfigurationType& WithLogLevel(LogLevel value) { SetLogLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of events that your user pool sends for logging. To send
     * error-level logs about user notification activity, set to
     * <code>userNotification</code>. To send info-level logs about threat-protection
     * user activity in user pools with the Plus feature plan, set to
     * <code>userAuthEvents</code>.</p>
     */
    inline EventSourceName GetEventSource() const { return m_eventSource; }
    inline bool EventSourceHasBeenSet() const { return m_eventSourceHasBeenSet; }
    inline void SetEventSource(EventSourceName value) { m_eventSourceHasBeenSet = true; m_eventSource = value; }
    inline LogConfigurationType& WithEventSource(EventSourceName value) { SetEventSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CloudWatch log group destination of user pool detailed activity logs, or
     * of user activity log export with threat protection.</p>
     */
    inline const CloudWatchLogsConfigurationType& GetCloudWatchLogsConfiguration() const { return m_cloudWatchLogsConfiguration; }
    inline bool CloudWatchLogsConfigurationHasBeenSet() const { return m_cloudWatchLogsConfigurationHasBeenSet; }
    template<typename CloudWatchLogsConfigurationT = CloudWatchLogsConfigurationType>
    void SetCloudWatchLogsConfiguration(CloudWatchLogsConfigurationT&& value) { m_cloudWatchLogsConfigurationHasBeenSet = true; m_cloudWatchLogsConfiguration = std::forward<CloudWatchLogsConfigurationT>(value); }
    template<typename CloudWatchLogsConfigurationT = CloudWatchLogsConfigurationType>
    LogConfigurationType& WithCloudWatchLogsConfiguration(CloudWatchLogsConfigurationT&& value) { SetCloudWatchLogsConfiguration(std::forward<CloudWatchLogsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket destination of user activity log export with threat
     * protection. To activate this setting, your user pool must be on the <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/feature-plans-features-plus.html">
     * Plus tier</a>.</p>
     */
    inline const S3ConfigurationType& GetS3Configuration() const { return m_s3Configuration; }
    inline bool S3ConfigurationHasBeenSet() const { return m_s3ConfigurationHasBeenSet; }
    template<typename S3ConfigurationT = S3ConfigurationType>
    void SetS3Configuration(S3ConfigurationT&& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = std::forward<S3ConfigurationT>(value); }
    template<typename S3ConfigurationT = S3ConfigurationType>
    LogConfigurationType& WithS3Configuration(S3ConfigurationT&& value) { SetS3Configuration(std::forward<S3ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Data Firehose stream destination of user activity log export with
     * threat protection. To activate this setting, your user pool must be on the <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/feature-plans-features-plus.html">
     * Plus tier</a>.</p>
     */
    inline const FirehoseConfigurationType& GetFirehoseConfiguration() const { return m_firehoseConfiguration; }
    inline bool FirehoseConfigurationHasBeenSet() const { return m_firehoseConfigurationHasBeenSet; }
    template<typename FirehoseConfigurationT = FirehoseConfigurationType>
    void SetFirehoseConfiguration(FirehoseConfigurationT&& value) { m_firehoseConfigurationHasBeenSet = true; m_firehoseConfiguration = std::forward<FirehoseConfigurationT>(value); }
    template<typename FirehoseConfigurationT = FirehoseConfigurationType>
    LogConfigurationType& WithFirehoseConfiguration(FirehoseConfigurationT&& value) { SetFirehoseConfiguration(std::forward<FirehoseConfigurationT>(value)); return *this;}
    ///@}
  private:

    LogLevel m_logLevel{LogLevel::NOT_SET};
    bool m_logLevelHasBeenSet = false;

    EventSourceName m_eventSource{EventSourceName::NOT_SET};
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
