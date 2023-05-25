/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/finspace-data/FinSpaceDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace-data/model/UserType.h>
#include <aws/finspace-data/model/ApiAccess.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{

  /**
   */
  class UpdateUserRequest : public FinSpaceDataRequest
  {
  public:
    AWS_FINSPACEDATA_API UpdateUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUser"; }

    AWS_FINSPACEDATA_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier for the user account to update.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The unique identifier for the user account to update.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The unique identifier for the user account to update.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The unique identifier for the user account to update.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The unique identifier for the user account to update.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The unique identifier for the user account to update.</p>
     */
    inline UpdateUserRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The unique identifier for the user account to update.</p>
     */
    inline UpdateUserRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the user account to update.</p>
     */
    inline UpdateUserRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The option to indicate the type of user.</p> <ul> <li> <p>
     * <code>SUPER_USER</code>– A user with permission to all the functionality and
     * data in FinSpace.</p> </li> <li> <p> <code>APP_USER</code> – A user with
     * specific permissions in FinSpace. The users are assigned permissions by adding
     * them to a permission group.</p> </li> </ul>
     */
    inline const UserType& GetType() const{ return m_type; }

    /**
     * <p>The option to indicate the type of user.</p> <ul> <li> <p>
     * <code>SUPER_USER</code>– A user with permission to all the functionality and
     * data in FinSpace.</p> </li> <li> <p> <code>APP_USER</code> – A user with
     * specific permissions in FinSpace. The users are assigned permissions by adding
     * them to a permission group.</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The option to indicate the type of user.</p> <ul> <li> <p>
     * <code>SUPER_USER</code>– A user with permission to all the functionality and
     * data in FinSpace.</p> </li> <li> <p> <code>APP_USER</code> – A user with
     * specific permissions in FinSpace. The users are assigned permissions by adding
     * them to a permission group.</p> </li> </ul>
     */
    inline void SetType(const UserType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The option to indicate the type of user.</p> <ul> <li> <p>
     * <code>SUPER_USER</code>– A user with permission to all the functionality and
     * data in FinSpace.</p> </li> <li> <p> <code>APP_USER</code> – A user with
     * specific permissions in FinSpace. The users are assigned permissions by adding
     * them to a permission group.</p> </li> </ul>
     */
    inline void SetType(UserType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The option to indicate the type of user.</p> <ul> <li> <p>
     * <code>SUPER_USER</code>– A user with permission to all the functionality and
     * data in FinSpace.</p> </li> <li> <p> <code>APP_USER</code> – A user with
     * specific permissions in FinSpace. The users are assigned permissions by adding
     * them to a permission group.</p> </li> </ul>
     */
    inline UpdateUserRequest& WithType(const UserType& value) { SetType(value); return *this;}

    /**
     * <p>The option to indicate the type of user.</p> <ul> <li> <p>
     * <code>SUPER_USER</code>– A user with permission to all the functionality and
     * data in FinSpace.</p> </li> <li> <p> <code>APP_USER</code> – A user with
     * specific permissions in FinSpace. The users are assigned permissions by adding
     * them to a permission group.</p> </li> </ul>
     */
    inline UpdateUserRequest& WithType(UserType&& value) { SetType(std::move(value)); return *this;}


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
    inline UpdateUserRequest& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}

    /**
     * <p>The first name of the user.</p>
     */
    inline UpdateUserRequest& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}

    /**
     * <p>The first name of the user.</p>
     */
    inline UpdateUserRequest& WithFirstName(const char* value) { SetFirstName(value); return *this;}


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
    inline UpdateUserRequest& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}

    /**
     * <p>The last name of the user.</p>
     */
    inline UpdateUserRequest& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}

    /**
     * <p>The last name of the user.</p>
     */
    inline UpdateUserRequest& WithLastName(const char* value) { SetLastName(value); return *this;}


    /**
     * <p>The option to indicate whether the user can use the
     * <code>GetProgrammaticAccessCredentials</code> API to obtain credentials that can
     * then be used to access other FinSpace Data API operations.</p> <ul> <li> <p>
     * <code>ENABLED</code> – The user has permissions to use the APIs.</p> </li> <li>
     * <p> <code>DISABLED</code> – The user does not have permissions to use any
     * APIs.</p> </li> </ul>
     */
    inline const ApiAccess& GetApiAccess() const{ return m_apiAccess; }

    /**
     * <p>The option to indicate whether the user can use the
     * <code>GetProgrammaticAccessCredentials</code> API to obtain credentials that can
     * then be used to access other FinSpace Data API operations.</p> <ul> <li> <p>
     * <code>ENABLED</code> – The user has permissions to use the APIs.</p> </li> <li>
     * <p> <code>DISABLED</code> – The user does not have permissions to use any
     * APIs.</p> </li> </ul>
     */
    inline bool ApiAccessHasBeenSet() const { return m_apiAccessHasBeenSet; }

    /**
     * <p>The option to indicate whether the user can use the
     * <code>GetProgrammaticAccessCredentials</code> API to obtain credentials that can
     * then be used to access other FinSpace Data API operations.</p> <ul> <li> <p>
     * <code>ENABLED</code> – The user has permissions to use the APIs.</p> </li> <li>
     * <p> <code>DISABLED</code> – The user does not have permissions to use any
     * APIs.</p> </li> </ul>
     */
    inline void SetApiAccess(const ApiAccess& value) { m_apiAccessHasBeenSet = true; m_apiAccess = value; }

    /**
     * <p>The option to indicate whether the user can use the
     * <code>GetProgrammaticAccessCredentials</code> API to obtain credentials that can
     * then be used to access other FinSpace Data API operations.</p> <ul> <li> <p>
     * <code>ENABLED</code> – The user has permissions to use the APIs.</p> </li> <li>
     * <p> <code>DISABLED</code> – The user does not have permissions to use any
     * APIs.</p> </li> </ul>
     */
    inline void SetApiAccess(ApiAccess&& value) { m_apiAccessHasBeenSet = true; m_apiAccess = std::move(value); }

    /**
     * <p>The option to indicate whether the user can use the
     * <code>GetProgrammaticAccessCredentials</code> API to obtain credentials that can
     * then be used to access other FinSpace Data API operations.</p> <ul> <li> <p>
     * <code>ENABLED</code> – The user has permissions to use the APIs.</p> </li> <li>
     * <p> <code>DISABLED</code> – The user does not have permissions to use any
     * APIs.</p> </li> </ul>
     */
    inline UpdateUserRequest& WithApiAccess(const ApiAccess& value) { SetApiAccess(value); return *this;}

    /**
     * <p>The option to indicate whether the user can use the
     * <code>GetProgrammaticAccessCredentials</code> API to obtain credentials that can
     * then be used to access other FinSpace Data API operations.</p> <ul> <li> <p>
     * <code>ENABLED</code> – The user has permissions to use the APIs.</p> </li> <li>
     * <p> <code>DISABLED</code> – The user does not have permissions to use any
     * APIs.</p> </li> </ul>
     */
    inline UpdateUserRequest& WithApiAccess(ApiAccess&& value) { SetApiAccess(std::move(value)); return *this;}


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
    inline bool ApiAccessPrincipalArnHasBeenSet() const { return m_apiAccessPrincipalArnHasBeenSet; }

    /**
     * <p>The ARN identifier of an AWS user or role that is allowed to call the
     * <code>GetProgrammaticAccessCredentials</code> API to obtain a credentials token
     * for a specific FinSpace user. This must be an IAM role within your FinSpace
     * account.</p>
     */
    inline void SetApiAccessPrincipalArn(const Aws::String& value) { m_apiAccessPrincipalArnHasBeenSet = true; m_apiAccessPrincipalArn = value; }

    /**
     * <p>The ARN identifier of an AWS user or role that is allowed to call the
     * <code>GetProgrammaticAccessCredentials</code> API to obtain a credentials token
     * for a specific FinSpace user. This must be an IAM role within your FinSpace
     * account.</p>
     */
    inline void SetApiAccessPrincipalArn(Aws::String&& value) { m_apiAccessPrincipalArnHasBeenSet = true; m_apiAccessPrincipalArn = std::move(value); }

    /**
     * <p>The ARN identifier of an AWS user or role that is allowed to call the
     * <code>GetProgrammaticAccessCredentials</code> API to obtain a credentials token
     * for a specific FinSpace user. This must be an IAM role within your FinSpace
     * account.</p>
     */
    inline void SetApiAccessPrincipalArn(const char* value) { m_apiAccessPrincipalArnHasBeenSet = true; m_apiAccessPrincipalArn.assign(value); }

    /**
     * <p>The ARN identifier of an AWS user or role that is allowed to call the
     * <code>GetProgrammaticAccessCredentials</code> API to obtain a credentials token
     * for a specific FinSpace user. This must be an IAM role within your FinSpace
     * account.</p>
     */
    inline UpdateUserRequest& WithApiAccessPrincipalArn(const Aws::String& value) { SetApiAccessPrincipalArn(value); return *this;}

    /**
     * <p>The ARN identifier of an AWS user or role that is allowed to call the
     * <code>GetProgrammaticAccessCredentials</code> API to obtain a credentials token
     * for a specific FinSpace user. This must be an IAM role within your FinSpace
     * account.</p>
     */
    inline UpdateUserRequest& WithApiAccessPrincipalArn(Aws::String&& value) { SetApiAccessPrincipalArn(std::move(value)); return *this;}

    /**
     * <p>The ARN identifier of an AWS user or role that is allowed to call the
     * <code>GetProgrammaticAccessCredentials</code> API to obtain a credentials token
     * for a specific FinSpace user. This must be an IAM role within your FinSpace
     * account.</p>
     */
    inline UpdateUserRequest& WithApiAccessPrincipalArn(const char* value) { SetApiAccessPrincipalArn(value); return *this;}


    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline UpdateUserRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline UpdateUserRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline UpdateUserRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    UserType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet = false;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet = false;

    ApiAccess m_apiAccess;
    bool m_apiAccessHasBeenSet = false;

    Aws::String m_apiAccessPrincipalArn;
    bool m_apiAccessPrincipalArnHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
