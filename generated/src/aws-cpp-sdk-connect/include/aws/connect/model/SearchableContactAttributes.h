/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/SearchContactsMatchType.h>
#include <aws/connect/model/SearchableContactAttributesCriteria.h>
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
   * <p>A structure that defines search criteria based on user-defined contact
   * attributes that are configured for contact search.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchableContactAttributes">AWS
   * API Reference</a></p>
   */
  class SearchableContactAttributes
  {
  public:
    AWS_CONNECT_API SearchableContactAttributes() = default;
    AWS_CONNECT_API SearchableContactAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API SearchableContactAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of criteria based on user-defined contact attributes that are
     * configured for contact search.</p>
     */
    inline const Aws::Vector<SearchableContactAttributesCriteria>& GetCriteria() const { return m_criteria; }
    inline bool CriteriaHasBeenSet() const { return m_criteriaHasBeenSet; }
    template<typename CriteriaT = Aws::Vector<SearchableContactAttributesCriteria>>
    void SetCriteria(CriteriaT&& value) { m_criteriaHasBeenSet = true; m_criteria = std::forward<CriteriaT>(value); }
    template<typename CriteriaT = Aws::Vector<SearchableContactAttributesCriteria>>
    SearchableContactAttributes& WithCriteria(CriteriaT&& value) { SetCriteria(std::forward<CriteriaT>(value)); return *this;}
    template<typename CriteriaT = SearchableContactAttributesCriteria>
    SearchableContactAttributes& AddCriteria(CriteriaT&& value) { m_criteriaHasBeenSet = true; m_criteria.emplace_back(std::forward<CriteriaT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The match type combining search criteria using multiple searchable contact
     * attributes.</p>
     */
    inline SearchContactsMatchType GetMatchType() const { return m_matchType; }
    inline bool MatchTypeHasBeenSet() const { return m_matchTypeHasBeenSet; }
    inline void SetMatchType(SearchContactsMatchType value) { m_matchTypeHasBeenSet = true; m_matchType = value; }
    inline SearchableContactAttributes& WithMatchType(SearchContactsMatchType value) { SetMatchType(value); return *this;}
    ///@}
  private:

    Aws::Vector<SearchableContactAttributesCriteria> m_criteria;
    bool m_criteriaHasBeenSet = false;

    SearchContactsMatchType m_matchType{SearchContactsMatchType::NOT_SET};
    bool m_matchTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
