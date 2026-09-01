/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/MountOverrides.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

MountOverrides::MountOverrides(JsonView jsonValue) { *this = jsonValue; }

MountOverrides& MountOverrides::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("computeNodes")) {
    Aws::Map<Aws::String, JsonView> computeNodesJsonMap = jsonValue.GetObject("computeNodes").GetAllObjects();
    for (auto& computeNodesItem : computeNodesJsonMap) {
      Aws::Utils::Array<JsonView> mountList2JsonList = computeNodesItem.second.AsArray();
      Aws::Vector<Mount> mountList2List;
      mountList2List.reserve((size_t)mountList2JsonList.GetLength());
      for (unsigned mountList2Index = 0; mountList2Index < mountList2JsonList.GetLength(); ++mountList2Index) {
        mountList2List.push_back(mountList2JsonList[mountList2Index].AsObject());
      }
      m_computeNodes[computeNodesItem.first] = std::move(mountList2List);
    }
    m_computeNodesHasBeenSet = true;
  }
  return *this;
}

JsonValue MountOverrides::Jsonize() const {
  JsonValue payload;

  if (m_computeNodesHasBeenSet) {
    JsonValue computeNodesJsonMap;
    for (auto& computeNodesItem : m_computeNodes) {
      Aws::Utils::Array<JsonValue> mountListJsonList(computeNodesItem.second.size());
      for (unsigned mountListIndex = 0; mountListIndex < mountListJsonList.GetLength(); ++mountListIndex) {
        mountListJsonList[mountListIndex].AsObject(computeNodesItem.second[mountListIndex].Jsonize());
      }
      computeNodesJsonMap.WithArray(computeNodesItem.first, std::move(mountListJsonList));
    }
    payload.WithObject("computeNodes", std::move(computeNodesJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
