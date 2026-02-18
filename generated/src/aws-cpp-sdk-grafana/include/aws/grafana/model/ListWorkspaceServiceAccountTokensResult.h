/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/ServiceAccountTokenSummary.h>

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
class ListWorkspaceServiceAccountTokensResult {
 public:
  AWS_MANAGEDGRAFANA_API ListWorkspaceServiceAccountTokensResult() = default;
  AWS_MANAGEDGRAFANA_API ListWorkspaceServiceAccountTokensResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MANAGEDGRAFANA_API ListWorkspaceServiceAccountTokensResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The token to use when requesting the next set of service accounts.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListWorkspaceServiceAccountTokensResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of structures containing information about the tokens.</p>
   */
  inline const Aws::Vector<ServiceAccountTokenSummary>& GetServiceAccountTokens() const { return m_serviceAccountTokens; }
  template <typename ServiceAccountTokensT = Aws::Vector<ServiceAccountTokenSummary>>
  void SetServiceAccountTokens(ServiceAccountTokensT&& value) {
    m_serviceAccountTokensHasBeenSet = true;
    m_serviceAccountTokens = std::forward<ServiceAccountTokensT>(value);
  }
  template <typename ServiceAccountTokensT = Aws::Vector<ServiceAccountTokenSummary>>
  ListWorkspaceServiceAccountTokensResult& WithServiceAccountTokens(ServiceAccountTokensT&& value) {
    SetServiceAccountTokens(std::forward<ServiceAccountTokensT>(value));
    return *this;
  }
  template <typename ServiceAccountTokensT = ServiceAccountTokenSummary>
  ListWorkspaceServiceAccountTokensResult& AddServiceAccountTokens(ServiceAccountTokensT&& value) {
    m_serviceAccountTokensHasBeenSet = true;
    m_serviceAccountTokens.emplace_back(std::forward<ServiceAccountTokensT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the service account where the tokens reside.</p>
   */
  inline const Aws::String& GetServiceAccountId() const { return m_serviceAccountId; }
  template <typename ServiceAccountIdT = Aws::String>
  void SetServiceAccountId(ServiceAccountIdT&& value) {
    m_serviceAccountIdHasBeenSet = true;
    m_serviceAccountId = std::forward<ServiceAccountIdT>(value);
  }
  template <typename ServiceAccountIdT = Aws::String>
  ListWorkspaceServiceAccountTokensResult& WithServiceAccountId(ServiceAccountIdT&& value) {
    SetServiceAccountId(std::forward<ServiceAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the workspace where the tokens reside.</p>
   */
  inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
  template <typename WorkspaceIdT = Aws::String>
  void SetWorkspaceId(WorkspaceIdT&& value) {
    m_workspaceIdHasBeenSet = true;
    m_workspaceId = std::forward<WorkspaceIdT>(value);
  }
  template <typename WorkspaceIdT = Aws::String>
  ListWorkspaceServiceAccountTokensResult& WithWorkspaceId(WorkspaceIdT&& value) {
    SetWorkspaceId(std::forward<WorkspaceIdT>(value));
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
  ListWorkspaceServiceAccountTokensResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;

  Aws::Vector<ServiceAccountTokenSummary> m_serviceAccountTokens;

  Aws::String m_serviceAccountId;

  Aws::String m_workspaceId;

  Aws::String m_requestId;
  bool m_nextTokenHasBeenSet = false;
  bool m_serviceAccountTokensHasBeenSet = false;
  bool m_serviceAccountIdHasBeenSet = false;
  bool m_workspaceIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
