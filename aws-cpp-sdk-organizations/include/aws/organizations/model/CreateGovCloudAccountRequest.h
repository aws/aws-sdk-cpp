/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/IAMUserAccessToBilling.h>
#include <utility>

namespace Aws
{
namespace Organizations
{
namespace Model
{

  /**
   */
  class AWS_ORGANIZATIONS_API CreateGovCloudAccountRequest : public OrganizationsRequest
  {
  public:
    CreateGovCloudAccountRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGovCloudAccount"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The email address of the owner to assign to the new member account in the
     * commercial Region. This email address must not already be associated with
     * another AWS account. You must use a valid email address to complete account
     * creation. You can't access the root user of the account or remove an account
     * that was created with an invalid email address. Like all request parameters for
     * <code>CreateGovCloudAccount</code>, the request for the email address for the
     * AWS GovCloud (US) account originates from the commercial Region, not from the
     * AWS GovCloud (US) Region.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>The email address of the owner to assign to the new member account in the
     * commercial Region. This email address must not already be associated with
     * another AWS account. You must use a valid email address to complete account
     * creation. You can't access the root user of the account or remove an account
     * that was created with an invalid email address. Like all request parameters for
     * <code>CreateGovCloudAccount</code>, the request for the email address for the
     * AWS GovCloud (US) account originates from the commercial Region, not from the
     * AWS GovCloud (US) Region.</p>
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * <p>The email address of the owner to assign to the new member account in the
     * commercial Region. This email address must not already be associated with
     * another AWS account. You must use a valid email address to complete account
     * creation. You can't access the root user of the account or remove an account
     * that was created with an invalid email address. Like all request parameters for
     * <code>CreateGovCloudAccount</code>, the request for the email address for the
     * AWS GovCloud (US) account originates from the commercial Region, not from the
     * AWS GovCloud (US) Region.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>The email address of the owner to assign to the new member account in the
     * commercial Region. This email address must not already be associated with
     * another AWS account. You must use a valid email address to complete account
     * creation. You can't access the root user of the account or remove an account
     * that was created with an invalid email address. Like all request parameters for
     * <code>CreateGovCloudAccount</code>, the request for the email address for the
     * AWS GovCloud (US) account originates from the commercial Region, not from the
     * AWS GovCloud (US) Region.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>The email address of the owner to assign to the new member account in the
     * commercial Region. This email address must not already be associated with
     * another AWS account. You must use a valid email address to complete account
     * creation. You can't access the root user of the account or remove an account
     * that was created with an invalid email address. Like all request parameters for
     * <code>CreateGovCloudAccount</code>, the request for the email address for the
     * AWS GovCloud (US) account originates from the commercial Region, not from the
     * AWS GovCloud (US) Region.</p>
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * <p>The email address of the owner to assign to the new member account in the
     * commercial Region. This email address must not already be associated with
     * another AWS account. You must use a valid email address to complete account
     * creation. You can't access the root user of the account or remove an account
     * that was created with an invalid email address. Like all request parameters for
     * <code>CreateGovCloudAccount</code>, the request for the email address for the
     * AWS GovCloud (US) account originates from the commercial Region, not from the
     * AWS GovCloud (US) Region.</p>
     */
    inline CreateGovCloudAccountRequest& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>The email address of the owner to assign to the new member account in the
     * commercial Region. This email address must not already be associated with
     * another AWS account. You must use a valid email address to complete account
     * creation. You can't access the root user of the account or remove an account
     * that was created with an invalid email address. Like all request parameters for
     * <code>CreateGovCloudAccount</code>, the request for the email address for the
     * AWS GovCloud (US) account originates from the commercial Region, not from the
     * AWS GovCloud (US) Region.</p>
     */
    inline CreateGovCloudAccountRequest& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>The email address of the owner to assign to the new member account in the
     * commercial Region. This email address must not already be associated with
     * another AWS account. You must use a valid email address to complete account
     * creation. You can't access the root user of the account or remove an account
     * that was created with an invalid email address. Like all request parameters for
     * <code>CreateGovCloudAccount</code>, the request for the email address for the
     * AWS GovCloud (US) account originates from the commercial Region, not from the
     * AWS GovCloud (US) Region.</p>
     */
    inline CreateGovCloudAccountRequest& WithEmail(const char* value) { SetEmail(value); return *this;}


    /**
     * <p>The friendly name of the member account.</p>
     */
    inline const Aws::String& GetAccountName() const{ return m_accountName; }

    /**
     * <p>The friendly name of the member account.</p>
     */
    inline bool AccountNameHasBeenSet() const { return m_accountNameHasBeenSet; }

    /**
     * <p>The friendly name of the member account.</p>
     */
    inline void SetAccountName(const Aws::String& value) { m_accountNameHasBeenSet = true; m_accountName = value; }

    /**
     * <p>The friendly name of the member account.</p>
     */
    inline void SetAccountName(Aws::String&& value) { m_accountNameHasBeenSet = true; m_accountName = std::move(value); }

    /**
     * <p>The friendly name of the member account.</p>
     */
    inline void SetAccountName(const char* value) { m_accountNameHasBeenSet = true; m_accountName.assign(value); }

    /**
     * <p>The friendly name of the member account.</p>
     */
    inline CreateGovCloudAccountRequest& WithAccountName(const Aws::String& value) { SetAccountName(value); return *this;}

    /**
     * <p>The friendly name of the member account.</p>
     */
    inline CreateGovCloudAccountRequest& WithAccountName(Aws::String&& value) { SetAccountName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the member account.</p>
     */
    inline CreateGovCloudAccountRequest& WithAccountName(const char* value) { SetAccountName(value); return *this;}


    /**
     * <p>(Optional)</p> <p>The name of an IAM role that AWS Organizations
     * automatically preconfigures in the new member accounts in both the AWS GovCloud
     * (US) Region and in the commercial Region. This role trusts the master account,
     * allowing users in the master account to assume the role, as permitted by the
     * master account administrator. The role has administrator permissions in the new
     * member account.</p> <p>If you don't specify this parameter, the role name
     * defaults to <code>OrganizationAccountAccessRole</code>.</p> <p>For more
     * information about how to use this role to access the member account, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_access.html#orgs_manage_accounts_create-cross-account-role">Accessing
     * and Administering the Member Accounts in Your Organization</a> in the <i>AWS
     * Organizations User Guide</i> and steps 2 and 3 in <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/tutorial_cross-account-with-roles.html">Tutorial:
     * Delegate Access Across AWS Accounts Using IAM Roles</a> in the <i>IAM User
     * Guide.</i> </p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> that is used to validate this parameter is a string of characters
     * that can consist of uppercase letters, lowercase letters, digits with no spaces,
     * and any of the following characters: =,.@-</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    /**
     * <p>(Optional)</p> <p>The name of an IAM role that AWS Organizations
     * automatically preconfigures in the new member accounts in both the AWS GovCloud
     * (US) Region and in the commercial Region. This role trusts the master account,
     * allowing users in the master account to assume the role, as permitted by the
     * master account administrator. The role has administrator permissions in the new
     * member account.</p> <p>If you don't specify this parameter, the role name
     * defaults to <code>OrganizationAccountAccessRole</code>.</p> <p>For more
     * information about how to use this role to access the member account, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_access.html#orgs_manage_accounts_create-cross-account-role">Accessing
     * and Administering the Member Accounts in Your Organization</a> in the <i>AWS
     * Organizations User Guide</i> and steps 2 and 3 in <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/tutorial_cross-account-with-roles.html">Tutorial:
     * Delegate Access Across AWS Accounts Using IAM Roles</a> in the <i>IAM User
     * Guide.</i> </p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> that is used to validate this parameter is a string of characters
     * that can consist of uppercase letters, lowercase letters, digits with no spaces,
     * and any of the following characters: =,.@-</p>
     */
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }

    /**
     * <p>(Optional)</p> <p>The name of an IAM role that AWS Organizations
     * automatically preconfigures in the new member accounts in both the AWS GovCloud
     * (US) Region and in the commercial Region. This role trusts the master account,
     * allowing users in the master account to assume the role, as permitted by the
     * master account administrator. The role has administrator permissions in the new
     * member account.</p> <p>If you don't specify this parameter, the role name
     * defaults to <code>OrganizationAccountAccessRole</code>.</p> <p>For more
     * information about how to use this role to access the member account, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_access.html#orgs_manage_accounts_create-cross-account-role">Accessing
     * and Administering the Member Accounts in Your Organization</a> in the <i>AWS
     * Organizations User Guide</i> and steps 2 and 3 in <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/tutorial_cross-account-with-roles.html">Tutorial:
     * Delegate Access Across AWS Accounts Using IAM Roles</a> in the <i>IAM User
     * Guide.</i> </p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> that is used to validate this parameter is a string of characters
     * that can consist of uppercase letters, lowercase letters, digits with no spaces,
     * and any of the following characters: =,.@-</p>
     */
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    /**
     * <p>(Optional)</p> <p>The name of an IAM role that AWS Organizations
     * automatically preconfigures in the new member accounts in both the AWS GovCloud
     * (US) Region and in the commercial Region. This role trusts the master account,
     * allowing users in the master account to assume the role, as permitted by the
     * master account administrator. The role has administrator permissions in the new
     * member account.</p> <p>If you don't specify this parameter, the role name
     * defaults to <code>OrganizationAccountAccessRole</code>.</p> <p>For more
     * information about how to use this role to access the member account, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_access.html#orgs_manage_accounts_create-cross-account-role">Accessing
     * and Administering the Member Accounts in Your Organization</a> in the <i>AWS
     * Organizations User Guide</i> and steps 2 and 3 in <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/tutorial_cross-account-with-roles.html">Tutorial:
     * Delegate Access Across AWS Accounts Using IAM Roles</a> in the <i>IAM User
     * Guide.</i> </p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> that is used to validate this parameter is a string of characters
     * that can consist of uppercase letters, lowercase letters, digits with no spaces,
     * and any of the following characters: =,.@-</p>
     */
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }

    /**
     * <p>(Optional)</p> <p>The name of an IAM role that AWS Organizations
     * automatically preconfigures in the new member accounts in both the AWS GovCloud
     * (US) Region and in the commercial Region. This role trusts the master account,
     * allowing users in the master account to assume the role, as permitted by the
     * master account administrator. The role has administrator permissions in the new
     * member account.</p> <p>If you don't specify this parameter, the role name
     * defaults to <code>OrganizationAccountAccessRole</code>.</p> <p>For more
     * information about how to use this role to access the member account, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_access.html#orgs_manage_accounts_create-cross-account-role">Accessing
     * and Administering the Member Accounts in Your Organization</a> in the <i>AWS
     * Organizations User Guide</i> and steps 2 and 3 in <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/tutorial_cross-account-with-roles.html">Tutorial:
     * Delegate Access Across AWS Accounts Using IAM Roles</a> in the <i>IAM User
     * Guide.</i> </p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> that is used to validate this parameter is a string of characters
     * that can consist of uppercase letters, lowercase letters, digits with no spaces,
     * and any of the following characters: =,.@-</p>
     */
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }

    /**
     * <p>(Optional)</p> <p>The name of an IAM role that AWS Organizations
     * automatically preconfigures in the new member accounts in both the AWS GovCloud
     * (US) Region and in the commercial Region. This role trusts the master account,
     * allowing users in the master account to assume the role, as permitted by the
     * master account administrator. The role has administrator permissions in the new
     * member account.</p> <p>If you don't specify this parameter, the role name
     * defaults to <code>OrganizationAccountAccessRole</code>.</p> <p>For more
     * information about how to use this role to access the member account, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_access.html#orgs_manage_accounts_create-cross-account-role">Accessing
     * and Administering the Member Accounts in Your Organization</a> in the <i>AWS
     * Organizations User Guide</i> and steps 2 and 3 in <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/tutorial_cross-account-with-roles.html">Tutorial:
     * Delegate Access Across AWS Accounts Using IAM Roles</a> in the <i>IAM User
     * Guide.</i> </p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> that is used to validate this parameter is a string of characters
     * that can consist of uppercase letters, lowercase letters, digits with no spaces,
     * and any of the following characters: =,.@-</p>
     */
    inline CreateGovCloudAccountRequest& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    /**
     * <p>(Optional)</p> <p>The name of an IAM role that AWS Organizations
     * automatically preconfigures in the new member accounts in both the AWS GovCloud
     * (US) Region and in the commercial Region. This role trusts the master account,
     * allowing users in the master account to assume the role, as permitted by the
     * master account administrator. The role has administrator permissions in the new
     * member account.</p> <p>If you don't specify this parameter, the role name
     * defaults to <code>OrganizationAccountAccessRole</code>.</p> <p>For more
     * information about how to use this role to access the member account, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_access.html#orgs_manage_accounts_create-cross-account-role">Accessing
     * and Administering the Member Accounts in Your Organization</a> in the <i>AWS
     * Organizations User Guide</i> and steps 2 and 3 in <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/tutorial_cross-account-with-roles.html">Tutorial:
     * Delegate Access Across AWS Accounts Using IAM Roles</a> in the <i>IAM User
     * Guide.</i> </p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> that is used to validate this parameter is a string of characters
     * that can consist of uppercase letters, lowercase letters, digits with no spaces,
     * and any of the following characters: =,.@-</p>
     */
    inline CreateGovCloudAccountRequest& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}

    /**
     * <p>(Optional)</p> <p>The name of an IAM role that AWS Organizations
     * automatically preconfigures in the new member accounts in both the AWS GovCloud
     * (US) Region and in the commercial Region. This role trusts the master account,
     * allowing users in the master account to assume the role, as permitted by the
     * master account administrator. The role has administrator permissions in the new
     * member account.</p> <p>If you don't specify this parameter, the role name
     * defaults to <code>OrganizationAccountAccessRole</code>.</p> <p>For more
     * information about how to use this role to access the member account, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_access.html#orgs_manage_accounts_create-cross-account-role">Accessing
     * and Administering the Member Accounts in Your Organization</a> in the <i>AWS
     * Organizations User Guide</i> and steps 2 and 3 in <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/tutorial_cross-account-with-roles.html">Tutorial:
     * Delegate Access Across AWS Accounts Using IAM Roles</a> in the <i>IAM User
     * Guide.</i> </p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> that is used to validate this parameter is a string of characters
     * that can consist of uppercase letters, lowercase letters, digits with no spaces,
     * and any of the following characters: =,.@-</p>
     */
    inline CreateGovCloudAccountRequest& WithRoleName(const char* value) { SetRoleName(value); return *this;}


    /**
     * <p>If set to <code>ALLOW</code>, the new linked account in the commercial Region
     * enables IAM users to access account billing information <i>if</i> they have the
     * required permissions. If set to <code>DENY</code>, only the root user of the new
     * account can access account billing information. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/grantaccess.html#ControllingAccessWebsite-Activate">Activating
     * Access to the Billing and Cost Management Console</a> in the <i>AWS Billing and
     * Cost Management User Guide.</i> </p> <p>If you don't specify this parameter, the
     * value defaults to <code>ALLOW</code>, and IAM users and roles with the required
     * permissions can access billing information for the new account.</p>
     */
    inline const IAMUserAccessToBilling& GetIamUserAccessToBilling() const{ return m_iamUserAccessToBilling; }

    /**
     * <p>If set to <code>ALLOW</code>, the new linked account in the commercial Region
     * enables IAM users to access account billing information <i>if</i> they have the
     * required permissions. If set to <code>DENY</code>, only the root user of the new
     * account can access account billing information. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/grantaccess.html#ControllingAccessWebsite-Activate">Activating
     * Access to the Billing and Cost Management Console</a> in the <i>AWS Billing and
     * Cost Management User Guide.</i> </p> <p>If you don't specify this parameter, the
     * value defaults to <code>ALLOW</code>, and IAM users and roles with the required
     * permissions can access billing information for the new account.</p>
     */
    inline bool IamUserAccessToBillingHasBeenSet() const { return m_iamUserAccessToBillingHasBeenSet; }

    /**
     * <p>If set to <code>ALLOW</code>, the new linked account in the commercial Region
     * enables IAM users to access account billing information <i>if</i> they have the
     * required permissions. If set to <code>DENY</code>, only the root user of the new
     * account can access account billing information. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/grantaccess.html#ControllingAccessWebsite-Activate">Activating
     * Access to the Billing and Cost Management Console</a> in the <i>AWS Billing and
     * Cost Management User Guide.</i> </p> <p>If you don't specify this parameter, the
     * value defaults to <code>ALLOW</code>, and IAM users and roles with the required
     * permissions can access billing information for the new account.</p>
     */
    inline void SetIamUserAccessToBilling(const IAMUserAccessToBilling& value) { m_iamUserAccessToBillingHasBeenSet = true; m_iamUserAccessToBilling = value; }

    /**
     * <p>If set to <code>ALLOW</code>, the new linked account in the commercial Region
     * enables IAM users to access account billing information <i>if</i> they have the
     * required permissions. If set to <code>DENY</code>, only the root user of the new
     * account can access account billing information. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/grantaccess.html#ControllingAccessWebsite-Activate">Activating
     * Access to the Billing and Cost Management Console</a> in the <i>AWS Billing and
     * Cost Management User Guide.</i> </p> <p>If you don't specify this parameter, the
     * value defaults to <code>ALLOW</code>, and IAM users and roles with the required
     * permissions can access billing information for the new account.</p>
     */
    inline void SetIamUserAccessToBilling(IAMUserAccessToBilling&& value) { m_iamUserAccessToBillingHasBeenSet = true; m_iamUserAccessToBilling = std::move(value); }

    /**
     * <p>If set to <code>ALLOW</code>, the new linked account in the commercial Region
     * enables IAM users to access account billing information <i>if</i> they have the
     * required permissions. If set to <code>DENY</code>, only the root user of the new
     * account can access account billing information. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/grantaccess.html#ControllingAccessWebsite-Activate">Activating
     * Access to the Billing and Cost Management Console</a> in the <i>AWS Billing and
     * Cost Management User Guide.</i> </p> <p>If you don't specify this parameter, the
     * value defaults to <code>ALLOW</code>, and IAM users and roles with the required
     * permissions can access billing information for the new account.</p>
     */
    inline CreateGovCloudAccountRequest& WithIamUserAccessToBilling(const IAMUserAccessToBilling& value) { SetIamUserAccessToBilling(value); return *this;}

    /**
     * <p>If set to <code>ALLOW</code>, the new linked account in the commercial Region
     * enables IAM users to access account billing information <i>if</i> they have the
     * required permissions. If set to <code>DENY</code>, only the root user of the new
     * account can access account billing information. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/grantaccess.html#ControllingAccessWebsite-Activate">Activating
     * Access to the Billing and Cost Management Console</a> in the <i>AWS Billing and
     * Cost Management User Guide.</i> </p> <p>If you don't specify this parameter, the
     * value defaults to <code>ALLOW</code>, and IAM users and roles with the required
     * permissions can access billing information for the new account.</p>
     */
    inline CreateGovCloudAccountRequest& WithIamUserAccessToBilling(IAMUserAccessToBilling&& value) { SetIamUserAccessToBilling(std::move(value)); return *this;}

  private:

    Aws::String m_email;
    bool m_emailHasBeenSet;

    Aws::String m_accountName;
    bool m_accountNameHasBeenSet;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet;

    IAMUserAccessToBilling m_iamUserAccessToBilling;
    bool m_iamUserAccessToBillingHasBeenSet;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
