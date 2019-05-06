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
     * <p>The Amazon QuickSight role of the user. The user role can be one of the
     * following:</p> <ul> <li> <p> <code>READER</code>: A user who has read-only
     * access to dashboards.</p> </li> <li> <p> <code>AUTHOR</code>: A user who can
     * create data sources, data sets, analyses, and dashboards.</p> </li> <li> <p>
     * <code>ADMIN</code>: A user who is an author, who can also manage Amazon
     * QuickSight settings.</p> </li> </ul>
     */
    inline const UserRole& GetRole() const{ return m_role; }

    /**
     * <p>The Amazon QuickSight role of the user. The user role can be one of the
     * following:</p> <ul> <li> <p> <code>READER</code>: A user who has read-only
     * access to dashboards.</p> </li> <li> <p> <code>AUTHOR</code>: A user who can
     * create data sources, data sets, analyses, and dashboards.</p> </li> <li> <p>
     * <code>ADMIN</code>: A user who is an author, who can also manage Amazon
     * QuickSight settings.</p> </li> </ul>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The Amazon QuickSight role of the user. The user role can be one of the
     * following:</p> <ul> <li> <p> <code>READER</code>: A user who has read-only
     * access to dashboards.</p> </li> <li> <p> <code>AUTHOR</code>: A user who can
     * create data sources, data sets, analyses, and dashboards.</p> </li> <li> <p>
     * <code>ADMIN</code>: A user who is an author, who can also manage Amazon
     * QuickSight settings.</p> </li> </ul>
     */
    inline void SetRole(const UserRole& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The Amazon QuickSight role of the user. The user role can be one of the
     * following:</p> <ul> <li> <p> <code>READER</code>: A user who has read-only
     * access to dashboards.</p> </li> <li> <p> <code>AUTHOR</code>: A user who can
     * create data sources, data sets, analyses, and dashboards.</p> </li> <li> <p>
     * <code>ADMIN</code>: A user who is an author, who can also manage Amazon
     * QuickSight settings.</p> </li> </ul>
     */
    inline void SetRole(UserRole&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The Amazon QuickSight role of the user. The user role can be one of the
     * following:</p> <ul> <li> <p> <code>READER</code>: A user who has read-only
     * access to dashboards.</p> </li> <li> <p> <code>AUTHOR</code>: A user who can
     * create data sources, data sets, analyses, and dashboards.</p> </li> <li> <p>
     * <code>ADMIN</code>: A user who is an author, who can also manage Amazon
     * QuickSight settings.</p> </li> </ul>
     */
    inline UpdateUserRequest& WithRole(const UserRole& value) { SetRole(value); return *this;}

    /**
     * <p>The Amazon QuickSight role of the user. The user role can be one of the
     * following:</p> <ul> <li> <p> <code>READER</code>: A user who has read-only
     * access to dashboards.</p> </li> <li> <p> <code>AUTHOR</code>: A user who can
     * create data sources, data sets, analyses, and dashboards.</p> </li> <li> <p>
     * <code>ADMIN</code>: A user who is an author, who can also manage Amazon
     * QuickSight settings.</p> </li> </ul>
     */
    inline UpdateUserRequest& WithRole(UserRole&& value) { SetRole(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
