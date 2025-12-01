/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/CapabilitySummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace EKS {
namespace Model {
class ListCapabilitiesResult {
 public:
  AWS_EKS_API ListCapabilitiesResult() = default;
  AWS_EKS_API ListCapabilitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_EKS_API ListCapabilitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of capability summary objects, each containing basic information about
   * a capability including its name, ARN, type, status, version, and timestamps.</p>
   */
  inline const Aws::Vector<CapabilitySummary>& GetCapabilities() const { return m_capabilities; }
  template <typename CapabilitiesT = Aws::Vector<CapabilitySummary>>
  void SetCapabilities(CapabilitiesT&& value) {
    m_capabilitiesHasBeenSet = true;
    m_capabilities = std::forward<CapabilitiesT>(value);
  }
  template <typename CapabilitiesT = Aws::Vector<CapabilitySummary>>
  ListCapabilitiesResult& WithCapabilities(CapabilitiesT&& value) {
    SetCapabilities(std::forward<CapabilitiesT>(value));
    return *this;
  }
  template <typename CapabilitiesT = CapabilitySummary>
  ListCapabilitiesResult& AddCapabilities(CapabilitiesT&& value) {
    m_capabilitiesHasBeenSet = true;
    m_capabilities.emplace_back(std::forward<CapabilitiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>nextToken</code> value to include in a future
   * <code>ListCapabilities</code> request. When the results of a
   * <code>ListCapabilities</code> request exceed <code>maxResults</code>, you can
   * use this value to retrieve the next page of results. This value is null when
   * there are no more results to return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListCapabilitiesResult& WithNextToken(NextTokenT&& value) {
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
  ListCapabilitiesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<CapabilitySummary> m_capabilities;
  bool m_capabilitiesHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
