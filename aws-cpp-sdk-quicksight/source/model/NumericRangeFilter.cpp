/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/NumericRangeFilter.h>
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

NumericRangeFilter::NumericRangeFilter() : 
    m_filterIdHasBeenSet(false),
    m_columnHasBeenSet(false),
    m_includeMinimum(false),
    m_includeMinimumHasBeenSet(false),
    m_includeMaximum(false),
    m_includeMaximumHasBeenSet(false),
    m_rangeMinimumHasBeenSet(false),
    m_rangeMaximumHasBeenSet(false),
    m_selectAllOptions(NumericFilterSelectAllOptions::NOT_SET),
    m_selectAllOptionsHasBeenSet(false),
    m_aggregationFunctionHasBeenSet(false),
    m_nullOption(FilterNullOption::NOT_SET),
    m_nullOptionHasBeenSet(false)
{
}

NumericRangeFilter::NumericRangeFilter(JsonView jsonValue) : 
    m_filterIdHasBeenSet(false),
    m_columnHasBeenSet(false),
    m_includeMinimum(false),
    m_includeMinimumHasBeenSet(false),
    m_includeMaximum(false),
    m_includeMaximumHasBeenSet(false),
    m_rangeMinimumHasBeenSet(false),
    m_rangeMaximumHasBeenSet(false),
    m_selectAllOptions(NumericFilterSelectAllOptions::NOT_SET),
    m_selectAllOptionsHasBeenSet(false),
    m_aggregationFunctionHasBeenSet(false),
    m_nullOption(FilterNullOption::NOT_SET),
    m_nullOptionHasBeenSet(false)
{
  *this = jsonValue;
}

NumericRangeFilter& NumericRangeFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FilterId"))
  {
    m_filterId = jsonValue.GetString("FilterId");

    m_filterIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Column"))
  {
    m_column = jsonValue.GetObject("Column");

    m_columnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeMinimum"))
  {
    m_includeMinimum = jsonValue.GetBool("IncludeMinimum");

    m_includeMinimumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeMaximum"))
  {
    m_includeMaximum = jsonValue.GetBool("IncludeMaximum");

    m_includeMaximumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RangeMinimum"))
  {
    m_rangeMinimum = jsonValue.GetObject("RangeMinimum");

    m_rangeMinimumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RangeMaximum"))
  {
    m_rangeMaximum = jsonValue.GetObject("RangeMaximum");

    m_rangeMaximumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelectAllOptions"))
  {
    m_selectAllOptions = NumericFilterSelectAllOptionsMapper::GetNumericFilterSelectAllOptionsForName(jsonValue.GetString("SelectAllOptions"));

    m_selectAllOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AggregationFunction"))
  {
    m_aggregationFunction = jsonValue.GetObject("AggregationFunction");

    m_aggregationFunctionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NullOption"))
  {
    m_nullOption = FilterNullOptionMapper::GetFilterNullOptionForName(jsonValue.GetString("NullOption"));

    m_nullOptionHasBeenSet = true;
  }

  return *this;
}

JsonValue NumericRangeFilter::Jsonize() const
{
  JsonValue payload;

  if(m_filterIdHasBeenSet)
  {
   payload.WithString("FilterId", m_filterId);

  }

  if(m_columnHasBeenSet)
  {
   payload.WithObject("Column", m_column.Jsonize());

  }

  if(m_includeMinimumHasBeenSet)
  {
   payload.WithBool("IncludeMinimum", m_includeMinimum);

  }

  if(m_includeMaximumHasBeenSet)
  {
   payload.WithBool("IncludeMaximum", m_includeMaximum);

  }

  if(m_rangeMinimumHasBeenSet)
  {
   payload.WithObject("RangeMinimum", m_rangeMinimum.Jsonize());

  }

  if(m_rangeMaximumHasBeenSet)
  {
   payload.WithObject("RangeMaximum", m_rangeMaximum.Jsonize());

  }

  if(m_selectAllOptionsHasBeenSet)
  {
   payload.WithString("SelectAllOptions", NumericFilterSelectAllOptionsMapper::GetNameForNumericFilterSelectAllOptions(m_selectAllOptions));
  }

  if(m_aggregationFunctionHasBeenSet)
  {
   payload.WithObject("AggregationFunction", m_aggregationFunction.Jsonize());

  }

  if(m_nullOptionHasBeenSet)
  {
   payload.WithString("NullOption", FilterNullOptionMapper::GetNameForFilterNullOption(m_nullOption));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
