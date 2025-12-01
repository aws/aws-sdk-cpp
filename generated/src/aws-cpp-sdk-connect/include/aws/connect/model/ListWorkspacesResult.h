/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/WorkspaceSummary.h>
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
class ListWorkspacesResult {
 public:
  AWS_CONNECT_API ListWorkspacesResult() = default;
  AWS_CONNECT_API ListWorkspacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API ListWorkspacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  ListWorkspacesResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary list of workspaces.</p>
   */
  inline const Aws::Vector<WorkspaceSummary>& GetWorkspaceSummaryList() const { return m_workspaceSummaryList; }
  template <typename WorkspaceSummaryListT = Aws::Vector<WorkspaceSummary>>
  void SetWorkspaceSummaryList(WorkspaceSummaryListT&& value) {
    m_workspaceSummaryListHasBeenSet = true;
    m_workspaceSummaryList = std::forward<WorkspaceSummaryListT>(value);
  }
  template <typename WorkspaceSummaryListT = Aws::Vector<WorkspaceSummary>>
  ListWorkspacesResult& WithWorkspaceSummaryList(WorkspaceSummaryListT&& value) {
    SetWorkspaceSummaryList(std::forward<WorkspaceSummaryListT>(value));
    return *this;
  }
  template <typename WorkspaceSummaryListT = WorkspaceSummary>
  ListWorkspacesResult& AddWorkspaceSummaryList(WorkspaceSummaryListT&& value) {
    m_workspaceSummaryListHasBeenSet = true;
    m_workspaceSummaryList.emplace_back(std::forward<WorkspaceSummaryListT>(value));
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
  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::Vector<WorkspaceSummary> m_workspaceSummaryList;
  bool m_workspaceSummaryListHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
