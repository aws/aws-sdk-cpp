/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/TelemetryConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Greengrass
{
namespace Model
{

TelemetryConfiguration::TelemetryConfiguration() : 
    m_configurationSyncStatus(ConfigurationSyncStatus::NOT_SET),
    m_configurationSyncStatusHasBeenSet(false),
    m_telemetry(Telemetry::NOT_SET),
    m_telemetryHasBeenSet(false)
{
}

TelemetryConfiguration::TelemetryConfiguration(JsonView jsonValue) : 
    m_configurationSyncStatus(ConfigurationSyncStatus::NOT_SET),
    m_configurationSyncStatusHasBeenSet(false),
    m_telemetry(Telemetry::NOT_SET),
    m_telemetryHasBeenSet(false)
{
  *this = jsonValue;
}

TelemetryConfiguration& TelemetryConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConfigurationSyncStatus"))
  {
    m_configurationSyncStatus = ConfigurationSyncStatusMapper::GetConfigurationSyncStatusForName(jsonValue.GetString("ConfigurationSyncStatus"));

    m_configurationSyncStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Telemetry"))
  {
    m_telemetry = TelemetryMapper::GetTelemetryForName(jsonValue.GetString("Telemetry"));

    m_telemetryHasBeenSet = true;
  }

  return *this;
}

JsonValue TelemetryConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_configurationSyncStatusHasBeenSet)
  {
   payload.WithString("ConfigurationSyncStatus", ConfigurationSyncStatusMapper::GetNameForConfigurationSyncStatus(m_configurationSyncStatus));
  }

  if(m_telemetryHasBeenSet)
  {
   payload.WithString("Telemetry", TelemetryMapper::GetNameForTelemetry(m_telemetry));
  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
