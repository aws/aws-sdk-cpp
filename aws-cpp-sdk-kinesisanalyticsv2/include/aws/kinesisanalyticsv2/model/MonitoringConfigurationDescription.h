/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/ConfigurationType.h>
#include <aws/kinesisanalyticsv2/model/MetricsLevel.h>
#include <aws/kinesisanalyticsv2/model/LogLevel.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>Describes configuration parameters for CloudWatch logging for an
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/MonitoringConfigurationDescription">AWS
   * API Reference</a></p>
   */
  class MonitoringConfigurationDescription
  {
  public:
    AWS_KINESISANALYTICSV2_API MonitoringConfigurationDescription();
    AWS_KINESISANALYTICSV2_API MonitoringConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API MonitoringConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes whether to use the default CloudWatch logging configuration for an
     * application.</p>
     */
    inline const ConfigurationType& GetConfigurationType() const{ return m_configurationType; }

    /**
     * <p>Describes whether to use the default CloudWatch logging configuration for an
     * application.</p>
     */
    inline bool ConfigurationTypeHasBeenSet() const { return m_configurationTypeHasBeenSet; }

    /**
     * <p>Describes whether to use the default CloudWatch logging configuration for an
     * application.</p>
     */
    inline void SetConfigurationType(const ConfigurationType& value) { m_configurationTypeHasBeenSet = true; m_configurationType = value; }

    /**
     * <p>Describes whether to use the default CloudWatch logging configuration for an
     * application.</p>
     */
    inline void SetConfigurationType(ConfigurationType&& value) { m_configurationTypeHasBeenSet = true; m_configurationType = std::move(value); }

    /**
     * <p>Describes whether to use the default CloudWatch logging configuration for an
     * application.</p>
     */
    inline MonitoringConfigurationDescription& WithConfigurationType(const ConfigurationType& value) { SetConfigurationType(value); return *this;}

    /**
     * <p>Describes whether to use the default CloudWatch logging configuration for an
     * application.</p>
     */
    inline MonitoringConfigurationDescription& WithConfigurationType(ConfigurationType&& value) { SetConfigurationType(std::move(value)); return *this;}


    /**
     * <p>Describes the granularity of the CloudWatch Logs for an application.</p>
     */
    inline const MetricsLevel& GetMetricsLevel() const{ return m_metricsLevel; }

    /**
     * <p>Describes the granularity of the CloudWatch Logs for an application.</p>
     */
    inline bool MetricsLevelHasBeenSet() const { return m_metricsLevelHasBeenSet; }

    /**
     * <p>Describes the granularity of the CloudWatch Logs for an application.</p>
     */
    inline void SetMetricsLevel(const MetricsLevel& value) { m_metricsLevelHasBeenSet = true; m_metricsLevel = value; }

    /**
     * <p>Describes the granularity of the CloudWatch Logs for an application.</p>
     */
    inline void SetMetricsLevel(MetricsLevel&& value) { m_metricsLevelHasBeenSet = true; m_metricsLevel = std::move(value); }

    /**
     * <p>Describes the granularity of the CloudWatch Logs for an application.</p>
     */
    inline MonitoringConfigurationDescription& WithMetricsLevel(const MetricsLevel& value) { SetMetricsLevel(value); return *this;}

    /**
     * <p>Describes the granularity of the CloudWatch Logs for an application.</p>
     */
    inline MonitoringConfigurationDescription& WithMetricsLevel(MetricsLevel&& value) { SetMetricsLevel(std::move(value)); return *this;}


    /**
     * <p>Describes the verbosity of the CloudWatch Logs for an application.</p>
     */
    inline const LogLevel& GetLogLevel() const{ return m_logLevel; }

    /**
     * <p>Describes the verbosity of the CloudWatch Logs for an application.</p>
     */
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }

    /**
     * <p>Describes the verbosity of the CloudWatch Logs for an application.</p>
     */
    inline void SetLogLevel(const LogLevel& value) { m_logLevelHasBeenSet = true; m_logLevel = value; }

    /**
     * <p>Describes the verbosity of the CloudWatch Logs for an application.</p>
     */
    inline void SetLogLevel(LogLevel&& value) { m_logLevelHasBeenSet = true; m_logLevel = std::move(value); }

    /**
     * <p>Describes the verbosity of the CloudWatch Logs for an application.</p>
     */
    inline MonitoringConfigurationDescription& WithLogLevel(const LogLevel& value) { SetLogLevel(value); return *this;}

    /**
     * <p>Describes the verbosity of the CloudWatch Logs for an application.</p>
     */
    inline MonitoringConfigurationDescription& WithLogLevel(LogLevel&& value) { SetLogLevel(std::move(value)); return *this;}

  private:

    ConfigurationType m_configurationType;
    bool m_configurationTypeHasBeenSet = false;

    MetricsLevel m_metricsLevel;
    bool m_metricsLevelHasBeenSet = false;

    LogLevel m_logLevel;
    bool m_logLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
