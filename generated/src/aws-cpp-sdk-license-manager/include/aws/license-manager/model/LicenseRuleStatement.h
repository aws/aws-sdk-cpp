/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/model/AndRuleStatement.h>
#include <aws/license-manager/model/MatchingRuleStatement.h>
#include <aws/license-manager/model/OrRuleStatement.h>

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
 * <p>License rule statement.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/LicenseRuleStatement">AWS
 * API Reference</a></p>
 */
class LicenseRuleStatement {
 public:
  AWS_LICENSEMANAGER_API LicenseRuleStatement() = default;
  AWS_LICENSEMANAGER_API LicenseRuleStatement(Aws::Utils::Json::JsonView jsonValue);
  AWS_LICENSEMANAGER_API LicenseRuleStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  LicenseRuleStatement& WithAndRuleStatement(AndRuleStatementT&& value) {
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
  LicenseRuleStatement& WithOrRuleStatement(OrRuleStatementT&& value) {
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
  LicenseRuleStatement& WithMatchingRuleStatement(MatchingRuleStatementT&& value) {
    SetMatchingRuleStatement(std::forward<MatchingRuleStatementT>(value));
    return *this;
  }
  ///@}
 private:
  AndRuleStatement m_andRuleStatement;

  OrRuleStatement m_orRuleStatement;

  MatchingRuleStatement m_matchingRuleStatement;
  bool m_andRuleStatementHasBeenSet = false;
  bool m_orRuleStatementHasBeenSet = false;
  bool m_matchingRuleStatementHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
