/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/SearchStatus.h>
#include <aws/iotsitewise/model/SearchType.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {
/**
 * <p>Output of the DescribeSearch operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeSearchResponse">AWS
 * API Reference</a></p>
 */
class DescribeSearchResult {
 public:
  AWS_IOTSITEWISE_API DescribeSearchResult() = default;
  AWS_IOTSITEWISE_API DescribeSearchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IOTSITEWISE_API DescribeSearchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the search.</p>
   */
  inline const Aws::String& GetSearchId() const { return m_searchId; }
  template <typename SearchIdT = Aws::String>
  void SetSearchId(SearchIdT&& value) {
    m_searchIdHasBeenSet = true;
    m_searchId = std::forward<SearchIdT>(value);
  }
  template <typename SearchIdT = Aws::String>
  DescribeSearchResult& WithSearchId(SearchIdT&& value) {
    SetSearchId(std::forward<SearchIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the workspace the search runs against.</p>
   */
  inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
  template <typename WorkspaceNameT = Aws::String>
  void SetWorkspaceName(WorkspaceNameT&& value) {
    m_workspaceNameHasBeenSet = true;
    m_workspaceName = std::forward<WorkspaceNameT>(value);
  }
  template <typename WorkspaceNameT = Aws::String>
  DescribeSearchResult& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the search.</p>
   */
  inline SearchStatus GetStatus() const { return m_status; }
  inline void SetStatus(SearchStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DescribeSearchResult& WithStatus(SearchStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The natural-language query that was submitted for the search.</p>
   */
  inline const Aws::String& GetQueryStatement() const { return m_queryStatement; }
  template <typename QueryStatementT = Aws::String>
  void SetQueryStatement(QueryStatementT&& value) {
    m_queryStatementHasBeenSet = true;
    m_queryStatement = std::forward<QueryStatementT>(value);
  }
  template <typename QueryStatementT = Aws::String>
  DescribeSearchResult& WithQueryStatement(QueryStatementT&& value) {
    SetQueryStatement(std::forward<QueryStatementT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The search strategy used for the search.</p>
   */
  inline SearchType GetSearchType() const { return m_searchType; }
  inline void SetSearchType(SearchType value) {
    m_searchTypeHasBeenSet = true;
    m_searchType = value;
  }
  inline DescribeSearchResult& WithSearchType(SearchType value) {
    SetSearchType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable explanation of the current status. Populated when the search
   * has <code>FAILED</code>.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  DescribeSearchResult& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the search was started.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  DescribeSearchResult& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The group identifier associated with the search, if one was supplied on the
   * request.</p>
   */
  inline const Aws::String& GetGroupId() const { return m_groupId; }
  template <typename GroupIdT = Aws::String>
  void SetGroupId(GroupIdT&& value) {
    m_groupIdHasBeenSet = true;
    m_groupId = std::forward<GroupIdT>(value);
  }
  template <typename GroupIdT = Aws::String>
  DescribeSearchResult& WithGroupId(GroupIdT&& value) {
    SetGroupId(std::forward<GroupIdT>(value));
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
  DescribeSearchResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_searchId;

  Aws::String m_workspaceName;

  SearchStatus m_status{SearchStatus::NOT_SET};

  Aws::String m_queryStatement;

  SearchType m_searchType{SearchType::NOT_SET};

  Aws::String m_statusReason;

  Aws::Utils::DateTime m_startedAt{};

  Aws::String m_groupId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_searchIdHasBeenSet = false;
  bool m_workspaceNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_queryStatementHasBeenSet = false;
  bool m_searchTypeHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_groupIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
