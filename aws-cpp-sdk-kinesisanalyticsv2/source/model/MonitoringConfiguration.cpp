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

#include <aws/kinesisanalyticsv2/model/MonitoringConfiguration.h>
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

MonitoringConfiguration::MonitoringConfiguration() : 
    m_configurationType(ConfigurationType::NOT_SET),
    m_configurationTypeHasBeenSet(false),
    m_metricsLevel(MetricsLevel::NOT_SET),
    m_metricsLevelHasBeenSet(false),
    m_logLevel(LogLevel::NOT_SET),
    m_logLevelHasBeenSet(false)
{
}

MonitoringConfiguration::MonitoringConfiguration(JsonView jsonValue) : 
    m_configurationType(ConfigurationType::NOT_SET),
    m_configurationTypeHasBeenSet(false),
    m_metricsLevel(MetricsLevel::NOT_SET),
    m_metricsLevelHasBeenSet(false),
    m_logLevel(LogLevel::NOT_SET),
    m_logLevelHasBeenSet(false)
{
  *this = jsonValue;
}

MonitoringConfiguration& MonitoringConfiguration::operator =(JsonView jsonValue)
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

JsonValue MonitoringConfiguration::Jsonize() const
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
