/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/NvidiaMpsAllocation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

NvidiaMpsAllocation::NvidiaMpsAllocation(JsonView jsonValue) { *this = jsonValue; }

NvidiaMpsAllocation& NvidiaMpsAllocation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("memory")) {
    m_memory = jsonValue.GetInteger("memory");
    m_memoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxComputePercent")) {
    m_maxComputePercent = jsonValue.GetInteger("maxComputePercent");
    m_maxComputePercentHasBeenSet = true;
  }
  return *this;
}

JsonValue NvidiaMpsAllocation::Jsonize() const {
  JsonValue payload;

  if (m_memoryHasBeenSet) {
    payload.WithInteger("memory", m_memory);
  }

  if (m_maxComputePercentHasBeenSet) {
    payload.WithInteger("maxComputePercent", m_maxComputePercent);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
