/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationRequest.h>
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/AutomationEventFilter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {

/**
 */
class ListAutomationEventSummariesRequest : public ComputeOptimizerAutomationRequest {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API ListAutomationEventSummariesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListAutomationEventSummaries"; }

  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::String SerializePayload() const override;

  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p> The filters to apply to the list of automation event summaries. </p>
   */
  inline const Aws::Vector<AutomationEventFilter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<AutomationEventFilter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<AutomationEventFilter>>
  ListAutomationEventSummariesRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = AutomationEventFilter>
  ListAutomationEventSummariesRequest& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start date for filtering automation event summaries, inclusive. Events
   * created on or after this date will be included.</p>
   */
  inline const Aws::String& GetStartDateInclusive() const { return m_startDateInclusive; }
  inline bool StartDateInclusiveHasBeenSet() const { return m_startDateInclusiveHasBeenSet; }
  template <typename StartDateInclusiveT = Aws::String>
  void SetStartDateInclusive(StartDateInclusiveT&& value) {
    m_startDateInclusiveHasBeenSet = true;
    m_startDateInclusive = std::forward<StartDateInclusiveT>(value);
  }
  template <typename StartDateInclusiveT = Aws::String>
  ListAutomationEventSummariesRequest& WithStartDateInclusive(StartDateInclusiveT&& value) {
    SetStartDateInclusive(std::forward<StartDateInclusiveT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end date for filtering automation event summaries, exclusive. Events
   * created before this date will be included.</p>
   */
  inline const Aws::String& GetEndDateExclusive() const { return m_endDateExclusive; }
  inline bool EndDateExclusiveHasBeenSet() const { return m_endDateExclusiveHasBeenSet; }
  template <typename EndDateExclusiveT = Aws::String>
  void SetEndDateExclusive(EndDateExclusiveT&& value) {
    m_endDateExclusiveHasBeenSet = true;
    m_endDateExclusive = std::forward<EndDateExclusiveT>(value);
  }
  template <typename EndDateExclusiveT = Aws::String>
  ListAutomationEventSummariesRequest& WithEndDateExclusive(EndDateExclusiveT&& value) {
    SetEndDateExclusive(std::forward<EndDateExclusiveT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of automation event summaries to return in a single
   * response. Valid range is 1-1000.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListAutomationEventSummariesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token used for pagination to retrieve the next set of results when the
   * response is truncated.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAutomationEventSummariesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AutomationEventFilter> m_filters;
  bool m_filtersHasBeenSet = false;

  Aws::String m_startDateInclusive;
  bool m_startDateInclusiveHasBeenSet = false;

  Aws::String m_endDateExclusive;
  bool m_endDateExclusiveHasBeenSet = false;

  int m_maxResults{0};
  bool m_maxResultsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
