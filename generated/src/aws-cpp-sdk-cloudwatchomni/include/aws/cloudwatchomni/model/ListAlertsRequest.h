/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmniRequest.h>
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/AlertFilterCriteria.h>
#include <aws/cloudwatchomni/model/AlertSortField.h>
#include <aws/cloudwatchomni/model/AlertSortOrder.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {

/**
 */
class ListAlertsRequest : public CloudWatchOmniRequest {
 public:
  AWS_CLOUDWATCHOMNI_API ListAlertsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListAlerts"; }

  AWS_CLOUDWATCHOMNI_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHOMNI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique ID of the space.</p>
   */
  inline const Aws::String& GetSpaceId() const { return m_spaceId; }
  inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }
  template <typename SpaceIdT = Aws::String>
  void SetSpaceId(SpaceIdT&& value) {
    m_spaceIdHasBeenSet = true;
    m_spaceId = std::forward<SpaceIdT>(value);
  }
  template <typename SpaceIdT = Aws::String>
  ListAlertsRequest& WithSpaceId(SpaceIdT&& value) {
    SetSpaceId(std::forward<SpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria narrowing which alerts are returned. All members are
   * optional; the three name/id filters are mutually exclusive.</p>
   */
  inline const AlertFilterCriteria& GetFilterCriteria() const { return m_filterCriteria; }
  inline bool FilterCriteriaHasBeenSet() const { return m_filterCriteriaHasBeenSet; }
  template <typename FilterCriteriaT = AlertFilterCriteria>
  void SetFilterCriteria(FilterCriteriaT&& value) {
    m_filterCriteriaHasBeenSet = true;
    m_filterCriteria = std::forward<FilterCriteriaT>(value);
  }
  template <typename FilterCriteriaT = AlertFilterCriteria>
  ListAlertsRequest& WithFilterCriteria(FilterCriteriaT&& value) {
    SetFilterCriteria(std::forward<FilterCriteriaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The field to sort results by.</p>
   */
  inline AlertSortField GetSortBy() const { return m_sortBy; }
  inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
  inline void SetSortBy(AlertSortField value) {
    m_sortByHasBeenSet = true;
    m_sortBy = value;
  }
  inline ListAlertsRequest& WithSortBy(AlertSortField value) {
    SetSortBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The order in which to sort results.</p>
   */
  inline AlertSortOrder GetSortOrder() const { return m_sortOrder; }
  inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
  inline void SetSortOrder(AlertSortOrder value) {
    m_sortOrderHasBeenSet = true;
    m_sortOrder = value;
  }
  inline ListAlertsRequest& WithSortOrder(AlertSortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token to retrieve the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAlertsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of alerts to return per page.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListAlertsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_spaceId;

  AlertFilterCriteria m_filterCriteria;

  AlertSortField m_sortBy{AlertSortField::NOT_SET};

  AlertSortOrder m_sortOrder{AlertSortOrder::NOT_SET};

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_spaceIdHasBeenSet = false;
  bool m_filterCriteriaHasBeenSet = false;
  bool m_sortByHasBeenSet = false;
  bool m_sortOrderHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
