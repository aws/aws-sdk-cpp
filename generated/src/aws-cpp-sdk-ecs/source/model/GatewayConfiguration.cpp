/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/GatewayConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

GatewayConfiguration::GatewayConfiguration(JsonView jsonValue) { *this = jsonValue; }

GatewayConfiguration& GatewayConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("hostSharedAlb")) {
    m_hostSharedAlb = jsonValue.GetObject("hostSharedAlb");
    m_hostSharedAlbHasBeenSet = true;
  }
  return *this;
}

JsonValue GatewayConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_hostSharedAlbHasBeenSet) {
    payload.WithObject("hostSharedAlb", m_hostSharedAlb.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
