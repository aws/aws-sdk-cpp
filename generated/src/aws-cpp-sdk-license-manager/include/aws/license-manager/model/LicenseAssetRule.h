/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/model/RuleStatement.h>

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
 * <p>License asset rule.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/LicenseAssetRule">AWS
 * API Reference</a></p>
 */
class LicenseAssetRule {
 public:
  AWS_LICENSEMANAGER_API LicenseAssetRule() = default;
  AWS_LICENSEMANAGER_API LicenseAssetRule(Aws::Utils::Json::JsonView jsonValue);
  AWS_LICENSEMANAGER_API LicenseAssetRule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Rule statement.</p>
   */
  inline const RuleStatement& GetRuleStatement() const { return m_ruleStatement; }
  inline bool RuleStatementHasBeenSet() const { return m_ruleStatementHasBeenSet; }
  template <typename RuleStatementT = RuleStatement>
  void SetRuleStatement(RuleStatementT&& value) {
    m_ruleStatementHasBeenSet = true;
    m_ruleStatement = std::forward<RuleStatementT>(value);
  }
  template <typename RuleStatementT = RuleStatement>
  LicenseAssetRule& WithRuleStatement(RuleStatementT&& value) {
    SetRuleStatement(std::forward<RuleStatementT>(value));
    return *this;
  }
  ///@}
 private:
  RuleStatement m_ruleStatement;
  bool m_ruleStatementHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
