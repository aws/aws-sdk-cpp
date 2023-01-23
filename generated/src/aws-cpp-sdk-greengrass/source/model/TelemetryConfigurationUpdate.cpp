/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/TelemetryConfigurationUpdate.h>
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

TelemetryConfigurationUpdate::TelemetryConfigurationUpdate() : 
    m_telemetry(Telemetry::NOT_SET),
    m_telemetryHasBeenSet(false)
{
}

TelemetryConfigurationUpdate::TelemetryConfigurationUpdate(JsonView jsonValue) : 
    m_telemetry(Telemetry::NOT_SET),
    m_telemetryHasBeenSet(false)
{
  *this = jsonValue;
}

TelemetryConfigurationUpdate& TelemetryConfigurationUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Telemetry"))
  {
    m_telemetry = TelemetryMapper::GetTelemetryForName(jsonValue.GetString("Telemetry"));

    m_telemetryHasBeenSet = true;
  }

  return *this;
}

JsonValue TelemetryConfigurationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_telemetryHasBeenSet)
  {
   payload.WithString("Telemetry", TelemetryMapper::GetNameForTelemetry(m_telemetry));
  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
