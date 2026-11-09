/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/SharingStrategy.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

SharingStrategy::SharingStrategy(JsonView jsonValue) { *this = jsonValue; }

SharingStrategy& SharingStrategy::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("nvidiaMps")) {
    m_nvidiaMps = jsonValue.GetObject("nvidiaMps");
    m_nvidiaMpsHasBeenSet = true;
  }
  return *this;
}

JsonValue SharingStrategy::Jsonize() const {
  JsonValue payload;

  if (m_nvidiaMpsHasBeenSet) {
    payload.WithObject("nvidiaMps", m_nvidiaMps.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
