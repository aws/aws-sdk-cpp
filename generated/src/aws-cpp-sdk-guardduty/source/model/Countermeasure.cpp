/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/Countermeasure.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

Countermeasure::Countermeasure(JsonView jsonValue) { *this = jsonValue; }

Countermeasure& Countermeasure::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("defenseTactic")) {
    m_defenseTactic = DefenseTacticMapper::GetDefenseTacticForName(jsonValue.GetString("defenseTactic"));
    m_defenseTacticHasBeenSet = true;
  }
  if (jsonValue.ValueExists("actions")) {
    Aws::Utils::Array<JsonView> actionsJsonList = jsonValue.GetArray("actions");
    for (unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex) {
      m_actions.push_back(actionsJsonList[actionsIndex].AsObject());
    }
    m_actionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue Countermeasure::Jsonize() const {
  JsonValue payload;

  if (m_defenseTacticHasBeenSet) {
    payload.WithString("defenseTactic", DefenseTacticMapper::GetNameForDefenseTactic(m_defenseTactic));
  }

  if (m_actionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> actionsJsonList(m_actions.size());
    for (unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex) {
      actionsJsonList[actionsIndex].AsObject(m_actions[actionsIndex].Jsonize());
    }
    payload.WithArray("actions", std::move(actionsJsonList));
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
