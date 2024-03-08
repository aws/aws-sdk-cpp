/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/Filter.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>A search filter clause in Amazon DataZone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/FilterClause">AWS
   * API Reference</a></p>
   */
  class FilterClause
  {
  public:
    AWS_DATAZONE_API FilterClause();
    AWS_DATAZONE_API FilterClause(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API FilterClause& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The 'and' search filter clause in Amazon DataZone.</p>
     */
    inline const Aws::Vector<FilterClause>& GetAnd() const{ return m_and; }

    /**
     * <p>The 'and' search filter clause in Amazon DataZone.</p>
     */
    inline bool AndHasBeenSet() const { return m_andHasBeenSet; }

    /**
     * <p>The 'and' search filter clause in Amazon DataZone.</p>
     */
    inline void SetAnd(const Aws::Vector<FilterClause>& value) { m_andHasBeenSet = true; m_and = value; }

    /**
     * <p>The 'and' search filter clause in Amazon DataZone.</p>
     */
    inline void SetAnd(Aws::Vector<FilterClause>&& value) { m_andHasBeenSet = true; m_and = std::move(value); }

    /**
     * <p>The 'and' search filter clause in Amazon DataZone.</p>
     */
    inline FilterClause& WithAnd(const Aws::Vector<FilterClause>& value) { SetAnd(value); return *this;}

    /**
     * <p>The 'and' search filter clause in Amazon DataZone.</p>
     */
    inline FilterClause& WithAnd(Aws::Vector<FilterClause>&& value) { SetAnd(std::move(value)); return *this;}

    /**
     * <p>The 'and' search filter clause in Amazon DataZone.</p>
     */
    inline FilterClause& AddAnd(const FilterClause& value) { m_andHasBeenSet = true; m_and.push_back(value); return *this; }

    /**
     * <p>The 'and' search filter clause in Amazon DataZone.</p>
     */
    inline FilterClause& AddAnd(FilterClause&& value) { m_andHasBeenSet = true; m_and.push_back(std::move(value)); return *this; }


    /**
     * <p>A search filter in Amazon DataZone.</p>
     */
    inline const Filter& GetFilter() const{ return m_filter; }

    /**
     * <p>A search filter in Amazon DataZone.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>A search filter in Amazon DataZone.</p>
     */
    inline void SetFilter(const Filter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>A search filter in Amazon DataZone.</p>
     */
    inline void SetFilter(Filter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>A search filter in Amazon DataZone.</p>
     */
    inline FilterClause& WithFilter(const Filter& value) { SetFilter(value); return *this;}

    /**
     * <p>A search filter in Amazon DataZone.</p>
     */
    inline FilterClause& WithFilter(Filter&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>The 'or' search filter clause in Amazon DataZone.</p>
     */
    inline const Aws::Vector<FilterClause>& GetOr() const{ return m_or; }

    /**
     * <p>The 'or' search filter clause in Amazon DataZone.</p>
     */
    inline bool OrHasBeenSet() const { return m_orHasBeenSet; }

    /**
     * <p>The 'or' search filter clause in Amazon DataZone.</p>
     */
    inline void SetOr(const Aws::Vector<FilterClause>& value) { m_orHasBeenSet = true; m_or = value; }

    /**
     * <p>The 'or' search filter clause in Amazon DataZone.</p>
     */
    inline void SetOr(Aws::Vector<FilterClause>&& value) { m_orHasBeenSet = true; m_or = std::move(value); }

    /**
     * <p>The 'or' search filter clause in Amazon DataZone.</p>
     */
    inline FilterClause& WithOr(const Aws::Vector<FilterClause>& value) { SetOr(value); return *this;}

    /**
     * <p>The 'or' search filter clause in Amazon DataZone.</p>
     */
    inline FilterClause& WithOr(Aws::Vector<FilterClause>&& value) { SetOr(std::move(value)); return *this;}

    /**
     * <p>The 'or' search filter clause in Amazon DataZone.</p>
     */
    inline FilterClause& AddOr(const FilterClause& value) { m_orHasBeenSet = true; m_or.push_back(value); return *this; }

    /**
     * <p>The 'or' search filter clause in Amazon DataZone.</p>
     */
    inline FilterClause& AddOr(FilterClause&& value) { m_orHasBeenSet = true; m_or.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<FilterClause> m_and;
    bool m_andHasBeenSet = false;

    Filter m_filter;
    bool m_filterHasBeenSet = false;

    Aws::Vector<FilterClause> m_or;
    bool m_orHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
