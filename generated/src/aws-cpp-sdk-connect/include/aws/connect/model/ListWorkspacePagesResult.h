/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/WorkspacePage.h>
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
namespace Connect {
namespace Model {
class ListWorkspacePagesResult {
 public:
  AWS_CONNECT_API ListWorkspacePagesResult() = default;
  AWS_CONNECT_API ListWorkspacePagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API ListWorkspacePagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>If there are additional results, this is the token for the next set of
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListWorkspacePagesResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of page configurations in the workspace.</p>
   */
  inline const Aws::Vector<WorkspacePage>& GetWorkspacePageList() const { return m_workspacePageList; }
  template <typename WorkspacePageListT = Aws::Vector<WorkspacePage>>
  void SetWorkspacePageList(WorkspacePageListT&& value) {
    m_workspacePageListHasBeenSet = true;
    m_workspacePageList = std::forward<WorkspacePageListT>(value);
  }
  template <typename WorkspacePageListT = Aws::Vector<WorkspacePage>>
  ListWorkspacePagesResult& WithWorkspacePageList(WorkspacePageListT&& value) {
    SetWorkspacePageList(std::forward<WorkspacePageListT>(value));
    return *this;
  }
  template <typename WorkspacePageListT = WorkspacePage>
  ListWorkspacePagesResult& AddWorkspacePageList(WorkspacePageListT&& value) {
    m_workspacePageListHasBeenSet = true;
    m_workspacePageList.emplace_back(std::forward<WorkspacePageListT>(value));
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
  ListWorkspacePagesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::Vector<WorkspacePage> m_workspacePageList;
  bool m_workspacePageListHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
