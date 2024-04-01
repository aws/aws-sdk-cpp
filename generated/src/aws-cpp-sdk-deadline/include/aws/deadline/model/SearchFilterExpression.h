/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/DateTimeFilterExpression.h>
#include <aws/deadline/model/ParameterFilterExpression.h>
#include <aws/deadline/model/SearchTermFilterExpression.h>
#include <aws/deadline/model/StringFilterExpression.h>
#include <utility>
#include <memory>

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
namespace deadline
{
namespace Model
{
  class SearchGroupedFilterExpressions;

  /**
   * <p>The type of search filter to apply.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/SearchFilterExpression">AWS
   * API Reference</a></p>
   */
  class SearchFilterExpression
  {
  public:
    AWS_DEADLINE_API SearchFilterExpression();
    AWS_DEADLINE_API SearchFilterExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API SearchFilterExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Filters based on date and time.</p>
     */
    inline const DateTimeFilterExpression& GetDateTimeFilter() const{ return m_dateTimeFilter; }

    /**
     * <p>Filters based on date and time.</p>
     */
    inline bool DateTimeFilterHasBeenSet() const { return m_dateTimeFilterHasBeenSet; }

    /**
     * <p>Filters based on date and time.</p>
     */
    inline void SetDateTimeFilter(const DateTimeFilterExpression& value) { m_dateTimeFilterHasBeenSet = true; m_dateTimeFilter = value; }

    /**
     * <p>Filters based on date and time.</p>
     */
    inline void SetDateTimeFilter(DateTimeFilterExpression&& value) { m_dateTimeFilterHasBeenSet = true; m_dateTimeFilter = std::move(value); }

    /**
     * <p>Filters based on date and time.</p>
     */
    inline SearchFilterExpression& WithDateTimeFilter(const DateTimeFilterExpression& value) { SetDateTimeFilter(value); return *this;}

    /**
     * <p>Filters based on date and time.</p>
     */
    inline SearchFilterExpression& WithDateTimeFilter(DateTimeFilterExpression&& value) { SetDateTimeFilter(std::move(value)); return *this;}


    /**
     * <p>Filters by group.</p>
     */
    AWS_DEADLINE_API const SearchGroupedFilterExpressions& GetGroupFilter() const;

    /**
     * <p>Filters by group.</p>
     */
    AWS_DEADLINE_API bool GroupFilterHasBeenSet() const;

    /**
     * <p>Filters by group.</p>
     */
    AWS_DEADLINE_API void SetGroupFilter(const SearchGroupedFilterExpressions& value);

    /**
     * <p>Filters by group.</p>
     */
    AWS_DEADLINE_API void SetGroupFilter(SearchGroupedFilterExpressions&& value);

    /**
     * <p>Filters by group.</p>
     */
    AWS_DEADLINE_API SearchFilterExpression& WithGroupFilter(const SearchGroupedFilterExpressions& value);

    /**
     * <p>Filters by group.</p>
     */
    AWS_DEADLINE_API SearchFilterExpression& WithGroupFilter(SearchGroupedFilterExpressions&& value);


    /**
     * <p>Filters by parameter.</p>
     */
    inline const ParameterFilterExpression& GetParameterFilter() const{ return m_parameterFilter; }

    /**
     * <p>Filters by parameter.</p>
     */
    inline bool ParameterFilterHasBeenSet() const { return m_parameterFilterHasBeenSet; }

    /**
     * <p>Filters by parameter.</p>
     */
    inline void SetParameterFilter(const ParameterFilterExpression& value) { m_parameterFilterHasBeenSet = true; m_parameterFilter = value; }

    /**
     * <p>Filters by parameter.</p>
     */
    inline void SetParameterFilter(ParameterFilterExpression&& value) { m_parameterFilterHasBeenSet = true; m_parameterFilter = std::move(value); }

    /**
     * <p>Filters by parameter.</p>
     */
    inline SearchFilterExpression& WithParameterFilter(const ParameterFilterExpression& value) { SetParameterFilter(value); return *this;}

    /**
     * <p>Filters by parameter.</p>
     */
    inline SearchFilterExpression& WithParameterFilter(ParameterFilterExpression&& value) { SetParameterFilter(std::move(value)); return *this;}


    /**
     * <p>Filters by a specified search term.</p>
     */
    inline const SearchTermFilterExpression& GetSearchTermFilter() const{ return m_searchTermFilter; }

    /**
     * <p>Filters by a specified search term.</p>
     */
    inline bool SearchTermFilterHasBeenSet() const { return m_searchTermFilterHasBeenSet; }

    /**
     * <p>Filters by a specified search term.</p>
     */
    inline void SetSearchTermFilter(const SearchTermFilterExpression& value) { m_searchTermFilterHasBeenSet = true; m_searchTermFilter = value; }

    /**
     * <p>Filters by a specified search term.</p>
     */
    inline void SetSearchTermFilter(SearchTermFilterExpression&& value) { m_searchTermFilterHasBeenSet = true; m_searchTermFilter = std::move(value); }

    /**
     * <p>Filters by a specified search term.</p>
     */
    inline SearchFilterExpression& WithSearchTermFilter(const SearchTermFilterExpression& value) { SetSearchTermFilter(value); return *this;}

    /**
     * <p>Filters by a specified search term.</p>
     */
    inline SearchFilterExpression& WithSearchTermFilter(SearchTermFilterExpression&& value) { SetSearchTermFilter(std::move(value)); return *this;}


    /**
     * <p>Filters by a string.</p>
     */
    inline const StringFilterExpression& GetStringFilter() const{ return m_stringFilter; }

    /**
     * <p>Filters by a string.</p>
     */
    inline bool StringFilterHasBeenSet() const { return m_stringFilterHasBeenSet; }

    /**
     * <p>Filters by a string.</p>
     */
    inline void SetStringFilter(const StringFilterExpression& value) { m_stringFilterHasBeenSet = true; m_stringFilter = value; }

    /**
     * <p>Filters by a string.</p>
     */
    inline void SetStringFilter(StringFilterExpression&& value) { m_stringFilterHasBeenSet = true; m_stringFilter = std::move(value); }

    /**
     * <p>Filters by a string.</p>
     */
    inline SearchFilterExpression& WithStringFilter(const StringFilterExpression& value) { SetStringFilter(value); return *this;}

    /**
     * <p>Filters by a string.</p>
     */
    inline SearchFilterExpression& WithStringFilter(StringFilterExpression&& value) { SetStringFilter(std::move(value)); return *this;}

  private:

    DateTimeFilterExpression m_dateTimeFilter;
    bool m_dateTimeFilterHasBeenSet = false;

    std::shared_ptr<SearchGroupedFilterExpressions> m_groupFilter;
    bool m_groupFilterHasBeenSet = false;

    ParameterFilterExpression m_parameterFilter;
    bool m_parameterFilterHasBeenSet = false;

    SearchTermFilterExpression m_searchTermFilter;
    bool m_searchTermFilterHasBeenSet = false;

    StringFilterExpression m_stringFilter;
    bool m_stringFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
