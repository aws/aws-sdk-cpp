/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/CanaryEntity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {

CanaryEntity::CanaryEntity(JsonView jsonValue) { *this = jsonValue; }

CanaryEntity& CanaryEntity::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CanaryName")) {
    m_canaryName = jsonValue.GetString("CanaryName");
    m_canaryNameHasBeenSet = true;
  }
  return *this;
}

JsonValue CanaryEntity::Jsonize() const {
  JsonValue payload;

  if (m_canaryNameHasBeenSet) {
    payload.WithString("CanaryName", m_canaryName);
  }

  return payload;
}

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
