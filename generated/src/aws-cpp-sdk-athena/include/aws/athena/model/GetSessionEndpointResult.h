/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace Athena {
namespace Model {
class GetSessionEndpointResult {
 public:
  AWS_ATHENA_API GetSessionEndpointResult() = default;
  AWS_ATHENA_API GetSessionEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ATHENA_API GetSessionEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The endpoint for connecting to the session.</p>
   */
  inline const Aws::String& GetEndpointUrl() const { return m_endpointUrl; }
  template <typename EndpointUrlT = Aws::String>
  void SetEndpointUrl(EndpointUrlT&& value) {
    m_endpointUrlHasBeenSet = true;
    m_endpointUrl = std::forward<EndpointUrlT>(value);
  }
  template <typename EndpointUrlT = Aws::String>
  GetSessionEndpointResult& WithEndpointUrl(EndpointUrlT&& value) {
    SetEndpointUrl(std::forward<EndpointUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Authentication token for the connection</p>
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
   * <p>Expiration time of the auth token.</p>
   */
  inline const Aws::Utils::DateTime& GetAuthTokenExpirationTime() const { return m_authTokenExpirationTime; }
  template <typename AuthTokenExpirationTimeT = Aws::Utils::DateTime>
  void SetAuthTokenExpirationTime(AuthTokenExpirationTimeT&& value) {
    m_authTokenExpirationTimeHasBeenSet = true;
    m_authTokenExpirationTime = std::forward<AuthTokenExpirationTimeT>(value);
  }
  template <typename AuthTokenExpirationTimeT = Aws::Utils::DateTime>
  GetSessionEndpointResult& WithAuthTokenExpirationTime(AuthTokenExpirationTimeT&& value) {
    SetAuthTokenExpirationTime(std::forward<AuthTokenExpirationTimeT>(value));
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
 private:
  Aws::String m_endpointUrl;

  Aws::String m_authToken;

  Aws::Utils::DateTime m_authTokenExpirationTime{};

  Aws::String m_requestId;
  bool m_endpointUrlHasBeenSet = false;
  bool m_authTokenHasBeenSet = false;
  bool m_authTokenExpirationTimeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Athena
}  // namespace Aws
