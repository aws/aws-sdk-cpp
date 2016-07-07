/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/UserStatusType.h>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Represents the request to list users.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API ListUsersRequest : public CognitoIdentityProviderRequest
  {
  public:
    ListUsersRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The user pool ID for which you want to list users.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The user pool ID for which you want to list users.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID for which you want to list users.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID for which you want to list users.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The user pool ID for which you want to list users.</p>
     */
    inline ListUsersRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID for which you want to list users.</p>
     */
    inline ListUsersRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID for which you want to list users.</p>
     */
    inline ListUsersRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The attributes to get from the request to list users.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributesToGet() const{ return m_attributesToGet; }

    /**
     * <p>The attributes to get from the request to list users.</p>
     */
    inline void SetAttributesToGet(const Aws::Vector<Aws::String>& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet = value; }

    /**
     * <p>The attributes to get from the request to list users.</p>
     */
    inline void SetAttributesToGet(Aws::Vector<Aws::String>&& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet = value; }

    /**
     * <p>The attributes to get from the request to list users.</p>
     */
    inline ListUsersRequest& WithAttributesToGet(const Aws::Vector<Aws::String>& value) { SetAttributesToGet(value); return *this;}

    /**
     * <p>The attributes to get from the request to list users.</p>
     */
    inline ListUsersRequest& WithAttributesToGet(Aws::Vector<Aws::String>&& value) { SetAttributesToGet(value); return *this;}

    /**
     * <p>The attributes to get from the request to list users.</p>
     */
    inline ListUsersRequest& AddAttributesToGet(const Aws::String& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(value); return *this; }

    /**
     * <p>The attributes to get from the request to list users.</p>
     */
    inline ListUsersRequest& AddAttributesToGet(Aws::String&& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(value); return *this; }

    /**
     * <p>The attributes to get from the request to list users.</p>
     */
    inline ListUsersRequest& AddAttributesToGet(const char* value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(value); return *this; }

    /**
     * <p>The limit of the request to list users.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The limit of the request to list users.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The limit of the request to list users.</p>
     */
    inline ListUsersRequest& WithLimit(int value) { SetLimit(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetPaginationToken() const{ return m_paginationToken; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetPaginationToken(const Aws::String& value) { m_paginationTokenHasBeenSet = true; m_paginationToken = value; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetPaginationToken(Aws::String&& value) { m_paginationTokenHasBeenSet = true; m_paginationToken = value; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetPaginationToken(const char* value) { m_paginationTokenHasBeenSet = true; m_paginationToken.assign(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListUsersRequest& WithPaginationToken(const Aws::String& value) { SetPaginationToken(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListUsersRequest& WithPaginationToken(Aws::String&& value) { SetPaginationToken(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListUsersRequest& WithPaginationToken(const char* value) { SetPaginationToken(value); return *this;}

    /**
     * <p>The user status. Can be one of the following:</p> <ul> <li>UNCONFIRMED - User
     * has been created but not confirmed.</li> <li>CONFIRMED - User has been
     * confirmed.</li> <li>ARCHIVED - User is no longer active.</li> <li>COMPROMISED -
     * User is disabled due to a potential security threat.</li> <li>UNKNOWN - User
     * status is not known.</li> </ul>
     */
    inline const UserStatusType& GetUserStatus() const{ return m_userStatus; }

    /**
     * <p>The user status. Can be one of the following:</p> <ul> <li>UNCONFIRMED - User
     * has been created but not confirmed.</li> <li>CONFIRMED - User has been
     * confirmed.</li> <li>ARCHIVED - User is no longer active.</li> <li>COMPROMISED -
     * User is disabled due to a potential security threat.</li> <li>UNKNOWN - User
     * status is not known.</li> </ul>
     */
    inline void SetUserStatus(const UserStatusType& value) { m_userStatusHasBeenSet = true; m_userStatus = value; }

    /**
     * <p>The user status. Can be one of the following:</p> <ul> <li>UNCONFIRMED - User
     * has been created but not confirmed.</li> <li>CONFIRMED - User has been
     * confirmed.</li> <li>ARCHIVED - User is no longer active.</li> <li>COMPROMISED -
     * User is disabled due to a potential security threat.</li> <li>UNKNOWN - User
     * status is not known.</li> </ul>
     */
    inline void SetUserStatus(UserStatusType&& value) { m_userStatusHasBeenSet = true; m_userStatus = value; }

    /**
     * <p>The user status. Can be one of the following:</p> <ul> <li>UNCONFIRMED - User
     * has been created but not confirmed.</li> <li>CONFIRMED - User has been
     * confirmed.</li> <li>ARCHIVED - User is no longer active.</li> <li>COMPROMISED -
     * User is disabled due to a potential security threat.</li> <li>UNKNOWN - User
     * status is not known.</li> </ul>
     */
    inline ListUsersRequest& WithUserStatus(const UserStatusType& value) { SetUserStatus(value); return *this;}

    /**
     * <p>The user status. Can be one of the following:</p> <ul> <li>UNCONFIRMED - User
     * has been created but not confirmed.</li> <li>CONFIRMED - User has been
     * confirmed.</li> <li>ARCHIVED - User is no longer active.</li> <li>COMPROMISED -
     * User is disabled due to a potential security threat.</li> <li>UNKNOWN - User
     * status is not known.</li> </ul>
     */
    inline ListUsersRequest& WithUserStatus(UserStatusType&& value) { SetUserStatus(value); return *this;}

  private:
    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet;
    Aws::Vector<Aws::String> m_attributesToGet;
    bool m_attributesToGetHasBeenSet;
    int m_limit;
    bool m_limitHasBeenSet;
    Aws::String m_paginationToken;
    bool m_paginationTokenHasBeenSet;
    UserStatusType m_userStatus;
    bool m_userStatusHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
