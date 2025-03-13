/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/SearchContactsMatchType.h>
#include <aws/connect/model/SearchableSegmentAttributesCriteria.h>
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
   * <p>The search criteria based on searchable segment attributes of a
   * contact</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchableSegmentAttributes">AWS
   * API Reference</a></p>
   */
  class SearchableSegmentAttributes
  {
  public:
    AWS_CONNECT_API SearchableSegmentAttributes() = default;
    AWS_CONNECT_API SearchableSegmentAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API SearchableSegmentAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of criteria based on searchable segment attributes.</p>
     */
    inline const Aws::Vector<SearchableSegmentAttributesCriteria>& GetCriteria() const { return m_criteria; }
    inline bool CriteriaHasBeenSet() const { return m_criteriaHasBeenSet; }
    template<typename CriteriaT = Aws::Vector<SearchableSegmentAttributesCriteria>>
    void SetCriteria(CriteriaT&& value) { m_criteriaHasBeenSet = true; m_criteria = std::forward<CriteriaT>(value); }
    template<typename CriteriaT = Aws::Vector<SearchableSegmentAttributesCriteria>>
    SearchableSegmentAttributes& WithCriteria(CriteriaT&& value) { SetCriteria(std::forward<CriteriaT>(value)); return *this;}
    template<typename CriteriaT = SearchableSegmentAttributesCriteria>
    SearchableSegmentAttributes& AddCriteria(CriteriaT&& value) { m_criteriaHasBeenSet = true; m_criteria.emplace_back(std::forward<CriteriaT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The match type combining search criteria using multiple searchable segment
     * attributes.</p>
     */
    inline SearchContactsMatchType GetMatchType() const { return m_matchType; }
    inline bool MatchTypeHasBeenSet() const { return m_matchTypeHasBeenSet; }
    inline void SetMatchType(SearchContactsMatchType value) { m_matchTypeHasBeenSet = true; m_matchType = value; }
    inline SearchableSegmentAttributes& WithMatchType(SearchContactsMatchType value) { SetMatchType(value); return *this;}
    ///@}
  private:

    Aws::Vector<SearchableSegmentAttributesCriteria> m_criteria;
    bool m_criteriaHasBeenSet = false;

    SearchContactsMatchType m_matchType{SearchContactsMatchType::NOT_SET};
    bool m_matchTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
