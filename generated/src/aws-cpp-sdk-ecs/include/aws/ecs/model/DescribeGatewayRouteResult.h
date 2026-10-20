/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/GatewayRoute.h>

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
class DescribeGatewayRouteResult {
 public:
  AWS_ECS_API DescribeGatewayRouteResult() = default;
  AWS_ECS_API DescribeGatewayRouteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ECS_API DescribeGatewayRouteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The details of the gateway route.</p>
   */
  inline const GatewayRoute& GetGatewayRoute() const { return m_gatewayRoute; }
  template <typename GatewayRouteT = GatewayRoute>
  void SetGatewayRoute(GatewayRouteT&& value) {
    m_gatewayRouteHasBeenSet = true;
    m_gatewayRoute = std::forward<GatewayRouteT>(value);
  }
  template <typename GatewayRouteT = GatewayRoute>
  DescribeGatewayRouteResult& WithGatewayRoute(GatewayRouteT&& value) {
    SetGatewayRoute(std::forward<GatewayRouteT>(value));
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
  DescribeGatewayRouteResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  GatewayRoute m_gatewayRoute;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_gatewayRouteHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
