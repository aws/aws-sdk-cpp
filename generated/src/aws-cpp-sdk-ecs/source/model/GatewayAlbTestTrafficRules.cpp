/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/GatewayAlbTestTrafficRules.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

GatewayAlbTestTrafficRules::GatewayAlbTestTrafficRules(JsonView jsonValue) { *this = jsonValue; }

GatewayAlbTestTrafficRules& GatewayAlbTestTrafficRules::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("header")) {
    m_header = jsonValue.GetObject("header");
    m_headerHasBeenSet = true;
  }
  return *this;
}

JsonValue GatewayAlbTestTrafficRules::Jsonize() const {
  JsonValue payload;

  if (m_headerHasBeenSet) {
    payload.WithObject("header", m_header.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
