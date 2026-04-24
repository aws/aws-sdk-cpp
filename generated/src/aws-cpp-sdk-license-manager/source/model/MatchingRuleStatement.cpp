/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/license-manager/model/MatchingRuleStatement.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LicenseManager {
namespace Model {

MatchingRuleStatement::MatchingRuleStatement(JsonView jsonValue) { *this = jsonValue; }

MatchingRuleStatement& MatchingRuleStatement::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("KeyToMatch")) {
    m_keyToMatch = jsonValue.GetString("KeyToMatch");
    m_keyToMatchHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Constraint")) {
    m_constraint = jsonValue.GetString("Constraint");
    m_constraintHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ValueToMatch")) {
    Aws::Utils::Array<JsonView> valueToMatchJsonList = jsonValue.GetArray("ValueToMatch");
    for (unsigned valueToMatchIndex = 0; valueToMatchIndex < valueToMatchJsonList.GetLength(); ++valueToMatchIndex) {
      m_valueToMatch.push_back(valueToMatchJsonList[valueToMatchIndex].AsString());
    }
    m_valueToMatchHasBeenSet = true;
  }
  return *this;
}

JsonValue MatchingRuleStatement::Jsonize() const {
  JsonValue payload;

  if (m_keyToMatchHasBeenSet) {
    payload.WithString("KeyToMatch", m_keyToMatch);
  }

  if (m_constraintHasBeenSet) {
    payload.WithString("Constraint", m_constraint);
  }

  if (m_valueToMatchHasBeenSet) {
    Aws::Utils::Array<JsonValue> valueToMatchJsonList(m_valueToMatch.size());
    for (unsigned valueToMatchIndex = 0; valueToMatchIndex < valueToMatchJsonList.GetLength(); ++valueToMatchIndex) {
      valueToMatchJsonList[valueToMatchIndex].AsString(m_valueToMatch[valueToMatchIndex]);
    }
    payload.WithArray("ValueToMatch", std::move(valueToMatchJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
