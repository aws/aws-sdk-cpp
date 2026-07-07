/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/VmInstanceMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

VmInstanceMetadata::VmInstanceMetadata(JsonView jsonValue) { *this = jsonValue; }

VmInstanceMetadata& VmInstanceMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("platform")) {
    m_platform = VmPlatformMapper::GetVmPlatformForName(jsonValue.GetString("platform"));
    m_platformHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inventoryHash")) {
    m_inventoryHash = jsonValue.GetString("inventoryHash");
    m_inventoryHashHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vmImageReference")) {
    m_vmImageReference = jsonValue.GetString("vmImageReference");
    m_vmImageReferenceHasBeenSet = true;
  }
  return *this;
}

JsonValue VmInstanceMetadata::Jsonize() const {
  JsonValue payload;

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  if (m_platformHasBeenSet) {
    payload.WithString("platform", VmPlatformMapper::GetNameForVmPlatform(m_platform));
  }

  if (m_inventoryHashHasBeenSet) {
    payload.WithString("inventoryHash", m_inventoryHash);
  }

  if (m_vmImageReferenceHasBeenSet) {
    payload.WithString("vmImageReference", m_vmImageReference);
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
