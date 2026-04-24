/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotwireless/model/SidewalkListDevicesForImportInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTWireless {
namespace Model {

SidewalkListDevicesForImportInfo::SidewalkListDevicesForImportInfo(JsonView jsonValue) { *this = jsonValue; }

SidewalkListDevicesForImportInfo& SidewalkListDevicesForImportInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Positioning")) {
    m_positioning = jsonValue.GetObject("Positioning");
    m_positioningHasBeenSet = true;
  }
  return *this;
}

JsonValue SidewalkListDevicesForImportInfo::Jsonize() const {
  JsonValue payload;

  if (m_positioningHasBeenSet) {
    payload.WithObject("Positioning", m_positioning.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTWireless
}  // namespace Aws
