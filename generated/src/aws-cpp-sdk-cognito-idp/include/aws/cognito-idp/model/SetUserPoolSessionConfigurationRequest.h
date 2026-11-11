/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/UserPoolTokenSessionConfigType.h>
#include <aws/cognito-idp/model/UserSessionTrackingType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

/**
 */
class SetUserPoolSessionConfigurationRequest : public CognitoIdentityProviderRequest {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API SetUserPoolSessionConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SetUserPoolSessionConfiguration"; }

  AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

  AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the user pool where you want to configure session tracking.</p>
   */
  inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
  inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
  template <typename UserPoolIdT = Aws::String>
  void SetUserPoolId(UserPoolIdT&& value) {
    m_userPoolIdHasBeenSet = true;
    m_userPoolId = std::forward<UserPoolIdT>(value);
  }
  template <typename UserPoolIdT = Aws::String>
  SetUserPoolSessionConfigurationRequest& WithUserPoolId(UserPoolIdT&& value) {
    SetUserPoolId(std::forward<UserPoolIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether Amazon Cognito tracks sessions for users in the user pool.
   * Set this value to <code>ENABLED</code> to turn on server-side session tracking,
   * or <code>DISABLED</code> to turn it off. When you set this value to
   * <code>DISABLED</code> while the user pool remains active, existing client-level
   * session configurations are retained but dormant, and are reactivated when you
   * enable tracking again.</p>
   */
  inline UserSessionTrackingType GetUserSessionTracking() const { return m_userSessionTracking; }
  inline bool UserSessionTrackingHasBeenSet() const { return m_userSessionTrackingHasBeenSet; }
  inline void SetUserSessionTracking(UserSessionTrackingType value) {
    m_userSessionTrackingHasBeenSet = true;
    m_userSessionTracking = value;
  }
  inline SetUserPoolSessionConfigurationRequest& WithUserSessionTracking(UserSessionTrackingType value) {
    SetUserSessionTracking(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pool-wide token session settings to apply.</p>
   */
  inline const UserPoolTokenSessionConfigType& GetTokenSession() const { return m_tokenSession; }
  inline bool TokenSessionHasBeenSet() const { return m_tokenSessionHasBeenSet; }
  template <typename TokenSessionT = UserPoolTokenSessionConfigType>
  void SetTokenSession(TokenSessionT&& value) {
    m_tokenSessionHasBeenSet = true;
    m_tokenSession = std::forward<TokenSessionT>(value);
  }
  template <typename TokenSessionT = UserPoolTokenSessionConfigType>
  SetUserPoolSessionConfigurationRequest& WithTokenSession(TokenSessionT&& value) {
    SetTokenSession(std::forward<TokenSessionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_userPoolId;

  UserSessionTrackingType m_userSessionTracking{UserSessionTrackingType::NOT_SET};

  UserPoolTokenSessionConfigType m_tokenSession;
  bool m_userPoolIdHasBeenSet = false;
  bool m_userSessionTrackingHasBeenSet = false;
  bool m_tokenSessionHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
