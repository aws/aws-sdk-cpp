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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Represents the request to delete user attributes.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API DeleteUserAttributesRequest : public CognitoIdentityProviderRequest
  {
  public:
    DeleteUserAttributesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>An array of strings representing the user attribute names you wish to
     * delete.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserAttributeNames() const{ return m_userAttributeNames; }

    /**
     * <p>An array of strings representing the user attribute names you wish to
     * delete.</p>
     */
    inline void SetUserAttributeNames(const Aws::Vector<Aws::String>& value) { m_userAttributeNamesHasBeenSet = true; m_userAttributeNames = value; }

    /**
     * <p>An array of strings representing the user attribute names you wish to
     * delete.</p>
     */
    inline void SetUserAttributeNames(Aws::Vector<Aws::String>&& value) { m_userAttributeNamesHasBeenSet = true; m_userAttributeNames = value; }

    /**
     * <p>An array of strings representing the user attribute names you wish to
     * delete.</p>
     */
    inline DeleteUserAttributesRequest& WithUserAttributeNames(const Aws::Vector<Aws::String>& value) { SetUserAttributeNames(value); return *this;}

    /**
     * <p>An array of strings representing the user attribute names you wish to
     * delete.</p>
     */
    inline DeleteUserAttributesRequest& WithUserAttributeNames(Aws::Vector<Aws::String>&& value) { SetUserAttributeNames(value); return *this;}

    /**
     * <p>An array of strings representing the user attribute names you wish to
     * delete.</p>
     */
    inline DeleteUserAttributesRequest& AddUserAttributeNames(const Aws::String& value) { m_userAttributeNamesHasBeenSet = true; m_userAttributeNames.push_back(value); return *this; }

    /**
     * <p>An array of strings representing the user attribute names you wish to
     * delete.</p>
     */
    inline DeleteUserAttributesRequest& AddUserAttributeNames(Aws::String&& value) { m_userAttributeNamesHasBeenSet = true; m_userAttributeNames.push_back(value); return *this; }

    /**
     * <p>An array of strings representing the user attribute names you wish to
     * delete.</p>
     */
    inline DeleteUserAttributesRequest& AddUserAttributeNames(const char* value) { m_userAttributeNamesHasBeenSet = true; m_userAttributeNames.push_back(value); return *this; }

    /**
     * <p>The access token used in the request to delete user attributes.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }

    /**
     * <p>The access token used in the request to delete user attributes.</p>
     */
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }

    /**
     * <p>The access token used in the request to delete user attributes.</p>
     */
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }

    /**
     * <p>The access token used in the request to delete user attributes.</p>
     */
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }

    /**
     * <p>The access token used in the request to delete user attributes.</p>
     */
    inline DeleteUserAttributesRequest& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}

    /**
     * <p>The access token used in the request to delete user attributes.</p>
     */
    inline DeleteUserAttributesRequest& WithAccessToken(Aws::String&& value) { SetAccessToken(value); return *this;}

    /**
     * <p>The access token used in the request to delete user attributes.</p>
     */
    inline DeleteUserAttributesRequest& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_userAttributeNames;
    bool m_userAttributeNamesHasBeenSet;
    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
