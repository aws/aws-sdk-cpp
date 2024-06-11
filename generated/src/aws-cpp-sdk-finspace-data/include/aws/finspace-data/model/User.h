﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace-data/model/UserStatus.h>
#include <aws/finspace-data/model/UserType.h>
#include <aws/finspace-data/model/ApiAccess.h>
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
namespace FinSpaceData
{
namespace Model
{

  /**
   * <p>The details of the user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/User">AWS API
   * Reference</a></p>
   */
  class User
  {
  public:
    AWS_FINSPACEDATA_API User();
    AWS_FINSPACEDATA_API User(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API User& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the user.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline User& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline User& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline User& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the user. </p> <ul> <li> <p> <code>CREATING</code> –
     * The user creation is in progress.</p> </li> <li> <p> <code>ENABLED</code> – The
     * user is created and is currently active.</p> </li> <li> <p>
     * <code>DISABLED</code> – The user is currently inactive.</p> </li> </ul>
     */
    inline const UserStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const UserStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(UserStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline User& WithStatus(const UserStatus& value) { SetStatus(value); return *this;}
    inline User& WithStatus(UserStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first name of the user.</p>
     */
    inline const Aws::String& GetFirstName() const{ return m_firstName; }
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = std::move(value); }
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }
    inline User& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}
    inline User& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}
    inline User& WithFirstName(const char* value) { SetFirstName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The last name of the user.</p>
     */
    inline const Aws::String& GetLastName() const{ return m_lastName; }
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = std::move(value); }
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }
    inline User& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}
    inline User& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}
    inline User& WithLastName(const char* value) { SetLastName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address of the user. The email address serves as a uniquer
     * identifier for each user and cannot be changed after it's created.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }
    inline User& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}
    inline User& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}
    inline User& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the type of user.</p> <ul> <li> <p> <code>SUPER_USER</code> – A
     * user with permission to all the functionality and data in FinSpace.</p> </li>
     * <li> <p> <code>APP_USER</code> – A user with specific permissions in FinSpace.
     * The users are assigned permissions by adding them to a permission group.</p>
     * </li> </ul>
     */
    inline const UserType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const UserType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(UserType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline User& WithType(const UserType& value) { SetType(value); return *this;}
    inline User& WithType(UserType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the user can use the
     * <code>GetProgrammaticAccessCredentials</code> API to obtain credentials that can
     * then be used to access other FinSpace Data API operations.</p> <ul> <li> <p>
     * <code>ENABLED</code> – The user has permissions to use the APIs.</p> </li> <li>
     * <p> <code>DISABLED</code> – The user does not have permissions to use any
     * APIs.</p> </li> </ul>
     */
    inline const ApiAccess& GetApiAccess() const{ return m_apiAccess; }
    inline bool ApiAccessHasBeenSet() const { return m_apiAccessHasBeenSet; }
    inline void SetApiAccess(const ApiAccess& value) { m_apiAccessHasBeenSet = true; m_apiAccess = value; }
    inline void SetApiAccess(ApiAccess&& value) { m_apiAccessHasBeenSet = true; m_apiAccess = std::move(value); }
    inline User& WithApiAccess(const ApiAccess& value) { SetApiAccess(value); return *this;}
    inline User& WithApiAccess(ApiAccess&& value) { SetApiAccess(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN identifier of an AWS user or role that is allowed to call the
     * <code>GetProgrammaticAccessCredentials</code> API to obtain a credentials token
     * for a specific FinSpace user. This must be an IAM role within your FinSpace
     * account.</p>
     */
    inline const Aws::String& GetApiAccessPrincipalArn() const{ return m_apiAccessPrincipalArn; }
    inline bool ApiAccessPrincipalArnHasBeenSet() const { return m_apiAccessPrincipalArnHasBeenSet; }
    inline void SetApiAccessPrincipalArn(const Aws::String& value) { m_apiAccessPrincipalArnHasBeenSet = true; m_apiAccessPrincipalArn = value; }
    inline void SetApiAccessPrincipalArn(Aws::String&& value) { m_apiAccessPrincipalArnHasBeenSet = true; m_apiAccessPrincipalArn = std::move(value); }
    inline void SetApiAccessPrincipalArn(const char* value) { m_apiAccessPrincipalArnHasBeenSet = true; m_apiAccessPrincipalArn.assign(value); }
    inline User& WithApiAccessPrincipalArn(const Aws::String& value) { SetApiAccessPrincipalArn(value); return *this;}
    inline User& WithApiAccessPrincipalArn(Aws::String&& value) { SetApiAccessPrincipalArn(std::move(value)); return *this;}
    inline User& WithApiAccessPrincipalArn(const char* value) { SetApiAccessPrincipalArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the user was created in FinSpace. The value is
     * determined as epoch time in milliseconds. </p>
     */
    inline long long GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(long long value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline User& WithCreateTime(long long value) { SetCreateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the last time the user was activated. The value is determined as
     * epoch time in milliseconds. </p>
     */
    inline long long GetLastEnabledTime() const{ return m_lastEnabledTime; }
    inline bool LastEnabledTimeHasBeenSet() const { return m_lastEnabledTimeHasBeenSet; }
    inline void SetLastEnabledTime(long long value) { m_lastEnabledTimeHasBeenSet = true; m_lastEnabledTime = value; }
    inline User& WithLastEnabledTime(long long value) { SetLastEnabledTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the last time the user was deactivated. The value is determined as
     * epoch time in milliseconds.</p>
     */
    inline long long GetLastDisabledTime() const{ return m_lastDisabledTime; }
    inline bool LastDisabledTimeHasBeenSet() const { return m_lastDisabledTimeHasBeenSet; }
    inline void SetLastDisabledTime(long long value) { m_lastDisabledTimeHasBeenSet = true; m_lastDisabledTime = value; }
    inline User& WithLastDisabledTime(long long value) { SetLastDisabledTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the last time the user was updated. The value is determined as
     * epoch time in milliseconds. </p>
     */
    inline long long GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(long long value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline User& WithLastModifiedTime(long long value) { SetLastModifiedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the last time that the user logged into their account. The value is
     * determined as epoch time in milliseconds. </p>
     */
    inline long long GetLastLoginTime() const{ return m_lastLoginTime; }
    inline bool LastLoginTimeHasBeenSet() const { return m_lastLoginTimeHasBeenSet; }
    inline void SetLastLoginTime(long long value) { m_lastLoginTimeHasBeenSet = true; m_lastLoginTime = value; }
    inline User& WithLastLoginTime(long long value) { SetLastLoginTime(value); return *this;}
    ///@}
  private:

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    UserStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet = false;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet = false;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    UserType m_type;
    bool m_typeHasBeenSet = false;

    ApiAccess m_apiAccess;
    bool m_apiAccessHasBeenSet = false;

    Aws::String m_apiAccessPrincipalArn;
    bool m_apiAccessPrincipalArnHasBeenSet = false;

    long long m_createTime;
    bool m_createTimeHasBeenSet = false;

    long long m_lastEnabledTime;
    bool m_lastEnabledTimeHasBeenSet = false;

    long long m_lastDisabledTime;
    bool m_lastDisabledTimeHasBeenSet = false;

    long long m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    long long m_lastLoginTime;
    bool m_lastLoginTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
