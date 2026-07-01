/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/AcmeEndpoint.h>
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
namespace ACM {
namespace Model {
class DescribeAcmeEndpointResult {
 public:
  AWS_ACM_API DescribeAcmeEndpointResult() = default;
  AWS_ACM_API DescribeAcmeEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ACM_API DescribeAcmeEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ACME endpoint details.</p>
   */
  inline const AcmeEndpoint& GetAcmeEndpoint() const { return m_acmeEndpoint; }
  template <typename AcmeEndpointT = AcmeEndpoint>
  void SetAcmeEndpoint(AcmeEndpointT&& value) {
    m_acmeEndpointHasBeenSet = true;
    m_acmeEndpoint = std::forward<AcmeEndpointT>(value);
  }
  template <typename AcmeEndpointT = AcmeEndpoint>
  DescribeAcmeEndpointResult& WithAcmeEndpoint(AcmeEndpointT&& value) {
    SetAcmeEndpoint(std::forward<AcmeEndpointT>(value));
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
  DescribeAcmeEndpointResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  AcmeEndpoint m_acmeEndpoint;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_acmeEndpointHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
