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
    AWS_KINESISANALYTICSV2_API MonitoringConfigurationDescription() = default;
    AWS_KINESISANALYTICSV2_API MonitoringConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API MonitoringConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes whether to use the default CloudWatch logging configuration for an
     * application.</p>
     */
    inline ConfigurationType GetConfigurationType() const { return m_configurationType; }
    inline bool ConfigurationTypeHasBeenSet() const { return m_configurationTypeHasBeenSet; }
    inline void SetConfigurationType(ConfigurationType value) { m_configurationTypeHasBeenSet = true; m_configurationType = value; }
    inline MonitoringConfigurationDescription& WithConfigurationType(ConfigurationType value) { SetConfigurationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the granularity of the CloudWatch Logs for an application.</p>
     */
    inline MetricsLevel GetMetricsLevel() const { return m_metricsLevel; }
    inline bool MetricsLevelHasBeenSet() const { return m_metricsLevelHasBeenSet; }
    inline void SetMetricsLevel(MetricsLevel value) { m_metricsLevelHasBeenSet = true; m_metricsLevel = value; }
    inline MonitoringConfigurationDescription& WithMetricsLevel(MetricsLevel value) { SetMetricsLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the verbosity of the CloudWatch Logs for an application.</p>
     */
    inline LogLevel GetLogLevel() const { return m_logLevel; }
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }
    inline void SetLogLevel(LogLevel value) { m_logLevelHasBeenSet = true; m_logLevel = value; }
    inline MonitoringConfigurationDescription& WithLogLevel(LogLevel value) { SetLogLevel(value); return *this;}
    ///@}
  private:

    ConfigurationType m_configurationType{ConfigurationType::NOT_SET};
    bool m_configurationTypeHasBeenSet = false;

    MetricsLevel m_metricsLevel{MetricsLevel::NOT_SET};
    bool m_metricsLevelHasBeenSet = false;

    LogLevel m_logLevel{LogLevel::NOT_SET};
    bool m_logLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
