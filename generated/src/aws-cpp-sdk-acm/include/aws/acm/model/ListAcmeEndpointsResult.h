/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/AcmeEndpointSummary.h>
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
namespace ACM {
namespace Model {
class ListAcmeEndpointsResult {
 public:
  AWS_ACM_API ListAcmeEndpointsResult() = default;
  AWS_ACM_API ListAcmeEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ACM_API ListAcmeEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of ACME endpoints.</p>
   */
  inline const Aws::Vector<AcmeEndpointSummary>& GetAcmeEndpoints() const { return m_acmeEndpoints; }
  template <typename AcmeEndpointsT = Aws::Vector<AcmeEndpointSummary>>
  void SetAcmeEndpoints(AcmeEndpointsT&& value) {
    m_acmeEndpointsHasBeenSet = true;
    m_acmeEndpoints = std::forward<AcmeEndpointsT>(value);
  }
  template <typename AcmeEndpointsT = Aws::Vector<AcmeEndpointSummary>>
  ListAcmeEndpointsResult& WithAcmeEndpoints(AcmeEndpointsT&& value) {
    SetAcmeEndpoints(std::forward<AcmeEndpointsT>(value));
    return *this;
  }
  template <typename AcmeEndpointsT = AcmeEndpointSummary>
  ListAcmeEndpointsResult& AddAcmeEndpoints(AcmeEndpointsT&& value) {
    m_acmeEndpointsHasBeenSet = true;
    m_acmeEndpoints.emplace_back(std::forward<AcmeEndpointsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token for pagination.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAcmeEndpointsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListAcmeEndpointsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<AcmeEndpointSummary> m_acmeEndpoints;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_acmeEndpointsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
