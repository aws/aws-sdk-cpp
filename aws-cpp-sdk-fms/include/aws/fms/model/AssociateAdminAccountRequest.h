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
  class AWS_FMS_API AssociateAdminAccountRequest : public FMSRequest
  {
  public:
    AssociateAdminAccountRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateAdminAccount"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The AWS account ID to associate with AWS Firewall Manager as the AWS Firewall
     * Manager administrator account. This can be an AWS Organizations master account
     * or a member account. For more information about AWS Organizations and master
     * accounts, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts.html">Managing
     * the AWS Accounts in Your Organization</a>. </p>
     */
    inline const Aws::String& GetAdminAccount() const{ return m_adminAccount; }

    /**
     * <p>The AWS account ID to associate with AWS Firewall Manager as the AWS Firewall
     * Manager administrator account. This can be an AWS Organizations master account
     * or a member account. For more information about AWS Organizations and master
     * accounts, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts.html">Managing
     * the AWS Accounts in Your Organization</a>. </p>
     */
    inline bool AdminAccountHasBeenSet() const { return m_adminAccountHasBeenSet; }

    /**
     * <p>The AWS account ID to associate with AWS Firewall Manager as the AWS Firewall
     * Manager administrator account. This can be an AWS Organizations master account
     * or a member account. For more information about AWS Organizations and master
     * accounts, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts.html">Managing
     * the AWS Accounts in Your Organization</a>. </p>
     */
    inline void SetAdminAccount(const Aws::String& value) { m_adminAccountHasBeenSet = true; m_adminAccount = value; }

    /**
     * <p>The AWS account ID to associate with AWS Firewall Manager as the AWS Firewall
     * Manager administrator account. This can be an AWS Organizations master account
     * or a member account. For more information about AWS Organizations and master
     * accounts, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts.html">Managing
     * the AWS Accounts in Your Organization</a>. </p>
     */
    inline void SetAdminAccount(Aws::String&& value) { m_adminAccountHasBeenSet = true; m_adminAccount = std::move(value); }

    /**
     * <p>The AWS account ID to associate with AWS Firewall Manager as the AWS Firewall
     * Manager administrator account. This can be an AWS Organizations master account
     * or a member account. For more information about AWS Organizations and master
     * accounts, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts.html">Managing
     * the AWS Accounts in Your Organization</a>. </p>
     */
    inline void SetAdminAccount(const char* value) { m_adminAccountHasBeenSet = true; m_adminAccount.assign(value); }

    /**
     * <p>The AWS account ID to associate with AWS Firewall Manager as the AWS Firewall
     * Manager administrator account. This can be an AWS Organizations master account
     * or a member account. For more information about AWS Organizations and master
     * accounts, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts.html">Managing
     * the AWS Accounts in Your Organization</a>. </p>
     */
    inline AssociateAdminAccountRequest& WithAdminAccount(const Aws::String& value) { SetAdminAccount(value); return *this;}

    /**
     * <p>The AWS account ID to associate with AWS Firewall Manager as the AWS Firewall
     * Manager administrator account. This can be an AWS Organizations master account
     * or a member account. For more information about AWS Organizations and master
     * accounts, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts.html">Managing
     * the AWS Accounts in Your Organization</a>. </p>
     */
    inline AssociateAdminAccountRequest& WithAdminAccount(Aws::String&& value) { SetAdminAccount(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID to associate with AWS Firewall Manager as the AWS Firewall
     * Manager administrator account. This can be an AWS Organizations master account
     * or a member account. For more information about AWS Organizations and master
     * accounts, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts.html">Managing
     * the AWS Accounts in Your Organization</a>. </p>
     */
    inline AssociateAdminAccountRequest& WithAdminAccount(const char* value) { SetAdminAccount(value); return *this;}

  private:

    Aws::String m_adminAccount;
    bool m_adminAccountHasBeenSet;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
