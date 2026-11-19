/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/CIMDPolicyType.h>
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
class UpdateCIMDPolicyResult {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API UpdateCIMDPolicyResult() = default;
  AWS_COGNITOIDENTITYPROVIDER_API UpdateCIMDPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_COGNITOIDENTITYPROVIDER_API UpdateCIMDPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The updated CIMD policy.</p>
   */
  inline const CIMDPolicyType& GetCIMDPolicy() const { return m_cIMDPolicy; }
  template <typename CIMDPolicyT = CIMDPolicyType>
  void SetCIMDPolicy(CIMDPolicyT&& value) {
    m_cIMDPolicyHasBeenSet = true;
    m_cIMDPolicy = std::forward<CIMDPolicyT>(value);
  }
  template <typename CIMDPolicyT = CIMDPolicyType>
  UpdateCIMDPolicyResult& WithCIMDPolicy(CIMDPolicyT&& value) {
    SetCIMDPolicy(std::forward<CIMDPolicyT>(value));
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
  UpdateCIMDPolicyResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  CIMDPolicyType m_cIMDPolicy;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_cIMDPolicyHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
