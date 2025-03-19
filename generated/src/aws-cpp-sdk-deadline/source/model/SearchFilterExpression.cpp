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

SearchFilterExpression::SearchFilterExpression(JsonView jsonValue)
{
  *this = jsonValue;
}

SearchFilterExpression& SearchFilterExpression::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dateTimeFilter"))
  {
    m_dateTimeFilter = jsonValue.GetObject("dateTimeFilter");
    m_dateTimeFilterHasBeenSet = true;
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
  if(jsonValue.ValueExists("groupFilter"))
  {
    m_groupFilter = Aws::MakeShared<SearchGroupedFilterExpressions>("SearchFilterExpression", jsonValue.GetObject("groupFilter"));
    m_groupFilterHasBeenSet = true;
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

  if(m_groupFilterHasBeenSet)
  {
   payload.WithObject("groupFilter", m_groupFilter->Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
