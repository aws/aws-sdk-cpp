/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/RuntimePlatformOverride.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

RuntimePlatformOverride::RuntimePlatformOverride(JsonView jsonValue) { *this = jsonValue; }

RuntimePlatformOverride& RuntimePlatformOverride::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("cpuArchitecture")) {
    m_cpuArchitecture = jsonValue.GetString("cpuArchitecture");
    m_cpuArchitectureHasBeenSet = true;
  }
  return *this;
}

JsonValue RuntimePlatformOverride::Jsonize() const {
  JsonValue payload;

  if (m_cpuArchitectureHasBeenSet) {
    payload.WithString("cpuArchitecture", m_cpuArchitecture);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
