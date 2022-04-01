/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/SidewalkDeviceMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

SidewalkDeviceMetadata::SidewalkDeviceMetadata() : 
    m_rssi(0),
    m_rssiHasBeenSet(false),
    m_batteryLevel(BatteryLevel::NOT_SET),
    m_batteryLevelHasBeenSet(false),
    m_event(Event::NOT_SET),
    m_eventHasBeenSet(false),
    m_deviceState(DeviceState::NOT_SET),
    m_deviceStateHasBeenSet(false)
{
}

SidewalkDeviceMetadata::SidewalkDeviceMetadata(JsonView jsonValue) : 
    m_rssi(0),
    m_rssiHasBeenSet(false),
    m_batteryLevel(BatteryLevel::NOT_SET),
    m_batteryLevelHasBeenSet(false),
    m_event(Event::NOT_SET),
    m_eventHasBeenSet(false),
    m_deviceState(DeviceState::NOT_SET),
    m_deviceStateHasBeenSet(false)
{
  *this = jsonValue;
}

SidewalkDeviceMetadata& SidewalkDeviceMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Rssi"))
  {
    m_rssi = jsonValue.GetInteger("Rssi");

    m_rssiHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BatteryLevel"))
  {
    m_batteryLevel = BatteryLevelMapper::GetBatteryLevelForName(jsonValue.GetString("BatteryLevel"));

    m_batteryLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Event"))
  {
    m_event = EventMapper::GetEventForName(jsonValue.GetString("Event"));

    m_eventHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceState"))
  {
    m_deviceState = DeviceStateMapper::GetDeviceStateForName(jsonValue.GetString("DeviceState"));

    m_deviceStateHasBeenSet = true;
  }

  return *this;
}

JsonValue SidewalkDeviceMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_rssiHasBeenSet)
  {
   payload.WithInteger("Rssi", m_rssi);

  }

  if(m_batteryLevelHasBeenSet)
  {
   payload.WithString("BatteryLevel", BatteryLevelMapper::GetNameForBatteryLevel(m_batteryLevel));
  }

  if(m_eventHasBeenSet)
  {
   payload.WithString("Event", EventMapper::GetNameForEvent(m_event));
  }

  if(m_deviceStateHasBeenSet)
  {
   payload.WithString("DeviceState", DeviceStateMapper::GetNameForDeviceState(m_deviceState));
  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
