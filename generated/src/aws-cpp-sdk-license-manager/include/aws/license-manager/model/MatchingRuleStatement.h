/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/LicenseManager_EXPORTS.h>

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
 * <p>Matching rule statement.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/MatchingRuleStatement">AWS
 * API Reference</a></p>
 */
class MatchingRuleStatement {
 public:
  AWS_LICENSEMANAGER_API MatchingRuleStatement() = default;
  AWS_LICENSEMANAGER_API MatchingRuleStatement(Aws::Utils::Json::JsonView jsonValue);
  AWS_LICENSEMANAGER_API MatchingRuleStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Key to match.</p> <p>The following keys and are supported when the
   * RuleStatement type is <code>Instance</code>: </p> <ul> <li> <p>
   * <code>Platform</code> - The name of the platform. Logical operators are
   * <code>EQUALS</code> and <code>NOT_EQUALS</code>. </p> </li> <li> <p>
   * <code>EC2BillingProduct</code> - The billing product code. Logical operators are
   * <code>EQUALS</code> and <code>NOT_EQUALS</code>. Possible values are:
   * <code>windows-server-enterprise</code> | <code>windows-byol</code> |
   * <code>rhel</code> | <code>rhel-byol</code> | <code>rhel-high-availability</code>
   * | <code>ubuntu-pro</code> | <code>suse-linux</code> |
   * <code>sql-server-standard</code> | <code>sql-server-enterprise</code>. </p>
   * </li> <li> <p> <code>MarketPlaceProductCode</code> - The Marketplace product
   * code. Logical operators are <code>EQUALS</code> and <code>NOT_EQUALS</code>.
   * </p> </li> <li> <p> <code>AMIId</code> - The ID of the AMI. Logical operators
   * are <code>EQUALS</code> and <code>NOT_EQUALS</code>. </p> </li> <li> <p>
   * <code>InstanceType</code> - The instance type. Logical operators are
   * <code>EQUALS</code> and <code>NOT_EQUALS</code>. </p> </li> <li> <p>
   * <code>InstanceId</code> - The ID of the instance. Logical operators are
   * <code>EQUALS</code> and <code>NOT_EQUALS</code>. </p> </li> <li> <p>
   * <code>HostId</code> - The ID of the host. Logical operators are
   * <code>EQUALS</code> and <code>NOT_EQUALS</code>. </p> </li> <li> <p>
   * <code>AccountId</code> - The ID of the account. Logical operators are
   * <code>EQUALS</code> and <code>NOT_EQUALS</code>. </p> </li> </ul> <p>The
   * following keys and are supported when the RuleStatement type is
   * <code>License</code>: </p> <ul> <li> <p> <code>LicenseArn</code> - The ARN of a
   * Managed Entitlement License. Logical operators are <code>EQUALS</code> and
   * <code>NOT_EQUALS</code>. </p> </li> <li> <p> <code>ProductSKU</code> - The
   * productSKU of the license. Logical operators are <code>EQUALS</code> and
   * <code>NOT_EQUALS</code>. </p> </li> <li> <p> <code>Issuer</code> - The issuer of
   * the license. Logical operators are <code>EQUALS</code> and
   * <code>NOT_EQUALS</code>. </p> </li> <li> <p> <code>Beneficiary</code> - The
   * beneficiary of the license. Logical operators are <code>EQUALS</code> and
   * <code>NOT_EQUALS</code>. </p> </li> <li> <p> <code>LicenseStatus</code> - The
   * status of the license. Logical operators are <code>EQUALS</code> and
   * <code>NOT_EQUALS</code>. </p> </li> <li> <p> <code>HomeRegion</code> - The home
   * region of the license. Logical operators are <code>EQUALS</code> and
   * <code>NOT_EQUALS</code>. </p> </li> </ul> <p>The following keys and are
   * supported when the RuleStatement type is <code>License Configuration</code>:
   * </p> <ul> <li> <p> <code>LicenseConfigurationArn</code> - The ARN of a
   * self-managed license configuration. Logical operators are <code>EQUALS</code>
   * and <code>NOT_EQUALS</code>. </p> </li> <li> <p> <code>AccountId</code> - The
   * account of the license configuration. Logical operators are <code>EQUALS</code>
   * and <code>NOT_EQUALS</code>. </p> </li> </ul>
   */
  inline const Aws::String& GetKeyToMatch() const { return m_keyToMatch; }
  inline bool KeyToMatchHasBeenSet() const { return m_keyToMatchHasBeenSet; }
  template <typename KeyToMatchT = Aws::String>
  void SetKeyToMatch(KeyToMatchT&& value) {
    m_keyToMatchHasBeenSet = true;
    m_keyToMatch = std::forward<KeyToMatchT>(value);
  }
  template <typename KeyToMatchT = Aws::String>
  MatchingRuleStatement& WithKeyToMatch(KeyToMatchT&& value) {
    SetKeyToMatch(std::forward<KeyToMatchT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Constraint.</p>
   */
  inline const Aws::String& GetConstraint() const { return m_constraint; }
  inline bool ConstraintHasBeenSet() const { return m_constraintHasBeenSet; }
  template <typename ConstraintT = Aws::String>
  void SetConstraint(ConstraintT&& value) {
    m_constraintHasBeenSet = true;
    m_constraint = std::forward<ConstraintT>(value);
  }
  template <typename ConstraintT = Aws::String>
  MatchingRuleStatement& WithConstraint(ConstraintT&& value) {
    SetConstraint(std::forward<ConstraintT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Value to match.</p>
   */
  inline const Aws::Vector<Aws::String>& GetValueToMatch() const { return m_valueToMatch; }
  inline bool ValueToMatchHasBeenSet() const { return m_valueToMatchHasBeenSet; }
  template <typename ValueToMatchT = Aws::Vector<Aws::String>>
  void SetValueToMatch(ValueToMatchT&& value) {
    m_valueToMatchHasBeenSet = true;
    m_valueToMatch = std::forward<ValueToMatchT>(value);
  }
  template <typename ValueToMatchT = Aws::Vector<Aws::String>>
  MatchingRuleStatement& WithValueToMatch(ValueToMatchT&& value) {
    SetValueToMatch(std::forward<ValueToMatchT>(value));
    return *this;
  }
  template <typename ValueToMatchT = Aws::String>
  MatchingRuleStatement& AddValueToMatch(ValueToMatchT&& value) {
    m_valueToMatchHasBeenSet = true;
    m_valueToMatch.emplace_back(std::forward<ValueToMatchT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_keyToMatch;
  bool m_keyToMatchHasBeenSet = false;

  Aws::String m_constraint;
  bool m_constraintHasBeenSet = false;

  Aws::Vector<Aws::String> m_valueToMatch;
  bool m_valueToMatchHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
