/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/MachineImageMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

MachineImageMetadata::MachineImageMetadata(JsonView jsonValue) { *this = jsonValue; }

MachineImageMetadata& MachineImageMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("platform")) {
    m_platform = MachineImagePlatformMapper::GetMachineImagePlatformForName(jsonValue.GetString("platform"));
    m_platformHasBeenSet = true;
  }
  return *this;
}

JsonValue MachineImageMetadata::Jsonize() const {
  JsonValue payload;

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  if (m_platformHasBeenSet) {
    payload.WithString("platform", MachineImagePlatformMapper::GetNameForMachineImagePlatform(m_platform));
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
