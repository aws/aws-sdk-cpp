/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/AutoRepairConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

AutoRepairConfiguration::AutoRepairConfiguration(JsonView jsonValue) { *this = jsonValue; }

AutoRepairConfiguration& AutoRepairConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("actionsStatus")) {
    m_actionsStatus = AutoRepairActionsStatusMapper::GetAutoRepairActionsStatusForName(jsonValue.GetString("actionsStatus"));
    m_actionsStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue AutoRepairConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_actionsStatusHasBeenSet) {
    payload.WithString("actionsStatus", AutoRepairActionsStatusMapper::GetNameForAutoRepairActionsStatus(m_actionsStatus));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
