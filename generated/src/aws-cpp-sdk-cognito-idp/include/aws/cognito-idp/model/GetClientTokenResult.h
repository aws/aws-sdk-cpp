/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/ClientAuthenticationResultType.h>
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
class GetClientTokenResult {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API GetClientTokenResult() = default;
  AWS_COGNITOIDENTITYPROVIDER_API GetClientTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_COGNITOIDENTITYPROVIDER_API GetClientTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The access token that Amazon Cognito issues for the app client, and its
   * metadata.</p>
   */
  inline const ClientAuthenticationResultType& GetClientAuthenticationResult() const { return m_clientAuthenticationResult; }
  template <typename ClientAuthenticationResultT = ClientAuthenticationResultType>
  void SetClientAuthenticationResult(ClientAuthenticationResultT&& value) {
    m_clientAuthenticationResultHasBeenSet = true;
    m_clientAuthenticationResult = std::forward<ClientAuthenticationResultT>(value);
  }
  template <typename ClientAuthenticationResultT = ClientAuthenticationResultType>
  GetClientTokenResult& WithClientAuthenticationResult(ClientAuthenticationResultT&& value) {
    SetClientAuthenticationResult(std::forward<ClientAuthenticationResultT>(value));
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
  GetClientTokenResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  ClientAuthenticationResultType m_clientAuthenticationResult;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_clientAuthenticationResultHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
