/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/WorkspaceSummary.h>

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
class ListWorkspacesResult {
 public:
  AWS_MANAGEDGRAFANA_API ListWorkspacesResult() = default;
  AWS_MANAGEDGRAFANA_API ListWorkspacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MANAGEDGRAFANA_API ListWorkspacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array of structures that contain some information about the workspaces in
   * the account.</p>
   */
  inline const Aws::Vector<WorkspaceSummary>& GetWorkspaces() const { return m_workspaces; }
  template <typename WorkspacesT = Aws::Vector<WorkspaceSummary>>
  void SetWorkspaces(WorkspacesT&& value) {
    m_workspacesHasBeenSet = true;
    m_workspaces = std::forward<WorkspacesT>(value);
  }
  template <typename WorkspacesT = Aws::Vector<WorkspaceSummary>>
  ListWorkspacesResult& WithWorkspaces(WorkspacesT&& value) {
    SetWorkspaces(std::forward<WorkspacesT>(value));
    return *this;
  }
  template <typename WorkspacesT = WorkspaceSummary>
  ListWorkspacesResult& AddWorkspaces(WorkspacesT&& value) {
    m_workspacesHasBeenSet = true;
    m_workspaces.emplace_back(std::forward<WorkspacesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to use when requesting the next set of workspaces.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListWorkspacesResult& WithNextToken(NextTokenT&& value) {
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
  ListWorkspacesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<WorkspaceSummary> m_workspaces;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_workspacesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
