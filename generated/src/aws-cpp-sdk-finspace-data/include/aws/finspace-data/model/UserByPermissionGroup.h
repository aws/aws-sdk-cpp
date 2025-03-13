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
   * <p>The structure of a user associated with a permission group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/UserByPermissionGroup">AWS
   * API Reference</a></p>
   */
  class UserByPermissionGroup
  {
  public:
    AWS_FINSPACEDATA_API UserByPermissionGroup() = default;
    AWS_FINSPACEDATA_API UserByPermissionGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API UserByPermissionGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the user.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    UserByPermissionGroup& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the user. </p> <ul> <li> <p> <code>CREATING</code> –
     * The user creation is in progress.</p> </li> <li> <p> <code>ENABLED</code> – The
     * user is created and is currently active.</p> </li> <li> <p>
     * <code>DISABLED</code> – The user is currently inactive.</p> </li> </ul>
     */
    inline UserStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(UserStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UserByPermissionGroup& WithStatus(UserStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first name of the user.</p>
     */
    inline const Aws::String& GetFirstName() const { return m_firstName; }
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
    template<typename FirstNameT = Aws::String>
    void SetFirstName(FirstNameT&& value) { m_firstNameHasBeenSet = true; m_firstName = std::forward<FirstNameT>(value); }
    template<typename FirstNameT = Aws::String>
    UserByPermissionGroup& WithFirstName(FirstNameT&& value) { SetFirstName(std::forward<FirstNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last name of the user.</p>
     */
    inline const Aws::String& GetLastName() const { return m_lastName; }
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
    template<typename LastNameT = Aws::String>
    void SetLastName(LastNameT&& value) { m_lastNameHasBeenSet = true; m_lastName = std::forward<LastNameT>(value); }
    template<typename LastNameT = Aws::String>
    UserByPermissionGroup& WithLastName(LastNameT&& value) { SetLastName(std::forward<LastNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address of the user. The email address serves as a unique
     * identifier for each user and cannot be changed after it's created.</p>
     */
    inline const Aws::String& GetEmailAddress() const { return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    template<typename EmailAddressT = Aws::String>
    void SetEmailAddress(EmailAddressT&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::forward<EmailAddressT>(value); }
    template<typename EmailAddressT = Aws::String>
    UserByPermissionGroup& WithEmailAddress(EmailAddressT&& value) { SetEmailAddress(std::forward<EmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the type of user.</p> <ul> <li> <p> <code>SUPER_USER</code> – A
     * user with permission to all the functionality and data in FinSpace.</p> </li>
     * <li> <p> <code>APP_USER</code> – A user with specific permissions in FinSpace.
     * The users are assigned permissions by adding them to a permission group.</p>
     * </li> </ul>
     */
    inline UserType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(UserType value) { m_typeHasBeenSet = true; m_type = value; }
    inline UserByPermissionGroup& WithType(UserType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the user can access FinSpace API operations.</p> <ul> <li>
     * <p> <code>ENABLED</code> – The user has permissions to use the API
     * operations.</p> </li> <li> <p> <code>DISABLED</code> – The user does not have
     * permissions to use any API operations.</p> </li> </ul>
     */
    inline ApiAccess GetApiAccess() const { return m_apiAccess; }
    inline bool ApiAccessHasBeenSet() const { return m_apiAccessHasBeenSet; }
    inline void SetApiAccess(ApiAccess value) { m_apiAccessHasBeenSet = true; m_apiAccess = value; }
    inline UserByPermissionGroup& WithApiAccess(ApiAccess value) { SetApiAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM ARN identifier that is attached to FinSpace API calls.</p>
     */
    inline const Aws::String& GetApiAccessPrincipalArn() const { return m_apiAccessPrincipalArn; }
    inline bool ApiAccessPrincipalArnHasBeenSet() const { return m_apiAccessPrincipalArnHasBeenSet; }
    template<typename ApiAccessPrincipalArnT = Aws::String>
    void SetApiAccessPrincipalArn(ApiAccessPrincipalArnT&& value) { m_apiAccessPrincipalArnHasBeenSet = true; m_apiAccessPrincipalArn = std::forward<ApiAccessPrincipalArnT>(value); }
    template<typename ApiAccessPrincipalArnT = Aws::String>
    UserByPermissionGroup& WithApiAccessPrincipalArn(ApiAccessPrincipalArnT&& value) { SetApiAccessPrincipalArn(std::forward<ApiAccessPrincipalArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of the user within a permission group.</p> <ul> <li> <p>
     * <code>ADDITION_IN_PROGRESS</code> – The user is currently being added to the
     * permission group.</p> </li> <li> <p> <code>ADDITION_SUCCESS</code> – The user is
     * successfully added to the permission group.</p> </li> <li> <p>
     * <code>REMOVAL_IN_PROGRESS</code> – The user is currently being removed from the
     * permission group.</p> </li> </ul>
     */
    inline PermissionGroupMembershipStatus GetMembershipStatus() const { return m_membershipStatus; }
    inline bool MembershipStatusHasBeenSet() const { return m_membershipStatusHasBeenSet; }
    inline void SetMembershipStatus(PermissionGroupMembershipStatus value) { m_membershipStatusHasBeenSet = true; m_membershipStatus = value; }
    inline UserByPermissionGroup& WithMembershipStatus(PermissionGroupMembershipStatus value) { SetMembershipStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    UserStatus m_status{UserStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet = false;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet = false;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    UserType m_type{UserType::NOT_SET};
    bool m_typeHasBeenSet = false;

    ApiAccess m_apiAccess{ApiAccess::NOT_SET};
    bool m_apiAccessHasBeenSet = false;

    Aws::String m_apiAccessPrincipalArn;
    bool m_apiAccessPrincipalArnHasBeenSet = false;

    PermissionGroupMembershipStatus m_membershipStatus{PermissionGroupMembershipStatus::NOT_SET};
    bool m_membershipStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
