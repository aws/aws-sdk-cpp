/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TimeEqualityFilter.h>
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

TimeEqualityFilter::TimeEqualityFilter() : 
    m_filterIdHasBeenSet(false),
    m_columnHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_parameterNameHasBeenSet(false),
    m_timeGranularity(TimeGranularity::NOT_SET),
    m_timeGranularityHasBeenSet(false)
{
}

TimeEqualityFilter::TimeEqualityFilter(JsonView jsonValue) : 
    m_filterIdHasBeenSet(false),
    m_columnHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_parameterNameHasBeenSet(false),
    m_timeGranularity(TimeGranularity::NOT_SET),
    m_timeGranularityHasBeenSet(false)
{
  *this = jsonValue;
}

TimeEqualityFilter& TimeEqualityFilter::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetDouble("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParameterName"))
  {
    m_parameterName = jsonValue.GetString("ParameterName");

    m_parameterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeGranularity"))
  {
    m_timeGranularity = TimeGranularityMapper::GetTimeGranularityForName(jsonValue.GetString("TimeGranularity"));

    m_timeGranularityHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeEqualityFilter::Jsonize() const
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

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("Value", m_value.SecondsWithMSPrecision());
  }

  if(m_parameterNameHasBeenSet)
  {
   payload.WithString("ParameterName", m_parameterName);

  }

  if(m_timeGranularityHasBeenSet)
  {
   payload.WithString("TimeGranularity", TimeGranularityMapper::GetNameForTimeGranularity(m_timeGranularity));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
