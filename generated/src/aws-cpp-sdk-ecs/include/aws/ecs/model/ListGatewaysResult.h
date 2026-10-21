/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/GatewaySummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {
class ListGatewaysResult {
 public:
  AWS_ECS_API ListGatewaysResult() = default;
  AWS_ECS_API ListGatewaysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ECS_API ListGatewaysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of gateways that match the request.</p>
   */
  inline const Aws::Vector<GatewaySummary>& GetGateways() const { return m_gateways; }
  template <typename GatewaysT = Aws::Vector<GatewaySummary>>
  void SetGateways(GatewaysT&& value) {
    m_gatewaysHasBeenSet = true;
    m_gateways = std::forward<GatewaysT>(value);
  }
  template <typename GatewaysT = Aws::Vector<GatewaySummary>>
  ListGatewaysResult& WithGateways(GatewaysT&& value) {
    SetGateways(std::forward<GatewaysT>(value));
    return *this;
  }
  template <typename GatewaysT = GatewaySummary>
  ListGatewaysResult& AddGateways(GatewaysT&& value) {
    m_gatewaysHasBeenSet = true;
    m_gateways.emplace_back(std::forward<GatewaysT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>nextToken</code> value to include in a future
   * <code>ListGateways</code> request. When the results of a
   * <code>ListGateways</code> request exceed <code>maxResults</code>, this value can
   * be used to retrieve the next page of results. This value is <code>null</code>
   * when there are no more results to return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListGatewaysResult& WithNextToken(NextTokenT&& value) {
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
  ListGatewaysResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<GatewaySummary> m_gateways;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_gatewaysHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
