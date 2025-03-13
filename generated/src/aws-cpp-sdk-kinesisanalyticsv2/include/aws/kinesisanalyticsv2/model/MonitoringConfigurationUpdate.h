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
   * <p>Describes updates to configuration parameters for Amazon CloudWatch logging
   * for an application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/MonitoringConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class MonitoringConfigurationUpdate
  {
  public:
    AWS_KINESISANALYTICSV2_API MonitoringConfigurationUpdate() = default;
    AWS_KINESISANALYTICSV2_API MonitoringConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API MonitoringConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes updates to whether to use the default CloudWatch logging
     * configuration for an application. You must set this property to
     * <code>CUSTOM</code> in order to set the <code>LogLevel</code> or
     * <code>MetricsLevel</code> parameters.</p>
     */
    inline ConfigurationType GetConfigurationTypeUpdate() const { return m_configurationTypeUpdate; }
    inline bool ConfigurationTypeUpdateHasBeenSet() const { return m_configurationTypeUpdateHasBeenSet; }
    inline void SetConfigurationTypeUpdate(ConfigurationType value) { m_configurationTypeUpdateHasBeenSet = true; m_configurationTypeUpdate = value; }
    inline MonitoringConfigurationUpdate& WithConfigurationTypeUpdate(ConfigurationType value) { SetConfigurationTypeUpdate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes updates to the granularity of the CloudWatch Logs for an
     * application. The <code>Parallelism</code> level is not recommended for
     * applications with a Parallelism over 64 due to excessive costs.</p>
     */
    inline MetricsLevel GetMetricsLevelUpdate() const { return m_metricsLevelUpdate; }
    inline bool MetricsLevelUpdateHasBeenSet() const { return m_metricsLevelUpdateHasBeenSet; }
    inline void SetMetricsLevelUpdate(MetricsLevel value) { m_metricsLevelUpdateHasBeenSet = true; m_metricsLevelUpdate = value; }
    inline MonitoringConfigurationUpdate& WithMetricsLevelUpdate(MetricsLevel value) { SetMetricsLevelUpdate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes updates to the verbosity of the CloudWatch Logs for an
     * application.</p>
     */
    inline LogLevel GetLogLevelUpdate() const { return m_logLevelUpdate; }
    inline bool LogLevelUpdateHasBeenSet() const { return m_logLevelUpdateHasBeenSet; }
    inline void SetLogLevelUpdate(LogLevel value) { m_logLevelUpdateHasBeenSet = true; m_logLevelUpdate = value; }
    inline MonitoringConfigurationUpdate& WithLogLevelUpdate(LogLevel value) { SetLogLevelUpdate(value); return *this;}
    ///@}
  private:

    ConfigurationType m_configurationTypeUpdate{ConfigurationType::NOT_SET};
    bool m_configurationTypeUpdateHasBeenSet = false;

    MetricsLevel m_metricsLevelUpdate{MetricsLevel::NOT_SET};
    bool m_metricsLevelUpdateHasBeenSet = false;

    LogLevel m_logLevelUpdate{LogLevel::NOT_SET};
    bool m_logLevelUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
