/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elementalinference/ElementalInferenceRequest.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/DataSourceSport.h>
#include <aws/elementalinference/model/SearchFilter.h>

#include <utility>

namespace Aws {
namespace ElementalInference {
namespace Model {

/**
 */
class SearchFixturesRequest : public ElementalInferenceRequest {
 public:
  AWS_ELEMENTALINFERENCE_API SearchFixturesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SearchFixtures"; }

  AWS_ELEMENTALINFERENCE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The sport to search for fixtures. Valid values: basketball (search for
   * basketball fixtures), american-football (search for american-football fixtures).
   * </p>
   */
  inline DataSourceSport GetSport() const { return m_sport; }
  inline bool SportHasBeenSet() const { return m_sportHasBeenSet; }
  inline void SetSport(DataSourceSport value) {
    m_sportHasBeenSet = true;
    m_sport = value;
  }
  inline SearchFixturesRequest& WithSport(DataSourceSport value) {
    SetSport(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The first day of the search window, in UTC. The search includes fixtures that
   * are scheduled on this day. </p> <p>Specify the date in ISO 8601 format, as
   * <code>YYYY-MM-DD</code>. For example, 2026-03-14. </p>
   */
  inline const Aws::String& GetStartDate() const { return m_startDate; }
  inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
  template <typename StartDateT = Aws::String>
  void SetStartDate(StartDateT&& value) {
    m_startDateHasBeenSet = true;
    m_startDate = std::forward<StartDateT>(value);
  }
  template <typename StartDateT = Aws::String>
  SearchFixturesRequest& WithStartDate(StartDateT&& value) {
    SetStartDate(std::forward<StartDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The last day of the search window, in UTC. The search includes fixtures that
   * are scheduled on this day. Specify the date in ISO 8601 format, as
   * <code>YYYY-MM-DD</code>. </p> <p>If you omit this parameter, Elemental Inference
   * searches only the day that you specified in startDate. The window from startDate
   * through endDate must not exceed seven days. </p>
   */
  inline const Aws::String& GetEndDate() const { return m_endDate; }
  inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
  template <typename EndDateT = Aws::String>
  void SetEndDate(EndDateT&& value) {
    m_endDateHasBeenSet = true;
    m_endDate = std::forward<EndDateT>(value);
  }
  template <typename EndDateT = Aws::String>
  SearchFixturesRequest& WithEndDate(EndDateT&& value) {
    SetEndDate(std::forward<EndDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of filters that narrow the results. Each filter applies to one
   * dimension of a fixture, such as the competitor. You can specify up to 10
   * filters. </p> <p>A fixture must satisfy every filter in the array in order to
   * appear in the results. Within one filter, a fixture must match at least one of
   * the values. </p>
   */
  inline const Aws::Vector<SearchFilter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<SearchFilter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<SearchFilter>>
  SearchFixturesRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = SearchFilter>
  SearchFixturesRequest& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of fixtures to return for each API request.</p> <p>The
   * service might return fewer fixtures than the maxResults value. When more
   * fixtures match the search, the response also includes a nextToken value that you
   * can use to fetch the next batch of results. </p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline SearchFixturesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token that identifies the batch of results that you want to see.</p>
   * <p>For example, you submit a SearchFixtures request with maxResults set at 5.
   * The service returns the first batch of results (up to 5) and a nextToken value.
   * To see the next batch of results, you submit the SearchFixtures request a second
   * time, with the same search criteria, and specify the nextToken value. </p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  SearchFixturesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  DataSourceSport m_sport{DataSourceSport::NOT_SET};

  Aws::String m_startDate;

  Aws::String m_endDate;

  Aws::Vector<SearchFilter> m_filters;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_sportHasBeenSet = false;
  bool m_startDateHasBeenSet = false;
  bool m_endDateHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
