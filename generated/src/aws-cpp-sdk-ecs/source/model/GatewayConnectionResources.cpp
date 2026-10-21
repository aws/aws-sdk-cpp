/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/GatewayConnectionResources.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

GatewayConnectionResources::GatewayConnectionResources(JsonView jsonValue) { *this = jsonValue; }

GatewayConnectionResources& GatewayConnectionResources::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("hostSharedAlb")) {
    Aws::Utils::Array<JsonView> hostSharedAlbJsonList = jsonValue.GetArray("hostSharedAlb");
    for (unsigned hostSharedAlbIndex = 0; hostSharedAlbIndex < hostSharedAlbJsonList.GetLength(); ++hostSharedAlbIndex) {
      m_hostSharedAlb.push_back(hostSharedAlbJsonList[hostSharedAlbIndex].AsObject());
    }
    m_hostSharedAlbHasBeenSet = true;
  }
  return *this;
}

JsonValue GatewayConnectionResources::Jsonize() const {
  JsonValue payload;

  if (m_hostSharedAlbHasBeenSet) {
    Aws::Utils::Array<JsonValue> hostSharedAlbJsonList(m_hostSharedAlb.size());
    for (unsigned hostSharedAlbIndex = 0; hostSharedAlbIndex < hostSharedAlbJsonList.GetLength(); ++hostSharedAlbIndex) {
      hostSharedAlbJsonList[hostSharedAlbIndex].AsObject(m_hostSharedAlb[hostSharedAlbIndex].Jsonize());
    }
    payload.WithArray("hostSharedAlb", std::move(hostSharedAlbJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
