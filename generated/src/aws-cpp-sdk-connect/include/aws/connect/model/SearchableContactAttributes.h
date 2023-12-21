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
   * <p>A structure that defines searchable contact attributes which can be used to
   * filter search results. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchableContactAttributes">AWS
   * API Reference</a></p>
   */
  class SearchableContactAttributes
  {
  public:
    AWS_CONNECT_API SearchableContactAttributes();
    AWS_CONNECT_API SearchableContactAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API SearchableContactAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The array of searhale contact attribute criteria</p>
     */
    inline const Aws::Vector<SearchableContactAttributesCriteria>& GetCriteria() const{ return m_criteria; }

    /**
     * <p>The array of searhale contact attribute criteria</p>
     */
    inline bool CriteriaHasBeenSet() const { return m_criteriaHasBeenSet; }

    /**
     * <p>The array of searhale contact attribute criteria</p>
     */
    inline void SetCriteria(const Aws::Vector<SearchableContactAttributesCriteria>& value) { m_criteriaHasBeenSet = true; m_criteria = value; }

    /**
     * <p>The array of searhale contact attribute criteria</p>
     */
    inline void SetCriteria(Aws::Vector<SearchableContactAttributesCriteria>&& value) { m_criteriaHasBeenSet = true; m_criteria = std::move(value); }

    /**
     * <p>The array of searhale contact attribute criteria</p>
     */
    inline SearchableContactAttributes& WithCriteria(const Aws::Vector<SearchableContactAttributesCriteria>& value) { SetCriteria(value); return *this;}

    /**
     * <p>The array of searhale contact attribute criteria</p>
     */
    inline SearchableContactAttributes& WithCriteria(Aws::Vector<SearchableContactAttributesCriteria>&& value) { SetCriteria(std::move(value)); return *this;}

    /**
     * <p>The array of searhale contact attribute criteria</p>
     */
    inline SearchableContactAttributes& AddCriteria(const SearchableContactAttributesCriteria& value) { m_criteriaHasBeenSet = true; m_criteria.push_back(value); return *this; }

    /**
     * <p>The array of searhale contact attribute criteria</p>
     */
    inline SearchableContactAttributes& AddCriteria(SearchableContactAttributesCriteria&& value) { m_criteriaHasBeenSet = true; m_criteria.push_back(std::move(value)); return *this; }


    /**
     * <p>The match type of multiple searchable contact attributes criteria.</p>
     */
    inline const SearchContactsMatchType& GetMatchType() const{ return m_matchType; }

    /**
     * <p>The match type of multiple searchable contact attributes criteria.</p>
     */
    inline bool MatchTypeHasBeenSet() const { return m_matchTypeHasBeenSet; }

    /**
     * <p>The match type of multiple searchable contact attributes criteria.</p>
     */
    inline void SetMatchType(const SearchContactsMatchType& value) { m_matchTypeHasBeenSet = true; m_matchType = value; }

    /**
     * <p>The match type of multiple searchable contact attributes criteria.</p>
     */
    inline void SetMatchType(SearchContactsMatchType&& value) { m_matchTypeHasBeenSet = true; m_matchType = std::move(value); }

    /**
     * <p>The match type of multiple searchable contact attributes criteria.</p>
     */
    inline SearchableContactAttributes& WithMatchType(const SearchContactsMatchType& value) { SetMatchType(value); return *this;}

    /**
     * <p>The match type of multiple searchable contact attributes criteria.</p>
     */
    inline SearchableContactAttributes& WithMatchType(SearchContactsMatchType&& value) { SetMatchType(std::move(value)); return *this;}

  private:

    Aws::Vector<SearchableContactAttributesCriteria> m_criteria;
    bool m_criteriaHasBeenSet = false;

    SearchContactsMatchType m_matchType;
    bool m_matchTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
