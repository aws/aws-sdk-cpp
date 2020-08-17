/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/UserRole.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class AWS_QUICKSIGHT_API UpdateUserRequest : public QuickSightRequest
  {
  public:
    UpdateUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUser"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon QuickSight user name that you want to update.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The Amazon QuickSight user name that you want to update.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The Amazon QuickSight user name that you want to update.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The Amazon QuickSight user name that you want to update.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The Amazon QuickSight user name that you want to update.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The Amazon QuickSight user name that you want to update.</p>
     */
    inline UpdateUserRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The Amazon QuickSight user name that you want to update.</p>
     */
    inline UpdateUserRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The Amazon QuickSight user name that you want to update.</p>
     */
    inline UpdateUserRequest& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The ID for the AWS account that the user is in. Currently, you use the ID for
     * the AWS account that contains your Amazon QuickSight account.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID for the AWS account that the user is in. Currently, you use the ID for
     * the AWS account that contains your Amazon QuickSight account.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID for the AWS account that the user is in. Currently, you use the ID for
     * the AWS account that contains your Amazon QuickSight account.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID for the AWS account that the user is in. Currently, you use the ID for
     * the AWS account that contains your Amazon QuickSight account.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID for the AWS account that the user is in. Currently, you use the ID for
     * the AWS account that contains your Amazon QuickSight account.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID for the AWS account that the user is in. Currently, you use the ID for
     * the AWS account that contains your Amazon QuickSight account.</p>
     */
    inline UpdateUserRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID for the AWS account that the user is in. Currently, you use the ID for
     * the AWS account that contains your Amazon QuickSight account.</p>
     */
    inline UpdateUserRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID for the AWS account that the user is in. Currently, you use the ID for
     * the AWS account that contains your Amazon QuickSight account.</p>
     */
    inline UpdateUserRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The namespace. Currently, you should set this to <code>default</code>.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace. Currently, you should set this to <code>default</code>.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace. Currently, you should set this to <code>default</code>.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace. Currently, you should set this to <code>default</code>.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace. Currently, you should set this to <code>default</code>.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace. Currently, you should set this to <code>default</code>.</p>
     */
    inline UpdateUserRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace. Currently, you should set this to <code>default</code>.</p>
     */
    inline UpdateUserRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace. Currently, you should set this to <code>default</code>.</p>
     */
    inline UpdateUserRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The email address of the user that you want to update.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>The email address of the user that you want to update.</p>
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * <p>The email address of the user that you want to update.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>The email address of the user that you want to update.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>The email address of the user that you want to update.</p>
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * <p>The email address of the user that you want to update.</p>
     */
    inline UpdateUserRequest& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>The email address of the user that you want to update.</p>
     */
    inline UpdateUserRequest& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>The email address of the user that you want to update.</p>
     */
    inline UpdateUserRequest& WithEmail(const char* value) { SetEmail(value); return *this;}


    /**
     * <p>The Amazon QuickSight role of the user. The role can be one of the following
     * default security cohorts:</p> <ul> <li> <p> <code>READER</code>: A user who has
     * read-only access to dashboards.</p> </li> <li> <p> <code>AUTHOR</code>: A user
     * who can create data sources, datasets, analyses, and dashboards.</p> </li> <li>
     * <p> <code>ADMIN</code>: A user who is an author, who can also manage Amazon
     * QuickSight settings.</p> </li> </ul> <p>The name of the QuickSight role is
     * invisible to the user except for the console screens dealing with
     * permissions.</p>
     */
    inline const UserRole& GetRole() const{ return m_role; }

    /**
     * <p>The Amazon QuickSight role of the user. The role can be one of the following
     * default security cohorts:</p> <ul> <li> <p> <code>READER</code>: A user who has
     * read-only access to dashboards.</p> </li> <li> <p> <code>AUTHOR</code>: A user
     * who can create data sources, datasets, analyses, and dashboards.</p> </li> <li>
     * <p> <code>ADMIN</code>: A user who is an author, who can also manage Amazon
     * QuickSight settings.</p> </li> </ul> <p>The name of the QuickSight role is
     * invisible to the user except for the console screens dealing with
     * permissions.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The Amazon QuickSight role of the user. The role can be one of the following
     * default security cohorts:</p> <ul> <li> <p> <code>READER</code>: A user who has
     * read-only access to dashboards.</p> </li> <li> <p> <code>AUTHOR</code>: A user
     * who can create data sources, datasets, analyses, and dashboards.</p> </li> <li>
     * <p> <code>ADMIN</code>: A user who is an author, who can also manage Amazon
     * QuickSight settings.</p> </li> </ul> <p>The name of the QuickSight role is
     * invisible to the user except for the console screens dealing with
     * permissions.</p>
     */
    inline void SetRole(const UserRole& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The Amazon QuickSight role of the user. The role can be one of the following
     * default security cohorts:</p> <ul> <li> <p> <code>READER</code>: A user who has
     * read-only access to dashboards.</p> </li> <li> <p> <code>AUTHOR</code>: A user
     * who can create data sources, datasets, analyses, and dashboards.</p> </li> <li>
     * <p> <code>ADMIN</code>: A user who is an author, who can also manage Amazon
     * QuickSight settings.</p> </li> </ul> <p>The name of the QuickSight role is
     * invisible to the user except for the console screens dealing with
     * permissions.</p>
     */
    inline void SetRole(UserRole&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The Amazon QuickSight role of the user. The role can be one of the following
     * default security cohorts:</p> <ul> <li> <p> <code>READER</code>: A user who has
     * read-only access to dashboards.</p> </li> <li> <p> <code>AUTHOR</code>: A user
     * who can create data sources, datasets, analyses, and dashboards.</p> </li> <li>
     * <p> <code>ADMIN</code>: A user who is an author, who can also manage Amazon
     * QuickSight settings.</p> </li> </ul> <p>The name of the QuickSight role is
     * invisible to the user except for the console screens dealing with
     * permissions.</p>
     */
    inline UpdateUserRequest& WithRole(const UserRole& value) { SetRole(value); return *this;}

    /**
     * <p>The Amazon QuickSight role of the user. The role can be one of the following
     * default security cohorts:</p> <ul> <li> <p> <code>READER</code>: A user who has
     * read-only access to dashboards.</p> </li> <li> <p> <code>AUTHOR</code>: A user
     * who can create data sources, datasets, analyses, and dashboards.</p> </li> <li>
     * <p> <code>ADMIN</code>: A user who is an author, who can also manage Amazon
     * QuickSight settings.</p> </li> </ul> <p>The name of the QuickSight role is
     * invisible to the user except for the console screens dealing with
     * permissions.</p>
     */
    inline UpdateUserRequest& WithRole(UserRole&& value) { SetRole(std::move(value)); return *this;}


    /**
     * <p>(Enterprise edition only) The name of the custom permissions profile that you
     * want to assign to this user. Customized permissions allows you to control a
     * user's access by restricting access the following operations:</p> <ul> <li>
     * <p>Create and update data sources</p> </li> <li> <p>Create and update
     * datasets</p> </li> <li> <p>Create and update email reports</p> </li> <li>
     * <p>Subscribe to email reports</p> </li> </ul> <p>A set of custom permissions
     * includes any combination of these restrictions. Currently, you need to create
     * the profile names for custom permission sets by using the QuickSight console.
     * Then, you use the <code>RegisterUser</code> API operation to assign the named
     * set of permissions to a QuickSight user. </p> <p>QuickSight custom permissions
     * are applied through IAM policies. Therefore, they override the permissions
     * typically granted by assigning QuickSight users to one of the default security
     * cohorts in QuickSight (admin, author, reader).</p> <p>This feature is available
     * only to QuickSight Enterprise edition subscriptions that use SAML 2.0-Based
     * Federation for Single Sign-On (SSO).</p>
     */
    inline const Aws::String& GetCustomPermissionsName() const{ return m_customPermissionsName; }

    /**
     * <p>(Enterprise edition only) The name of the custom permissions profile that you
     * want to assign to this user. Customized permissions allows you to control a
     * user's access by restricting access the following operations:</p> <ul> <li>
     * <p>Create and update data sources</p> </li> <li> <p>Create and update
     * datasets</p> </li> <li> <p>Create and update email reports</p> </li> <li>
     * <p>Subscribe to email reports</p> </li> </ul> <p>A set of custom permissions
     * includes any combination of these restrictions. Currently, you need to create
     * the profile names for custom permission sets by using the QuickSight console.
     * Then, you use the <code>RegisterUser</code> API operation to assign the named
     * set of permissions to a QuickSight user. </p> <p>QuickSight custom permissions
     * are applied through IAM policies. Therefore, they override the permissions
     * typically granted by assigning QuickSight users to one of the default security
     * cohorts in QuickSight (admin, author, reader).</p> <p>This feature is available
     * only to QuickSight Enterprise edition subscriptions that use SAML 2.0-Based
     * Federation for Single Sign-On (SSO).</p>
     */
    inline bool CustomPermissionsNameHasBeenSet() const { return m_customPermissionsNameHasBeenSet; }

    /**
     * <p>(Enterprise edition only) The name of the custom permissions profile that you
     * want to assign to this user. Customized permissions allows you to control a
     * user's access by restricting access the following operations:</p> <ul> <li>
     * <p>Create and update data sources</p> </li> <li> <p>Create and update
     * datasets</p> </li> <li> <p>Create and update email reports</p> </li> <li>
     * <p>Subscribe to email reports</p> </li> </ul> <p>A set of custom permissions
     * includes any combination of these restrictions. Currently, you need to create
     * the profile names for custom permission sets by using the QuickSight console.
     * Then, you use the <code>RegisterUser</code> API operation to assign the named
     * set of permissions to a QuickSight user. </p> <p>QuickSight custom permissions
     * are applied through IAM policies. Therefore, they override the permissions
     * typically granted by assigning QuickSight users to one of the default security
     * cohorts in QuickSight (admin, author, reader).</p> <p>This feature is available
     * only to QuickSight Enterprise edition subscriptions that use SAML 2.0-Based
     * Federation for Single Sign-On (SSO).</p>
     */
    inline void SetCustomPermissionsName(const Aws::String& value) { m_customPermissionsNameHasBeenSet = true; m_customPermissionsName = value; }

    /**
     * <p>(Enterprise edition only) The name of the custom permissions profile that you
     * want to assign to this user. Customized permissions allows you to control a
     * user's access by restricting access the following operations:</p> <ul> <li>
     * <p>Create and update data sources</p> </li> <li> <p>Create and update
     * datasets</p> </li> <li> <p>Create and update email reports</p> </li> <li>
     * <p>Subscribe to email reports</p> </li> </ul> <p>A set of custom permissions
     * includes any combination of these restrictions. Currently, you need to create
     * the profile names for custom permission sets by using the QuickSight console.
     * Then, you use the <code>RegisterUser</code> API operation to assign the named
     * set of permissions to a QuickSight user. </p> <p>QuickSight custom permissions
     * are applied through IAM policies. Therefore, they override the permissions
     * typically granted by assigning QuickSight users to one of the default security
     * cohorts in QuickSight (admin, author, reader).</p> <p>This feature is available
     * only to QuickSight Enterprise edition subscriptions that use SAML 2.0-Based
     * Federation for Single Sign-On (SSO).</p>
     */
    inline void SetCustomPermissionsName(Aws::String&& value) { m_customPermissionsNameHasBeenSet = true; m_customPermissionsName = std::move(value); }

    /**
     * <p>(Enterprise edition only) The name of the custom permissions profile that you
     * want to assign to this user. Customized permissions allows you to control a
     * user's access by restricting access the following operations:</p> <ul> <li>
     * <p>Create and update data sources</p> </li> <li> <p>Create and update
     * datasets</p> </li> <li> <p>Create and update email reports</p> </li> <li>
     * <p>Subscribe to email reports</p> </li> </ul> <p>A set of custom permissions
     * includes any combination of these restrictions. Currently, you need to create
     * the profile names for custom permission sets by using the QuickSight console.
     * Then, you use the <code>RegisterUser</code> API operation to assign the named
     * set of permissions to a QuickSight user. </p> <p>QuickSight custom permissions
     * are applied through IAM policies. Therefore, they override the permissions
     * typically granted by assigning QuickSight users to one of the default security
     * cohorts in QuickSight (admin, author, reader).</p> <p>This feature is available
     * only to QuickSight Enterprise edition subscriptions that use SAML 2.0-Based
     * Federation for Single Sign-On (SSO).</p>
     */
    inline void SetCustomPermissionsName(const char* value) { m_customPermissionsNameHasBeenSet = true; m_customPermissionsName.assign(value); }

    /**
     * <p>(Enterprise edition only) The name of the custom permissions profile that you
     * want to assign to this user. Customized permissions allows you to control a
     * user's access by restricting access the following operations:</p> <ul> <li>
     * <p>Create and update data sources</p> </li> <li> <p>Create and update
     * datasets</p> </li> <li> <p>Create and update email reports</p> </li> <li>
     * <p>Subscribe to email reports</p> </li> </ul> <p>A set of custom permissions
     * includes any combination of these restrictions. Currently, you need to create
     * the profile names for custom permission sets by using the QuickSight console.
     * Then, you use the <code>RegisterUser</code> API operation to assign the named
     * set of permissions to a QuickSight user. </p> <p>QuickSight custom permissions
     * are applied through IAM policies. Therefore, they override the permissions
     * typically granted by assigning QuickSight users to one of the default security
     * cohorts in QuickSight (admin, author, reader).</p> <p>This feature is available
     * only to QuickSight Enterprise edition subscriptions that use SAML 2.0-Based
     * Federation for Single Sign-On (SSO).</p>
     */
    inline UpdateUserRequest& WithCustomPermissionsName(const Aws::String& value) { SetCustomPermissionsName(value); return *this;}

    /**
     * <p>(Enterprise edition only) The name of the custom permissions profile that you
     * want to assign to this user. Customized permissions allows you to control a
     * user's access by restricting access the following operations:</p> <ul> <li>
     * <p>Create and update data sources</p> </li> <li> <p>Create and update
     * datasets</p> </li> <li> <p>Create and update email reports</p> </li> <li>
     * <p>Subscribe to email reports</p> </li> </ul> <p>A set of custom permissions
     * includes any combination of these restrictions. Currently, you need to create
     * the profile names for custom permission sets by using the QuickSight console.
     * Then, you use the <code>RegisterUser</code> API operation to assign the named
     * set of permissions to a QuickSight user. </p> <p>QuickSight custom permissions
     * are applied through IAM policies. Therefore, they override the permissions
     * typically granted by assigning QuickSight users to one of the default security
     * cohorts in QuickSight (admin, author, reader).</p> <p>This feature is available
     * only to QuickSight Enterprise edition subscriptions that use SAML 2.0-Based
     * Federation for Single Sign-On (SSO).</p>
     */
    inline UpdateUserRequest& WithCustomPermissionsName(Aws::String&& value) { SetCustomPermissionsName(std::move(value)); return *this;}

    /**
     * <p>(Enterprise edition only) The name of the custom permissions profile that you
     * want to assign to this user. Customized permissions allows you to control a
     * user's access by restricting access the following operations:</p> <ul> <li>
     * <p>Create and update data sources</p> </li> <li> <p>Create and update
     * datasets</p> </li> <li> <p>Create and update email reports</p> </li> <li>
     * <p>Subscribe to email reports</p> </li> </ul> <p>A set of custom permissions
     * includes any combination of these restrictions. Currently, you need to create
     * the profile names for custom permission sets by using the QuickSight console.
     * Then, you use the <code>RegisterUser</code> API operation to assign the named
     * set of permissions to a QuickSight user. </p> <p>QuickSight custom permissions
     * are applied through IAM policies. Therefore, they override the permissions
     * typically granted by assigning QuickSight users to one of the default security
     * cohorts in QuickSight (admin, author, reader).</p> <p>This feature is available
     * only to QuickSight Enterprise edition subscriptions that use SAML 2.0-Based
     * Federation for Single Sign-On (SSO).</p>
     */
    inline UpdateUserRequest& WithCustomPermissionsName(const char* value) { SetCustomPermissionsName(value); return *this;}


    /**
     * <p>A flag that you use to indicate that you want to remove all custom
     * permissions from this user. Using this parameter resets the user to the state it
     * was in before a custom permissions profile was applied. This parameter defaults
     * to NULL and it doesn't accept any other value.</p>
     */
    inline bool GetUnapplyCustomPermissions() const{ return m_unapplyCustomPermissions; }

    /**
     * <p>A flag that you use to indicate that you want to remove all custom
     * permissions from this user. Using this parameter resets the user to the state it
     * was in before a custom permissions profile was applied. This parameter defaults
     * to NULL and it doesn't accept any other value.</p>
     */
    inline bool UnapplyCustomPermissionsHasBeenSet() const { return m_unapplyCustomPermissionsHasBeenSet; }

    /**
     * <p>A flag that you use to indicate that you want to remove all custom
     * permissions from this user. Using this parameter resets the user to the state it
     * was in before a custom permissions profile was applied. This parameter defaults
     * to NULL and it doesn't accept any other value.</p>
     */
    inline void SetUnapplyCustomPermissions(bool value) { m_unapplyCustomPermissionsHasBeenSet = true; m_unapplyCustomPermissions = value; }

    /**
     * <p>A flag that you use to indicate that you want to remove all custom
     * permissions from this user. Using this parameter resets the user to the state it
     * was in before a custom permissions profile was applied. This parameter defaults
     * to NULL and it doesn't accept any other value.</p>
     */
    inline UpdateUserRequest& WithUnapplyCustomPermissions(bool value) { SetUnapplyCustomPermissions(value); return *this;}

  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet;

    Aws::String m_email;
    bool m_emailHasBeenSet;

    UserRole m_role;
    bool m_roleHasBeenSet;

    Aws::String m_customPermissionsName;
    bool m_customPermissionsNameHasBeenSet;

    bool m_unapplyCustomPermissions;
    bool m_unapplyCustomPermissionsHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
