/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>
#include <aws/lambda-core/model/NetworkConnectorSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace LambdaCore {
namespace Model {
class ListNetworkConnectorsResult {
 public:
  AWS_LAMBDACORE_API ListNetworkConnectorsResult() = default;
  AWS_LAMBDACORE_API ListNetworkConnectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAMBDACORE_API ListNetworkConnectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of network connector summaries for the current page of results.</p>
   */
  inline const Aws::Vector<NetworkConnectorSummary>& GetNetworkConnectors() const { return m_networkConnectors; }
  template <typename NetworkConnectorsT = Aws::Vector<NetworkConnectorSummary>>
  void SetNetworkConnectors(NetworkConnectorsT&& value) {
    m_networkConnectorsHasBeenSet = true;
    m_networkConnectors = std::forward<NetworkConnectorsT>(value);
  }
  template <typename NetworkConnectorsT = Aws::Vector<NetworkConnectorSummary>>
  ListNetworkConnectorsResult& WithNetworkConnectors(NetworkConnectorsT&& value) {
    SetNetworkConnectors(std::forward<NetworkConnectorsT>(value));
    return *this;
  }
  template <typename NetworkConnectorsT = NetworkConnectorSummary>
  ListNetworkConnectorsResult& AddNetworkConnectors(NetworkConnectorsT&& value) {
    m_networkConnectorsHasBeenSet = true;
    m_networkConnectors.emplace_back(std::forward<NetworkConnectorsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token to include in a subsequent request to retrieve the next
   * page. This value is null when there are no more results.</p>
   */
  inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
  template <typename NextMarkerT = Aws::String>
  void SetNextMarker(NextMarkerT&& value) {
    m_nextMarkerHasBeenSet = true;
    m_nextMarker = std::forward<NextMarkerT>(value);
  }
  template <typename NextMarkerT = Aws::String>
  ListNetworkConnectorsResult& WithNextMarker(NextMarkerT&& value) {
    SetNextMarker(std::forward<NextMarkerT>(value));
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
  ListNetworkConnectorsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<NetworkConnectorSummary> m_networkConnectors;

  Aws::String m_nextMarker;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_networkConnectorsHasBeenSet = false;
  bool m_nextMarkerHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
