/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/model/InstanceRuleStatement.h>
#include <aws/license-manager/model/LicenseConfigurationRuleStatement.h>
#include <aws/license-manager/model/LicenseRuleStatement.h>

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
 * <p>Rule statement.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/RuleStatement">AWS
 * API Reference</a></p>
 */
class RuleStatement {
 public:
  AWS_LICENSEMANAGER_API RuleStatement() = default;
  AWS_LICENSEMANAGER_API RuleStatement(Aws::Utils::Json::JsonView jsonValue);
  AWS_LICENSEMANAGER_API RuleStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>License configuration rule statement.</p>
   */
  inline const LicenseConfigurationRuleStatement& GetLicenseConfigurationRuleStatement() const {
    return m_licenseConfigurationRuleStatement;
  }
  inline bool LicenseConfigurationRuleStatementHasBeenSet() const { return m_licenseConfigurationRuleStatementHasBeenSet; }
  template <typename LicenseConfigurationRuleStatementT = LicenseConfigurationRuleStatement>
  void SetLicenseConfigurationRuleStatement(LicenseConfigurationRuleStatementT&& value) {
    m_licenseConfigurationRuleStatementHasBeenSet = true;
    m_licenseConfigurationRuleStatement = std::forward<LicenseConfigurationRuleStatementT>(value);
  }
  template <typename LicenseConfigurationRuleStatementT = LicenseConfigurationRuleStatement>
  RuleStatement& WithLicenseConfigurationRuleStatement(LicenseConfigurationRuleStatementT&& value) {
    SetLicenseConfigurationRuleStatement(std::forward<LicenseConfigurationRuleStatementT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>License rule statement.</p>
   */
  inline const LicenseRuleStatement& GetLicenseRuleStatement() const { return m_licenseRuleStatement; }
  inline bool LicenseRuleStatementHasBeenSet() const { return m_licenseRuleStatementHasBeenSet; }
  template <typename LicenseRuleStatementT = LicenseRuleStatement>
  void SetLicenseRuleStatement(LicenseRuleStatementT&& value) {
    m_licenseRuleStatementHasBeenSet = true;
    m_licenseRuleStatement = std::forward<LicenseRuleStatementT>(value);
  }
  template <typename LicenseRuleStatementT = LicenseRuleStatement>
  RuleStatement& WithLicenseRuleStatement(LicenseRuleStatementT&& value) {
    SetLicenseRuleStatement(std::forward<LicenseRuleStatementT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Instance rule statement.</p>
   */
  inline const InstanceRuleStatement& GetInstanceRuleStatement() const { return m_instanceRuleStatement; }
  inline bool InstanceRuleStatementHasBeenSet() const { return m_instanceRuleStatementHasBeenSet; }
  template <typename InstanceRuleStatementT = InstanceRuleStatement>
  void SetInstanceRuleStatement(InstanceRuleStatementT&& value) {
    m_instanceRuleStatementHasBeenSet = true;
    m_instanceRuleStatement = std::forward<InstanceRuleStatementT>(value);
  }
  template <typename InstanceRuleStatementT = InstanceRuleStatement>
  RuleStatement& WithInstanceRuleStatement(InstanceRuleStatementT&& value) {
    SetInstanceRuleStatement(std::forward<InstanceRuleStatementT>(value));
    return *this;
  }
  ///@}
 private:
  LicenseConfigurationRuleStatement m_licenseConfigurationRuleStatement;

  LicenseRuleStatement m_licenseRuleStatement;

  InstanceRuleStatement m_instanceRuleStatement;
  bool m_licenseConfigurationRuleStatementHasBeenSet = false;
  bool m_licenseRuleStatementHasBeenSet = false;
  bool m_instanceRuleStatementHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
