﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/OrganizationStatus.h>
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
   * <p>Contains high level information about the Firewall Manager administrator
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/AdminAccountSummary">AWS
   * API Reference</a></p>
   */
  class AdminAccountSummary
  {
  public:
    AWS_FMS_API AdminAccountSummary() = default;
    AWS_FMS_API AdminAccountSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API AdminAccountSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID of the Firewall Manager administrator's
     * account.</p>
     */
    inline const Aws::String& GetAdminAccount() const { return m_adminAccount; }
    inline bool AdminAccountHasBeenSet() const { return m_adminAccountHasBeenSet; }
    template<typename AdminAccountT = Aws::String>
    void SetAdminAccount(AdminAccountT&& value) { m_adminAccountHasBeenSet = true; m_adminAccount = std::forward<AdminAccountT>(value); }
    template<typename AdminAccountT = Aws::String>
    AdminAccountSummary& WithAdminAccount(AdminAccountT&& value) { SetAdminAccount(std::forward<AdminAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value that indicates if the administrator is the default
     * administrator. If true, then this is the default administrator account. The
     * default administrator can manage third-party firewalls and has full
     * administrative scope. There is only one default administrator account per
     * organization. For information about Firewall Manager default administrator
     * accounts, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-administrators.html">Managing
     * Firewall Manager administrators</a> in the <i>Firewall Manager Developer
     * Guide</i>.</p>
     */
    inline bool GetDefaultAdmin() const { return m_defaultAdmin; }
    inline bool DefaultAdminHasBeenSet() const { return m_defaultAdminHasBeenSet; }
    inline void SetDefaultAdmin(bool value) { m_defaultAdminHasBeenSet = true; m_defaultAdmin = value; }
    inline AdminAccountSummary& WithDefaultAdmin(bool value) { SetDefaultAdmin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the request to onboard a member account as an Firewall
     * Manager administrator.</p> <ul> <li> <p> <code>ONBOARDING</code> - The account
     * is onboarding to Firewall Manager as an administrator.</p> </li> <li> <p>
     * <code>ONBOARDING_COMPLETE</code> - Firewall Manager The account is onboarded to
     * Firewall Manager as an administrator, and can perform actions on the resources
     * defined in their <a>AdminScope</a>.</p> </li> <li> <p> <code>OFFBOARDING</code>
     * - The account is being removed as an Firewall Manager administrator.</p> </li>
     * <li> <p> <code>OFFBOARDING_COMPLETE</code> - The account has been removed as an
     * Firewall Manager administrator.</p> </li> </ul>
     */
    inline OrganizationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(OrganizationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AdminAccountSummary& WithStatus(OrganizationStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_adminAccount;
    bool m_adminAccountHasBeenSet = false;

    bool m_defaultAdmin{false};
    bool m_defaultAdminHasBeenSet = false;

    OrganizationStatus m_status{OrganizationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
