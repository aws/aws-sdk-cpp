/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/SearchContactsMatchType.h>
#include <aws/connect/model/SearchContactsAdditionalTimeRangeCriteria.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Connect
{
namespace Model
{

  /**
   * <p>Time range that you additionally want to filter on.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchContactsAdditionalTimeRange">AWS
   * API Reference</a></p>
   */
  class SearchContactsAdditionalTimeRange
  {
  public:
    AWS_CONNECT_API SearchContactsAdditionalTimeRange() = default;
    AWS_CONNECT_API SearchContactsAdditionalTimeRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API SearchContactsAdditionalTimeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of criteria of the time range to additionally filter on.</p>
     */
    inline const Aws::Vector<SearchContactsAdditionalTimeRangeCriteria>& GetCriteria() const { return m_criteria; }
    inline bool CriteriaHasBeenSet() const { return m_criteriaHasBeenSet; }
    template<typename CriteriaT = Aws::Vector<SearchContactsAdditionalTimeRangeCriteria>>
    void SetCriteria(CriteriaT&& value) { m_criteriaHasBeenSet = true; m_criteria = std::forward<CriteriaT>(value); }
    template<typename CriteriaT = Aws::Vector<SearchContactsAdditionalTimeRangeCriteria>>
    SearchContactsAdditionalTimeRange& WithCriteria(CriteriaT&& value) { SetCriteria(std::forward<CriteriaT>(value)); return *this;}
    template<typename CriteriaT = SearchContactsAdditionalTimeRangeCriteria>
    SearchContactsAdditionalTimeRange& AddCriteria(CriteriaT&& value) { m_criteriaHasBeenSet = true; m_criteria.emplace_back(std::forward<CriteriaT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The match type combining multiple time range filters.</p>
     */
    inline SearchContactsMatchType GetMatchType() const { return m_matchType; }
    inline bool MatchTypeHasBeenSet() const { return m_matchTypeHasBeenSet; }
    inline void SetMatchType(SearchContactsMatchType value) { m_matchTypeHasBeenSet = true; m_matchType = value; }
    inline SearchContactsAdditionalTimeRange& WithMatchType(SearchContactsMatchType value) { SetMatchType(value); return *this;}
    ///@}
  private:

    Aws::Vector<SearchContactsAdditionalTimeRangeCriteria> m_criteria;
    bool m_criteriaHasBeenSet = false;

    SearchContactsMatchType m_matchType{SearchContactsMatchType::NOT_SET};
    bool m_matchTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
