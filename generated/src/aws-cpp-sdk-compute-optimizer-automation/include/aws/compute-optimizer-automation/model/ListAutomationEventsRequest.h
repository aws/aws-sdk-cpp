/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationRequest.h>
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/AutomationEventFilter.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {

/**
 */
class ListAutomationEventsRequest : public ComputeOptimizerAutomationRequest {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API ListAutomationEventsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListAutomationEvents"; }

  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::String SerializePayload() const override;

  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p> The filters to apply to the list of automation events. </p>
   */
  inline const Aws::Vector<AutomationEventFilter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<AutomationEventFilter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<AutomationEventFilter>>
  ListAutomationEventsRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = AutomationEventFilter>
  ListAutomationEventsRequest& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The start of the time range to query for events. </p>
   */
  inline const Aws::Utils::DateTime& GetStartTimeInclusive() const { return m_startTimeInclusive; }
  inline bool StartTimeInclusiveHasBeenSet() const { return m_startTimeInclusiveHasBeenSet; }
  template <typename StartTimeInclusiveT = Aws::Utils::DateTime>
  void SetStartTimeInclusive(StartTimeInclusiveT&& value) {
    m_startTimeInclusiveHasBeenSet = true;
    m_startTimeInclusive = std::forward<StartTimeInclusiveT>(value);
  }
  template <typename StartTimeInclusiveT = Aws::Utils::DateTime>
  ListAutomationEventsRequest& WithStartTimeInclusive(StartTimeInclusiveT&& value) {
    SetStartTimeInclusive(std::forward<StartTimeInclusiveT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The end of the time range to query for events. </p>
   */
  inline const Aws::Utils::DateTime& GetEndTimeExclusive() const { return m_endTimeExclusive; }
  inline bool EndTimeExclusiveHasBeenSet() const { return m_endTimeExclusiveHasBeenSet; }
  template <typename EndTimeExclusiveT = Aws::Utils::DateTime>
  void SetEndTimeExclusive(EndTimeExclusiveT&& value) {
    m_endTimeExclusiveHasBeenSet = true;
    m_endTimeExclusive = std::forward<EndTimeExclusiveT>(value);
  }
  template <typename EndTimeExclusiveT = Aws::Utils::DateTime>
  ListAutomationEventsRequest& WithEndTimeExclusive(EndTimeExclusiveT&& value) {
    SetEndTimeExclusive(std::forward<EndTimeExclusiveT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The maximum number of results to return in a single call. </p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListAutomationEventsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The token for the next page of results. </p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAutomationEventsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AutomationEventFilter> m_filters;
  bool m_filtersHasBeenSet = false;

  Aws::Utils::DateTime m_startTimeInclusive{};
  bool m_startTimeInclusiveHasBeenSet = false;

  Aws::Utils::DateTime m_endTimeExclusive{};
  bool m_endTimeExclusiveHasBeenSet = false;

  int m_maxResults{0};
  bool m_maxResultsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
