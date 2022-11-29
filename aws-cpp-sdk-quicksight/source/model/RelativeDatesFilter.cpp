/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RelativeDatesFilter.h>
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

RelativeDatesFilter::RelativeDatesFilter() : 
    m_filterIdHasBeenSet(false),
    m_columnHasBeenSet(false),
    m_anchorDateConfigurationHasBeenSet(false),
    m_minimumGranularity(TimeGranularity::NOT_SET),
    m_minimumGranularityHasBeenSet(false),
    m_timeGranularity(TimeGranularity::NOT_SET),
    m_timeGranularityHasBeenSet(false),
    m_relativeDateType(RelativeDateType::NOT_SET),
    m_relativeDateTypeHasBeenSet(false),
    m_relativeDateValue(0),
    m_relativeDateValueHasBeenSet(false),
    m_parameterNameHasBeenSet(false),
    m_nullOption(FilterNullOption::NOT_SET),
    m_nullOptionHasBeenSet(false),
    m_excludePeriodConfigurationHasBeenSet(false)
{
}

RelativeDatesFilter::RelativeDatesFilter(JsonView jsonValue) : 
    m_filterIdHasBeenSet(false),
    m_columnHasBeenSet(false),
    m_anchorDateConfigurationHasBeenSet(false),
    m_minimumGranularity(TimeGranularity::NOT_SET),
    m_minimumGranularityHasBeenSet(false),
    m_timeGranularity(TimeGranularity::NOT_SET),
    m_timeGranularityHasBeenSet(false),
    m_relativeDateType(RelativeDateType::NOT_SET),
    m_relativeDateTypeHasBeenSet(false),
    m_relativeDateValue(0),
    m_relativeDateValueHasBeenSet(false),
    m_parameterNameHasBeenSet(false),
    m_nullOption(FilterNullOption::NOT_SET),
    m_nullOptionHasBeenSet(false),
    m_excludePeriodConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

RelativeDatesFilter& RelativeDatesFilter::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("AnchorDateConfiguration"))
  {
    m_anchorDateConfiguration = jsonValue.GetObject("AnchorDateConfiguration");

    m_anchorDateConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinimumGranularity"))
  {
    m_minimumGranularity = TimeGranularityMapper::GetTimeGranularityForName(jsonValue.GetString("MinimumGranularity"));

    m_minimumGranularityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeGranularity"))
  {
    m_timeGranularity = TimeGranularityMapper::GetTimeGranularityForName(jsonValue.GetString("TimeGranularity"));

    m_timeGranularityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RelativeDateType"))
  {
    m_relativeDateType = RelativeDateTypeMapper::GetRelativeDateTypeForName(jsonValue.GetString("RelativeDateType"));

    m_relativeDateTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RelativeDateValue"))
  {
    m_relativeDateValue = jsonValue.GetInteger("RelativeDateValue");

    m_relativeDateValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParameterName"))
  {
    m_parameterName = jsonValue.GetString("ParameterName");

    m_parameterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NullOption"))
  {
    m_nullOption = FilterNullOptionMapper::GetFilterNullOptionForName(jsonValue.GetString("NullOption"));

    m_nullOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExcludePeriodConfiguration"))
  {
    m_excludePeriodConfiguration = jsonValue.GetObject("ExcludePeriodConfiguration");

    m_excludePeriodConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue RelativeDatesFilter::Jsonize() const
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

  if(m_anchorDateConfigurationHasBeenSet)
  {
   payload.WithObject("AnchorDateConfiguration", m_anchorDateConfiguration.Jsonize());

  }

  if(m_minimumGranularityHasBeenSet)
  {
   payload.WithString("MinimumGranularity", TimeGranularityMapper::GetNameForTimeGranularity(m_minimumGranularity));
  }

  if(m_timeGranularityHasBeenSet)
  {
   payload.WithString("TimeGranularity", TimeGranularityMapper::GetNameForTimeGranularity(m_timeGranularity));
  }

  if(m_relativeDateTypeHasBeenSet)
  {
   payload.WithString("RelativeDateType", RelativeDateTypeMapper::GetNameForRelativeDateType(m_relativeDateType));
  }

  if(m_relativeDateValueHasBeenSet)
  {
   payload.WithInteger("RelativeDateValue", m_relativeDateValue);

  }

  if(m_parameterNameHasBeenSet)
  {
   payload.WithString("ParameterName", m_parameterName);

  }

  if(m_nullOptionHasBeenSet)
  {
   payload.WithString("NullOption", FilterNullOptionMapper::GetNameForFilterNullOption(m_nullOption));
  }

  if(m_excludePeriodConfigurationHasBeenSet)
  {
   payload.WithObject("ExcludePeriodConfiguration", m_excludePeriodConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
