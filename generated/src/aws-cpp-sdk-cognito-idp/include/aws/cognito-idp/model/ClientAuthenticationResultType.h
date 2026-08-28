/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CognitoIdentityProvider {
namespace Model {

/**
 * <p>The access token and its metadata from a machine-to-machine (M2M) client
 * credentials grant.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ClientAuthenticationResultType">AWS
 * API Reference</a></p>
 */
class ClientAuthenticationResultType {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API ClientAuthenticationResultType() = default;
  AWS_COGNITOIDENTITYPROVIDER_API ClientAuthenticationResultType(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API ClientAuthenticationResultType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The access token for the requested app client. Present this token to a
   * resource server to authorize a request, using the scopes granted in the
   * token.</p>
   */
  inline const Aws::String& GetAccessToken() const { return m_accessToken; }
  inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
  template <typename AccessTokenT = Aws::String>
  void SetAccessToken(AccessTokenT&& value) {
    m_accessTokenHasBeenSet = true;
    m_accessToken = std::forward<AccessTokenT>(value);
  }
  template <typename AccessTokenT = Aws::String>
  ClientAuthenticationResultType& WithAccessToken(AccessTokenT&& value) {
    SetAccessToken(std::forward<AccessTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of seconds until the access token expires.</p>
   */
  inline int GetExpiresIn() const { return m_expiresIn; }
  inline bool ExpiresInHasBeenSet() const { return m_expiresInHasBeenSet; }
  inline void SetExpiresIn(int value) {
    m_expiresInHasBeenSet = true;
    m_expiresIn = value;
  }
  inline ClientAuthenticationResultType& WithExpiresIn(int value) {
    SetExpiresIn(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the token. For example, <code>Bearer</code>.</p>
   */
  inline const Aws::String& GetTokenType() const { return m_tokenType; }
  inline bool TokenTypeHasBeenSet() const { return m_tokenTypeHasBeenSet; }
  template <typename TokenTypeT = Aws::String>
  void SetTokenType(TokenTypeT&& value) {
    m_tokenTypeHasBeenSet = true;
    m_tokenType = std::forward<TokenTypeT>(value);
  }
  template <typename TokenTypeT = Aws::String>
  ClientAuthenticationResultType& WithTokenType(TokenTypeT&& value) {
    SetTokenType(std::forward<TokenTypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accessToken;

  int m_expiresIn{0};

  Aws::String m_tokenType;
  bool m_accessTokenHasBeenSet = false;
  bool m_expiresInHasBeenSet = false;
  bool m_tokenTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
