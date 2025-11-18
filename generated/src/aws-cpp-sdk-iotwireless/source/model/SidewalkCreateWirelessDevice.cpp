/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotwireless/model/SidewalkCreateWirelessDevice.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTWireless {
namespace Model {

SidewalkCreateWirelessDevice::SidewalkCreateWirelessDevice(JsonView jsonValue) { *this = jsonValue; }

SidewalkCreateWirelessDevice& SidewalkCreateWirelessDevice::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DeviceProfileId")) {
    m_deviceProfileId = jsonValue.GetString("DeviceProfileId");
    m_deviceProfileIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Positioning")) {
    m_positioning = jsonValue.GetObject("Positioning");
    m_positioningHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SidewalkManufacturingSn")) {
    m_sidewalkManufacturingSn = jsonValue.GetString("SidewalkManufacturingSn");
    m_sidewalkManufacturingSnHasBeenSet = true;
  }
  return *this;
}

JsonValue SidewalkCreateWirelessDevice::Jsonize() const {
  JsonValue payload;

  if (m_deviceProfileIdHasBeenSet) {
    payload.WithString("DeviceProfileId", m_deviceProfileId);
  }

  if (m_positioningHasBeenSet) {
    payload.WithObject("Positioning", m_positioning.Jsonize());
  }

  if (m_sidewalkManufacturingSnHasBeenSet) {
    payload.WithString("SidewalkManufacturingSn", m_sidewalkManufacturingSn);
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTWireless
}  // namespace Aws
