/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/grafana/ManagedGrafana_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ManagedGrafana {
namespace Model {
class ListVersionsResult {
 public:
  AWS_MANAGEDGRAFANA_API ListVersionsResult() = default;
  AWS_MANAGEDGRAFANA_API ListVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MANAGEDGRAFANA_API ListVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The token to use in a subsequent <code>ListVersions</code> operation to
   * return the next set of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListVersionsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Grafana versions available to create. If a workspace ID is included in
   * the request, the Grafana versions to which this workspace can be upgraded.</p>
   */
  inline const Aws::Vector<Aws::String>& GetGrafanaVersions() const { return m_grafanaVersions; }
  template <typename GrafanaVersionsT = Aws::Vector<Aws::String>>
  void SetGrafanaVersions(GrafanaVersionsT&& value) {
    m_grafanaVersionsHasBeenSet = true;
    m_grafanaVersions = std::forward<GrafanaVersionsT>(value);
  }
  template <typename GrafanaVersionsT = Aws::Vector<Aws::String>>
  ListVersionsResult& WithGrafanaVersions(GrafanaVersionsT&& value) {
    SetGrafanaVersions(std::forward<GrafanaVersionsT>(value));
    return *this;
  }
  template <typename GrafanaVersionsT = Aws::String>
  ListVersionsResult& AddGrafanaVersions(GrafanaVersionsT&& value) {
    m_grafanaVersionsHasBeenSet = true;
    m_grafanaVersions.emplace_back(std::forward<GrafanaVersionsT>(value));
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
  ListVersionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;

  Aws::Vector<Aws::String> m_grafanaVersions;

  Aws::String m_requestId;
  bool m_nextTokenHasBeenSet = false;
  bool m_grafanaVersionsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
