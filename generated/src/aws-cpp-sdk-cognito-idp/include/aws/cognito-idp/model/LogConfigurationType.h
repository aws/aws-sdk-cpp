/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/LogLevel.h>
#include <aws/cognito-idp/model/EventSourceName.h>
#include <aws/cognito-idp/model/CloudWatchLogsConfigurationType.h>
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


    /**
     * <p>The <code>errorlevel</code> selection of logs that a user pool sends for
     * detailed activity logging.</p>
     */
    inline const LogLevel& GetLogLevel() const{ return m_logLevel; }

    /**
     * <p>The <code>errorlevel</code> selection of logs that a user pool sends for
     * detailed activity logging.</p>
     */
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }

    /**
     * <p>The <code>errorlevel</code> selection of logs that a user pool sends for
     * detailed activity logging.</p>
     */
    inline void SetLogLevel(const LogLevel& value) { m_logLevelHasBeenSet = true; m_logLevel = value; }

    /**
     * <p>The <code>errorlevel</code> selection of logs that a user pool sends for
     * detailed activity logging.</p>
     */
    inline void SetLogLevel(LogLevel&& value) { m_logLevelHasBeenSet = true; m_logLevel = std::move(value); }

    /**
     * <p>The <code>errorlevel</code> selection of logs that a user pool sends for
     * detailed activity logging.</p>
     */
    inline LogConfigurationType& WithLogLevel(const LogLevel& value) { SetLogLevel(value); return *this;}

    /**
     * <p>The <code>errorlevel</code> selection of logs that a user pool sends for
     * detailed activity logging.</p>
     */
    inline LogConfigurationType& WithLogLevel(LogLevel&& value) { SetLogLevel(std::move(value)); return *this;}


    /**
     * <p>The source of events that your user pool sends for detailed activity
     * logging.</p>
     */
    inline const EventSourceName& GetEventSource() const{ return m_eventSource; }

    /**
     * <p>The source of events that your user pool sends for detailed activity
     * logging.</p>
     */
    inline bool EventSourceHasBeenSet() const { return m_eventSourceHasBeenSet; }

    /**
     * <p>The source of events that your user pool sends for detailed activity
     * logging.</p>
     */
    inline void SetEventSource(const EventSourceName& value) { m_eventSourceHasBeenSet = true; m_eventSource = value; }

    /**
     * <p>The source of events that your user pool sends for detailed activity
     * logging.</p>
     */
    inline void SetEventSource(EventSourceName&& value) { m_eventSourceHasBeenSet = true; m_eventSource = std::move(value); }

    /**
     * <p>The source of events that your user pool sends for detailed activity
     * logging.</p>
     */
    inline LogConfigurationType& WithEventSource(const EventSourceName& value) { SetEventSource(value); return *this;}

    /**
     * <p>The source of events that your user pool sends for detailed activity
     * logging.</p>
     */
    inline LogConfigurationType& WithEventSource(EventSourceName&& value) { SetEventSource(std::move(value)); return *this;}


    /**
     * <p>The CloudWatch logging destination of a user pool.</p>
     */
    inline const CloudWatchLogsConfigurationType& GetCloudWatchLogsConfiguration() const{ return m_cloudWatchLogsConfiguration; }

    /**
     * <p>The CloudWatch logging destination of a user pool.</p>
     */
    inline bool CloudWatchLogsConfigurationHasBeenSet() const { return m_cloudWatchLogsConfigurationHasBeenSet; }

    /**
     * <p>The CloudWatch logging destination of a user pool.</p>
     */
    inline void SetCloudWatchLogsConfiguration(const CloudWatchLogsConfigurationType& value) { m_cloudWatchLogsConfigurationHasBeenSet = true; m_cloudWatchLogsConfiguration = value; }

    /**
     * <p>The CloudWatch logging destination of a user pool.</p>
     */
    inline void SetCloudWatchLogsConfiguration(CloudWatchLogsConfigurationType&& value) { m_cloudWatchLogsConfigurationHasBeenSet = true; m_cloudWatchLogsConfiguration = std::move(value); }

    /**
     * <p>The CloudWatch logging destination of a user pool.</p>
     */
    inline LogConfigurationType& WithCloudWatchLogsConfiguration(const CloudWatchLogsConfigurationType& value) { SetCloudWatchLogsConfiguration(value); return *this;}

    /**
     * <p>The CloudWatch logging destination of a user pool.</p>
     */
    inline LogConfigurationType& WithCloudWatchLogsConfiguration(CloudWatchLogsConfigurationType&& value) { SetCloudWatchLogsConfiguration(std::move(value)); return *this;}

  private:

    LogLevel m_logLevel;
    bool m_logLevelHasBeenSet = false;

    EventSourceName m_eventSource;
    bool m_eventSourceHasBeenSet = false;

    CloudWatchLogsConfigurationType m_cloudWatchLogsConfiguration;
    bool m_cloudWatchLogsConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
