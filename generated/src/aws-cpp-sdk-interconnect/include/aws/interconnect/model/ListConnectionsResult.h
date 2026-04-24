/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/interconnect/Interconnect_EXPORTS.h>
#include <aws/interconnect/model/ConnectionSummary.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Interconnect {
namespace Model {
class ListConnectionsResult {
 public:
  AWS_INTERCONNECT_API ListConnectionsResult() = default;
  AWS_INTERCONNECT_API ListConnectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_INTERCONNECT_API ListConnectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The resulting list of <a>Connection</a> objects.</p>
   */
  inline const Aws::Vector<ConnectionSummary>& GetConnections() const { return m_connections; }
  template <typename ConnectionsT = Aws::Vector<ConnectionSummary>>
  void SetConnections(ConnectionsT&& value) {
    m_connectionsHasBeenSet = true;
    m_connections = std::forward<ConnectionsT>(value);
  }
  template <typename ConnectionsT = Aws::Vector<ConnectionSummary>>
  ListConnectionsResult& WithConnections(ConnectionsT&& value) {
    SetConnections(std::forward<ConnectionsT>(value));
    return *this;
  }
  template <typename ConnectionsT = ConnectionSummary>
  ListConnectionsResult& AddConnections(ConnectionsT&& value) {
    m_connectionsHasBeenSet = true;
    m_connections.emplace_back(std::forward<ConnectionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token for use in subsequent calls to fetch the next page of
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListConnectionsResult& WithNextToken(NextTokenT&& value) {
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
  ListConnectionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ConnectionSummary> m_connections;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_connectionsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Interconnect
}  // namespace Aws
