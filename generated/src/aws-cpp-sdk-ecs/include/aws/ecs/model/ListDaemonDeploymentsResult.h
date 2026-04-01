/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/DaemonDeploymentSummary.h>

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
class ListDaemonDeploymentsResult {
 public:
  AWS_ECS_API ListDaemonDeploymentsResult() = default;
  AWS_ECS_API ListDaemonDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ECS_API ListDaemonDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The <code>nextToken</code> value to include in a future
   * <code>ListDaemonDeployments</code> request. When the results of a
   * <code>ListDaemonDeployments</code> request exceed <code>maxResults</code>, this
   * value can be used to retrieve the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListDaemonDeploymentsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of daemon deployment summaries.</p>
   */
  inline const Aws::Vector<DaemonDeploymentSummary>& GetDaemonDeployments() const { return m_daemonDeployments; }
  template <typename DaemonDeploymentsT = Aws::Vector<DaemonDeploymentSummary>>
  void SetDaemonDeployments(DaemonDeploymentsT&& value) {
    m_daemonDeploymentsHasBeenSet = true;
    m_daemonDeployments = std::forward<DaemonDeploymentsT>(value);
  }
  template <typename DaemonDeploymentsT = Aws::Vector<DaemonDeploymentSummary>>
  ListDaemonDeploymentsResult& WithDaemonDeployments(DaemonDeploymentsT&& value) {
    SetDaemonDeployments(std::forward<DaemonDeploymentsT>(value));
    return *this;
  }
  template <typename DaemonDeploymentsT = DaemonDeploymentSummary>
  ListDaemonDeploymentsResult& AddDaemonDeployments(DaemonDeploymentsT&& value) {
    m_daemonDeploymentsHasBeenSet = true;
    m_daemonDeployments.emplace_back(std::forward<DaemonDeploymentsT>(value));
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
  ListDaemonDeploymentsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nextToken;

  Aws::Vector<DaemonDeploymentSummary> m_daemonDeployments;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_daemonDeploymentsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
