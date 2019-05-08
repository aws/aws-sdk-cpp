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
   * <p>Describes configuration parameters for Amazon CloudWatch logging for a
   * Java-based Kinesis Data Analytics application. For more information about
   * CloudWatch logging, see <a
   * href="https://docs.aws.amazon.com/kinesisanalytics/latest/java/monitoring-overview.html">Monitoring</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/MonitoringConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API MonitoringConfiguration
  {
  public:
    MonitoringConfiguration();
    MonitoringConfiguration(Aws::Utils::Json::JsonView jsonValue);
    MonitoringConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline MonitoringConfiguration& WithConfigurationType(const ConfigurationType& value) { SetConfigurationType(value); return *this;}

    /**
     * <p>Describes whether to use the default CloudWatch logging configuration for an
     * application.</p>
     */
    inline MonitoringConfiguration& WithConfigurationType(ConfigurationType&& value) { SetConfigurationType(std::move(value)); return *this;}


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
    inline MonitoringConfiguration& WithMetricsLevel(const MetricsLevel& value) { SetMetricsLevel(value); return *this;}

    /**
     * <p>Describes the granularity of the CloudWatch Logs for an application.</p>
     */
    inline MonitoringConfiguration& WithMetricsLevel(MetricsLevel&& value) { SetMetricsLevel(std::move(value)); return *this;}


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
    inline MonitoringConfiguration& WithLogLevel(const LogLevel& value) { SetLogLevel(value); return *this;}

    /**
     * <p>Describes the verbosity of the CloudWatch Logs for an application.</p>
     */
    inline MonitoringConfiguration& WithLogLevel(LogLevel&& value) { SetLogLevel(std::move(value)); return *this;}

  private:

    ConfigurationType m_configurationType;
    bool m_configurationTypeHasBeenSet;

    MetricsLevel m_metricsLevel;
    bool m_metricsLevelHasBeenSet;

    LogLevel m_logLevel;
    bool m_logLevelHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
