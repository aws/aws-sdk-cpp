/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/WorkspaceAssociationSearchSummary.h>
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
class SearchWorkspaceAssociationsResult {
 public:
  AWS_CONNECT_API SearchWorkspaceAssociationsResult() = default;
  AWS_CONNECT_API SearchWorkspaceAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API SearchWorkspaceAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  SearchWorkspaceAssociationsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of workspace associations that match the search criteria.</p>
   */
  inline const Aws::Vector<WorkspaceAssociationSearchSummary>& GetWorkspaceAssociations() const { return m_workspaceAssociations; }
  template <typename WorkspaceAssociationsT = Aws::Vector<WorkspaceAssociationSearchSummary>>
  void SetWorkspaceAssociations(WorkspaceAssociationsT&& value) {
    m_workspaceAssociationsHasBeenSet = true;
    m_workspaceAssociations = std::forward<WorkspaceAssociationsT>(value);
  }
  template <typename WorkspaceAssociationsT = Aws::Vector<WorkspaceAssociationSearchSummary>>
  SearchWorkspaceAssociationsResult& WithWorkspaceAssociations(WorkspaceAssociationsT&& value) {
    SetWorkspaceAssociations(std::forward<WorkspaceAssociationsT>(value));
    return *this;
  }
  template <typename WorkspaceAssociationsT = WorkspaceAssociationSearchSummary>
  SearchWorkspaceAssociationsResult& AddWorkspaceAssociations(WorkspaceAssociationsT&& value) {
    m_workspaceAssociationsHasBeenSet = true;
    m_workspaceAssociations.emplace_back(std::forward<WorkspaceAssociationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The approximate total number of workspace associations that match the search
   * criteria.</p>
   */
  inline long long GetApproximateTotalCount() const { return m_approximateTotalCount; }
  inline void SetApproximateTotalCount(long long value) {
    m_approximateTotalCountHasBeenSet = true;
    m_approximateTotalCount = value;
  }
  inline SearchWorkspaceAssociationsResult& WithApproximateTotalCount(long long value) {
    SetApproximateTotalCount(value);
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
  SearchWorkspaceAssociationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;

  Aws::Vector<WorkspaceAssociationSearchSummary> m_workspaceAssociations;

  long long m_approximateTotalCount{0};

  Aws::String m_requestId;
  bool m_nextTokenHasBeenSet = false;
  bool m_workspaceAssociationsHasBeenSet = false;
  bool m_approximateTotalCountHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
