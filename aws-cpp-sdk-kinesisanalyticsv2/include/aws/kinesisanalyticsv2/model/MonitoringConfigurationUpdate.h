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
   * <p>Describes updates to configuration parameters for Amazon CloudWatch logging
   * for a Java-based Kinesis Data Analytics application.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/MonitoringConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API MonitoringConfigurationUpdate
  {
  public:
    MonitoringConfigurationUpdate();
    MonitoringConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    MonitoringConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes updates to whether to use the default CloudWatch logging
     * configuration for an application.</p>
     */
    inline const ConfigurationType& GetConfigurationTypeUpdate() const{ return m_configurationTypeUpdate; }

    /**
     * <p>Describes updates to whether to use the default CloudWatch logging
     * configuration for an application.</p>
     */
    inline bool ConfigurationTypeUpdateHasBeenSet() const { return m_configurationTypeUpdateHasBeenSet; }

    /**
     * <p>Describes updates to whether to use the default CloudWatch logging
     * configuration for an application.</p>
     */
    inline void SetConfigurationTypeUpdate(const ConfigurationType& value) { m_configurationTypeUpdateHasBeenSet = true; m_configurationTypeUpdate = value; }

    /**
     * <p>Describes updates to whether to use the default CloudWatch logging
     * configuration for an application.</p>
     */
    inline void SetConfigurationTypeUpdate(ConfigurationType&& value) { m_configurationTypeUpdateHasBeenSet = true; m_configurationTypeUpdate = std::move(value); }

    /**
     * <p>Describes updates to whether to use the default CloudWatch logging
     * configuration for an application.</p>
     */
    inline MonitoringConfigurationUpdate& WithConfigurationTypeUpdate(const ConfigurationType& value) { SetConfigurationTypeUpdate(value); return *this;}

    /**
     * <p>Describes updates to whether to use the default CloudWatch logging
     * configuration for an application.</p>
     */
    inline MonitoringConfigurationUpdate& WithConfigurationTypeUpdate(ConfigurationType&& value) { SetConfigurationTypeUpdate(std::move(value)); return *this;}


    /**
     * <p>Describes updates to the granularity of the CloudWatch Logs for an
     * application.</p>
     */
    inline const MetricsLevel& GetMetricsLevelUpdate() const{ return m_metricsLevelUpdate; }

    /**
     * <p>Describes updates to the granularity of the CloudWatch Logs for an
     * application.</p>
     */
    inline bool MetricsLevelUpdateHasBeenSet() const { return m_metricsLevelUpdateHasBeenSet; }

    /**
     * <p>Describes updates to the granularity of the CloudWatch Logs for an
     * application.</p>
     */
    inline void SetMetricsLevelUpdate(const MetricsLevel& value) { m_metricsLevelUpdateHasBeenSet = true; m_metricsLevelUpdate = value; }

    /**
     * <p>Describes updates to the granularity of the CloudWatch Logs for an
     * application.</p>
     */
    inline void SetMetricsLevelUpdate(MetricsLevel&& value) { m_metricsLevelUpdateHasBeenSet = true; m_metricsLevelUpdate = std::move(value); }

    /**
     * <p>Describes updates to the granularity of the CloudWatch Logs for an
     * application.</p>
     */
    inline MonitoringConfigurationUpdate& WithMetricsLevelUpdate(const MetricsLevel& value) { SetMetricsLevelUpdate(value); return *this;}

    /**
     * <p>Describes updates to the granularity of the CloudWatch Logs for an
     * application.</p>
     */
    inline MonitoringConfigurationUpdate& WithMetricsLevelUpdate(MetricsLevel&& value) { SetMetricsLevelUpdate(std::move(value)); return *this;}


    /**
     * <p>Describes updates to the verbosity of the CloudWatch Logs for an
     * application.</p>
     */
    inline const LogLevel& GetLogLevelUpdate() const{ return m_logLevelUpdate; }

    /**
     * <p>Describes updates to the verbosity of the CloudWatch Logs for an
     * application.</p>
     */
    inline bool LogLevelUpdateHasBeenSet() const { return m_logLevelUpdateHasBeenSet; }

    /**
     * <p>Describes updates to the verbosity of the CloudWatch Logs for an
     * application.</p>
     */
    inline void SetLogLevelUpdate(const LogLevel& value) { m_logLevelUpdateHasBeenSet = true; m_logLevelUpdate = value; }

    /**
     * <p>Describes updates to the verbosity of the CloudWatch Logs for an
     * application.</p>
     */
    inline void SetLogLevelUpdate(LogLevel&& value) { m_logLevelUpdateHasBeenSet = true; m_logLevelUpdate = std::move(value); }

    /**
     * <p>Describes updates to the verbosity of the CloudWatch Logs for an
     * application.</p>
     */
    inline MonitoringConfigurationUpdate& WithLogLevelUpdate(const LogLevel& value) { SetLogLevelUpdate(value); return *this;}

    /**
     * <p>Describes updates to the verbosity of the CloudWatch Logs for an
     * application.</p>
     */
    inline MonitoringConfigurationUpdate& WithLogLevelUpdate(LogLevel&& value) { SetLogLevelUpdate(std::move(value)); return *this;}

  private:

    ConfigurationType m_configurationTypeUpdate;
    bool m_configurationTypeUpdateHasBeenSet;

    MetricsLevel m_metricsLevelUpdate;
    bool m_metricsLevelUpdateHasBeenSet;

    LogLevel m_logLevelUpdate;
    bool m_logLevelUpdateHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
