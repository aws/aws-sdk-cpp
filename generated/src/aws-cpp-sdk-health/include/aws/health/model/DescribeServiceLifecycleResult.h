/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/health/Health_EXPORTS.h>
#include <aws/health/model/ServiceLifecycle.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Health {
namespace Model {
class DescribeServiceLifecycleResult {
 public:
  AWS_HEALTH_API DescribeServiceLifecycleResult() = default;
  AWS_HEALTH_API DescribeServiceLifecycleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_HEALTH_API DescribeServiceLifecycleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The list of service lifecycle entries matching the filter criteria.</p>
   */
  inline const Aws::Vector<ServiceLifecycle>& GetServiceLifecycles() const { return m_serviceLifecycles; }
  template <typename ServiceLifecyclesT = Aws::Vector<ServiceLifecycle>>
  void SetServiceLifecycles(ServiceLifecyclesT&& value) {
    m_serviceLifecyclesHasBeenSet = true;
    m_serviceLifecycles = std::forward<ServiceLifecyclesT>(value);
  }
  template <typename ServiceLifecyclesT = Aws::Vector<ServiceLifecycle>>
  DescribeServiceLifecycleResult& WithServiceLifecycles(ServiceLifecyclesT&& value) {
    SetServiceLifecycles(std::forward<ServiceLifecyclesT>(value));
    return *this;
  }
  template <typename ServiceLifecyclesT = ServiceLifecycle>
  DescribeServiceLifecycleResult& AddServiceLifecycles(ServiceLifecyclesT&& value) {
    m_serviceLifecyclesHasBeenSet = true;
    m_serviceLifecycles.emplace_back(std::forward<ServiceLifecyclesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the results of a search are large, only a portion of the results are
   * returned, and a <code>nextToken</code> pagination token is returned in the
   * response. To retrieve the next batch of results, reissue the search request and
   * include the returned token. When all results have been returned, the response
   * does not contain a pagination token value.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeServiceLifecycleResult& WithNextToken(NextTokenT&& value) {
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
  DescribeServiceLifecycleResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ServiceLifecycle> m_serviceLifecycles;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_serviceLifecyclesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Health
}  // namespace Aws
