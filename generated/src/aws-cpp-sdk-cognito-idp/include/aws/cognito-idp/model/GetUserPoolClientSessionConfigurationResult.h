/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/ClientSSOSessionConfigType.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
class GetUserPoolClientSessionConfigurationResult {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API GetUserPoolClientSessionConfigurationResult() = default;
  AWS_COGNITOIDENTITYPROVIDER_API GetUserPoolClientSessionConfigurationResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_COGNITOIDENTITYPROVIDER_API GetUserPoolClientSessionConfigurationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the user pool that contains the app client.</p>
   */
  inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
  template <typename UserPoolIdT = Aws::String>
  void SetUserPoolId(UserPoolIdT&& value) {
    m_userPoolIdHasBeenSet = true;
    m_userPoolId = std::forward<UserPoolIdT>(value);
  }
  template <typename UserPoolIdT = Aws::String>
  GetUserPoolClientSessionConfigurationResult& WithUserPoolId(UserPoolIdT&& value) {
    SetUserPoolId(std::forward<UserPoolIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the app client that the session configuration applies to.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  GetUserPoolClientSessionConfigurationResult& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The SSO session settings for the app client.</p>
   */
  inline const ClientSSOSessionConfigType& GetSSOSession() const { return m_sSOSession; }
  template <typename SSOSessionT = ClientSSOSessionConfigType>
  void SetSSOSession(SSOSessionT&& value) {
    m_sSOSessionHasBeenSet = true;
    m_sSOSession = std::forward<SSOSessionT>(value);
  }
  template <typename SSOSessionT = ClientSSOSessionConfigType>
  GetUserPoolClientSessionConfigurationResult& WithSSOSession(SSOSessionT&& value) {
    SetSSOSession(std::forward<SSOSessionT>(value));
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
  GetUserPoolClientSessionConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_userPoolId;

  Aws::String m_clientId;

  ClientSSOSessionConfigType m_sSOSession;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_userPoolIdHasBeenSet = false;
  bool m_clientIdHasBeenSet = false;
  bool m_sSOSessionHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
