/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/AttackPhase.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

AttackPhase::AttackPhase(JsonView jsonValue) { *this = jsonValue; }

AttackPhase& AttackPhase::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("phase")) {
    m_phase = AttackPhaseNameMapper::GetAttackPhaseNameForName(jsonValue.GetString("phase"));
    m_phaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attacks")) {
    Aws::Utils::Array<JsonView> attacksJsonList = jsonValue.GetArray("attacks");
    for (unsigned attacksIndex = 0; attacksIndex < attacksJsonList.GetLength(); ++attacksIndex) {
      m_attacks.push_back(attacksJsonList[attacksIndex].AsObject());
    }
    m_attacksHasBeenSet = true;
  }
  return *this;
}

JsonValue AttackPhase::Jsonize() const {
  JsonValue payload;

  if (m_phaseHasBeenSet) {
    payload.WithString("phase", AttackPhaseNameMapper::GetNameForAttackPhaseName(m_phase));
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_attacksHasBeenSet) {
    Aws::Utils::Array<JsonValue> attacksJsonList(m_attacks.size());
    for (unsigned attacksIndex = 0; attacksIndex < attacksJsonList.GetLength(); ++attacksIndex) {
      attacksJsonList[attacksIndex].AsObject(m_attacks[attacksIndex].Jsonize());
    }
    payload.WithArray("attacks", std::move(attacksJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
