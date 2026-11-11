/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/UserPoolTokenSessionConfigType.h>
#include <aws/cognito-idp/model/UserSessionTrackingType.h>
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
class GetUserPoolSessionConfigurationResult {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API GetUserPoolSessionConfigurationResult() = default;
  AWS_COGNITOIDENTITYPROVIDER_API GetUserPoolSessionConfigurationResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_COGNITOIDENTITYPROVIDER_API GetUserPoolSessionConfigurationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the user pool that the session configuration applies to.</p>
   */
  inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
  template <typename UserPoolIdT = Aws::String>
  void SetUserPoolId(UserPoolIdT&& value) {
    m_userPoolIdHasBeenSet = true;
    m_userPoolId = std::forward<UserPoolIdT>(value);
  }
  template <typename UserPoolIdT = Aws::String>
  GetUserPoolSessionConfigurationResult& WithUserPoolId(UserPoolIdT&& value) {
    SetUserPoolId(std::forward<UserPoolIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether session tracking is enabled for the user pool.</p>
   */
  inline UserSessionTrackingType GetUserSessionTracking() const { return m_userSessionTracking; }
  inline void SetUserSessionTracking(UserSessionTrackingType value) {
    m_userSessionTrackingHasBeenSet = true;
    m_userSessionTracking = value;
  }
  inline GetUserPoolSessionConfigurationResult& WithUserSessionTracking(UserSessionTrackingType value) {
    SetUserSessionTracking(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pool-wide token session settings for the user pool.</p>
   */
  inline const UserPoolTokenSessionConfigType& GetTokenSession() const { return m_tokenSession; }
  template <typename TokenSessionT = UserPoolTokenSessionConfigType>
  void SetTokenSession(TokenSessionT&& value) {
    m_tokenSessionHasBeenSet = true;
    m_tokenSession = std::forward<TokenSessionT>(value);
  }
  template <typename TokenSessionT = UserPoolTokenSessionConfigType>
  GetUserPoolSessionConfigurationResult& WithTokenSession(TokenSessionT&& value) {
    SetTokenSession(std::forward<TokenSessionT>(value));
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
  GetUserPoolSessionConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_userPoolId;

  UserSessionTrackingType m_userSessionTracking{UserSessionTrackingType::NOT_SET};

  UserPoolTokenSessionConfigType m_tokenSession;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_userPoolIdHasBeenSet = false;
  bool m_userSessionTrackingHasBeenSet = false;
  bool m_tokenSessionHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
