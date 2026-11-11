/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/ClientSSOSessionConfigType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

/**
 */
class SetUserPoolClientSessionConfigurationRequest : public CognitoIdentityProviderRequest {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API SetUserPoolClientSessionConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SetUserPoolClientSessionConfiguration"; }

  AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

  AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the user pool that contains the app client.</p>
   */
  inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
  inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
  template <typename UserPoolIdT = Aws::String>
  void SetUserPoolId(UserPoolIdT&& value) {
    m_userPoolIdHasBeenSet = true;
    m_userPoolId = std::forward<UserPoolIdT>(value);
  }
  template <typename UserPoolIdT = Aws::String>
  SetUserPoolClientSessionConfigurationRequest& WithUserPoolId(UserPoolIdT&& value) {
    SetUserPoolId(std::forward<UserPoolIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the app client that you want to configure.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  SetUserPoolClientSessionConfigurationRequest& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The SSO session settings for the app client.</p>
   */
  inline const ClientSSOSessionConfigType& GetSSOSession() const { return m_sSOSession; }
  inline bool SSOSessionHasBeenSet() const { return m_sSOSessionHasBeenSet; }
  template <typename SSOSessionT = ClientSSOSessionConfigType>
  void SetSSOSession(SSOSessionT&& value) {
    m_sSOSessionHasBeenSet = true;
    m_sSOSession = std::forward<SSOSessionT>(value);
  }
  template <typename SSOSessionT = ClientSSOSessionConfigType>
  SetUserPoolClientSessionConfigurationRequest& WithSSOSession(SSOSessionT&& value) {
    SetSSOSession(std::forward<SSOSessionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_userPoolId;

  Aws::String m_clientId;

  ClientSSOSessionConfigType m_sSOSession;
  bool m_userPoolIdHasBeenSet = false;
  bool m_clientIdHasBeenSet = false;
  bool m_sSOSessionHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
