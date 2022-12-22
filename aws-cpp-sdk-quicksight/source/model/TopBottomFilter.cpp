/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopBottomFilter.h>
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

TopBottomFilter::TopBottomFilter() : 
    m_filterIdHasBeenSet(false),
    m_columnHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_aggregationSortConfigurationsHasBeenSet(false),
    m_timeGranularity(TimeGranularity::NOT_SET),
    m_timeGranularityHasBeenSet(false),
    m_parameterNameHasBeenSet(false)
{
}

TopBottomFilter::TopBottomFilter(JsonView jsonValue) : 
    m_filterIdHasBeenSet(false),
    m_columnHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_aggregationSortConfigurationsHasBeenSet(false),
    m_timeGranularity(TimeGranularity::NOT_SET),
    m_timeGranularityHasBeenSet(false),
    m_parameterNameHasBeenSet(false)
{
  *this = jsonValue;
}

TopBottomFilter& TopBottomFilter::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Limit"))
  {
    m_limit = jsonValue.GetInteger("Limit");

    m_limitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AggregationSortConfigurations"))
  {
    Aws::Utils::Array<JsonView> aggregationSortConfigurationsJsonList = jsonValue.GetArray("AggregationSortConfigurations");
    for(unsigned aggregationSortConfigurationsIndex = 0; aggregationSortConfigurationsIndex < aggregationSortConfigurationsJsonList.GetLength(); ++aggregationSortConfigurationsIndex)
    {
      m_aggregationSortConfigurations.push_back(aggregationSortConfigurationsJsonList[aggregationSortConfigurationsIndex].AsObject());
    }
    m_aggregationSortConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeGranularity"))
  {
    m_timeGranularity = TimeGranularityMapper::GetTimeGranularityForName(jsonValue.GetString("TimeGranularity"));

    m_timeGranularityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParameterName"))
  {
    m_parameterName = jsonValue.GetString("ParameterName");

    m_parameterNameHasBeenSet = true;
  }

  return *this;
}

JsonValue TopBottomFilter::Jsonize() const
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

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  if(m_aggregationSortConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> aggregationSortConfigurationsJsonList(m_aggregationSortConfigurations.size());
   for(unsigned aggregationSortConfigurationsIndex = 0; aggregationSortConfigurationsIndex < aggregationSortConfigurationsJsonList.GetLength(); ++aggregationSortConfigurationsIndex)
   {
     aggregationSortConfigurationsJsonList[aggregationSortConfigurationsIndex].AsObject(m_aggregationSortConfigurations[aggregationSortConfigurationsIndex].Jsonize());
   }
   payload.WithArray("AggregationSortConfigurations", std::move(aggregationSortConfigurationsJsonList));

  }

  if(m_timeGranularityHasBeenSet)
  {
   payload.WithString("TimeGranularity", TimeGranularityMapper::GetNameForTimeGranularity(m_timeGranularity));
  }

  if(m_parameterNameHasBeenSet)
  {
   payload.WithString("ParameterName", m_parameterName);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
