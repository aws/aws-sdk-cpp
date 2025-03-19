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
    AWS_COGNITOIDENTITYPROVIDER_API DeleteUserAttributesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteUserAttributes"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An array of strings representing the user attribute names you want to
     * delete.</p> <p>For custom attributes, you must prepend the <code>custom:</code>
     * prefix to the attribute name, for example <code>custom:department</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserAttributeNames() const { return m_userAttributeNames; }
    inline bool UserAttributeNamesHasBeenSet() const { return m_userAttributeNamesHasBeenSet; }
    template<typename UserAttributeNamesT = Aws::Vector<Aws::String>>
    void SetUserAttributeNames(UserAttributeNamesT&& value) { m_userAttributeNamesHasBeenSet = true; m_userAttributeNames = std::forward<UserAttributeNamesT>(value); }
    template<typename UserAttributeNamesT = Aws::Vector<Aws::String>>
    DeleteUserAttributesRequest& WithUserAttributeNames(UserAttributeNamesT&& value) { SetUserAttributeNames(std::forward<UserAttributeNamesT>(value)); return *this;}
    template<typename UserAttributeNamesT = Aws::String>
    DeleteUserAttributesRequest& AddUserAttributeNames(UserAttributeNamesT&& value) { m_userAttributeNamesHasBeenSet = true; m_userAttributeNames.emplace_back(std::forward<UserAttributeNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A valid access token that Amazon Cognito issued to the currently signed-in
     * user. Must include a scope claim for
     * <code>aws.cognito.signin.user.admin</code>.</p>
     */
    inline const Aws::String& GetAccessToken() const { return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    template<typename AccessTokenT = Aws::String>
    void SetAccessToken(AccessTokenT&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::forward<AccessTokenT>(value); }
    template<typename AccessTokenT = Aws::String>
    DeleteUserAttributesRequest& WithAccessToken(AccessTokenT&& value) { SetAccessToken(std::forward<AccessTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_userAttributeNames;
    bool m_userAttributeNamesHasBeenSet = false;

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
