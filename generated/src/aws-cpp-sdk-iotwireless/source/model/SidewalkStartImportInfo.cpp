/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotwireless/model/SidewalkStartImportInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTWireless {
namespace Model {

SidewalkStartImportInfo::SidewalkStartImportInfo(JsonView jsonValue) { *this = jsonValue; }

SidewalkStartImportInfo& SidewalkStartImportInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DeviceCreationFile")) {
    m_deviceCreationFile = jsonValue.GetString("DeviceCreationFile");
    m_deviceCreationFileHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Role")) {
    m_role = jsonValue.GetString("Role");
    m_roleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Positioning")) {
    m_positioning = jsonValue.GetObject("Positioning");
    m_positioningHasBeenSet = true;
  }
  return *this;
}

JsonValue SidewalkStartImportInfo::Jsonize() const {
  JsonValue payload;

  if (m_deviceCreationFileHasBeenSet) {
    payload.WithString("DeviceCreationFile", m_deviceCreationFile);
  }

  if (m_roleHasBeenSet) {
    payload.WithString("Role", m_role);
  }

  if (m_positioningHasBeenSet) {
    payload.WithObject("Positioning", m_positioning.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTWireless
}  // namespace Aws
