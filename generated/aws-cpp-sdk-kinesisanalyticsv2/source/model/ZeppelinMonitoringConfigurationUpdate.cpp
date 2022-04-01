/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/ZeppelinMonitoringConfigurationUpdate.h>
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

ZeppelinMonitoringConfigurationUpdate::ZeppelinMonitoringConfigurationUpdate() : 
    m_logLevelUpdate(LogLevel::NOT_SET),
    m_logLevelUpdateHasBeenSet(false)
{
}

ZeppelinMonitoringConfigurationUpdate::ZeppelinMonitoringConfigurationUpdate(JsonView jsonValue) : 
    m_logLevelUpdate(LogLevel::NOT_SET),
    m_logLevelUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

ZeppelinMonitoringConfigurationUpdate& ZeppelinMonitoringConfigurationUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LogLevelUpdate"))
  {
    m_logLevelUpdate = LogLevelMapper::GetLogLevelForName(jsonValue.GetString("LogLevelUpdate"));

    m_logLevelUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue ZeppelinMonitoringConfigurationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_logLevelUpdateHasBeenSet)
  {
   payload.WithString("LogLevelUpdate", LogLevelMapper::GetNameForLogLevel(m_logLevelUpdate));
  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
