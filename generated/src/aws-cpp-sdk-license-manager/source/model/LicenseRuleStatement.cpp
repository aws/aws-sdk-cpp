/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/license-manager/model/LicenseRuleStatement.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LicenseManager {
namespace Model {

LicenseRuleStatement::LicenseRuleStatement(JsonView jsonValue) { *this = jsonValue; }

LicenseRuleStatement& LicenseRuleStatement::operator=(JsonView jsonValue) {
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
  return *this;
}

JsonValue LicenseRuleStatement::Jsonize() const {
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

  return payload;
}

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
