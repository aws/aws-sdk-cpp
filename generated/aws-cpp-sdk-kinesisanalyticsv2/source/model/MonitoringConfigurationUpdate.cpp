/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/MonitoringConfigurationUpdate.h>
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

MonitoringConfigurationUpdate::MonitoringConfigurationUpdate() : 
    m_configurationTypeUpdate(ConfigurationType::NOT_SET),
    m_configurationTypeUpdateHasBeenSet(false),
    m_metricsLevelUpdate(MetricsLevel::NOT_SET),
    m_metricsLevelUpdateHasBeenSet(false),
    m_logLevelUpdate(LogLevel::NOT_SET),
    m_logLevelUpdateHasBeenSet(false)
{
}

MonitoringConfigurationUpdate::MonitoringConfigurationUpdate(JsonView jsonValue) : 
    m_configurationTypeUpdate(ConfigurationType::NOT_SET),
    m_configurationTypeUpdateHasBeenSet(false),
    m_metricsLevelUpdate(MetricsLevel::NOT_SET),
    m_metricsLevelUpdateHasBeenSet(false),
    m_logLevelUpdate(LogLevel::NOT_SET),
    m_logLevelUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

MonitoringConfigurationUpdate& MonitoringConfigurationUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConfigurationTypeUpdate"))
  {
    m_configurationTypeUpdate = ConfigurationTypeMapper::GetConfigurationTypeForName(jsonValue.GetString("ConfigurationTypeUpdate"));

    m_configurationTypeUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricsLevelUpdate"))
  {
    m_metricsLevelUpdate = MetricsLevelMapper::GetMetricsLevelForName(jsonValue.GetString("MetricsLevelUpdate"));

    m_metricsLevelUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogLevelUpdate"))
  {
    m_logLevelUpdate = LogLevelMapper::GetLogLevelForName(jsonValue.GetString("LogLevelUpdate"));

    m_logLevelUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue MonitoringConfigurationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_configurationTypeUpdateHasBeenSet)
  {
   payload.WithString("ConfigurationTypeUpdate", ConfigurationTypeMapper::GetNameForConfigurationType(m_configurationTypeUpdate));
  }

  if(m_metricsLevelUpdateHasBeenSet)
  {
   payload.WithString("MetricsLevelUpdate", MetricsLevelMapper::GetNameForMetricsLevel(m_metricsLevelUpdate));
  }

  if(m_logLevelUpdateHasBeenSet)
  {
   payload.WithString("LogLevelUpdate", LogLevelMapper::GetNameForLogLevel(m_logLevelUpdate));
  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
