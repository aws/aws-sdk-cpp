/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/model/AndRuleStatement.h>
#include <aws/license-manager/model/MatchingRuleStatement.h>
#include <aws/license-manager/model/OrRuleStatement.h>
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
 * <p>Instance rule statement.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/InstanceRuleStatement">AWS
 * API Reference</a></p>
 */
class InstanceRuleStatement {
 public:
  AWS_LICENSEMANAGER_API InstanceRuleStatement() = default;
  AWS_LICENSEMANAGER_API InstanceRuleStatement(Aws::Utils::Json::JsonView jsonValue);
  AWS_LICENSEMANAGER_API InstanceRuleStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>AND rule statement.</p>
   */
  inline const AndRuleStatement& GetAndRuleStatement() const { return m_andRuleStatement; }
  inline bool AndRuleStatementHasBeenSet() const { return m_andRuleStatementHasBeenSet; }
  template <typename AndRuleStatementT = AndRuleStatement>
  void SetAndRuleStatement(AndRuleStatementT&& value) {
    m_andRuleStatementHasBeenSet = true;
    m_andRuleStatement = std::forward<AndRuleStatementT>(value);
  }
  template <typename AndRuleStatementT = AndRuleStatement>
  InstanceRuleStatement& WithAndRuleStatement(AndRuleStatementT&& value) {
    SetAndRuleStatement(std::forward<AndRuleStatementT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>OR rule statement.</p>
   */
  inline const OrRuleStatement& GetOrRuleStatement() const { return m_orRuleStatement; }
  inline bool OrRuleStatementHasBeenSet() const { return m_orRuleStatementHasBeenSet; }
  template <typename OrRuleStatementT = OrRuleStatement>
  void SetOrRuleStatement(OrRuleStatementT&& value) {
    m_orRuleStatementHasBeenSet = true;
    m_orRuleStatement = std::forward<OrRuleStatementT>(value);
  }
  template <typename OrRuleStatementT = OrRuleStatement>
  InstanceRuleStatement& WithOrRuleStatement(OrRuleStatementT&& value) {
    SetOrRuleStatement(std::forward<OrRuleStatementT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Matching rule statement.</p>
   */
  inline const MatchingRuleStatement& GetMatchingRuleStatement() const { return m_matchingRuleStatement; }
  inline bool MatchingRuleStatementHasBeenSet() const { return m_matchingRuleStatementHasBeenSet; }
  template <typename MatchingRuleStatementT = MatchingRuleStatement>
  void SetMatchingRuleStatement(MatchingRuleStatementT&& value) {
    m_matchingRuleStatementHasBeenSet = true;
    m_matchingRuleStatement = std::forward<MatchingRuleStatementT>(value);
  }
  template <typename MatchingRuleStatementT = MatchingRuleStatement>
  InstanceRuleStatement& WithMatchingRuleStatement(MatchingRuleStatementT&& value) {
    SetMatchingRuleStatement(std::forward<MatchingRuleStatementT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Script rule statement.</p>
   */
  inline const ScriptRuleStatement& GetScriptRuleStatement() const { return m_scriptRuleStatement; }
  inline bool ScriptRuleStatementHasBeenSet() const { return m_scriptRuleStatementHasBeenSet; }
  template <typename ScriptRuleStatementT = ScriptRuleStatement>
  void SetScriptRuleStatement(ScriptRuleStatementT&& value) {
    m_scriptRuleStatementHasBeenSet = true;
    m_scriptRuleStatement = std::forward<ScriptRuleStatementT>(value);
  }
  template <typename ScriptRuleStatementT = ScriptRuleStatement>
  InstanceRuleStatement& WithScriptRuleStatement(ScriptRuleStatementT&& value) {
    SetScriptRuleStatement(std::forward<ScriptRuleStatementT>(value));
    return *this;
  }
  ///@}
 private:
  AndRuleStatement m_andRuleStatement;
  bool m_andRuleStatementHasBeenSet = false;

  OrRuleStatement m_orRuleStatement;
  bool m_orRuleStatementHasBeenSet = false;

  MatchingRuleStatement m_matchingRuleStatement;
  bool m_matchingRuleStatementHasBeenSet = false;

  ScriptRuleStatement m_scriptRuleStatement;
  bool m_scriptRuleStatementHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
