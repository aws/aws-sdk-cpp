/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/DeviceDiscoverySummary.h>
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

DeviceDiscoverySummary::DeviceDiscoverySummary(JsonView jsonValue)
{
  *this = jsonValue;
}

DeviceDiscoverySummary& DeviceDiscoverySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DiscoveryType"))
  {
    m_discoveryType = DiscoveryTypeMapper::GetDiscoveryTypeForName(jsonValue.GetString("DiscoveryType"));
    m_discoveryTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = DeviceDiscoveryStatusMapper::GetDeviceDiscoveryStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue DeviceDiscoverySummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_discoveryTypeHasBeenSet)
  {
   payload.WithString("DiscoveryType", DiscoveryTypeMapper::GetNameForDiscoveryType(m_discoveryType));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", DeviceDiscoveryStatusMapper::GetNameForDeviceDiscoveryStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
