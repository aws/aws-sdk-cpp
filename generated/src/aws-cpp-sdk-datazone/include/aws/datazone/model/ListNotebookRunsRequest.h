/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/NotebookRunStatus.h>
#include <aws/datazone/model/SortOrder.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace DataZone {
namespace Model {

/**
 */
class ListNotebookRunsRequest : public DataZoneRequest {
 public:
  AWS_DATAZONE_API ListNotebookRunsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListNotebookRuns"; }

  AWS_DATAZONE_API Aws::String SerializePayload() const override;

  AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The identifier of the Amazon SageMaker Unified Studio domain in which to list
   * notebook runs.</p>
   */
  inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
  inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
  template <typename DomainIdentifierT = Aws::String>
  void SetDomainIdentifier(DomainIdentifierT&& value) {
    m_domainIdentifierHasBeenSet = true;
    m_domainIdentifier = std::forward<DomainIdentifierT>(value);
  }
  template <typename DomainIdentifierT = Aws::String>
  ListNotebookRunsRequest& WithDomainIdentifier(DomainIdentifierT&& value) {
    SetDomainIdentifier(std::forward<DomainIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the project that owns the notebook runs.</p>
   */
  inline const Aws::String& GetOwningProjectIdentifier() const { return m_owningProjectIdentifier; }
  inline bool OwningProjectIdentifierHasBeenSet() const { return m_owningProjectIdentifierHasBeenSet; }
  template <typename OwningProjectIdentifierT = Aws::String>
  void SetOwningProjectIdentifier(OwningProjectIdentifierT&& value) {
    m_owningProjectIdentifierHasBeenSet = true;
    m_owningProjectIdentifier = std::forward<OwningProjectIdentifierT>(value);
  }
  template <typename OwningProjectIdentifierT = Aws::String>
  ListNotebookRunsRequest& WithOwningProjectIdentifier(OwningProjectIdentifierT&& value) {
    SetOwningProjectIdentifier(std::forward<OwningProjectIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the notebook to filter runs by.</p>
   */
  inline const Aws::String& GetNotebookIdentifier() const { return m_notebookIdentifier; }
  inline bool NotebookIdentifierHasBeenSet() const { return m_notebookIdentifierHasBeenSet; }
  template <typename NotebookIdentifierT = Aws::String>
  void SetNotebookIdentifier(NotebookIdentifierT&& value) {
    m_notebookIdentifierHasBeenSet = true;
    m_notebookIdentifier = std::forward<NotebookIdentifierT>(value);
  }
  template <typename NotebookIdentifierT = Aws::String>
  ListNotebookRunsRequest& WithNotebookIdentifier(NotebookIdentifierT&& value) {
    SetNotebookIdentifier(std::forward<NotebookIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status to filter notebook runs by.</p>
   */
  inline NotebookRunStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(NotebookRunStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListNotebookRunsRequest& WithStatus(NotebookRunStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the schedule to filter notebook runs by.</p>
   */
  inline const Aws::String& GetScheduleIdentifier() const { return m_scheduleIdentifier; }
  inline bool ScheduleIdentifierHasBeenSet() const { return m_scheduleIdentifierHasBeenSet; }
  template <typename ScheduleIdentifierT = Aws::String>
  void SetScheduleIdentifier(ScheduleIdentifierT&& value) {
    m_scheduleIdentifierHasBeenSet = true;
    m_scheduleIdentifier = std::forward<ScheduleIdentifierT>(value);
  }
  template <typename ScheduleIdentifierT = Aws::String>
  ListNotebookRunsRequest& WithScheduleIdentifier(ScheduleIdentifierT&& value) {
    SetScheduleIdentifier(std::forward<ScheduleIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of notebook runs to return in a single call. When the
   * number of notebook runs exceeds the value of <code>MaxResults</code>, the
   * response contains a <code>NextToken</code> value.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListNotebookRunsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sort order for the results.</p>
   */
  inline SortOrder GetSortOrder() const { return m_sortOrder; }
  inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
  inline void SetSortOrder(SortOrder value) {
    m_sortOrderHasBeenSet = true;
    m_sortOrder = value;
  }
  inline ListNotebookRunsRequest& WithSortOrder(SortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the number of notebook runs is greater than the default value for the
   * <code>MaxResults</code> parameter, or if you explicitly specify a value for
   * <code>MaxResults</code> that is less than the number of notebook runs, the
   * response includes a pagination token named <code>NextToken</code>. You can
   * specify this <code>NextToken</code> value in a subsequent call to
   * <code>ListNotebookRuns</code> to list the next set of notebook runs.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListNotebookRunsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainIdentifier;

  Aws::String m_owningProjectIdentifier;

  Aws::String m_notebookIdentifier;

  NotebookRunStatus m_status{NotebookRunStatus::NOT_SET};

  Aws::String m_scheduleIdentifier;

  int m_maxResults{0};

  SortOrder m_sortOrder{SortOrder::NOT_SET};

  Aws::String m_nextToken;
  bool m_domainIdentifierHasBeenSet = false;
  bool m_owningProjectIdentifierHasBeenSet = false;
  bool m_notebookIdentifierHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_scheduleIdentifierHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_sortOrderHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
