/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/ConnectorSummary.h>
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
namespace ConfigService {
namespace Model {
class ListConnectorsResult {
 public:
  AWS_CONFIGSERVICE_API ListConnectorsResult() = default;
  AWS_CONFIGSERVICE_API ListConnectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONFIGSERVICE_API ListConnectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of <code>ConnectorSummary</code> objects.</p>
   */
  inline const Aws::Vector<ConnectorSummary>& GetConnectorSummaries() const { return m_connectorSummaries; }
  template <typename ConnectorSummariesT = Aws::Vector<ConnectorSummary>>
  void SetConnectorSummaries(ConnectorSummariesT&& value) {
    m_connectorSummariesHasBeenSet = true;
    m_connectorSummaries = std::forward<ConnectorSummariesT>(value);
  }
  template <typename ConnectorSummariesT = Aws::Vector<ConnectorSummary>>
  ListConnectorsResult& WithConnectorSummaries(ConnectorSummariesT&& value) {
    SetConnectorSummaries(std::forward<ConnectorSummariesT>(value));
    return *this;
  }
  template <typename ConnectorSummariesT = ConnectorSummary>
  ListConnectorsResult& AddConnectorSummaries(ConnectorSummariesT&& value) {
    m_connectorSummariesHasBeenSet = true;
    m_connectorSummaries.emplace_back(std::forward<ConnectorSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>NextToken</code> string returned on a previous page that you use to
   * get the next page of results in a paginated response.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListConnectorsResult& WithNextToken(NextTokenT&& value) {
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
  ListConnectorsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ConnectorSummary> m_connectorSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_connectorSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConfigService
}  // namespace Aws
