/**
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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace FinSpaceData
{
namespace Model
{
  class GetUserResult
  {
  public:
    AWS_FINSPACEDATA_API GetUserResult();
    AWS_FINSPACEDATA_API GetUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACEDATA_API GetUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier for the user account that is retrieved.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The unique identifier for the user account that is retrieved.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userId = value; }

    /**
     * <p>The unique identifier for the user account that is retrieved.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userId = std::move(value); }

    /**
     * <p>The unique identifier for the user account that is retrieved.</p>
     */
    inline void SetUserId(const char* value) { m_userId.assign(value); }

    /**
     * <p>The unique identifier for the user account that is retrieved.</p>
     */
    inline GetUserResult& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The unique identifier for the user account that is retrieved.</p>
     */
    inline GetUserResult& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the user account that is retrieved.</p>
     */
    inline GetUserResult& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The current status of the user account. </p> <ul> <li> <p>
     * <code>CREATING</code> – The user account creation is in progress.</p> </li> <li>
     * <p> <code>ENABLED</code> – The user account is created and is currently
     * active.</p> </li> <li> <p> <code>DISABLED</code> – The user account is currently
     * inactive.</p> </li> </ul>
     */
    inline const UserStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the user account. </p> <ul> <li> <p>
     * <code>CREATING</code> – The user account creation is in progress.</p> </li> <li>
     * <p> <code>ENABLED</code> – The user account is created and is currently
     * active.</p> </li> <li> <p> <code>DISABLED</code> – The user account is currently
     * inactive.</p> </li> </ul>
     */
    inline void SetStatus(const UserStatus& value) { m_status = value; }

    /**
     * <p>The current status of the user account. </p> <ul> <li> <p>
     * <code>CREATING</code> – The user account creation is in progress.</p> </li> <li>
     * <p> <code>ENABLED</code> – The user account is created and is currently
     * active.</p> </li> <li> <p> <code>DISABLED</code> – The user account is currently
     * inactive.</p> </li> </ul>
     */
    inline void SetStatus(UserStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the user account. </p> <ul> <li> <p>
     * <code>CREATING</code> – The user account creation is in progress.</p> </li> <li>
     * <p> <code>ENABLED</code> – The user account is created and is currently
     * active.</p> </li> <li> <p> <code>DISABLED</code> – The user account is currently
     * inactive.</p> </li> </ul>
     */
    inline GetUserResult& WithStatus(const UserStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the user account. </p> <ul> <li> <p>
     * <code>CREATING</code> – The user account creation is in progress.</p> </li> <li>
     * <p> <code>ENABLED</code> – The user account is created and is currently
     * active.</p> </li> <li> <p> <code>DISABLED</code> – The user account is currently
     * inactive.</p> </li> </ul>
     */
    inline GetUserResult& WithStatus(UserStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The first name of the user.</p>
     */
    inline const Aws::String& GetFirstName() const{ return m_firstName; }

    /**
     * <p>The first name of the user.</p>
     */
    inline void SetFirstName(const Aws::String& value) { m_firstName = value; }

    /**
     * <p>The first name of the user.</p>
     */
    inline void SetFirstName(Aws::String&& value) { m_firstName = std::move(value); }

    /**
     * <p>The first name of the user.</p>
     */
    inline void SetFirstName(const char* value) { m_firstName.assign(value); }

    /**
     * <p>The first name of the user.</p>
     */
    inline GetUserResult& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}

    /**
     * <p>The first name of the user.</p>
     */
    inline GetUserResult& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}

    /**
     * <p>The first name of the user.</p>
     */
    inline GetUserResult& WithFirstName(const char* value) { SetFirstName(value); return *this;}


    /**
     * <p>The last name of the user.</p>
     */
    inline const Aws::String& GetLastName() const{ return m_lastName; }

    /**
     * <p>The last name of the user.</p>
     */
    inline void SetLastName(const Aws::String& value) { m_lastName = value; }

    /**
     * <p>The last name of the user.</p>
     */
    inline void SetLastName(Aws::String&& value) { m_lastName = std::move(value); }

    /**
     * <p>The last name of the user.</p>
     */
    inline void SetLastName(const char* value) { m_lastName.assign(value); }

    /**
     * <p>The last name of the user.</p>
     */
    inline GetUserResult& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}

    /**
     * <p>The last name of the user.</p>
     */
    inline GetUserResult& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}

    /**
     * <p>The last name of the user.</p>
     */
    inline GetUserResult& WithLastName(const char* value) { SetLastName(value); return *this;}


    /**
     * <p>The email address that is associated with the user.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }

    /**
     * <p>The email address that is associated with the user.</p>
     */
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddress = value; }

    /**
     * <p>The email address that is associated with the user.</p>
     */
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddress = std::move(value); }

    /**
     * <p>The email address that is associated with the user.</p>
     */
    inline void SetEmailAddress(const char* value) { m_emailAddress.assign(value); }

    /**
     * <p>The email address that is associated with the user.</p>
     */
    inline GetUserResult& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}

    /**
     * <p>The email address that is associated with the user.</p>
     */
    inline GetUserResult& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The email address that is associated with the user.</p>
     */
    inline GetUserResult& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}


    /**
     * <p>Indicates the type of user. </p> <ul> <li> <p> <code>SUPER_USER</code> – A
     * user with permission to all the functionality and data in FinSpace.</p> </li>
     * </ul> <ul> <li> <p> <code>APP_USER</code> – A user with specific permissions in
     * FinSpace. The users are assigned permissions by adding them to a permission
     * group.</p> </li> </ul>
     */
    inline const UserType& GetType() const{ return m_type; }

    /**
     * <p>Indicates the type of user. </p> <ul> <li> <p> <code>SUPER_USER</code> – A
     * user with permission to all the functionality and data in FinSpace.</p> </li>
     * </ul> <ul> <li> <p> <code>APP_USER</code> – A user with specific permissions in
     * FinSpace. The users are assigned permissions by adding them to a permission
     * group.</p> </li> </ul>
     */
    inline void SetType(const UserType& value) { m_type = value; }

    /**
     * <p>Indicates the type of user. </p> <ul> <li> <p> <code>SUPER_USER</code> – A
     * user with permission to all the functionality and data in FinSpace.</p> </li>
     * </ul> <ul> <li> <p> <code>APP_USER</code> – A user with specific permissions in
     * FinSpace. The users are assigned permissions by adding them to a permission
     * group.</p> </li> </ul>
     */
    inline void SetType(UserType&& value) { m_type = std::move(value); }

    /**
     * <p>Indicates the type of user. </p> <ul> <li> <p> <code>SUPER_USER</code> – A
     * user with permission to all the functionality and data in FinSpace.</p> </li>
     * </ul> <ul> <li> <p> <code>APP_USER</code> – A user with specific permissions in
     * FinSpace. The users are assigned permissions by adding them to a permission
     * group.</p> </li> </ul>
     */
    inline GetUserResult& WithType(const UserType& value) { SetType(value); return *this;}

    /**
     * <p>Indicates the type of user. </p> <ul> <li> <p> <code>SUPER_USER</code> – A
     * user with permission to all the functionality and data in FinSpace.</p> </li>
     * </ul> <ul> <li> <p> <code>APP_USER</code> – A user with specific permissions in
     * FinSpace. The users are assigned permissions by adding them to a permission
     * group.</p> </li> </ul>
     */
    inline GetUserResult& WithType(UserType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the user can use the
     * <code>GetProgrammaticAccessCredentials</code> API to obtain credentials that can
     * then be used to access other FinSpace Data API operations. </p> <ul> <li> <p>
     * <code>ENABLED</code> – The user has permissions to use the APIs.</p> </li> <li>
     * <p> <code>DISABLED</code> – The user does not have permissions to use any
     * APIs.</p> </li> </ul>
     */
    inline const ApiAccess& GetApiAccess() const{ return m_apiAccess; }

    /**
     * <p>Indicates whether the user can use the
     * <code>GetProgrammaticAccessCredentials</code> API to obtain credentials that can
     * then be used to access other FinSpace Data API operations. </p> <ul> <li> <p>
     * <code>ENABLED</code> – The user has permissions to use the APIs.</p> </li> <li>
     * <p> <code>DISABLED</code> – The user does not have permissions to use any
     * APIs.</p> </li> </ul>
     */
    inline void SetApiAccess(const ApiAccess& value) { m_apiAccess = value; }

    /**
     * <p>Indicates whether the user can use the
     * <code>GetProgrammaticAccessCredentials</code> API to obtain credentials that can
     * then be used to access other FinSpace Data API operations. </p> <ul> <li> <p>
     * <code>ENABLED</code> – The user has permissions to use the APIs.</p> </li> <li>
     * <p> <code>DISABLED</code> – The user does not have permissions to use any
     * APIs.</p> </li> </ul>
     */
    inline void SetApiAccess(ApiAccess&& value) { m_apiAccess = std::move(value); }

    /**
     * <p>Indicates whether the user can use the
     * <code>GetProgrammaticAccessCredentials</code> API to obtain credentials that can
     * then be used to access other FinSpace Data API operations. </p> <ul> <li> <p>
     * <code>ENABLED</code> – The user has permissions to use the APIs.</p> </li> <li>
     * <p> <code>DISABLED</code> – The user does not have permissions to use any
     * APIs.</p> </li> </ul>
     */
    inline GetUserResult& WithApiAccess(const ApiAccess& value) { SetApiAccess(value); return *this;}

    /**
     * <p>Indicates whether the user can use the
     * <code>GetProgrammaticAccessCredentials</code> API to obtain credentials that can
     * then be used to access other FinSpace Data API operations. </p> <ul> <li> <p>
     * <code>ENABLED</code> – The user has permissions to use the APIs.</p> </li> <li>
     * <p> <code>DISABLED</code> – The user does not have permissions to use any
     * APIs.</p> </li> </ul>
     */
    inline GetUserResult& WithApiAccess(ApiAccess&& value) { SetApiAccess(std::move(value)); return *this;}


    /**
     * <p>The ARN identifier of an AWS user or role that is allowed to call the
     * <code>GetProgrammaticAccessCredentials</code> API to obtain a credentials token
     * for a specific FinSpace user. This must be an IAM role within your FinSpace
     * account.</p>
     */
    inline const Aws::String& GetApiAccessPrincipalArn() const{ return m_apiAccessPrincipalArn; }

    /**
     * <p>The ARN identifier of an AWS user or role that is allowed to call the
     * <code>GetProgrammaticAccessCredentials</code> API to obtain a credentials token
     * for a specific FinSpace user. This must be an IAM role within your FinSpace
     * account.</p>
     */
    inline void SetApiAccessPrincipalArn(const Aws::String& value) { m_apiAccessPrincipalArn = value; }

    /**
     * <p>The ARN identifier of an AWS user or role that is allowed to call the
     * <code>GetProgrammaticAccessCredentials</code> API to obtain a credentials token
     * for a specific FinSpace user. This must be an IAM role within your FinSpace
     * account.</p>
     */
    inline void SetApiAccessPrincipalArn(Aws::String&& value) { m_apiAccessPrincipalArn = std::move(value); }

    /**
     * <p>The ARN identifier of an AWS user or role that is allowed to call the
     * <code>GetProgrammaticAccessCredentials</code> API to obtain a credentials token
     * for a specific FinSpace user. This must be an IAM role within your FinSpace
     * account.</p>
     */
    inline void SetApiAccessPrincipalArn(const char* value) { m_apiAccessPrincipalArn.assign(value); }

    /**
     * <p>The ARN identifier of an AWS user or role that is allowed to call the
     * <code>GetProgrammaticAccessCredentials</code> API to obtain a credentials token
     * for a specific FinSpace user. This must be an IAM role within your FinSpace
     * account.</p>
     */
    inline GetUserResult& WithApiAccessPrincipalArn(const Aws::String& value) { SetApiAccessPrincipalArn(value); return *this;}

    /**
     * <p>The ARN identifier of an AWS user or role that is allowed to call the
     * <code>GetProgrammaticAccessCredentials</code> API to obtain a credentials token
     * for a specific FinSpace user. This must be an IAM role within your FinSpace
     * account.</p>
     */
    inline GetUserResult& WithApiAccessPrincipalArn(Aws::String&& value) { SetApiAccessPrincipalArn(std::move(value)); return *this;}

    /**
     * <p>The ARN identifier of an AWS user or role that is allowed to call the
     * <code>GetProgrammaticAccessCredentials</code> API to obtain a credentials token
     * for a specific FinSpace user. This must be an IAM role within your FinSpace
     * account.</p>
     */
    inline GetUserResult& WithApiAccessPrincipalArn(const char* value) { SetApiAccessPrincipalArn(value); return *this;}


    /**
     * <p>The timestamp at which the user account was created in FinSpace. The value is
     * determined as epoch time in milliseconds. </p>
     */
    inline long long GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The timestamp at which the user account was created in FinSpace. The value is
     * determined as epoch time in milliseconds. </p>
     */
    inline void SetCreateTime(long long value) { m_createTime = value; }

    /**
     * <p>The timestamp at which the user account was created in FinSpace. The value is
     * determined as epoch time in milliseconds. </p>
     */
    inline GetUserResult& WithCreateTime(long long value) { SetCreateTime(value); return *this;}


    /**
     * <p>Describes the last time the user account was enabled. The value is determined
     * as epoch time in milliseconds.</p>
     */
    inline long long GetLastEnabledTime() const{ return m_lastEnabledTime; }

    /**
     * <p>Describes the last time the user account was enabled. The value is determined
     * as epoch time in milliseconds.</p>
     */
    inline void SetLastEnabledTime(long long value) { m_lastEnabledTime = value; }

    /**
     * <p>Describes the last time the user account was enabled. The value is determined
     * as epoch time in milliseconds.</p>
     */
    inline GetUserResult& WithLastEnabledTime(long long value) { SetLastEnabledTime(value); return *this;}


    /**
     * <p>Describes the last time the user account was disabled. The value is
     * determined as epoch time in milliseconds.</p>
     */
    inline long long GetLastDisabledTime() const{ return m_lastDisabledTime; }

    /**
     * <p>Describes the last time the user account was disabled. The value is
     * determined as epoch time in milliseconds.</p>
     */
    inline void SetLastDisabledTime(long long value) { m_lastDisabledTime = value; }

    /**
     * <p>Describes the last time the user account was disabled. The value is
     * determined as epoch time in milliseconds.</p>
     */
    inline GetUserResult& WithLastDisabledTime(long long value) { SetLastDisabledTime(value); return *this;}


    /**
     * <p>Describes the last time the user account was updated. The value is determined
     * as epoch time in milliseconds.</p>
     */
    inline long long GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>Describes the last time the user account was updated. The value is determined
     * as epoch time in milliseconds.</p>
     */
    inline void SetLastModifiedTime(long long value) { m_lastModifiedTime = value; }

    /**
     * <p>Describes the last time the user account was updated. The value is determined
     * as epoch time in milliseconds.</p>
     */
    inline GetUserResult& WithLastModifiedTime(long long value) { SetLastModifiedTime(value); return *this;}


    /**
     * <p>Describes the last time that the user logged into their account. The value is
     * determined as epoch time in milliseconds.</p>
     */
    inline long long GetLastLoginTime() const{ return m_lastLoginTime; }

    /**
     * <p>Describes the last time that the user logged into their account. The value is
     * determined as epoch time in milliseconds.</p>
     */
    inline void SetLastLoginTime(long long value) { m_lastLoginTime = value; }

    /**
     * <p>Describes the last time that the user logged into their account. The value is
     * determined as epoch time in milliseconds.</p>
     */
    inline GetUserResult& WithLastLoginTime(long long value) { SetLastLoginTime(value); return *this;}

  private:

    Aws::String m_userId;

    UserStatus m_status;

    Aws::String m_firstName;

    Aws::String m_lastName;

    Aws::String m_emailAddress;

    UserType m_type;

    ApiAccess m_apiAccess;

    Aws::String m_apiAccessPrincipalArn;

    long long m_createTime;

    long long m_lastEnabledTime;

    long long m_lastDisabledTime;

    long long m_lastModifiedTime;

    long long m_lastLoginTime;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
