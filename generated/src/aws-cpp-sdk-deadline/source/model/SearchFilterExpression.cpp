/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/SearchFilterExpression.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/deadline/model/SearchGroupedFilterExpressions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

SearchFilterExpression::SearchFilterExpression() : 
    m_dateTimeFilterHasBeenSet(false),
    m_groupFilterHasBeenSet(false),
    m_parameterFilterHasBeenSet(false),
    m_searchTermFilterHasBeenSet(false),
    m_stringFilterHasBeenSet(false)
{
}

SearchFilterExpression::SearchFilterExpression(JsonView jsonValue) : 
    m_dateTimeFilterHasBeenSet(false),
    m_groupFilterHasBeenSet(false),
    m_parameterFilterHasBeenSet(false),
    m_searchTermFilterHasBeenSet(false),
    m_stringFilterHasBeenSet(false)
{
  *this = jsonValue;
}

const SearchGroupedFilterExpressions& SearchFilterExpression::GetGroupFilter() const{ return *m_groupFilter; }
bool SearchFilterExpression::GroupFilterHasBeenSet() const { return m_groupFilterHasBeenSet; }
void SearchFilterExpression::SetGroupFilter(const SearchGroupedFilterExpressions& value) { m_groupFilterHasBeenSet = true; m_groupFilter = Aws::MakeShared<SearchGroupedFilterExpressions>("SearchFilterExpression", value); }
void SearchFilterExpression::SetGroupFilter(SearchGroupedFilterExpressions&& value) { m_groupFilterHasBeenSet = true; m_groupFilter = Aws::MakeShared<SearchGroupedFilterExpressions>("SearchFilterExpression", std::move(value)); }
SearchFilterExpression& SearchFilterExpression::WithGroupFilter(const SearchGroupedFilterExpressions& value) { SetGroupFilter(value); return *this;}
SearchFilterExpression& SearchFilterExpression::WithGroupFilter(SearchGroupedFilterExpressions&& value) { SetGroupFilter(std::move(value)); return *this;}

SearchFilterExpression& SearchFilterExpression::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dateTimeFilter"))
  {
    m_dateTimeFilter = jsonValue.GetObject("dateTimeFilter");

    m_dateTimeFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("groupFilter"))
  {
    m_groupFilter = Aws::MakeShared<SearchGroupedFilterExpressions>("SearchFilterExpression", jsonValue.GetObject("groupFilter"));

    m_groupFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parameterFilter"))
  {
    m_parameterFilter = jsonValue.GetObject("parameterFilter");

    m_parameterFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("searchTermFilter"))
  {
    m_searchTermFilter = jsonValue.GetObject("searchTermFilter");

    m_searchTermFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stringFilter"))
  {
    m_stringFilter = jsonValue.GetObject("stringFilter");

    m_stringFilterHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchFilterExpression::Jsonize() const
{
  JsonValue payload;

  if(m_dateTimeFilterHasBeenSet)
  {
   payload.WithObject("dateTimeFilter", m_dateTimeFilter.Jsonize());

  }

  if(m_groupFilterHasBeenSet)
  {
   payload.WithObject("groupFilter", m_groupFilter->Jsonize());

  }

  if(m_parameterFilterHasBeenSet)
  {
   payload.WithObject("parameterFilter", m_parameterFilter.Jsonize());

  }

  if(m_searchTermFilterHasBeenSet)
  {
   payload.WithObject("searchTermFilter", m_searchTermFilter.Jsonize());

  }

  if(m_stringFilterHasBeenSet)
  {
   payload.WithObject("stringFilter", m_stringFilter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
