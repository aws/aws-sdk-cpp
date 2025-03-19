/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/FMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/AdminScope.h>
#include <utility>

namespace Aws
{
namespace FMS
{
namespace Model
{

  /**
   */
  class PutAdminAccountRequest : public FMSRequest
  {
  public:
    AWS_FMS_API PutAdminAccountRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAdminAccount"; }

    AWS_FMS_API Aws::String SerializePayload() const override;

    AWS_FMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID to add as an Firewall Manager
     * administrator account. The account must be a member of the organization that was
     * onboarded to Firewall Manager by <a>AssociateAdminAccount</a>. For more
     * information about Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts.html">Managing
     * the Amazon Web Services Accounts in Your Organization</a>.</p>
     */
    inline const Aws::String& GetAdminAccount() const { return m_adminAccount; }
    inline bool AdminAccountHasBeenSet() const { return m_adminAccountHasBeenSet; }
    template<typename AdminAccountT = Aws::String>
    void SetAdminAccount(AdminAccountT&& value) { m_adminAccountHasBeenSet = true; m_adminAccount = std::forward<AdminAccountT>(value); }
    template<typename AdminAccountT = Aws::String>
    PutAdminAccountRequest& WithAdminAccount(AdminAccountT&& value) { SetAdminAccount(std::forward<AdminAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures the resources that the specified Firewall Manager administrator
     * can manage. As a best practice, set the administrative scope according to the
     * principles of least privilege. Only grant the administrator the specific
     * resources or permissions that they need to perform the duties of their role.</p>
     */
    inline const AdminScope& GetAdminScope() const { return m_adminScope; }
    inline bool AdminScopeHasBeenSet() const { return m_adminScopeHasBeenSet; }
    template<typename AdminScopeT = AdminScope>
    void SetAdminScope(AdminScopeT&& value) { m_adminScopeHasBeenSet = true; m_adminScope = std::forward<AdminScopeT>(value); }
    template<typename AdminScopeT = AdminScope>
    PutAdminAccountRequest& WithAdminScope(AdminScopeT&& value) { SetAdminScope(std::forward<AdminScopeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_adminAccount;
    bool m_adminAccountHasBeenSet = false;

    AdminScope m_adminScope;
    bool m_adminScopeHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
