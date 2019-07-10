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
#include <aws/quicksight/model/IdentityType.h>
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
  class AWS_QUICKSIGHT_API RegisterUserRequest : public QuickSightRequest
  {
  public:
    RegisterUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterUser"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Amazon QuickSight supports several ways of managing the identity of users.
     * This parameter accepts two values:</p> <ul> <li> <p> <code>IAM</code>: A user
     * whose identity maps to an existing IAM user or role. </p> </li> <li> <p>
     * <code>QUICKSIGHT</code>: A user whose identity is owned and managed internally
     * by Amazon QuickSight. </p> </li> </ul>
     */
    inline const IdentityType& GetIdentityType() const{ return m_identityType; }

    /**
     * <p>Amazon QuickSight supports several ways of managing the identity of users.
     * This parameter accepts two values:</p> <ul> <li> <p> <code>IAM</code>: A user
     * whose identity maps to an existing IAM user or role. </p> </li> <li> <p>
     * <code>QUICKSIGHT</code>: A user whose identity is owned and managed internally
     * by Amazon QuickSight. </p> </li> </ul>
     */
    inline bool IdentityTypeHasBeenSet() const { return m_identityTypeHasBeenSet; }

    /**
     * <p>Amazon QuickSight supports several ways of managing the identity of users.
     * This parameter accepts two values:</p> <ul> <li> <p> <code>IAM</code>: A user
     * whose identity maps to an existing IAM user or role. </p> </li> <li> <p>
     * <code>QUICKSIGHT</code>: A user whose identity is owned and managed internally
     * by Amazon QuickSight. </p> </li> </ul>
     */
    inline void SetIdentityType(const IdentityType& value) { m_identityTypeHasBeenSet = true; m_identityType = value; }

    /**
     * <p>Amazon QuickSight supports several ways of managing the identity of users.
     * This parameter accepts two values:</p> <ul> <li> <p> <code>IAM</code>: A user
     * whose identity maps to an existing IAM user or role. </p> </li> <li> <p>
     * <code>QUICKSIGHT</code>: A user whose identity is owned and managed internally
     * by Amazon QuickSight. </p> </li> </ul>
     */
    inline void SetIdentityType(IdentityType&& value) { m_identityTypeHasBeenSet = true; m_identityType = std::move(value); }

    /**
     * <p>Amazon QuickSight supports several ways of managing the identity of users.
     * This parameter accepts two values:</p> <ul> <li> <p> <code>IAM</code>: A user
     * whose identity maps to an existing IAM user or role. </p> </li> <li> <p>
     * <code>QUICKSIGHT</code>: A user whose identity is owned and managed internally
     * by Amazon QuickSight. </p> </li> </ul>
     */
    inline RegisterUserRequest& WithIdentityType(const IdentityType& value) { SetIdentityType(value); return *this;}

    /**
     * <p>Amazon QuickSight supports several ways of managing the identity of users.
     * This parameter accepts two values:</p> <ul> <li> <p> <code>IAM</code>: A user
     * whose identity maps to an existing IAM user or role. </p> </li> <li> <p>
     * <code>QUICKSIGHT</code>: A user whose identity is owned and managed internally
     * by Amazon QuickSight. </p> </li> </ul>
     */
    inline RegisterUserRequest& WithIdentityType(IdentityType&& value) { SetIdentityType(std::move(value)); return *this;}


    /**
     * <p>The email address of the user that you want to register.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>The email address of the user that you want to register.</p>
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * <p>The email address of the user that you want to register.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>The email address of the user that you want to register.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>The email address of the user that you want to register.</p>
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * <p>The email address of the user that you want to register.</p>
     */
    inline RegisterUserRequest& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>The email address of the user that you want to register.</p>
     */
    inline RegisterUserRequest& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>The email address of the user that you want to register.</p>
     */
    inline RegisterUserRequest& WithEmail(const char* value) { SetEmail(value); return *this;}


    /**
     * <p>The Amazon QuickSight role of the user. The user role can be one of the
     * following:</p> <ul> <li> <p> <code>READER</code>: A user who has read-only
     * access to dashboards.</p> </li> <li> <p> <code>AUTHOR</code>: A user who can
     * create data sources, data sets, analyses, and dashboards.</p> </li> <li> <p>
     * <code>ADMIN</code>: A user who is an author, who can also manage Amazon
     * QuickSight settings.</p> </li> </ul>
     */
    inline const UserRole& GetUserRole() const{ return m_userRole; }

    /**
     * <p>The Amazon QuickSight role of the user. The user role can be one of the
     * following:</p> <ul> <li> <p> <code>READER</code>: A user who has read-only
     * access to dashboards.</p> </li> <li> <p> <code>AUTHOR</code>: A user who can
     * create data sources, data sets, analyses, and dashboards.</p> </li> <li> <p>
     * <code>ADMIN</code>: A user who is an author, who can also manage Amazon
     * QuickSight settings.</p> </li> </ul>
     */
    inline bool UserRoleHasBeenSet() const { return m_userRoleHasBeenSet; }

    /**
     * <p>The Amazon QuickSight role of the user. The user role can be one of the
     * following:</p> <ul> <li> <p> <code>READER</code>: A user who has read-only
     * access to dashboards.</p> </li> <li> <p> <code>AUTHOR</code>: A user who can
     * create data sources, data sets, analyses, and dashboards.</p> </li> <li> <p>
     * <code>ADMIN</code>: A user who is an author, who can also manage Amazon
     * QuickSight settings.</p> </li> </ul>
     */
    inline void SetUserRole(const UserRole& value) { m_userRoleHasBeenSet = true; m_userRole = value; }

    /**
     * <p>The Amazon QuickSight role of the user. The user role can be one of the
     * following:</p> <ul> <li> <p> <code>READER</code>: A user who has read-only
     * access to dashboards.</p> </li> <li> <p> <code>AUTHOR</code>: A user who can
     * create data sources, data sets, analyses, and dashboards.</p> </li> <li> <p>
     * <code>ADMIN</code>: A user who is an author, who can also manage Amazon
     * QuickSight settings.</p> </li> </ul>
     */
    inline void SetUserRole(UserRole&& value) { m_userRoleHasBeenSet = true; m_userRole = std::move(value); }

    /**
     * <p>The Amazon QuickSight role of the user. The user role can be one of the
     * following:</p> <ul> <li> <p> <code>READER</code>: A user who has read-only
     * access to dashboards.</p> </li> <li> <p> <code>AUTHOR</code>: A user who can
     * create data sources, data sets, analyses, and dashboards.</p> </li> <li> <p>
     * <code>ADMIN</code>: A user who is an author, who can also manage Amazon
     * QuickSight settings.</p> </li> </ul>
     */
    inline RegisterUserRequest& WithUserRole(const UserRole& value) { SetUserRole(value); return *this;}

    /**
     * <p>The Amazon QuickSight role of the user. The user role can be one of the
     * following:</p> <ul> <li> <p> <code>READER</code>: A user who has read-only
     * access to dashboards.</p> </li> <li> <p> <code>AUTHOR</code>: A user who can
     * create data sources, data sets, analyses, and dashboards.</p> </li> <li> <p>
     * <code>ADMIN</code>: A user who is an author, who can also manage Amazon
     * QuickSight settings.</p> </li> </ul>
     */
    inline RegisterUserRequest& WithUserRole(UserRole&& value) { SetUserRole(std::move(value)); return *this;}


    /**
     * <p>The ARN of the IAM user or role that you are registering with Amazon
     * QuickSight. </p>
     */
    inline const Aws::String& GetIamArn() const{ return m_iamArn; }

    /**
     * <p>The ARN of the IAM user or role that you are registering with Amazon
     * QuickSight. </p>
     */
    inline bool IamArnHasBeenSet() const { return m_iamArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM user or role that you are registering with Amazon
     * QuickSight. </p>
     */
    inline void SetIamArn(const Aws::String& value) { m_iamArnHasBeenSet = true; m_iamArn = value; }

    /**
     * <p>The ARN of the IAM user or role that you are registering with Amazon
     * QuickSight. </p>
     */
    inline void SetIamArn(Aws::String&& value) { m_iamArnHasBeenSet = true; m_iamArn = std::move(value); }

    /**
     * <p>The ARN of the IAM user or role that you are registering with Amazon
     * QuickSight. </p>
     */
    inline void SetIamArn(const char* value) { m_iamArnHasBeenSet = true; m_iamArn.assign(value); }

    /**
     * <p>The ARN of the IAM user or role that you are registering with Amazon
     * QuickSight. </p>
     */
    inline RegisterUserRequest& WithIamArn(const Aws::String& value) { SetIamArn(value); return *this;}

    /**
     * <p>The ARN of the IAM user or role that you are registering with Amazon
     * QuickSight. </p>
     */
    inline RegisterUserRequest& WithIamArn(Aws::String&& value) { SetIamArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM user or role that you are registering with Amazon
     * QuickSight. </p>
     */
    inline RegisterUserRequest& WithIamArn(const char* value) { SetIamArn(value); return *this;}


    /**
     * <p>You need to use this parameter only when you register one or more users using
     * an assumed IAM role. You don't need to provide the session name for other
     * scenarios, for example when you are registering an IAM user or an Amazon
     * QuickSight user. You can register multiple users using the same IAM role if each
     * user has a different session name. For more information on assuming IAM roles,
     * see <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/sts/assume-role.html">
     * <code>assume-role</code> </a> in the <i>AWS CLI Reference.</i> </p>
     */
    inline const Aws::String& GetSessionName() const{ return m_sessionName; }

    /**
     * <p>You need to use this parameter only when you register one or more users using
     * an assumed IAM role. You don't need to provide the session name for other
     * scenarios, for example when you are registering an IAM user or an Amazon
     * QuickSight user. You can register multiple users using the same IAM role if each
     * user has a different session name. For more information on assuming IAM roles,
     * see <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/sts/assume-role.html">
     * <code>assume-role</code> </a> in the <i>AWS CLI Reference.</i> </p>
     */
    inline bool SessionNameHasBeenSet() const { return m_sessionNameHasBeenSet; }

    /**
     * <p>You need to use this parameter only when you register one or more users using
     * an assumed IAM role. You don't need to provide the session name for other
     * scenarios, for example when you are registering an IAM user or an Amazon
     * QuickSight user. You can register multiple users using the same IAM role if each
     * user has a different session name. For more information on assuming IAM roles,
     * see <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/sts/assume-role.html">
     * <code>assume-role</code> </a> in the <i>AWS CLI Reference.</i> </p>
     */
    inline void SetSessionName(const Aws::String& value) { m_sessionNameHasBeenSet = true; m_sessionName = value; }

    /**
     * <p>You need to use this parameter only when you register one or more users using
     * an assumed IAM role. You don't need to provide the session name for other
     * scenarios, for example when you are registering an IAM user or an Amazon
     * QuickSight user. You can register multiple users using the same IAM role if each
     * user has a different session name. For more information on assuming IAM roles,
     * see <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/sts/assume-role.html">
     * <code>assume-role</code> </a> in the <i>AWS CLI Reference.</i> </p>
     */
    inline void SetSessionName(Aws::String&& value) { m_sessionNameHasBeenSet = true; m_sessionName = std::move(value); }

    /**
     * <p>You need to use this parameter only when you register one or more users using
     * an assumed IAM role. You don't need to provide the session name for other
     * scenarios, for example when you are registering an IAM user or an Amazon
     * QuickSight user. You can register multiple users using the same IAM role if each
     * user has a different session name. For more information on assuming IAM roles,
     * see <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/sts/assume-role.html">
     * <code>assume-role</code> </a> in the <i>AWS CLI Reference.</i> </p>
     */
    inline void SetSessionName(const char* value) { m_sessionNameHasBeenSet = true; m_sessionName.assign(value); }

    /**
     * <p>You need to use this parameter only when you register one or more users using
     * an assumed IAM role. You don't need to provide the session name for other
     * scenarios, for example when you are registering an IAM user or an Amazon
     * QuickSight user. You can register multiple users using the same IAM role if each
     * user has a different session name. For more information on assuming IAM roles,
     * see <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/sts/assume-role.html">
     * <code>assume-role</code> </a> in the <i>AWS CLI Reference.</i> </p>
     */
    inline RegisterUserRequest& WithSessionName(const Aws::String& value) { SetSessionName(value); return *this;}

    /**
     * <p>You need to use this parameter only when you register one or more users using
     * an assumed IAM role. You don't need to provide the session name for other
     * scenarios, for example when you are registering an IAM user or an Amazon
     * QuickSight user. You can register multiple users using the same IAM role if each
     * user has a different session name. For more information on assuming IAM roles,
     * see <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/sts/assume-role.html">
     * <code>assume-role</code> </a> in the <i>AWS CLI Reference.</i> </p>
     */
    inline RegisterUserRequest& WithSessionName(Aws::String&& value) { SetSessionName(std::move(value)); return *this;}

    /**
     * <p>You need to use this parameter only when you register one or more users using
     * an assumed IAM role. You don't need to provide the session name for other
     * scenarios, for example when you are registering an IAM user or an Amazon
     * QuickSight user. You can register multiple users using the same IAM role if each
     * user has a different session name. For more information on assuming IAM roles,
     * see <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/sts/assume-role.html">
     * <code>assume-role</code> </a> in the <i>AWS CLI Reference.</i> </p>
     */
    inline RegisterUserRequest& WithSessionName(const char* value) { SetSessionName(value); return *this;}


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
    inline RegisterUserRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID for the AWS account that the user is in. Currently, you use the ID for
     * the AWS account that contains your Amazon QuickSight account.</p>
     */
    inline RegisterUserRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID for the AWS account that the user is in. Currently, you use the ID for
     * the AWS account that contains your Amazon QuickSight account.</p>
     */
    inline RegisterUserRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


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
    inline RegisterUserRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace. Currently, you should set this to <code>default</code>.</p>
     */
    inline RegisterUserRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace. Currently, you should set this to <code>default</code>.</p>
     */
    inline RegisterUserRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The Amazon QuickSight user name that you want to create for the user you are
     * registering.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The Amazon QuickSight user name that you want to create for the user you are
     * registering.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The Amazon QuickSight user name that you want to create for the user you are
     * registering.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The Amazon QuickSight user name that you want to create for the user you are
     * registering.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The Amazon QuickSight user name that you want to create for the user you are
     * registering.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The Amazon QuickSight user name that you want to create for the user you are
     * registering.</p>
     */
    inline RegisterUserRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The Amazon QuickSight user name that you want to create for the user you are
     * registering.</p>
     */
    inline RegisterUserRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The Amazon QuickSight user name that you want to create for the user you are
     * registering.</p>
     */
    inline RegisterUserRequest& WithUserName(const char* value) { SetUserName(value); return *this;}

  private:

    IdentityType m_identityType;
    bool m_identityTypeHasBeenSet;

    Aws::String m_email;
    bool m_emailHasBeenSet;

    UserRole m_userRole;
    bool m_userRoleHasBeenSet;

    Aws::String m_iamArn;
    bool m_iamArnHasBeenSet;

    Aws::String m_sessionName;
    bool m_sessionNameHasBeenSet;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet;

    Aws::String m_userName;
    bool m_userNameHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
