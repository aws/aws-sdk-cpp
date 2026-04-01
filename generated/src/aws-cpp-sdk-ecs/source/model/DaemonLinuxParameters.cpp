/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/DaemonLinuxParameters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

DaemonLinuxParameters::DaemonLinuxParameters(JsonView jsonValue) { *this = jsonValue; }

DaemonLinuxParameters& DaemonLinuxParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("capabilities")) {
    m_capabilities = jsonValue.GetObject("capabilities");
    m_capabilitiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("devices")) {
    Aws::Utils::Array<JsonView> devicesJsonList = jsonValue.GetArray("devices");
    for (unsigned devicesIndex = 0; devicesIndex < devicesJsonList.GetLength(); ++devicesIndex) {
      m_devices.push_back(devicesJsonList[devicesIndex].AsObject());
    }
    m_devicesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("initProcessEnabled")) {
    m_initProcessEnabled = jsonValue.GetBool("initProcessEnabled");
    m_initProcessEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tmpfs")) {
    Aws::Utils::Array<JsonView> tmpfsJsonList = jsonValue.GetArray("tmpfs");
    for (unsigned tmpfsIndex = 0; tmpfsIndex < tmpfsJsonList.GetLength(); ++tmpfsIndex) {
      m_tmpfs.push_back(tmpfsJsonList[tmpfsIndex].AsObject());
    }
    m_tmpfsHasBeenSet = true;
  }
  return *this;
}

JsonValue DaemonLinuxParameters::Jsonize() const {
  JsonValue payload;

  if (m_capabilitiesHasBeenSet) {
    payload.WithObject("capabilities", m_capabilities.Jsonize());
  }

  if (m_devicesHasBeenSet) {
    Aws::Utils::Array<JsonValue> devicesJsonList(m_devices.size());
    for (unsigned devicesIndex = 0; devicesIndex < devicesJsonList.GetLength(); ++devicesIndex) {
      devicesJsonList[devicesIndex].AsObject(m_devices[devicesIndex].Jsonize());
    }
    payload.WithArray("devices", std::move(devicesJsonList));
  }

  if (m_initProcessEnabledHasBeenSet) {
    payload.WithBool("initProcessEnabled", m_initProcessEnabled);
  }

  if (m_tmpfsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tmpfsJsonList(m_tmpfs.size());
    for (unsigned tmpfsIndex = 0; tmpfsIndex < tmpfsJsonList.GetLength(); ++tmpfsIndex) {
      tmpfsJsonList[tmpfsIndex].AsObject(m_tmpfs[tmpfsIndex].Jsonize());
    }
    payload.WithArray("tmpfs", std::move(tmpfsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
