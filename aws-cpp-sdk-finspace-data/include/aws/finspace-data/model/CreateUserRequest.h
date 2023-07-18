﻿/**
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
  class AWS_FINSPACEDATA_API CreateUserRequest : public FinSpaceDataRequest
  {
  public:
    CreateUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUser"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The email address of the user that you want to register. The email address
     * serves as a uniquer identifier for each user and cannot be changed after it's
     * created.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }

    /**
     * <p>The email address of the user that you want to register. The email address
     * serves as a uniquer identifier for each user and cannot be changed after it's
     * created.</p>
     */
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }

    /**
     * <p>The email address of the user that you want to register. The email address
     * serves as a uniquer identifier for each user and cannot be changed after it's
     * created.</p>
     */
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }

    /**
     * <p>The email address of the user that you want to register. The email address
     * serves as a uniquer identifier for each user and cannot be changed after it's
     * created.</p>
     */
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }

    /**
     * <p>The email address of the user that you want to register. The email address
     * serves as a uniquer identifier for each user and cannot be changed after it's
     * created.</p>
     */
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }

    /**
     * <p>The email address of the user that you want to register. The email address
     * serves as a uniquer identifier for each user and cannot be changed after it's
     * created.</p>
     */
    inline CreateUserRequest& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}

    /**
     * <p>The email address of the user that you want to register. The email address
     * serves as a uniquer identifier for each user and cannot be changed after it's
     * created.</p>
     */
    inline CreateUserRequest& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The email address of the user that you want to register. The email address
     * serves as a uniquer identifier for each user and cannot be changed after it's
     * created.</p>
     */
    inline CreateUserRequest& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}


    /**
     * <p>The option to indicate the type of user. Use one of the following options to
     * specify this parameter:</p> <ul> <li> <p> <code>SUPER_USER</code> – A user with
     * permission to all the functionality and data in FinSpace.</p> </li> <li> <p>
     * <code>APP_USER</code> – A user with specific permissions in FinSpace. The users
     * are assigned permissions by adding them to a permission group.</p> </li> </ul>
     */
    inline const UserType& GetType() const{ return m_type; }

    /**
     * <p>The option to indicate the type of user. Use one of the following options to
     * specify this parameter:</p> <ul> <li> <p> <code>SUPER_USER</code> – A user with
     * permission to all the functionality and data in FinSpace.</p> </li> <li> <p>
     * <code>APP_USER</code> – A user with specific permissions in FinSpace. The users
     * are assigned permissions by adding them to a permission group.</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The option to indicate the type of user. Use one of the following options to
     * specify this parameter:</p> <ul> <li> <p> <code>SUPER_USER</code> – A user with
     * permission to all the functionality and data in FinSpace.</p> </li> <li> <p>
     * <code>APP_USER</code> – A user with specific permissions in FinSpace. The users
     * are assigned permissions by adding them to a permission group.</p> </li> </ul>
     */
    inline void SetType(const UserType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The option to indicate the type of user. Use one of the following options to
     * specify this parameter:</p> <ul> <li> <p> <code>SUPER_USER</code> – A user with
     * permission to all the functionality and data in FinSpace.</p> </li> <li> <p>
     * <code>APP_USER</code> – A user with specific permissions in FinSpace. The users
     * are assigned permissions by adding them to a permission group.</p> </li> </ul>
     */
    inline void SetType(UserType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The option to indicate the type of user. Use one of the following options to
     * specify this parameter:</p> <ul> <li> <p> <code>SUPER_USER</code> – A user with
     * permission to all the functionality and data in FinSpace.</p> </li> <li> <p>
     * <code>APP_USER</code> – A user with specific permissions in FinSpace. The users
     * are assigned permissions by adding them to a permission group.</p> </li> </ul>
     */
    inline CreateUserRequest& WithType(const UserType& value) { SetType(value); return *this;}

    /**
     * <p>The option to indicate the type of user. Use one of the following options to
     * specify this parameter:</p> <ul> <li> <p> <code>SUPER_USER</code> – A user with
     * permission to all the functionality and data in FinSpace.</p> </li> <li> <p>
     * <code>APP_USER</code> – A user with specific permissions in FinSpace. The users
     * are assigned permissions by adding them to a permission group.</p> </li> </ul>
     */
    inline CreateUserRequest& WithType(UserType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The first name of the user that you want to register.</p>
     */
    inline const Aws::String& GetFirstName() const{ return m_firstName; }

    /**
     * <p>The first name of the user that you want to register.</p>
     */
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }

    /**
     * <p>The first name of the user that you want to register.</p>
     */
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }

    /**
     * <p>The first name of the user that you want to register.</p>
     */
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = std::move(value); }

    /**
     * <p>The first name of the user that you want to register.</p>
     */
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }

    /**
     * <p>The first name of the user that you want to register.</p>
     */
    inline CreateUserRequest& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}

    /**
     * <p>The first name of the user that you want to register.</p>
     */
    inline CreateUserRequest& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}

    /**
     * <p>The first name of the user that you want to register.</p>
     */
    inline CreateUserRequest& WithFirstName(const char* value) { SetFirstName(value); return *this;}


    /**
     * <p>The last name of the user that you want to register.</p>
     */
    inline const Aws::String& GetLastName() const{ return m_lastName; }

    /**
     * <p>The last name of the user that you want to register.</p>
     */
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }

    /**
     * <p>The last name of the user that you want to register.</p>
     */
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }

    /**
     * <p>The last name of the user that you want to register.</p>
     */
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = std::move(value); }

    /**
     * <p>The last name of the user that you want to register.</p>
     */
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }

    /**
     * <p>The last name of the user that you want to register.</p>
     */
    inline CreateUserRequest& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}

    /**
     * <p>The last name of the user that you want to register.</p>
     */
    inline CreateUserRequest& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}

    /**
     * <p>The last name of the user that you want to register.</p>
     */
    inline CreateUserRequest& WithLastName(const char* value) { SetLastName(value); return *this;}


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
    inline CreateUserRequest& WithApiAccess(const ApiAccess& value) { SetApiAccess(value); return *this;}

    /**
     * <p>The option to indicate whether the user can use the
     * <code>GetProgrammaticAccessCredentials</code> API to obtain credentials that can
     * then be used to access other FinSpace Data API operations.</p> <ul> <li> <p>
     * <code>ENABLED</code> – The user has permissions to use the APIs.</p> </li> <li>
     * <p> <code>DISABLED</code> – The user does not have permissions to use any
     * APIs.</p> </li> </ul>
     */
    inline CreateUserRequest& WithApiAccess(ApiAccess&& value) { SetApiAccess(std::move(value)); return *this;}


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
    inline CreateUserRequest& WithApiAccessPrincipalArn(const Aws::String& value) { SetApiAccessPrincipalArn(value); return *this;}

    /**
     * <p>The ARN identifier of an AWS user or role that is allowed to call the
     * <code>GetProgrammaticAccessCredentials</code> API to obtain a credentials token
     * for a specific FinSpace user. This must be an IAM role within your FinSpace
     * account.</p>
     */
    inline CreateUserRequest& WithApiAccessPrincipalArn(Aws::String&& value) { SetApiAccessPrincipalArn(std::move(value)); return *this;}

    /**
     * <p>The ARN identifier of an AWS user or role that is allowed to call the
     * <code>GetProgrammaticAccessCredentials</code> API to obtain a credentials token
     * for a specific FinSpace user. This must be an IAM role within your FinSpace
     * account.</p>
     */
    inline CreateUserRequest& WithApiAccessPrincipalArn(const char* value) { SetApiAccessPrincipalArn(value); return *this;}


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
    inline CreateUserRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline CreateUserRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline CreateUserRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet;

    UserType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet;

    ApiAccess m_apiAccess;
    bool m_apiAccessHasBeenSet;

    Aws::String m_apiAccessPrincipalArn;
    bool m_apiAccessPrincipalArnHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
