/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/AccountScope.h>
#include <aws/fms/model/OrganizationalUnitScope.h>
#include <aws/fms/model/RegionScope.h>
#include <aws/fms/model/PolicyTypeScope.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FMS
{
namespace Model
{

  /**
   * <p>Defines the resources that the Firewall Manager administrator can manage. For
   * more information about administrative scope, see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-administrators.html">Managing
   * Firewall Manager administrators</a> in the <i>Firewall Manager Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/AdminScope">AWS API
   * Reference</a></p>
   */
  class AdminScope
  {
  public:
    AWS_FMS_API AdminScope() = default;
    AWS_FMS_API AdminScope(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API AdminScope& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the accounts that the specified Firewall Manager administrator can
     * apply policies to.</p>
     */
    inline const AccountScope& GetAccountScope() const { return m_accountScope; }
    inline bool AccountScopeHasBeenSet() const { return m_accountScopeHasBeenSet; }
    template<typename AccountScopeT = AccountScope>
    void SetAccountScope(AccountScopeT&& value) { m_accountScopeHasBeenSet = true; m_accountScope = std::forward<AccountScopeT>(value); }
    template<typename AccountScopeT = AccountScope>
    AdminScope& WithAccountScope(AccountScopeT&& value) { SetAccountScope(std::forward<AccountScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the Organizations organizational units that the specified Firewall
     * Manager administrator can apply policies to. For more information about OUs in
     * Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_ous.html">Managing
     * organizational units (OUs) </a> in the <i>Organizations User Guide</i>.</p>
     */
    inline const OrganizationalUnitScope& GetOrganizationalUnitScope() const { return m_organizationalUnitScope; }
    inline bool OrganizationalUnitScopeHasBeenSet() const { return m_organizationalUnitScopeHasBeenSet; }
    template<typename OrganizationalUnitScopeT = OrganizationalUnitScope>
    void SetOrganizationalUnitScope(OrganizationalUnitScopeT&& value) { m_organizationalUnitScopeHasBeenSet = true; m_organizationalUnitScope = std::forward<OrganizationalUnitScopeT>(value); }
    template<typename OrganizationalUnitScopeT = OrganizationalUnitScope>
    AdminScope& WithOrganizationalUnitScope(OrganizationalUnitScopeT&& value) { SetOrganizationalUnitScope(std::forward<OrganizationalUnitScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the Amazon Web Services Regions that the specified Firewall Manager
     * administrator can perform actions in.</p>
     */
    inline const RegionScope& GetRegionScope() const { return m_regionScope; }
    inline bool RegionScopeHasBeenSet() const { return m_regionScopeHasBeenSet; }
    template<typename RegionScopeT = RegionScope>
    void SetRegionScope(RegionScopeT&& value) { m_regionScopeHasBeenSet = true; m_regionScope = std::forward<RegionScopeT>(value); }
    template<typename RegionScopeT = RegionScope>
    AdminScope& WithRegionScope(RegionScopeT&& value) { SetRegionScope(std::forward<RegionScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the Firewall Manager policy types that the specified Firewall Manager
     * administrator can create and manage.</p>
     */
    inline const PolicyTypeScope& GetPolicyTypeScope() const { return m_policyTypeScope; }
    inline bool PolicyTypeScopeHasBeenSet() const { return m_policyTypeScopeHasBeenSet; }
    template<typename PolicyTypeScopeT = PolicyTypeScope>
    void SetPolicyTypeScope(PolicyTypeScopeT&& value) { m_policyTypeScopeHasBeenSet = true; m_policyTypeScope = std::forward<PolicyTypeScopeT>(value); }
    template<typename PolicyTypeScopeT = PolicyTypeScope>
    AdminScope& WithPolicyTypeScope(PolicyTypeScopeT&& value) { SetPolicyTypeScope(std::forward<PolicyTypeScopeT>(value)); return *this;}
    ///@}
  private:

    AccountScope m_accountScope;
    bool m_accountScopeHasBeenSet = false;

    OrganizationalUnitScope m_organizationalUnitScope;
    bool m_organizationalUnitScopeHasBeenSet = false;

    RegionScope m_regionScope;
    bool m_regionScopeHasBeenSet = false;

    PolicyTypeScope m_policyTypeScope;
    bool m_policyTypeScopeHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
