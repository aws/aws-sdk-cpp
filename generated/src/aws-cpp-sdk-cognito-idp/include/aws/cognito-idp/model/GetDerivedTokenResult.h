/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/IssuedTokenTypeIdentifierType.h>
#include <aws/cognito-idp/model/OAuthTokenTypeType.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace CognitoIdentityProvider {
namespace Model {
/**
 * <p>Represents the response to a token exchange request.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetDerivedTokenResponse">AWS
 * API Reference</a></p>
 */
class GetDerivedTokenResult {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API GetDerivedTokenResult() = default;
  AWS_COGNITOIDENTITYPROVIDER_API GetDerivedTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_COGNITOIDENTITYPROVIDER_API GetDerivedTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The token that Amazon Cognito issued in response to the token exchange
   * request.</p>
   */
  inline const Aws::String& GetIssuedToken() const { return m_issuedToken; }
  template <typename IssuedTokenT = Aws::String>
  void SetIssuedToken(IssuedTokenT&& value) {
    m_issuedTokenHasBeenSet = true;
    m_issuedToken = std::forward<IssuedTokenT>(value);
  }
  template <typename IssuedTokenT = Aws::String>
  GetDerivedTokenResult& WithIssuedToken(IssuedTokenT&& value) {
    SetIssuedToken(std::forward<IssuedTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the token in the <code>IssuedToken</code> parameter. Valid
   * values:</p> <ul> <li> <p> <code>ACCESS_TOKEN</code> – The issued token is an
   * access token.</p> </li> <li> <p> <code>ID_TOKEN</code> – The issued token is an
   * ID token.</p> </li> </ul>
   */
  inline IssuedTokenTypeIdentifierType GetIssuedTokenType() const { return m_issuedTokenType; }
  inline void SetIssuedTokenType(IssuedTokenTypeIdentifierType value) {
    m_issuedTokenTypeHasBeenSet = true;
    m_issuedTokenType = value;
  }
  inline GetDerivedTokenResult& WithIssuedTokenType(IssuedTokenTypeIdentifierType value) {
    SetIssuedTokenType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the issued token. For example, <code>Bearer</code>.</p>
   */
  inline OAuthTokenTypeType GetTokenType() const { return m_tokenType; }
  inline void SetTokenType(OAuthTokenTypeType value) {
    m_tokenTypeHasBeenSet = true;
    m_tokenType = value;
  }
  inline GetDerivedTokenResult& WithTokenType(OAuthTokenTypeType value) {
    SetTokenType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of seconds until the issued token expires.</p>
   */
  inline int GetExpiresIn() const { return m_expiresIn; }
  inline void SetExpiresIn(int value) {
    m_expiresInHasBeenSet = true;
    m_expiresIn = value;
  }
  inline GetDerivedTokenResult& WithExpiresIn(int value) {
    SetExpiresIn(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scopes that Amazon Cognito granted in the issued token.</p>
   */
  inline const Aws::Vector<Aws::String>& GetScopes() const { return m_scopes; }
  template <typename ScopesT = Aws::Vector<Aws::String>>
  void SetScopes(ScopesT&& value) {
    m_scopesHasBeenSet = true;
    m_scopes = std::forward<ScopesT>(value);
  }
  template <typename ScopesT = Aws::Vector<Aws::String>>
  GetDerivedTokenResult& WithScopes(ScopesT&& value) {
    SetScopes(std::forward<ScopesT>(value));
    return *this;
  }
  template <typename ScopesT = Aws::String>
  GetDerivedTokenResult& AddScopes(ScopesT&& value) {
    m_scopesHasBeenSet = true;
    m_scopes.emplace_back(std::forward<ScopesT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetDerivedTokenResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_issuedToken;

  IssuedTokenTypeIdentifierType m_issuedTokenType{IssuedTokenTypeIdentifierType::NOT_SET};

  OAuthTokenTypeType m_tokenType{OAuthTokenTypeType::NOT_SET};

  int m_expiresIn{0};

  Aws::Vector<Aws::String> m_scopes;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_issuedTokenHasBeenSet = false;
  bool m_issuedTokenTypeHasBeenSet = false;
  bool m_tokenTypeHasBeenSet = false;
  bool m_expiresInHasBeenSet = false;
  bool m_scopesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
