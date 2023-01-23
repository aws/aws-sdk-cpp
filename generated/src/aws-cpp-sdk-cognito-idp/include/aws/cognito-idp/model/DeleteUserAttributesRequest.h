/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Represents the request to delete user attributes.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeleteUserAttributesRequest">AWS
   * API Reference</a></p>
   */
  class DeleteUserAttributesRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API DeleteUserAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteUserAttributes"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An array of strings representing the user attribute names you want to
     * delete.</p> <p>For custom attributes, you must prependattach the
     * <code>custom:</code> prefix to the front of the attribute name.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserAttributeNames() const{ return m_userAttributeNames; }

    /**
     * <p>An array of strings representing the user attribute names you want to
     * delete.</p> <p>For custom attributes, you must prependattach the
     * <code>custom:</code> prefix to the front of the attribute name.</p>
     */
    inline bool UserAttributeNamesHasBeenSet() const { return m_userAttributeNamesHasBeenSet; }

    /**
     * <p>An array of strings representing the user attribute names you want to
     * delete.</p> <p>For custom attributes, you must prependattach the
     * <code>custom:</code> prefix to the front of the attribute name.</p>
     */
    inline void SetUserAttributeNames(const Aws::Vector<Aws::String>& value) { m_userAttributeNamesHasBeenSet = true; m_userAttributeNames = value; }

    /**
     * <p>An array of strings representing the user attribute names you want to
     * delete.</p> <p>For custom attributes, you must prependattach the
     * <code>custom:</code> prefix to the front of the attribute name.</p>
     */
    inline void SetUserAttributeNames(Aws::Vector<Aws::String>&& value) { m_userAttributeNamesHasBeenSet = true; m_userAttributeNames = std::move(value); }

    /**
     * <p>An array of strings representing the user attribute names you want to
     * delete.</p> <p>For custom attributes, you must prependattach the
     * <code>custom:</code> prefix to the front of the attribute name.</p>
     */
    inline DeleteUserAttributesRequest& WithUserAttributeNames(const Aws::Vector<Aws::String>& value) { SetUserAttributeNames(value); return *this;}

    /**
     * <p>An array of strings representing the user attribute names you want to
     * delete.</p> <p>For custom attributes, you must prependattach the
     * <code>custom:</code> prefix to the front of the attribute name.</p>
     */
    inline DeleteUserAttributesRequest& WithUserAttributeNames(Aws::Vector<Aws::String>&& value) { SetUserAttributeNames(std::move(value)); return *this;}

    /**
     * <p>An array of strings representing the user attribute names you want to
     * delete.</p> <p>For custom attributes, you must prependattach the
     * <code>custom:</code> prefix to the front of the attribute name.</p>
     */
    inline DeleteUserAttributesRequest& AddUserAttributeNames(const Aws::String& value) { m_userAttributeNamesHasBeenSet = true; m_userAttributeNames.push_back(value); return *this; }

    /**
     * <p>An array of strings representing the user attribute names you want to
     * delete.</p> <p>For custom attributes, you must prependattach the
     * <code>custom:</code> prefix to the front of the attribute name.</p>
     */
    inline DeleteUserAttributesRequest& AddUserAttributeNames(Aws::String&& value) { m_userAttributeNamesHasBeenSet = true; m_userAttributeNames.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings representing the user attribute names you want to
     * delete.</p> <p>For custom attributes, you must prependattach the
     * <code>custom:</code> prefix to the front of the attribute name.</p>
     */
    inline DeleteUserAttributesRequest& AddUserAttributeNames(const char* value) { m_userAttributeNamesHasBeenSet = true; m_userAttributeNames.push_back(value); return *this; }


    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose attributes
     * you want to delete.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose attributes
     * you want to delete.</p>
     */
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose attributes
     * you want to delete.</p>
     */
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose attributes
     * you want to delete.</p>
     */
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose attributes
     * you want to delete.</p>
     */
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose attributes
     * you want to delete.</p>
     */
    inline DeleteUserAttributesRequest& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose attributes
     * you want to delete.</p>
     */
    inline DeleteUserAttributesRequest& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose attributes
     * you want to delete.</p>
     */
    inline DeleteUserAttributesRequest& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_userAttributeNames;
    bool m_userAttributeNamesHasBeenSet = false;

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
