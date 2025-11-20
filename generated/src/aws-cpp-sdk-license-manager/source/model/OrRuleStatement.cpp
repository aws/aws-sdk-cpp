/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/license-manager/model/OrRuleStatement.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LicenseManager {
namespace Model {

OrRuleStatement::OrRuleStatement(JsonView jsonValue) { *this = jsonValue; }

OrRuleStatement& OrRuleStatement::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MatchingRuleStatements")) {
    Aws::Utils::Array<JsonView> matchingRuleStatementsJsonList = jsonValue.GetArray("MatchingRuleStatements");
    for (unsigned matchingRuleStatementsIndex = 0; matchingRuleStatementsIndex < matchingRuleStatementsJsonList.GetLength();
         ++matchingRuleStatementsIndex) {
      m_matchingRuleStatements.push_back(matchingRuleStatementsJsonList[matchingRuleStatementsIndex].AsObject());
    }
    m_matchingRuleStatementsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScriptRuleStatements")) {
    Aws::Utils::Array<JsonView> scriptRuleStatementsJsonList = jsonValue.GetArray("ScriptRuleStatements");
    for (unsigned scriptRuleStatementsIndex = 0; scriptRuleStatementsIndex < scriptRuleStatementsJsonList.GetLength();
         ++scriptRuleStatementsIndex) {
      m_scriptRuleStatements.push_back(scriptRuleStatementsJsonList[scriptRuleStatementsIndex].AsObject());
    }
    m_scriptRuleStatementsHasBeenSet = true;
  }
  return *this;
}

JsonValue OrRuleStatement::Jsonize() const {
  JsonValue payload;

  if (m_matchingRuleStatementsHasBeenSet) {
    Aws::Utils::Array<JsonValue> matchingRuleStatementsJsonList(m_matchingRuleStatements.size());
    for (unsigned matchingRuleStatementsIndex = 0; matchingRuleStatementsIndex < matchingRuleStatementsJsonList.GetLength();
         ++matchingRuleStatementsIndex) {
      matchingRuleStatementsJsonList[matchingRuleStatementsIndex].AsObject(m_matchingRuleStatements[matchingRuleStatementsIndex].Jsonize());
    }
    payload.WithArray("MatchingRuleStatements", std::move(matchingRuleStatementsJsonList));
  }

  if (m_scriptRuleStatementsHasBeenSet) {
    Aws::Utils::Array<JsonValue> scriptRuleStatementsJsonList(m_scriptRuleStatements.size());
    for (unsigned scriptRuleStatementsIndex = 0; scriptRuleStatementsIndex < scriptRuleStatementsJsonList.GetLength();
         ++scriptRuleStatementsIndex) {
      scriptRuleStatementsJsonList[scriptRuleStatementsIndex].AsObject(m_scriptRuleStatements[scriptRuleStatementsIndex].Jsonize());
    }
    payload.WithArray("ScriptRuleStatements", std::move(scriptRuleStatementsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
