/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/PrivateConnectionSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {
/**
 * <p>Output containing the list of Private Connections.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ListPrivateConnectionsOutput">AWS
 * API Reference</a></p>
 */
class ListPrivateConnectionsResult {
 public:
  AWS_DEVOPSAGENT_API ListPrivateConnectionsResult() = default;
  AWS_DEVOPSAGENT_API ListPrivateConnectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DEVOPSAGENT_API ListPrivateConnectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of Private Connections.</p>
   */
  inline const Aws::Vector<PrivateConnectionSummary>& GetPrivateConnections() const { return m_privateConnections; }
  template <typename PrivateConnectionsT = Aws::Vector<PrivateConnectionSummary>>
  void SetPrivateConnections(PrivateConnectionsT&& value) {
    m_privateConnectionsHasBeenSet = true;
    m_privateConnections = std::forward<PrivateConnectionsT>(value);
  }
  template <typename PrivateConnectionsT = Aws::Vector<PrivateConnectionSummary>>
  ListPrivateConnectionsResult& WithPrivateConnections(PrivateConnectionsT&& value) {
    SetPrivateConnections(std::forward<PrivateConnectionsT>(value));
    return *this;
  }
  template <typename PrivateConnectionsT = PrivateConnectionSummary>
  ListPrivateConnectionsResult& AddPrivateConnections(PrivateConnectionsT&& value) {
    m_privateConnectionsHasBeenSet = true;
    m_privateConnections.emplace_back(std::forward<PrivateConnectionsT>(value));
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
  ListPrivateConnectionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<PrivateConnectionSummary> m_privateConnections;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_privateConnectionsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
