/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Defines the Organizations organizational units (OUs) that the specified
   * Firewall Manager administrator can apply policies to. For more information about
   * OUs in Organizations, see <a
   * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_ous.html">Managing
   * organizational units (OUs) </a> in the <i>Organizations User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/OrganizationalUnitScope">AWS
   * API Reference</a></p>
   */
  class OrganizationalUnitScope
  {
  public:
    AWS_FMS_API OrganizationalUnitScope() = default;
    AWS_FMS_API OrganizationalUnitScope(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API OrganizationalUnitScope& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of OUs within the organization that the specified Firewall Manager
     * administrator either can or cannot apply policies to, based on the value of
     * <code>OrganizationalUnitScope$ExcludeSpecifiedOrganizationalUnits</code>. If
     * <code>OrganizationalUnitScope$ExcludeSpecifiedOrganizationalUnits</code> is set
     * to <code>true</code>, then the Firewall Manager administrator can apply policies
     * to all OUs in the organization except for the OUs in this list. If
     * <code>OrganizationalUnitScope$ExcludeSpecifiedOrganizationalUnits</code> is set
     * to <code>false</code>, then the Firewall Manager administrator can only apply
     * policies to the OUs in this list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationalUnits() const { return m_organizationalUnits; }
    inline bool OrganizationalUnitsHasBeenSet() const { return m_organizationalUnitsHasBeenSet; }
    template<typename OrganizationalUnitsT = Aws::Vector<Aws::String>>
    void SetOrganizationalUnits(OrganizationalUnitsT&& value) { m_organizationalUnitsHasBeenSet = true; m_organizationalUnits = std::forward<OrganizationalUnitsT>(value); }
    template<typename OrganizationalUnitsT = Aws::Vector<Aws::String>>
    OrganizationalUnitScope& WithOrganizationalUnits(OrganizationalUnitsT&& value) { SetOrganizationalUnits(std::forward<OrganizationalUnitsT>(value)); return *this;}
    template<typename OrganizationalUnitsT = Aws::String>
    OrganizationalUnitScope& AddOrganizationalUnits(OrganizationalUnitsT&& value) { m_organizationalUnitsHasBeenSet = true; m_organizationalUnits.emplace_back(std::forward<OrganizationalUnitsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A boolean value that indicates if the administrator can apply policies to all
     * OUs within an organization. If true, the administrator can manage all OUs within
     * the organization. You can either enable management of all OUs through this
     * operation, or you can specify OUs to manage in
     * <code>OrganizationalUnitScope$OrganizationalUnits</code>. You cannot specify
     * both.</p>
     */
    inline bool GetAllOrganizationalUnitsEnabled() const { return m_allOrganizationalUnitsEnabled; }
    inline bool AllOrganizationalUnitsEnabledHasBeenSet() const { return m_allOrganizationalUnitsEnabledHasBeenSet; }
    inline void SetAllOrganizationalUnitsEnabled(bool value) { m_allOrganizationalUnitsEnabledHasBeenSet = true; m_allOrganizationalUnitsEnabled = value; }
    inline OrganizationalUnitScope& WithAllOrganizationalUnitsEnabled(bool value) { SetAllOrganizationalUnitsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value that excludes the OUs in
     * <code>OrganizationalUnitScope$OrganizationalUnits</code> from the
     * administrator's scope. If true, the Firewall Manager administrator can apply
     * policies to all OUs in the organization except for the OUs listed in
     * <code>OrganizationalUnitScope$OrganizationalUnits</code>. You can either specify
     * a list of OUs to exclude by
     * <code>OrganizationalUnitScope$OrganizationalUnits</code>, or you can enable
     * management of all OUs by
     * <code>OrganizationalUnitScope$AllOrganizationalUnitsEnabled</code>. You cannot
     * specify both.</p>
     */
    inline bool GetExcludeSpecifiedOrganizationalUnits() const { return m_excludeSpecifiedOrganizationalUnits; }
    inline bool ExcludeSpecifiedOrganizationalUnitsHasBeenSet() const { return m_excludeSpecifiedOrganizationalUnitsHasBeenSet; }
    inline void SetExcludeSpecifiedOrganizationalUnits(bool value) { m_excludeSpecifiedOrganizationalUnitsHasBeenSet = true; m_excludeSpecifiedOrganizationalUnits = value; }
    inline OrganizationalUnitScope& WithExcludeSpecifiedOrganizationalUnits(bool value) { SetExcludeSpecifiedOrganizationalUnits(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_organizationalUnits;
    bool m_organizationalUnitsHasBeenSet = false;

    bool m_allOrganizationalUnitsEnabled{false};
    bool m_allOrganizationalUnitsEnabledHasBeenSet = false;

    bool m_excludeSpecifiedOrganizationalUnits{false};
    bool m_excludeSpecifiedOrganizationalUnitsHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
