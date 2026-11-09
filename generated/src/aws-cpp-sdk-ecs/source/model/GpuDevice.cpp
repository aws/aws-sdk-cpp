/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/GpuDevice.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

GpuDevice::GpuDevice(JsonView jsonValue) { *this = jsonValue; }

GpuDevice& GpuDevice::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("gpuId")) {
    m_gpuId = jsonValue.GetString("gpuId");
    m_gpuIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sharingMode")) {
    m_sharingMode = GpuSharingModeMapper::GetGpuSharingModeForName(jsonValue.GetString("sharingMode"));
    m_sharingModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalMemoryInMiB")) {
    m_totalMemoryInMiB = jsonValue.GetInteger("totalMemoryInMiB");
    m_totalMemoryInMiBHasBeenSet = true;
  }
  if (jsonValue.ValueExists("remainingMemoryInMiB")) {
    m_remainingMemoryInMiB = jsonValue.GetInteger("remainingMemoryInMiB");
    m_remainingMemoryInMiBHasBeenSet = true;
  }
  if (jsonValue.ValueExists("containerCount")) {
    m_containerCount = jsonValue.GetInteger("containerCount");
    m_containerCountHasBeenSet = true;
  }
  return *this;
}

JsonValue GpuDevice::Jsonize() const {
  JsonValue payload;

  if (m_gpuIdHasBeenSet) {
    payload.WithString("gpuId", m_gpuId);
  }

  if (m_sharingModeHasBeenSet) {
    payload.WithString("sharingMode", GpuSharingModeMapper::GetNameForGpuSharingMode(m_sharingMode));
  }

  if (m_totalMemoryInMiBHasBeenSet) {
    payload.WithInteger("totalMemoryInMiB", m_totalMemoryInMiB);
  }

  if (m_remainingMemoryInMiBHasBeenSet) {
    payload.WithInteger("remainingMemoryInMiB", m_remainingMemoryInMiB);
  }

  if (m_containerCountHasBeenSet) {
    payload.WithInteger("containerCount", m_containerCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
