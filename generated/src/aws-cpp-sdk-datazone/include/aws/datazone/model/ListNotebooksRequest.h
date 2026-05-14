/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/NotebookStatus.h>
#include <aws/datazone/model/SortKey.h>
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
class ListNotebooksRequest : public DataZoneRequest {
 public:
  AWS_DATAZONE_API ListNotebooksRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListNotebooks"; }

  AWS_DATAZONE_API Aws::String SerializePayload() const override;

  AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The identifier of the Amazon SageMaker Unified Studio domain in which to list
   * notebooks.</p>
   */
  inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
  inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
  template <typename DomainIdentifierT = Aws::String>
  void SetDomainIdentifier(DomainIdentifierT&& value) {
    m_domainIdentifierHasBeenSet = true;
    m_domainIdentifier = std::forward<DomainIdentifierT>(value);
  }
  template <typename DomainIdentifierT = Aws::String>
  ListNotebooksRequest& WithDomainIdentifier(DomainIdentifierT&& value) {
    SetDomainIdentifier(std::forward<DomainIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the project that owns the notebooks.</p>
   */
  inline const Aws::String& GetOwningProjectIdentifier() const { return m_owningProjectIdentifier; }
  inline bool OwningProjectIdentifierHasBeenSet() const { return m_owningProjectIdentifierHasBeenSet; }
  template <typename OwningProjectIdentifierT = Aws::String>
  void SetOwningProjectIdentifier(OwningProjectIdentifierT&& value) {
    m_owningProjectIdentifierHasBeenSet = true;
    m_owningProjectIdentifier = std::forward<OwningProjectIdentifierT>(value);
  }
  template <typename OwningProjectIdentifierT = Aws::String>
  ListNotebooksRequest& WithOwningProjectIdentifier(OwningProjectIdentifierT&& value) {
    SetOwningProjectIdentifier(std::forward<OwningProjectIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of notebooks to return in a single call. When the number
   * of notebooks exceeds the value of <code>MaxResults</code>, the response contains
   * a <code>NextToken</code> value.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListNotebooksRequest& WithMaxResults(int value) {
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
  inline ListNotebooksRequest& WithSortOrder(SortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The field to sort the results by.</p>
   */
  inline SortKey GetSortBy() const { return m_sortBy; }
  inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
  inline void SetSortBy(SortKey value) {
    m_sortByHasBeenSet = true;
    m_sortBy = value;
  }
  inline ListNotebooksRequest& WithSortBy(SortKey value) {
    SetSortBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status to filter notebooks by.</p>
   */
  inline NotebookStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(NotebookStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListNotebooksRequest& WithStatus(NotebookStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the number of notebooks is greater than the default value for the
   * <code>MaxResults</code> parameter, or if you explicitly specify a value for
   * <code>MaxResults</code> that is less than the number of notebooks, the response
   * includes a pagination token named <code>NextToken</code>. You can specify this
   * <code>NextToken</code> value in a subsequent call to <code>ListNotebooks</code>
   * to list the next set of notebooks.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListNotebooksRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainIdentifier;

  Aws::String m_owningProjectIdentifier;

  int m_maxResults{0};

  SortOrder m_sortOrder{SortOrder::NOT_SET};

  SortKey m_sortBy{SortKey::NOT_SET};

  NotebookStatus m_status{NotebookStatus::NOT_SET};

  Aws::String m_nextToken;
  bool m_domainIdentifierHasBeenSet = false;
  bool m_owningProjectIdentifierHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_sortOrderHasBeenSet = false;
  bool m_sortByHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
