/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/EnabledControlInheritanceDrift.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ControlTower {
namespace Model {

EnabledControlInheritanceDrift::EnabledControlInheritanceDrift(JsonView jsonValue) { *this = jsonValue; }

EnabledControlInheritanceDrift& EnabledControlInheritanceDrift::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("status")) {
    m_status = DriftStatusMapper::GetDriftStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue EnabledControlInheritanceDrift::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("status", DriftStatusMapper::GetNameForDriftStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace ControlTower
}  // namespace Aws
