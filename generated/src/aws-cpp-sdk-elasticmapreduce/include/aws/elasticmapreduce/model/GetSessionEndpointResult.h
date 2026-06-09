/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/Credentials.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace EMR {
namespace Model {
/**
 * <p>Output of the <code>GetSessionEndpoint</code> operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/GetSessionEndpointOutput">AWS
 * API Reference</a></p>
 */
class GetSessionEndpointResult {
 public:
  AWS_EMR_API GetSessionEndpointResult() = default;
  AWS_EMR_API GetSessionEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_EMR_API GetSessionEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Spark Connect endpoint URL to use in the PySpark client.</p>
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
   * <p>A time-limited authentication token used to connect to the Spark Connect
   * endpoint.</p>
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
   * <p>The time at which the authentication token expires. After this time, call
   * <code>GetSessionEndpoint</code> again to obtain a new token.</p>
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
  /**
   * <p>Username and password used to authenticate with the Spark Connect server when
   * connecting directly over VPC peering.</p>
   */
  inline const Credentials& GetCredentials() const { return m_credentials; }
  template <typename CredentialsT = Credentials>
  void SetCredentials(CredentialsT&& value) {
    m_credentialsHasBeenSet = true;
    m_credentials = std::forward<CredentialsT>(value);
  }
  template <typename CredentialsT = Credentials>
  GetSessionEndpointResult& WithCredentials(CredentialsT&& value) {
    SetCredentials(std::forward<CredentialsT>(value));
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
  Aws::String m_endpoint;

  Aws::String m_authToken;

  Aws::Utils::DateTime m_authTokenExpirationTime{};

  Credentials m_credentials;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_endpointHasBeenSet = false;
  bool m_authTokenHasBeenSet = false;
  bool m_authTokenExpirationTimeHasBeenSet = false;
  bool m_credentialsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMR
}  // namespace Aws
