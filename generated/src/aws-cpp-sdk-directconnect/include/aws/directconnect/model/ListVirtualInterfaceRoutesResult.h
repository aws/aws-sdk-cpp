/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/model/Route.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DirectConnect {
namespace Model {
class ListVirtualInterfaceRoutesResult {
 public:
  AWS_DIRECTCONNECT_API ListVirtualInterfaceRoutesResult() = default;
  AWS_DIRECTCONNECT_API ListVirtualInterfaceRoutesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DIRECTCONNECT_API ListVirtualInterfaceRoutesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the virtual interface.</p>
   */
  inline const Aws::String& GetVirtualInterfaceId() const { return m_virtualInterfaceId; }
  template <typename VirtualInterfaceIdT = Aws::String>
  void SetVirtualInterfaceId(VirtualInterfaceIdT&& value) {
    m_virtualInterfaceIdHasBeenSet = true;
    m_virtualInterfaceId = std::forward<VirtualInterfaceIdT>(value);
  }
  template <typename VirtualInterfaceIdT = Aws::String>
  ListVirtualInterfaceRoutesResult& WithVirtualInterfaceId(VirtualInterfaceIdT&& value) {
    SetVirtualInterfaceId(std::forward<VirtualInterfaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The routes for the virtual interface.</p>
   */
  inline const Aws::Vector<Route>& GetRoutes() const { return m_routes; }
  template <typename RoutesT = Aws::Vector<Route>>
  void SetRoutes(RoutesT&& value) {
    m_routesHasBeenSet = true;
    m_routes = std::forward<RoutesT>(value);
  }
  template <typename RoutesT = Aws::Vector<Route>>
  ListVirtualInterfaceRoutesResult& WithRoutes(RoutesT&& value) {
    SetRoutes(std::forward<RoutesT>(value));
    return *this;
  }
  template <typename RoutesT = Route>
  ListVirtualInterfaceRoutesResult& AddRoutes(RoutesT&& value) {
    m_routesHasBeenSet = true;
    m_routes.emplace_back(std::forward<RoutesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to use to retrieve the next page of results. This value is
   * <code>null</code> when there are no more results to return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListVirtualInterfaceRoutesResult& WithNextToken(NextTokenT&& value) {
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
  ListVirtualInterfaceRoutesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_virtualInterfaceId;

  Aws::Vector<Route> m_routes;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_virtualInterfaceIdHasBeenSet = false;
  bool m_routesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
