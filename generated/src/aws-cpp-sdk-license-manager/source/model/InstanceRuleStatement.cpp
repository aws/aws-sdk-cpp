/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/license-manager/model/InstanceRuleStatement.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LicenseManager {
namespace Model {

InstanceRuleStatement::InstanceRuleStatement(JsonView jsonValue) { *this = jsonValue; }

InstanceRuleStatement& InstanceRuleStatement::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AndRuleStatement")) {
    m_andRuleStatement = jsonValue.GetObject("AndRuleStatement");
    m_andRuleStatementHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OrRuleStatement")) {
    m_orRuleStatement = jsonValue.GetObject("OrRuleStatement");
    m_orRuleStatementHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MatchingRuleStatement")) {
    m_matchingRuleStatement = jsonValue.GetObject("MatchingRuleStatement");
    m_matchingRuleStatementHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScriptRuleStatement")) {
    m_scriptRuleStatement = jsonValue.GetObject("ScriptRuleStatement");
    m_scriptRuleStatementHasBeenSet = true;
  }
  return *this;
}

JsonValue InstanceRuleStatement::Jsonize() const {
  JsonValue payload;

  if (m_andRuleStatementHasBeenSet) {
    payload.WithObject("AndRuleStatement", m_andRuleStatement.Jsonize());
  }

  if (m_orRuleStatementHasBeenSet) {
    payload.WithObject("OrRuleStatement", m_orRuleStatement.Jsonize());
  }

  if (m_matchingRuleStatementHasBeenSet) {
    payload.WithObject("MatchingRuleStatement", m_matchingRuleStatement.Jsonize());
  }

  if (m_scriptRuleStatementHasBeenSet) {
    payload.WithObject("ScriptRuleStatement", m_scriptRuleStatement.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
