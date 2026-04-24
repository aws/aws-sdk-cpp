/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/model/MatchingRuleStatement.h>
#include <aws/license-manager/model/ScriptRuleStatement.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LicenseManager {
namespace Model {

/**
 * <p>OR rule statement.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/OrRuleStatement">AWS
 * API Reference</a></p>
 */
class OrRuleStatement {
 public:
  AWS_LICENSEMANAGER_API OrRuleStatement() = default;
  AWS_LICENSEMANAGER_API OrRuleStatement(Aws::Utils::Json::JsonView jsonValue);
  AWS_LICENSEMANAGER_API OrRuleStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Matching rule statements.</p>
   */
  inline const Aws::Vector<MatchingRuleStatement>& GetMatchingRuleStatements() const { return m_matchingRuleStatements; }
  inline bool MatchingRuleStatementsHasBeenSet() const { return m_matchingRuleStatementsHasBeenSet; }
  template <typename MatchingRuleStatementsT = Aws::Vector<MatchingRuleStatement>>
  void SetMatchingRuleStatements(MatchingRuleStatementsT&& value) {
    m_matchingRuleStatementsHasBeenSet = true;
    m_matchingRuleStatements = std::forward<MatchingRuleStatementsT>(value);
  }
  template <typename MatchingRuleStatementsT = Aws::Vector<MatchingRuleStatement>>
  OrRuleStatement& WithMatchingRuleStatements(MatchingRuleStatementsT&& value) {
    SetMatchingRuleStatements(std::forward<MatchingRuleStatementsT>(value));
    return *this;
  }
  template <typename MatchingRuleStatementsT = MatchingRuleStatement>
  OrRuleStatement& AddMatchingRuleStatements(MatchingRuleStatementsT&& value) {
    m_matchingRuleStatementsHasBeenSet = true;
    m_matchingRuleStatements.emplace_back(std::forward<MatchingRuleStatementsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Script rule statements.</p>
   */
  inline const Aws::Vector<ScriptRuleStatement>& GetScriptRuleStatements() const { return m_scriptRuleStatements; }
  inline bool ScriptRuleStatementsHasBeenSet() const { return m_scriptRuleStatementsHasBeenSet; }
  template <typename ScriptRuleStatementsT = Aws::Vector<ScriptRuleStatement>>
  void SetScriptRuleStatements(ScriptRuleStatementsT&& value) {
    m_scriptRuleStatementsHasBeenSet = true;
    m_scriptRuleStatements = std::forward<ScriptRuleStatementsT>(value);
  }
  template <typename ScriptRuleStatementsT = Aws::Vector<ScriptRuleStatement>>
  OrRuleStatement& WithScriptRuleStatements(ScriptRuleStatementsT&& value) {
    SetScriptRuleStatements(std::forward<ScriptRuleStatementsT>(value));
    return *this;
  }
  template <typename ScriptRuleStatementsT = ScriptRuleStatement>
  OrRuleStatement& AddScriptRuleStatements(ScriptRuleStatementsT&& value) {
    m_scriptRuleStatementsHasBeenSet = true;
    m_scriptRuleStatements.emplace_back(std::forward<ScriptRuleStatementsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<MatchingRuleStatement> m_matchingRuleStatements;

  Aws::Vector<ScriptRuleStatement> m_scriptRuleStatements;
  bool m_matchingRuleStatementsHasBeenSet = false;
  bool m_scriptRuleStatementsHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
