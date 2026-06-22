/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace LambdaMicrovms {
namespace Model {
class CreateMicrovmAuthTokenResult {
 public:
  AWS_LAMBDAMICROVMS_API CreateMicrovmAuthTokenResult() = default;
  AWS_LAMBDAMICROVMS_API CreateMicrovmAuthTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAMBDAMICROVMS_API CreateMicrovmAuthTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A map containing the authentication token. Use the value at key
   * "X-aws-proxy-auth" as the header value when connecting to the MicroVM
   * endpoint.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetAuthToken() const { return m_authToken; }
  template <typename AuthTokenT = Aws::Map<Aws::String, Aws::String>>
  void SetAuthToken(AuthTokenT&& value) {
    m_authTokenHasBeenSet = true;
    m_authToken = std::forward<AuthTokenT>(value);
  }
  template <typename AuthTokenT = Aws::Map<Aws::String, Aws::String>>
  CreateMicrovmAuthTokenResult& WithAuthToken(AuthTokenT&& value) {
    SetAuthToken(std::forward<AuthTokenT>(value));
    return *this;
  }
  template <typename AuthTokenKeyT = Aws::String, typename AuthTokenValueT = Aws::String>
  CreateMicrovmAuthTokenResult& AddAuthToken(AuthTokenKeyT&& key, AuthTokenValueT&& value) {
    m_authTokenHasBeenSet = true;
    m_authToken.emplace(std::forward<AuthTokenKeyT>(key), std::forward<AuthTokenValueT>(value));
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
  CreateMicrovmAuthTokenResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Map<Aws::String, Aws::String> m_authToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_authTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
