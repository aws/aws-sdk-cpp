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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/UserRole.h>
#include <aws/quicksight/model/IdentityType.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A registered user of Amazon QuickSight. Currently, an Amazon QuickSight
   * subscription can't contain more than 20 million users.</p><p><h3>See Also:</h3> 
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/User">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API User
  {
  public:
    User();
    User(Aws::Utils::Json::JsonView jsonValue);
    User& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) for the user.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the user.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the user.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the user.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the user.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the user.</p>
     */
    inline User& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the user.</p>
     */
    inline User& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the user.</p>
     */
    inline User& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The user's user name.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The user's user name.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The user's user name.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The user's user name.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The user's user name.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The user's user name.</p>
     */
    inline User& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The user's user name.</p>
     */
    inline User& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The user's user name.</p>
     */
    inline User& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The user's email address.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>The user's email address.</p>
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * <p>The user's email address.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>The user's email address.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>The user's email address.</p>
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * <p>The user's email address.</p>
     */
    inline User& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>The user's email address.</p>
     */
    inline User& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>The user's email address.</p>
     */
    inline User& WithEmail(const char* value) { SetEmail(value); return *this;}


    /**
     * <p>The Amazon QuickSight role for the user.</p>
     */
    inline const UserRole& GetRole() const{ return m_role; }

    /**
     * <p>The Amazon QuickSight role for the user.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The Amazon QuickSight role for the user.</p>
     */
    inline void SetRole(const UserRole& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The Amazon QuickSight role for the user.</p>
     */
    inline void SetRole(UserRole&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The Amazon QuickSight role for the user.</p>
     */
    inline User& WithRole(const UserRole& value) { SetRole(value); return *this;}

    /**
     * <p>The Amazon QuickSight role for the user.</p>
     */
    inline User& WithRole(UserRole&& value) { SetRole(std::move(value)); return *this;}


    /**
     * <p>The type of identity authentication used by the user.</p>
     */
    inline const IdentityType& GetIdentityType() const{ return m_identityType; }

    /**
     * <p>The type of identity authentication used by the user.</p>
     */
    inline bool IdentityTypeHasBeenSet() const { return m_identityTypeHasBeenSet; }

    /**
     * <p>The type of identity authentication used by the user.</p>
     */
    inline void SetIdentityType(const IdentityType& value) { m_identityTypeHasBeenSet = true; m_identityType = value; }

    /**
     * <p>The type of identity authentication used by the user.</p>
     */
    inline void SetIdentityType(IdentityType&& value) { m_identityTypeHasBeenSet = true; m_identityType = std::move(value); }

    /**
     * <p>The type of identity authentication used by the user.</p>
     */
    inline User& WithIdentityType(const IdentityType& value) { SetIdentityType(value); return *this;}

    /**
     * <p>The type of identity authentication used by the user.</p>
     */
    inline User& WithIdentityType(IdentityType&& value) { SetIdentityType(std::move(value)); return *this;}


    /**
     * <p>Active status of user. When you create an Amazon QuickSight user that’s not
     * an IAM user or an AD user, that user is inactive until they sign in and provide
     * a password</p>
     */
    inline bool GetActive() const{ return m_active; }

    /**
     * <p>Active status of user. When you create an Amazon QuickSight user that’s not
     * an IAM user or an AD user, that user is inactive until they sign in and provide
     * a password</p>
     */
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }

    /**
     * <p>Active status of user. When you create an Amazon QuickSight user that’s not
     * an IAM user or an AD user, that user is inactive until they sign in and provide
     * a password</p>
     */
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }

    /**
     * <p>Active status of user. When you create an Amazon QuickSight user that’s not
     * an IAM user or an AD user, that user is inactive until they sign in and provide
     * a password</p>
     */
    inline User& WithActive(bool value) { SetActive(value); return *this;}


    /**
     * <p>The principal ID of the user.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }

    /**
     * <p>The principal ID of the user.</p>
     */
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }

    /**
     * <p>The principal ID of the user.</p>
     */
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }

    /**
     * <p>The principal ID of the user.</p>
     */
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }

    /**
     * <p>The principal ID of the user.</p>
     */
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }

    /**
     * <p>The principal ID of the user.</p>
     */
    inline User& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}

    /**
     * <p>The principal ID of the user.</p>
     */
    inline User& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}

    /**
     * <p>The principal ID of the user.</p>
     */
    inline User& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_userName;
    bool m_userNameHasBeenSet;

    Aws::String m_email;
    bool m_emailHasBeenSet;

    UserRole m_role;
    bool m_roleHasBeenSet;

    IdentityType m_identityType;
    bool m_identityTypeHasBeenSet;

    bool m_active;
    bool m_activeHasBeenSet;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
