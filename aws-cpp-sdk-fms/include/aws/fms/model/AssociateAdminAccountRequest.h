/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/FMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace FMS
{
namespace Model
{

  /**
   */
  class AssociateAdminAccountRequest : public FMSRequest
  {
  public:
    AWS_FMS_API AssociateAdminAccountRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateAdminAccount"; }

    AWS_FMS_API Aws::String SerializePayload() const override;

    AWS_FMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Web Services account ID to associate with Firewall Manager as the
     * Firewall Manager administrator account. This must be an Organizations member
     * account. For more information about Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts.html">Managing
     * the Amazon Web Services Accounts in Your Organization</a>. </p>
     */
    inline const Aws::String& GetAdminAccount() const{ return m_adminAccount; }

    /**
     * <p>The Amazon Web Services account ID to associate with Firewall Manager as the
     * Firewall Manager administrator account. This must be an Organizations member
     * account. For more information about Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts.html">Managing
     * the Amazon Web Services Accounts in Your Organization</a>. </p>
     */
    inline bool AdminAccountHasBeenSet() const { return m_adminAccountHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID to associate with Firewall Manager as the
     * Firewall Manager administrator account. This must be an Organizations member
     * account. For more information about Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts.html">Managing
     * the Amazon Web Services Accounts in Your Organization</a>. </p>
     */
    inline void SetAdminAccount(const Aws::String& value) { m_adminAccountHasBeenSet = true; m_adminAccount = value; }

    /**
     * <p>The Amazon Web Services account ID to associate with Firewall Manager as the
     * Firewall Manager administrator account. This must be an Organizations member
     * account. For more information about Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts.html">Managing
     * the Amazon Web Services Accounts in Your Organization</a>. </p>
     */
    inline void SetAdminAccount(Aws::String&& value) { m_adminAccountHasBeenSet = true; m_adminAccount = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID to associate with Firewall Manager as the
     * Firewall Manager administrator account. This must be an Organizations member
     * account. For more information about Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts.html">Managing
     * the Amazon Web Services Accounts in Your Organization</a>. </p>
     */
    inline void SetAdminAccount(const char* value) { m_adminAccountHasBeenSet = true; m_adminAccount.assign(value); }

    /**
     * <p>The Amazon Web Services account ID to associate with Firewall Manager as the
     * Firewall Manager administrator account. This must be an Organizations member
     * account. For more information about Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts.html">Managing
     * the Amazon Web Services Accounts in Your Organization</a>. </p>
     */
    inline AssociateAdminAccountRequest& WithAdminAccount(const Aws::String& value) { SetAdminAccount(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID to associate with Firewall Manager as the
     * Firewall Manager administrator account. This must be an Organizations member
     * account. For more information about Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts.html">Managing
     * the Amazon Web Services Accounts in Your Organization</a>. </p>
     */
    inline AssociateAdminAccountRequest& WithAdminAccount(Aws::String&& value) { SetAdminAccount(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID to associate with Firewall Manager as the
     * Firewall Manager administrator account. This must be an Organizations member
     * account. For more information about Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts.html">Managing
     * the Amazon Web Services Accounts in Your Organization</a>. </p>
     */
    inline AssociateAdminAccountRequest& WithAdminAccount(const char* value) { SetAdminAccount(value); return *this;}

  private:

    Aws::String m_adminAccount;
    bool m_adminAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
