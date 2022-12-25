/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DrillDownFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

DrillDownFilter::DrillDownFilter() : 
    m_numericEqualityFilterHasBeenSet(false),
    m_categoryFilterHasBeenSet(false),
    m_timeRangeFilterHasBeenSet(false)
{
}

DrillDownFilter::DrillDownFilter(JsonView jsonValue) : 
    m_numericEqualityFilterHasBeenSet(false),
    m_categoryFilterHasBeenSet(false),
    m_timeRangeFilterHasBeenSet(false)
{
  *this = jsonValue;
}

DrillDownFilter& DrillDownFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NumericEqualityFilter"))
  {
    m_numericEqualityFilter = jsonValue.GetObject("NumericEqualityFilter");

    m_numericEqualityFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CategoryFilter"))
  {
    m_categoryFilter = jsonValue.GetObject("CategoryFilter");

    m_categoryFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeRangeFilter"))
  {
    m_timeRangeFilter = jsonValue.GetObject("TimeRangeFilter");

    m_timeRangeFilterHasBeenSet = true;
  }

  return *this;
}

JsonValue DrillDownFilter::Jsonize() const
{
  JsonValue payload;

  if(m_numericEqualityFilterHasBeenSet)
  {
   payload.WithObject("NumericEqualityFilter", m_numericEqualityFilter.Jsonize());

  }

  if(m_categoryFilterHasBeenSet)
  {
   payload.WithObject("CategoryFilter", m_categoryFilter.Jsonize());

  }

  if(m_timeRangeFilterHasBeenSet)
  {
   payload.WithObject("TimeRangeFilter", m_timeRangeFilter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
