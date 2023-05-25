/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/ZeppelinMonitoringConfiguration.h>
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

ZeppelinMonitoringConfiguration::ZeppelinMonitoringConfiguration() : 
    m_logLevel(LogLevel::NOT_SET),
    m_logLevelHasBeenSet(false)
{
}

ZeppelinMonitoringConfiguration::ZeppelinMonitoringConfiguration(JsonView jsonValue) : 
    m_logLevel(LogLevel::NOT_SET),
    m_logLevelHasBeenSet(false)
{
  *this = jsonValue;
}

ZeppelinMonitoringConfiguration& ZeppelinMonitoringConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LogLevel"))
  {
    m_logLevel = LogLevelMapper::GetLogLevelForName(jsonValue.GetString("LogLevel"));

    m_logLevelHasBeenSet = true;
  }

  return *this;
}

JsonValue ZeppelinMonitoringConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_logLevelHasBeenSet)
  {
   payload.WithString("LogLevel", LogLevelMapper::GetNameForLogLevel(m_logLevel));
  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
