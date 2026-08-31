/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect {
namespace Model {
class GetCrossRegionRoutingResult {
 public:
  AWS_CONNECT_API GetCrossRegionRoutingResult() = default;
  AWS_CONNECT_API GetCrossRegionRoutingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API GetCrossRegionRoutingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of Regions for which cross-region routing is currently disabled
   * (isolated). When a Region appears in this list, contacts originating in that
   * Region will not be routed to agents in other Regions, and agents in that Region
   * will not receive contacts from other Regions.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIsolatedRegions() const { return m_isolatedRegions; }
  template <typename IsolatedRegionsT = Aws::Vector<Aws::String>>
  void SetIsolatedRegions(IsolatedRegionsT&& value) {
    m_isolatedRegionsHasBeenSet = true;
    m_isolatedRegions = std::forward<IsolatedRegionsT>(value);
  }
  template <typename IsolatedRegionsT = Aws::Vector<Aws::String>>
  GetCrossRegionRoutingResult& WithIsolatedRegions(IsolatedRegionsT&& value) {
    SetIsolatedRegions(std::forward<IsolatedRegionsT>(value));
    return *this;
  }
  template <typename IsolatedRegionsT = Aws::String>
  GetCrossRegionRoutingResult& AddIsolatedRegions(IsolatedRegionsT&& value) {
    m_isolatedRegionsHasBeenSet = true;
    m_isolatedRegions.emplace_back(std::forward<IsolatedRegionsT>(value));
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
  GetCrossRegionRoutingResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<Aws::String> m_isolatedRegions;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_isolatedRegionsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
