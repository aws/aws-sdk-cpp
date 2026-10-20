/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/GatewayClusterAssociationSummary.h>

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
class ListGatewayClusterAssociationsResult {
 public:
  AWS_ECS_API ListGatewayClusterAssociationsResult() = default;
  AWS_ECS_API ListGatewayClusterAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ECS_API ListGatewayClusterAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The gateway-cluster associations that match the request.</p>
   */
  inline const Aws::Vector<GatewayClusterAssociationSummary>& GetGatewayClusterAssociations() const { return m_gatewayClusterAssociations; }
  template <typename GatewayClusterAssociationsT = Aws::Vector<GatewayClusterAssociationSummary>>
  void SetGatewayClusterAssociations(GatewayClusterAssociationsT&& value) {
    m_gatewayClusterAssociationsHasBeenSet = true;
    m_gatewayClusterAssociations = std::forward<GatewayClusterAssociationsT>(value);
  }
  template <typename GatewayClusterAssociationsT = Aws::Vector<GatewayClusterAssociationSummary>>
  ListGatewayClusterAssociationsResult& WithGatewayClusterAssociations(GatewayClusterAssociationsT&& value) {
    SetGatewayClusterAssociations(std::forward<GatewayClusterAssociationsT>(value));
    return *this;
  }
  template <typename GatewayClusterAssociationsT = GatewayClusterAssociationSummary>
  ListGatewayClusterAssociationsResult& AddGatewayClusterAssociations(GatewayClusterAssociationsT&& value) {
    m_gatewayClusterAssociationsHasBeenSet = true;
    m_gatewayClusterAssociations.emplace_back(std::forward<GatewayClusterAssociationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>nextToken</code> value to include in a future request to retrieve
   * the next page of results. This value is <code>null</code> when there are no more
   * results to return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListGatewayClusterAssociationsResult& WithNextToken(NextTokenT&& value) {
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
  ListGatewayClusterAssociationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<GatewayClusterAssociationSummary> m_gatewayClusterAssociations;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_gatewayClusterAssociationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
