/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/RuntimeConfiguration.h>
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

RuntimeConfiguration::RuntimeConfiguration() : 
    m_telemetryConfigurationHasBeenSet(false)
{
}

RuntimeConfiguration::RuntimeConfiguration(JsonView jsonValue) : 
    m_telemetryConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

RuntimeConfiguration& RuntimeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TelemetryConfiguration"))
  {
    m_telemetryConfiguration = jsonValue.GetObject("TelemetryConfiguration");

    m_telemetryConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue RuntimeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_telemetryConfigurationHasBeenSet)
  {
   payload.WithObject("TelemetryConfiguration", m_telemetryConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
