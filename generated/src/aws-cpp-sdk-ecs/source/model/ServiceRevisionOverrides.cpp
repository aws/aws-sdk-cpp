/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/ServiceRevisionOverrides.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

ServiceRevisionOverrides::ServiceRevisionOverrides(JsonView jsonValue) { *this = jsonValue; }

ServiceRevisionOverrides& ServiceRevisionOverrides::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("runtimePlatform")) {
    m_runtimePlatform = jsonValue.GetObject("runtimePlatform");
    m_runtimePlatformHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceRevisionOverrides::Jsonize() const {
  JsonValue payload;

  if (m_runtimePlatformHasBeenSet) {
    payload.WithObject("runtimePlatform", m_runtimePlatform.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
