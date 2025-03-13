/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/PushConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

PushConfig::PushConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

PushConfig& PushConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AbortConfig"))
  {
    m_abortConfig = jsonValue.GetObject("AbortConfig");
    m_abortConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RolloutConfig"))
  {
    m_rolloutConfig = jsonValue.GetObject("RolloutConfig");
    m_rolloutConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimeoutConfig"))
  {
    m_timeoutConfig = jsonValue.GetObject("TimeoutConfig");
    m_timeoutConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue PushConfig::Jsonize() const
{
  JsonValue payload;

  if(m_abortConfigHasBeenSet)
  {
   payload.WithObject("AbortConfig", m_abortConfig.Jsonize());

  }

  if(m_rolloutConfigHasBeenSet)
  {
   payload.WithObject("RolloutConfig", m_rolloutConfig.Jsonize());

  }

  if(m_timeoutConfigHasBeenSet)
  {
   payload.WithObject("TimeoutConfig", m_timeoutConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
