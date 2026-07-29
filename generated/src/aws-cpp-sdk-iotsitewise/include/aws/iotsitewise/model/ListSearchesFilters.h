/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
 * <p>Optional filters for ListSearches. When multiple filters are set, a search
 * must match all of them.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListSearchesFilters">AWS
 * API Reference</a></p>
 */
class ListSearchesFilters {
 public:
  AWS_IOTSITEWISE_API ListSearchesFilters() = default;
  AWS_IOTSITEWISE_API ListSearchesFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API ListSearchesFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Returns only searches whose status is one of the listed values.</p>
   */
  inline const Aws::Vector<SearchStatus>& GetStatusFilter() const { return m_statusFilter; }
  inline bool StatusFilterHasBeenSet() const { return m_statusFilterHasBeenSet; }
  template <typename StatusFilterT = Aws::Vector<SearchStatus>>
  void SetStatusFilter(StatusFilterT&& value) {
    m_statusFilterHasBeenSet = true;
    m_statusFilter = std::forward<StatusFilterT>(value);
  }
  template <typename StatusFilterT = Aws::Vector<SearchStatus>>
  ListSearchesFilters& WithStatusFilter(StatusFilterT&& value) {
    SetStatusFilter(std::forward<StatusFilterT>(value));
    return *this;
  }
  inline ListSearchesFilters& AddStatusFilter(SearchStatus value) {
    m_statusFilterHasBeenSet = true;
    m_statusFilter.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns only searches started at or after this time.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAfter() const { return m_startedAfter; }
  inline bool StartedAfterHasBeenSet() const { return m_startedAfterHasBeenSet; }
  template <typename StartedAfterT = Aws::Utils::DateTime>
  void SetStartedAfter(StartedAfterT&& value) {
    m_startedAfterHasBeenSet = true;
    m_startedAfter = std::forward<StartedAfterT>(value);
  }
  template <typename StartedAfterT = Aws::Utils::DateTime>
  ListSearchesFilters& WithStartedAfter(StartedAfterT&& value) {
    SetStartedAfter(std::forward<StartedAfterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns only searches started at or before this time.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedBefore() const { return m_startedBefore; }
  inline bool StartedBeforeHasBeenSet() const { return m_startedBeforeHasBeenSet; }
  template <typename StartedBeforeT = Aws::Utils::DateTime>
  void SetStartedBefore(StartedBeforeT&& value) {
    m_startedBeforeHasBeenSet = true;
    m_startedBefore = std::forward<StartedBeforeT>(value);
  }
  template <typename StartedBeforeT = Aws::Utils::DateTime>
  ListSearchesFilters& WithStartedBefore(StartedBeforeT&& value) {
    SetStartedBefore(std::forward<StartedBeforeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns only searches whose <code>groupId</code> is one of the listed
   * values.</p>
   */
  inline const Aws::Vector<Aws::String>& GetGroupIdFilter() const { return m_groupIdFilter; }
  inline bool GroupIdFilterHasBeenSet() const { return m_groupIdFilterHasBeenSet; }
  template <typename GroupIdFilterT = Aws::Vector<Aws::String>>
  void SetGroupIdFilter(GroupIdFilterT&& value) {
    m_groupIdFilterHasBeenSet = true;
    m_groupIdFilter = std::forward<GroupIdFilterT>(value);
  }
  template <typename GroupIdFilterT = Aws::Vector<Aws::String>>
  ListSearchesFilters& WithGroupIdFilter(GroupIdFilterT&& value) {
    SetGroupIdFilter(std::forward<GroupIdFilterT>(value));
    return *this;
  }
  template <typename GroupIdFilterT = Aws::String>
  ListSearchesFilters& AddGroupIdFilter(GroupIdFilterT&& value) {
    m_groupIdFilterHasBeenSet = true;
    m_groupIdFilter.emplace_back(std::forward<GroupIdFilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns only searches whose <code>searchType</code> is one of the listed
   * values.</p>
   */
  inline const Aws::Vector<SearchType>& GetSearchTypeFilter() const { return m_searchTypeFilter; }
  inline bool SearchTypeFilterHasBeenSet() const { return m_searchTypeFilterHasBeenSet; }
  template <typename SearchTypeFilterT = Aws::Vector<SearchType>>
  void SetSearchTypeFilter(SearchTypeFilterT&& value) {
    m_searchTypeFilterHasBeenSet = true;
    m_searchTypeFilter = std::forward<SearchTypeFilterT>(value);
  }
  template <typename SearchTypeFilterT = Aws::Vector<SearchType>>
  ListSearchesFilters& WithSearchTypeFilter(SearchTypeFilterT&& value) {
    SetSearchTypeFilter(std::forward<SearchTypeFilterT>(value));
    return *this;
  }
  inline ListSearchesFilters& AddSearchTypeFilter(SearchType value) {
    m_searchTypeFilterHasBeenSet = true;
    m_searchTypeFilter.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<SearchStatus> m_statusFilter;

  Aws::Utils::DateTime m_startedAfter{};

  Aws::Utils::DateTime m_startedBefore{};

  Aws::Vector<Aws::String> m_groupIdFilter;

  Aws::Vector<SearchType> m_searchTypeFilter;
  bool m_statusFilterHasBeenSet = false;
  bool m_startedAfterHasBeenSet = false;
  bool m_startedBeforeHasBeenSet = false;
  bool m_groupIdFilterHasBeenSet = false;
  bool m_searchTypeFilterHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
