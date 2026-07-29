/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/SearchStatus.h>
#include <aws/iotsitewise/model/SearchType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {

/**
 * <p>A summary of a single search as returned by ListSearches.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/SearchSummary">AWS
 * API Reference</a></p>
 */
class SearchSummary {
 public:
  AWS_IOTSITEWISE_API SearchSummary() = default;
  AWS_IOTSITEWISE_API SearchSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API SearchSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the search.</p>
   */
  inline const Aws::String& GetSearchId() const { return m_searchId; }
  inline bool SearchIdHasBeenSet() const { return m_searchIdHasBeenSet; }
  template <typename SearchIdT = Aws::String>
  void SetSearchId(SearchIdT&& value) {
    m_searchIdHasBeenSet = true;
    m_searchId = std::forward<SearchIdT>(value);
  }
  template <typename SearchIdT = Aws::String>
  SearchSummary& WithSearchId(SearchIdT&& value) {
    SetSearchId(std::forward<SearchIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the workspace the search runs against.</p>
   */
  inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
  inline bool WorkspaceNameHasBeenSet() const { return m_workspaceNameHasBeenSet; }
  template <typename WorkspaceNameT = Aws::String>
  void SetWorkspaceName(WorkspaceNameT&& value) {
    m_workspaceNameHasBeenSet = true;
    m_workspaceName = std::forward<WorkspaceNameT>(value);
  }
  template <typename WorkspaceNameT = Aws::String>
  SearchSummary& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the search.</p>
   */
  inline SearchStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(SearchStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline SearchSummary& WithStatus(SearchStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The natural-language query that was submitted for the search.</p>
   */
  inline const Aws::String& GetQueryStatement() const { return m_queryStatement; }
  inline bool QueryStatementHasBeenSet() const { return m_queryStatementHasBeenSet; }
  template <typename QueryStatementT = Aws::String>
  void SetQueryStatement(QueryStatementT&& value) {
    m_queryStatementHasBeenSet = true;
    m_queryStatement = std::forward<QueryStatementT>(value);
  }
  template <typename QueryStatementT = Aws::String>
  SearchSummary& WithQueryStatement(QueryStatementT&& value) {
    SetQueryStatement(std::forward<QueryStatementT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The search strategy used for the search.</p>
   */
  inline SearchType GetSearchType() const { return m_searchType; }
  inline bool SearchTypeHasBeenSet() const { return m_searchTypeHasBeenSet; }
  inline void SetSearchType(SearchType value) {
    m_searchTypeHasBeenSet = true;
    m_searchType = value;
  }
  inline SearchSummary& WithSearchType(SearchType value) {
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
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  SearchSummary& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the search was started.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  SearchSummary& WithStartedAt(StartedAtT&& value) {
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
  inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
  template <typename GroupIdT = Aws::String>
  void SetGroupId(GroupIdT&& value) {
    m_groupIdHasBeenSet = true;
    m_groupId = std::forward<GroupIdT>(value);
  }
  template <typename GroupIdT = Aws::String>
  SearchSummary& WithGroupId(GroupIdT&& value) {
    SetGroupId(std::forward<GroupIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_searchId;

  Aws::String m_workspaceName;

  SearchStatus m_status{SearchStatus::NOT_SET};

  Aws::String m_queryStatement;

  SearchType m_searchType{SearchType::NOT_SET};

  Aws::String m_statusReason;

  Aws::Utils::DateTime m_startedAt{};

  Aws::String m_groupId;
  bool m_searchIdHasBeenSet = false;
  bool m_workspaceNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_queryStatementHasBeenSet = false;
  bool m_searchTypeHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_groupIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
