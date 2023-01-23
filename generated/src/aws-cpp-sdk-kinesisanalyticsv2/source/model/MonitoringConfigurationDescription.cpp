/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/MonitoringConfigurationDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

MonitoringConfigurationDescription::MonitoringConfigurationDescription() : 
    m_configurationType(ConfigurationType::NOT_SET),
    m_configurationTypeHasBeenSet(false),
    m_metricsLevel(MetricsLevel::NOT_SET),
    m_metricsLevelHasBeenSet(false),
    m_logLevel(LogLevel::NOT_SET),
    m_logLevelHasBeenSet(false)
{
}

MonitoringConfigurationDescription::MonitoringConfigurationDescription(JsonView jsonValue) : 
    m_configurationType(ConfigurationType::NOT_SET),
    m_configurationTypeHasBeenSet(false),
    m_metricsLevel(MetricsLevel::NOT_SET),
    m_metricsLevelHasBeenSet(false),
    m_logLevel(LogLevel::NOT_SET),
    m_logLevelHasBeenSet(false)
{
  *this = jsonValue;
}

MonitoringConfigurationDescription& MonitoringConfigurationDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConfigurationType"))
  {
    m_configurationType = ConfigurationTypeMapper::GetConfigurationTypeForName(jsonValue.GetString("ConfigurationType"));

    m_configurationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricsLevel"))
  {
    m_metricsLevel = MetricsLevelMapper::GetMetricsLevelForName(jsonValue.GetString("MetricsLevel"));

    m_metricsLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogLevel"))
  {
    m_logLevel = LogLevelMapper::GetLogLevelForName(jsonValue.GetString("LogLevel"));

    m_logLevelHasBeenSet = true;
  }

  return *this;
}

JsonValue MonitoringConfigurationDescription::Jsonize() const
{
  JsonValue payload;

  if(m_configurationTypeHasBeenSet)
  {
   payload.WithString("ConfigurationType", ConfigurationTypeMapper::GetNameForConfigurationType(m_configurationType));
  }

  if(m_metricsLevelHasBeenSet)
  {
   payload.WithString("MetricsLevel", MetricsLevelMapper::GetNameForMetricsLevel(m_metricsLevel));
  }

  if(m_logLevelHasBeenSet)
  {
   payload.WithString("LogLevel", LogLevelMapper::GetNameForLogLevel(m_logLevel));
  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
