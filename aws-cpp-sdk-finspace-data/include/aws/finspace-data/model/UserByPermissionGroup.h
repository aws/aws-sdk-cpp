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
#include <aws/finspace-data/model/PermissionGroupMembershipStatus.h>
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
   * <p>The structure of a user account associated with a permission
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/UserByPermissionGroup">AWS
   * API Reference</a></p>
   */
  class UserByPermissionGroup
  {
  public:
    AWS_FINSPACEDATA_API UserByPermissionGroup();
    AWS_FINSPACEDATA_API UserByPermissionGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API UserByPermissionGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the user.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The unique identifier for the user.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The unique identifier for the user.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The unique identifier for the user.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The unique identifier for the user.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The unique identifier for the user.</p>
     */
    inline UserByPermissionGroup& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The unique identifier for the user.</p>
     */
    inline UserByPermissionGroup& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the user.</p>
     */
    inline UserByPermissionGroup& WithUserId(const char* value) { SetUserId(value); return *this;}


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
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the user account. </p> <ul> <li> <p>
     * <code>CREATING</code> – The user account creation is in progress.</p> </li> <li>
     * <p> <code>ENABLED</code> – The user account is created and is currently
     * active.</p> </li> <li> <p> <code>DISABLED</code> – The user account is currently
     * inactive.</p> </li> </ul>
     */
    inline void SetStatus(const UserStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the user account. </p> <ul> <li> <p>
     * <code>CREATING</code> – The user account creation is in progress.</p> </li> <li>
     * <p> <code>ENABLED</code> – The user account is created and is currently
     * active.</p> </li> <li> <p> <code>DISABLED</code> – The user account is currently
     * inactive.</p> </li> </ul>
     */
    inline void SetStatus(UserStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the user account. </p> <ul> <li> <p>
     * <code>CREATING</code> – The user account creation is in progress.</p> </li> <li>
     * <p> <code>ENABLED</code> – The user account is created and is currently
     * active.</p> </li> <li> <p> <code>DISABLED</code> – The user account is currently
     * inactive.</p> </li> </ul>
     */
    inline UserByPermissionGroup& WithStatus(const UserStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the user account. </p> <ul> <li> <p>
     * <code>CREATING</code> – The user account creation is in progress.</p> </li> <li>
     * <p> <code>ENABLED</code> – The user account is created and is currently
     * active.</p> </li> <li> <p> <code>DISABLED</code> – The user account is currently
     * inactive.</p> </li> </ul>
     */
    inline UserByPermissionGroup& WithStatus(UserStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The first name of the user.</p>
     */
    inline const Aws::String& GetFirstName() const{ return m_firstName; }

    /**
     * <p>The first name of the user.</p>
     */
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }

    /**
     * <p>The first name of the user.</p>
     */
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }

    /**
     * <p>The first name of the user.</p>
     */
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = std::move(value); }

    /**
     * <p>The first name of the user.</p>
     */
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }

    /**
     * <p>The first name of the user.</p>
     */
    inline UserByPermissionGroup& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}

    /**
     * <p>The first name of the user.</p>
     */
    inline UserByPermissionGroup& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}

    /**
     * <p>The first name of the user.</p>
     */
    inline UserByPermissionGroup& WithFirstName(const char* value) { SetFirstName(value); return *this;}


    /**
     * <p>The last name of the user.</p>
     */
    inline const Aws::String& GetLastName() const{ return m_lastName; }

    /**
     * <p>The last name of the user.</p>
     */
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }

    /**
     * <p>The last name of the user.</p>
     */
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }

    /**
     * <p>The last name of the user.</p>
     */
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = std::move(value); }

    /**
     * <p>The last name of the user.</p>
     */
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }

    /**
     * <p>The last name of the user.</p>
     */
    inline UserByPermissionGroup& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}

    /**
     * <p>The last name of the user.</p>
     */
    inline UserByPermissionGroup& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}

    /**
     * <p>The last name of the user.</p>
     */
    inline UserByPermissionGroup& WithLastName(const char* value) { SetLastName(value); return *this;}


    /**
     * <p>The email address of the user. The email address serves as a unique
     * identifier for each user and cannot be changed after it's created.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }

    /**
     * <p>The email address of the user. The email address serves as a unique
     * identifier for each user and cannot be changed after it's created.</p>
     */
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }

    /**
     * <p>The email address of the user. The email address serves as a unique
     * identifier for each user and cannot be changed after it's created.</p>
     */
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }

    /**
     * <p>The email address of the user. The email address serves as a unique
     * identifier for each user and cannot be changed after it's created.</p>
     */
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }

    /**
     * <p>The email address of the user. The email address serves as a unique
     * identifier for each user and cannot be changed after it's created.</p>
     */
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }

    /**
     * <p>The email address of the user. The email address serves as a unique
     * identifier for each user and cannot be changed after it's created.</p>
     */
    inline UserByPermissionGroup& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}

    /**
     * <p>The email address of the user. The email address serves as a unique
     * identifier for each user and cannot be changed after it's created.</p>
     */
    inline UserByPermissionGroup& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The email address of the user. The email address serves as a unique
     * identifier for each user and cannot be changed after it's created.</p>
     */
    inline UserByPermissionGroup& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}


    /**
     * <p> Indicates the type of user.</p> <ul> <li> <p> <code>SUPER_USER</code> – A
     * user with permission to all the functionality and data in FinSpace.</p> </li>
     * <li> <p> <code>APP_USER</code> – A user with specific permissions in FinSpace.
     * The users are assigned permissions by adding them to a permission group.</p>
     * </li> </ul>
     */
    inline const UserType& GetType() const{ return m_type; }

    /**
     * <p> Indicates the type of user.</p> <ul> <li> <p> <code>SUPER_USER</code> – A
     * user with permission to all the functionality and data in FinSpace.</p> </li>
     * <li> <p> <code>APP_USER</code> – A user with specific permissions in FinSpace.
     * The users are assigned permissions by adding them to a permission group.</p>
     * </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> Indicates the type of user.</p> <ul> <li> <p> <code>SUPER_USER</code> – A
     * user with permission to all the functionality and data in FinSpace.</p> </li>
     * <li> <p> <code>APP_USER</code> – A user with specific permissions in FinSpace.
     * The users are assigned permissions by adding them to a permission group.</p>
     * </li> </ul>
     */
    inline void SetType(const UserType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> Indicates the type of user.</p> <ul> <li> <p> <code>SUPER_USER</code> – A
     * user with permission to all the functionality and data in FinSpace.</p> </li>
     * <li> <p> <code>APP_USER</code> – A user with specific permissions in FinSpace.
     * The users are assigned permissions by adding them to a permission group.</p>
     * </li> </ul>
     */
    inline void SetType(UserType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> Indicates the type of user.</p> <ul> <li> <p> <code>SUPER_USER</code> – A
     * user with permission to all the functionality and data in FinSpace.</p> </li>
     * <li> <p> <code>APP_USER</code> – A user with specific permissions in FinSpace.
     * The users are assigned permissions by adding them to a permission group.</p>
     * </li> </ul>
     */
    inline UserByPermissionGroup& WithType(const UserType& value) { SetType(value); return *this;}

    /**
     * <p> Indicates the type of user.</p> <ul> <li> <p> <code>SUPER_USER</code> – A
     * user with permission to all the functionality and data in FinSpace.</p> </li>
     * <li> <p> <code>APP_USER</code> – A user with specific permissions in FinSpace.
     * The users are assigned permissions by adding them to a permission group.</p>
     * </li> </ul>
     */
    inline UserByPermissionGroup& WithType(UserType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the user can access FinSpace API operations.</p> <ul> <li>
     * <p> <code>ENABLED</code> – The user has permissions to use the API
     * operations.</p> </li> <li> <p> <code>DISABLED</code> – The user does not have
     * permissions to use any API operations.</p> </li> </ul>
     */
    inline const ApiAccess& GetApiAccess() const{ return m_apiAccess; }

    /**
     * <p>Indicates whether the user can access FinSpace API operations.</p> <ul> <li>
     * <p> <code>ENABLED</code> – The user has permissions to use the API
     * operations.</p> </li> <li> <p> <code>DISABLED</code> – The user does not have
     * permissions to use any API operations.</p> </li> </ul>
     */
    inline bool ApiAccessHasBeenSet() const { return m_apiAccessHasBeenSet; }

    /**
     * <p>Indicates whether the user can access FinSpace API operations.</p> <ul> <li>
     * <p> <code>ENABLED</code> – The user has permissions to use the API
     * operations.</p> </li> <li> <p> <code>DISABLED</code> – The user does not have
     * permissions to use any API operations.</p> </li> </ul>
     */
    inline void SetApiAccess(const ApiAccess& value) { m_apiAccessHasBeenSet = true; m_apiAccess = value; }

    /**
     * <p>Indicates whether the user can access FinSpace API operations.</p> <ul> <li>
     * <p> <code>ENABLED</code> – The user has permissions to use the API
     * operations.</p> </li> <li> <p> <code>DISABLED</code> – The user does not have
     * permissions to use any API operations.</p> </li> </ul>
     */
    inline void SetApiAccess(ApiAccess&& value) { m_apiAccessHasBeenSet = true; m_apiAccess = std::move(value); }

    /**
     * <p>Indicates whether the user can access FinSpace API operations.</p> <ul> <li>
     * <p> <code>ENABLED</code> – The user has permissions to use the API
     * operations.</p> </li> <li> <p> <code>DISABLED</code> – The user does not have
     * permissions to use any API operations.</p> </li> </ul>
     */
    inline UserByPermissionGroup& WithApiAccess(const ApiAccess& value) { SetApiAccess(value); return *this;}

    /**
     * <p>Indicates whether the user can access FinSpace API operations.</p> <ul> <li>
     * <p> <code>ENABLED</code> – The user has permissions to use the API
     * operations.</p> </li> <li> <p> <code>DISABLED</code> – The user does not have
     * permissions to use any API operations.</p> </li> </ul>
     */
    inline UserByPermissionGroup& WithApiAccess(ApiAccess&& value) { SetApiAccess(std::move(value)); return *this;}


    /**
     * <p>The IAM ARN identifier that is attached to FinSpace API calls.</p>
     */
    inline const Aws::String& GetApiAccessPrincipalArn() const{ return m_apiAccessPrincipalArn; }

    /**
     * <p>The IAM ARN identifier that is attached to FinSpace API calls.</p>
     */
    inline bool ApiAccessPrincipalArnHasBeenSet() const { return m_apiAccessPrincipalArnHasBeenSet; }

    /**
     * <p>The IAM ARN identifier that is attached to FinSpace API calls.</p>
     */
    inline void SetApiAccessPrincipalArn(const Aws::String& value) { m_apiAccessPrincipalArnHasBeenSet = true; m_apiAccessPrincipalArn = value; }

    /**
     * <p>The IAM ARN identifier that is attached to FinSpace API calls.</p>
     */
    inline void SetApiAccessPrincipalArn(Aws::String&& value) { m_apiAccessPrincipalArnHasBeenSet = true; m_apiAccessPrincipalArn = std::move(value); }

    /**
     * <p>The IAM ARN identifier that is attached to FinSpace API calls.</p>
     */
    inline void SetApiAccessPrincipalArn(const char* value) { m_apiAccessPrincipalArnHasBeenSet = true; m_apiAccessPrincipalArn.assign(value); }

    /**
     * <p>The IAM ARN identifier that is attached to FinSpace API calls.</p>
     */
    inline UserByPermissionGroup& WithApiAccessPrincipalArn(const Aws::String& value) { SetApiAccessPrincipalArn(value); return *this;}

    /**
     * <p>The IAM ARN identifier that is attached to FinSpace API calls.</p>
     */
    inline UserByPermissionGroup& WithApiAccessPrincipalArn(Aws::String&& value) { SetApiAccessPrincipalArn(std::move(value)); return *this;}

    /**
     * <p>The IAM ARN identifier that is attached to FinSpace API calls.</p>
     */
    inline UserByPermissionGroup& WithApiAccessPrincipalArn(const char* value) { SetApiAccessPrincipalArn(value); return *this;}


    /**
     * <p>Indicates the status of the user account within a permission group.</p> <ul>
     * <li> <p> <code>ADDITION_IN_PROGRESS</code> – The user account is currently being
     * added to the permission group.</p> </li> <li> <p> <code>ADDITION_SUCCESS</code>
     * – The user account is successfully added to the permission group.</p> </li> <li>
     * <p> <code>REMOVAL_IN_PROGRESS</code> – The user is currently being removed from
     * the permission group.</p> </li> </ul>
     */
    inline const PermissionGroupMembershipStatus& GetMembershipStatus() const{ return m_membershipStatus; }

    /**
     * <p>Indicates the status of the user account within a permission group.</p> <ul>
     * <li> <p> <code>ADDITION_IN_PROGRESS</code> – The user account is currently being
     * added to the permission group.</p> </li> <li> <p> <code>ADDITION_SUCCESS</code>
     * – The user account is successfully added to the permission group.</p> </li> <li>
     * <p> <code>REMOVAL_IN_PROGRESS</code> – The user is currently being removed from
     * the permission group.</p> </li> </ul>
     */
    inline bool MembershipStatusHasBeenSet() const { return m_membershipStatusHasBeenSet; }

    /**
     * <p>Indicates the status of the user account within a permission group.</p> <ul>
     * <li> <p> <code>ADDITION_IN_PROGRESS</code> – The user account is currently being
     * added to the permission group.</p> </li> <li> <p> <code>ADDITION_SUCCESS</code>
     * – The user account is successfully added to the permission group.</p> </li> <li>
     * <p> <code>REMOVAL_IN_PROGRESS</code> – The user is currently being removed from
     * the permission group.</p> </li> </ul>
     */
    inline void SetMembershipStatus(const PermissionGroupMembershipStatus& value) { m_membershipStatusHasBeenSet = true; m_membershipStatus = value; }

    /**
     * <p>Indicates the status of the user account within a permission group.</p> <ul>
     * <li> <p> <code>ADDITION_IN_PROGRESS</code> – The user account is currently being
     * added to the permission group.</p> </li> <li> <p> <code>ADDITION_SUCCESS</code>
     * – The user account is successfully added to the permission group.</p> </li> <li>
     * <p> <code>REMOVAL_IN_PROGRESS</code> – The user is currently being removed from
     * the permission group.</p> </li> </ul>
     */
    inline void SetMembershipStatus(PermissionGroupMembershipStatus&& value) { m_membershipStatusHasBeenSet = true; m_membershipStatus = std::move(value); }

    /**
     * <p>Indicates the status of the user account within a permission group.</p> <ul>
     * <li> <p> <code>ADDITION_IN_PROGRESS</code> – The user account is currently being
     * added to the permission group.</p> </li> <li> <p> <code>ADDITION_SUCCESS</code>
     * – The user account is successfully added to the permission group.</p> </li> <li>
     * <p> <code>REMOVAL_IN_PROGRESS</code> – The user is currently being removed from
     * the permission group.</p> </li> </ul>
     */
    inline UserByPermissionGroup& WithMembershipStatus(const PermissionGroupMembershipStatus& value) { SetMembershipStatus(value); return *this;}

    /**
     * <p>Indicates the status of the user account within a permission group.</p> <ul>
     * <li> <p> <code>ADDITION_IN_PROGRESS</code> – The user account is currently being
     * added to the permission group.</p> </li> <li> <p> <code>ADDITION_SUCCESS</code>
     * – The user account is successfully added to the permission group.</p> </li> <li>
     * <p> <code>REMOVAL_IN_PROGRESS</code> – The user is currently being removed from
     * the permission group.</p> </li> </ul>
     */
    inline UserByPermissionGroup& WithMembershipStatus(PermissionGroupMembershipStatus&& value) { SetMembershipStatus(std::move(value)); return *this;}

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

    PermissionGroupMembershipStatus m_membershipStatus;
    bool m_membershipStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
