/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/license-manager/model/ScriptRuleStatement.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LicenseManager {
namespace Model {

ScriptRuleStatement::ScriptRuleStatement(JsonView jsonValue) { *this = jsonValue; }

ScriptRuleStatement& ScriptRuleStatement::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("KeyToMatch")) {
    m_keyToMatch = jsonValue.GetString("KeyToMatch");
    m_keyToMatchHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Script")) {
    m_script = jsonValue.GetString("Script");
    m_scriptHasBeenSet = true;
  }
  return *this;
}

JsonValue ScriptRuleStatement::Jsonize() const {
  JsonValue payload;

  if (m_keyToMatchHasBeenSet) {
    payload.WithString("KeyToMatch", m_keyToMatch);
  }

  if (m_scriptHasBeenSet) {
    payload.WithString("Script", m_script);
  }

  return payload;
}

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
