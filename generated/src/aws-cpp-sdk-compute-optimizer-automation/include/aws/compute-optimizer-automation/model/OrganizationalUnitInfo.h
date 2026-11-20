/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/AutoEnrollMemberAccounts.h>
#include <aws/compute-optimizer-automation/model/OrganizationRuleMode.h>
#include <aws/compute-optimizer-automation/model/OrganizationRuleModeSource.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>Information about an organizational unit (OU) or the organization root,
 * including whether an applicable organization enrollment configuration enables
 * Automation for member accounts and the effective organization rule
 * mode.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/OrganizationalUnitInfo">AWS
 * API Reference</a></p>
 */
class OrganizationalUnitInfo {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API OrganizationalUnitInfo() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API OrganizationalUnitInfo(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API OrganizationalUnitInfo& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The ID of the organizational unit (OU) or organization root.</p>
   */
  inline const Aws::String& GetOrganizationalUnitId() const { return m_organizationalUnitId; }
  inline bool OrganizationalUnitIdHasBeenSet() const { return m_organizationalUnitIdHasBeenSet; }
  template <typename OrganizationalUnitIdT = Aws::String>
  void SetOrganizationalUnitId(OrganizationalUnitIdT&& value) {
    m_organizationalUnitIdHasBeenSet = true;
    m_organizationalUnitId = std::forward<OrganizationalUnitIdT>(value);
  }
  template <typename OrganizationalUnitIdT = Aws::String>
  OrganizationalUnitInfo& WithOrganizationalUnitId(OrganizationalUnitIdT&& value) {
    SetOrganizationalUnitId(std::forward<OrganizationalUnitIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether an applicable organization enrollment configuration enables
   * Automation for eligible member accounts beneath the organizational unit (OU) or
   * organization root.</p> <ul> <li> <p> <code>All</code> - An organization
   * enrollment configuration applies and enables Automation for affected member
   * accounts, including accounts that join later. This value applies to
   * configurations with either <code>AnyAllowed</code> or
   * <code>NoneAllowed</code>.</p> </li> <li> <p> <code>None</code> - No organization
   * enrollment configuration applies, so Automation isn't enabled by an organization
   * enrollment configuration.</p> </li> </ul>
   */
  inline AutoEnrollMemberAccounts GetAutoEnrollMemberAccounts() const { return m_autoEnrollMemberAccounts; }
  inline bool AutoEnrollMemberAccountsHasBeenSet() const { return m_autoEnrollMemberAccountsHasBeenSet; }
  inline void SetAutoEnrollMemberAccounts(AutoEnrollMemberAccounts value) {
    m_autoEnrollMemberAccountsHasBeenSet = true;
    m_autoEnrollMemberAccounts = value;
  }
  inline OrganizationalUnitInfo& WithAutoEnrollMemberAccounts(AutoEnrollMemberAccounts value) {
    SetAutoEnrollMemberAccounts(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The effective organization rule mode for the organizational unit or
   * organization root.</p>
   */
  inline OrganizationRuleMode GetOrganizationRuleMode() const { return m_organizationRuleMode; }
  inline bool OrganizationRuleModeHasBeenSet() const { return m_organizationRuleModeHasBeenSet; }
  inline void SetOrganizationRuleMode(OrganizationRuleMode value) {
    m_organizationRuleModeHasBeenSet = true;
    m_organizationRuleMode = value;
  }
  inline OrganizationalUnitInfo& WithOrganizationRuleMode(OrganizationRuleMode value) {
    SetOrganizationRuleMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the source of the effective organization rule mode.</p>
   */
  inline const OrganizationRuleModeSource& GetOrganizationRuleModeSource() const { return m_organizationRuleModeSource; }
  inline bool OrganizationRuleModeSourceHasBeenSet() const { return m_organizationRuleModeSourceHasBeenSet; }
  template <typename OrganizationRuleModeSourceT = OrganizationRuleModeSource>
  void SetOrganizationRuleModeSource(OrganizationRuleModeSourceT&& value) {
    m_organizationRuleModeSourceHasBeenSet = true;
    m_organizationRuleModeSource = std::forward<OrganizationRuleModeSourceT>(value);
  }
  template <typename OrganizationRuleModeSourceT = OrganizationRuleModeSource>
  OrganizationalUnitInfo& WithOrganizationRuleModeSource(OrganizationRuleModeSourceT&& value) {
    SetOrganizationRuleModeSource(std::forward<OrganizationRuleModeSourceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_organizationalUnitId;

  AutoEnrollMemberAccounts m_autoEnrollMemberAccounts{AutoEnrollMemberAccounts::NOT_SET};

  OrganizationRuleMode m_organizationRuleMode{OrganizationRuleMode::NOT_SET};

  OrganizationRuleModeSource m_organizationRuleModeSource;
  bool m_organizationalUnitIdHasBeenSet = false;
  bool m_autoEnrollMemberAccountsHasBeenSet = false;
  bool m_organizationRuleModeHasBeenSet = false;
  bool m_organizationRuleModeSourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
