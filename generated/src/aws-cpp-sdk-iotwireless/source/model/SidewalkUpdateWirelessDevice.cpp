/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotwireless/model/SidewalkUpdateWirelessDevice.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTWireless {
namespace Model {

SidewalkUpdateWirelessDevice::SidewalkUpdateWirelessDevice(JsonView jsonValue) { *this = jsonValue; }

SidewalkUpdateWirelessDevice& SidewalkUpdateWirelessDevice::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Positioning")) {
    m_positioning = jsonValue.GetObject("Positioning");
    m_positioningHasBeenSet = true;
  }
  return *this;
}

JsonValue SidewalkUpdateWirelessDevice::Jsonize() const {
  JsonValue payload;

  if (m_positioningHasBeenSet) {
    payload.WithObject("Positioning", m_positioning.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTWireless
}  // namespace Aws
