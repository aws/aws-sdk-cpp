/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Represents the request to delete user attributes as an
   * administrator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminDeleteUserAttributesRequest">AWS
   * API Reference</a></p>
   */
  class AdminDeleteUserAttributesRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AdminDeleteUserAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AdminDeleteUserAttributes"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The user pool ID for the user pool where you want to delete user
     * attributes.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The user pool ID for the user pool where you want to delete user
     * attributes.</p>
     */
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }

    /**
     * <p>The user pool ID for the user pool where you want to delete user
     * attributes.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID for the user pool where you want to delete user
     * attributes.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

    /**
     * <p>The user pool ID for the user pool where you want to delete user
     * attributes.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The user pool ID for the user pool where you want to delete user
     * attributes.</p>
     */
    inline AdminDeleteUserAttributesRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID for the user pool where you want to delete user
     * attributes.</p>
     */
    inline AdminDeleteUserAttributesRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The user pool ID for the user pool where you want to delete user
     * attributes.</p>
     */
    inline AdminDeleteUserAttributesRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


    /**
     * <p>The user name of the user from which you would like to delete attributes.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The user name of the user from which you would like to delete attributes.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The user name of the user from which you would like to delete attributes.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The user name of the user from which you would like to delete attributes.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The user name of the user from which you would like to delete attributes.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The user name of the user from which you would like to delete attributes.</p>
     */
    inline AdminDeleteUserAttributesRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The user name of the user from which you would like to delete attributes.</p>
     */
    inline AdminDeleteUserAttributesRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The user name of the user from which you would like to delete attributes.</p>
     */
    inline AdminDeleteUserAttributesRequest& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>An array of strings representing the user attribute names you want to
     * delete.</p> <p>For custom attributes, you must prepend the <code>custom:</code>
     * prefix to the attribute name.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserAttributeNames() const{ return m_userAttributeNames; }

    /**
     * <p>An array of strings representing the user attribute names you want to
     * delete.</p> <p>For custom attributes, you must prepend the <code>custom:</code>
     * prefix to the attribute name.</p>
     */
    inline bool UserAttributeNamesHasBeenSet() const { return m_userAttributeNamesHasBeenSet; }

    /**
     * <p>An array of strings representing the user attribute names you want to
     * delete.</p> <p>For custom attributes, you must prepend the <code>custom:</code>
     * prefix to the attribute name.</p>
     */
    inline void SetUserAttributeNames(const Aws::Vector<Aws::String>& value) { m_userAttributeNamesHasBeenSet = true; m_userAttributeNames = value; }

    /**
     * <p>An array of strings representing the user attribute names you want to
     * delete.</p> <p>For custom attributes, you must prepend the <code>custom:</code>
     * prefix to the attribute name.</p>
     */
    inline void SetUserAttributeNames(Aws::Vector<Aws::String>&& value) { m_userAttributeNamesHasBeenSet = true; m_userAttributeNames = std::move(value); }

    /**
     * <p>An array of strings representing the user attribute names you want to
     * delete.</p> <p>For custom attributes, you must prepend the <code>custom:</code>
     * prefix to the attribute name.</p>
     */
    inline AdminDeleteUserAttributesRequest& WithUserAttributeNames(const Aws::Vector<Aws::String>& value) { SetUserAttributeNames(value); return *this;}

    /**
     * <p>An array of strings representing the user attribute names you want to
     * delete.</p> <p>For custom attributes, you must prepend the <code>custom:</code>
     * prefix to the attribute name.</p>
     */
    inline AdminDeleteUserAttributesRequest& WithUserAttributeNames(Aws::Vector<Aws::String>&& value) { SetUserAttributeNames(std::move(value)); return *this;}

    /**
     * <p>An array of strings representing the user attribute names you want to
     * delete.</p> <p>For custom attributes, you must prepend the <code>custom:</code>
     * prefix to the attribute name.</p>
     */
    inline AdminDeleteUserAttributesRequest& AddUserAttributeNames(const Aws::String& value) { m_userAttributeNamesHasBeenSet = true; m_userAttributeNames.push_back(value); return *this; }

    /**
     * <p>An array of strings representing the user attribute names you want to
     * delete.</p> <p>For custom attributes, you must prepend the <code>custom:</code>
     * prefix to the attribute name.</p>
     */
    inline AdminDeleteUserAttributesRequest& AddUserAttributeNames(Aws::String&& value) { m_userAttributeNamesHasBeenSet = true; m_userAttributeNames.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings representing the user attribute names you want to
     * delete.</p> <p>For custom attributes, you must prepend the <code>custom:</code>
     * prefix to the attribute name.</p>
     */
    inline AdminDeleteUserAttributesRequest& AddUserAttributeNames(const char* value) { m_userAttributeNamesHasBeenSet = true; m_userAttributeNames.push_back(value); return *this; }

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::Vector<Aws::String> m_userAttributeNames;
    bool m_userAttributeNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
