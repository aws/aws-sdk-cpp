/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace EMRServerless {
namespace Model {
class GetSessionEndpointResult {
 public:
  AWS_EMRSERVERLESS_API GetSessionEndpointResult() = default;
  AWS_EMRSERVERLESS_API GetSessionEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_EMRSERVERLESS_API GetSessionEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The output contains the ID of the application.</p>
   */
  inline const Aws::String& GetApplicationId() const { return m_applicationId; }
  template <typename ApplicationIdT = Aws::String>
  void SetApplicationId(ApplicationIdT&& value) {
    m_applicationIdHasBeenSet = true;
    m_applicationId = std::forward<ApplicationIdT>(value);
  }
  template <typename ApplicationIdT = Aws::String>
  GetSessionEndpointResult& WithApplicationId(ApplicationIdT&& value) {
    SetApplicationId(std::forward<ApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The output contains the ID of the session.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  GetSessionEndpointResult& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The endpoint URL for connecting to the session.</p>
   */
  inline const Aws::String& GetEndpoint() const { return m_endpoint; }
  template <typename EndpointT = Aws::String>
  void SetEndpoint(EndpointT&& value) {
    m_endpointHasBeenSet = true;
    m_endpoint = std::forward<EndpointT>(value);
  }
  template <typename EndpointT = Aws::String>
  GetSessionEndpointResult& WithEndpoint(EndpointT&& value) {
    SetEndpoint(std::forward<EndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Authentication token for accessing the session endpoint.</p>
   */
  inline const Aws::String& GetAuthToken() const { return m_authToken; }
  template <typename AuthTokenT = Aws::String>
  void SetAuthToken(AuthTokenT&& value) {
    m_authTokenHasBeenSet = true;
    m_authToken = std::forward<AuthTokenT>(value);
  }
  template <typename AuthTokenT = Aws::String>
  GetSessionEndpointResult& WithAuthToken(AuthTokenT&& value) {
    SetAuthToken(std::forward<AuthTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The expiration time of the authentication token.</p>
   */
  inline const Aws::Utils::DateTime& GetAuthTokenExpiresAt() const { return m_authTokenExpiresAt; }
  template <typename AuthTokenExpiresAtT = Aws::Utils::DateTime>
  void SetAuthTokenExpiresAt(AuthTokenExpiresAtT&& value) {
    m_authTokenExpiresAtHasBeenSet = true;
    m_authTokenExpiresAt = std::forward<AuthTokenExpiresAtT>(value);
  }
  template <typename AuthTokenExpiresAtT = Aws::Utils::DateTime>
  GetSessionEndpointResult& WithAuthTokenExpiresAt(AuthTokenExpiresAtT&& value) {
    SetAuthTokenExpiresAt(std::forward<AuthTokenExpiresAtT>(value));
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
  GetSessionEndpointResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_applicationId;

  Aws::String m_sessionId;

  Aws::String m_endpoint;

  Aws::String m_authToken;

  Aws::Utils::DateTime m_authTokenExpiresAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_applicationIdHasBeenSet = false;
  bool m_sessionIdHasBeenSet = false;
  bool m_endpointHasBeenSet = false;
  bool m_authTokenHasBeenSet = false;
  bool m_authTokenExpiresAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMRServerless
}  // namespace Aws
