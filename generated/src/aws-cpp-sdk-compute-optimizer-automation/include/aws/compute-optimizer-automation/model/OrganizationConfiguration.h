/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/RuleApplyOrder.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace ComputeOptimizerAutomation {
namespace Model {

/**
 * <p>Configuration settings that define the scope of an organization-wide
 * automation rule. Each organizational unit (OU) list can contain up to 150 OUs or
 * organization roots, and each account list can contain up to 50 accounts. Each
 * included OU or organization root must have an effective organization rule mode
 * of <code>AnyAllowed</code>. Exclusions take precedence over inclusions. An
 * account that is in an included OU and is also excluded is excluded. The rule
 * doesn't apply to the management account when the account is reached through an
 * OU or the organization root.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/OrganizationConfiguration">AWS
 * API Reference</a></p>
 */
class OrganizationConfiguration {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API OrganizationConfiguration() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API OrganizationConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API OrganizationConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Specifies when organization rules should be applied relative to account
   * rules.</p>
   */
  inline RuleApplyOrder GetRuleApplyOrder() const { return m_ruleApplyOrder; }
  inline bool RuleApplyOrderHasBeenSet() const { return m_ruleApplyOrderHasBeenSet; }
  inline void SetRuleApplyOrder(RuleApplyOrder value) {
    m_ruleApplyOrderHasBeenSet = true;
    m_ruleApplyOrder = value;
  }
  inline OrganizationConfiguration& WithRuleApplyOrder(RuleApplyOrder value) {
    SetRuleApplyOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specific Amazon Web Services account IDs where the organization rule
   * should be applied. You can specify up to 50 account IDs.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAccountIds() const { return m_accountIds; }
  inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
  template <typename AccountIdsT = Aws::Vector<Aws::String>>
  void SetAccountIds(AccountIdsT&& value) {
    m_accountIdsHasBeenSet = true;
    m_accountIds = std::forward<AccountIdsT>(value);
  }
  template <typename AccountIdsT = Aws::Vector<Aws::String>>
  OrganizationConfiguration& WithAccountIds(AccountIdsT&& value) {
    SetAccountIds(std::forward<AccountIdsT>(value));
    return *this;
  }
  template <typename AccountIdsT = Aws::String>
  OrganizationConfiguration& AddAccountIds(AccountIdsT&& value) {
    m_accountIdsHasBeenSet = true;
    m_accountIds.emplace_back(std::forward<AccountIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The organizational unit (OU) or organization root IDs to include in the
   * organization rule scope. The rule applies to accounts in the specified OUs and
   * their child OUs. You can specify up to 150 IDs.</p>
   */
  inline const Aws::Vector<Aws::String>& GetOrganizationalUnitIds() const { return m_organizationalUnitIds; }
  inline bool OrganizationalUnitIdsHasBeenSet() const { return m_organizationalUnitIdsHasBeenSet; }
  template <typename OrganizationalUnitIdsT = Aws::Vector<Aws::String>>
  void SetOrganizationalUnitIds(OrganizationalUnitIdsT&& value) {
    m_organizationalUnitIdsHasBeenSet = true;
    m_organizationalUnitIds = std::forward<OrganizationalUnitIdsT>(value);
  }
  template <typename OrganizationalUnitIdsT = Aws::Vector<Aws::String>>
  OrganizationConfiguration& WithOrganizationalUnitIds(OrganizationalUnitIdsT&& value) {
    SetOrganizationalUnitIds(std::forward<OrganizationalUnitIdsT>(value));
    return *this;
  }
  template <typename OrganizationalUnitIdsT = Aws::String>
  OrganizationConfiguration& AddOrganizationalUnitIds(OrganizationalUnitIdsT&& value) {
    m_organizationalUnitIdsHasBeenSet = true;
    m_organizationalUnitIds.emplace_back(std::forward<OrganizationalUnitIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The organizational unit (OU) or organization root IDs to exclude from the
   * organization rule scope. The rule doesn't apply to accounts in the specified OUs
   * or their child OUs. You can specify up to 150 IDs.</p>
   */
  inline const Aws::Vector<Aws::String>& GetExcludedOrganizationalUnitIds() const { return m_excludedOrganizationalUnitIds; }
  inline bool ExcludedOrganizationalUnitIdsHasBeenSet() const { return m_excludedOrganizationalUnitIdsHasBeenSet; }
  template <typename ExcludedOrganizationalUnitIdsT = Aws::Vector<Aws::String>>
  void SetExcludedOrganizationalUnitIds(ExcludedOrganizationalUnitIdsT&& value) {
    m_excludedOrganizationalUnitIdsHasBeenSet = true;
    m_excludedOrganizationalUnitIds = std::forward<ExcludedOrganizationalUnitIdsT>(value);
  }
  template <typename ExcludedOrganizationalUnitIdsT = Aws::Vector<Aws::String>>
  OrganizationConfiguration& WithExcludedOrganizationalUnitIds(ExcludedOrganizationalUnitIdsT&& value) {
    SetExcludedOrganizationalUnitIds(std::forward<ExcludedOrganizationalUnitIdsT>(value));
    return *this;
  }
  template <typename ExcludedOrganizationalUnitIdsT = Aws::String>
  OrganizationConfiguration& AddExcludedOrganizationalUnitIds(ExcludedOrganizationalUnitIdsT&& value) {
    m_excludedOrganizationalUnitIdsHasBeenSet = true;
    m_excludedOrganizationalUnitIds.emplace_back(std::forward<ExcludedOrganizationalUnitIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account IDs to exclude from the organization rule
   * scope. You can specify up to 50 account IDs. An excluded account remains
   * excluded even if it is in an included OU.</p>
   */
  inline const Aws::Vector<Aws::String>& GetExcludedAccountIds() const { return m_excludedAccountIds; }
  inline bool ExcludedAccountIdsHasBeenSet() const { return m_excludedAccountIdsHasBeenSet; }
  template <typename ExcludedAccountIdsT = Aws::Vector<Aws::String>>
  void SetExcludedAccountIds(ExcludedAccountIdsT&& value) {
    m_excludedAccountIdsHasBeenSet = true;
    m_excludedAccountIds = std::forward<ExcludedAccountIdsT>(value);
  }
  template <typename ExcludedAccountIdsT = Aws::Vector<Aws::String>>
  OrganizationConfiguration& WithExcludedAccountIds(ExcludedAccountIdsT&& value) {
    SetExcludedAccountIds(std::forward<ExcludedAccountIdsT>(value));
    return *this;
  }
  template <typename ExcludedAccountIdsT = Aws::String>
  OrganizationConfiguration& AddExcludedAccountIds(ExcludedAccountIdsT&& value) {
    m_excludedAccountIdsHasBeenSet = true;
    m_excludedAccountIds.emplace_back(std::forward<ExcludedAccountIdsT>(value));
    return *this;
  }
  ///@}
 private:
  RuleApplyOrder m_ruleApplyOrder{RuleApplyOrder::NOT_SET};

  Aws::Vector<Aws::String> m_accountIds;

  Aws::Vector<Aws::String> m_organizationalUnitIds;

  Aws::Vector<Aws::String> m_excludedOrganizationalUnitIds;

  Aws::Vector<Aws::String> m_excludedAccountIds;
  bool m_ruleApplyOrderHasBeenSet = false;
  bool m_accountIdsHasBeenSet = false;
  bool m_organizationalUnitIdsHasBeenSet = false;
  bool m_excludedOrganizationalUnitIdsHasBeenSet = false;
  bool m_excludedAccountIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
