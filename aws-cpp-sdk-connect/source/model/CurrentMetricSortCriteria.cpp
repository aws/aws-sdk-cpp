/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CurrentMetricSortCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

CurrentMetricSortCriteria::CurrentMetricSortCriteria() : 
    m_sortByMetric(CurrentMetricName::NOT_SET),
    m_sortByMetricHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
}

CurrentMetricSortCriteria::CurrentMetricSortCriteria(JsonView jsonValue) : 
    m_sortByMetric(CurrentMetricName::NOT_SET),
    m_sortByMetricHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
  *this = jsonValue;
}

CurrentMetricSortCriteria& CurrentMetricSortCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SortByMetric"))
  {
    m_sortByMetric = CurrentMetricNameMapper::GetCurrentMetricNameForName(jsonValue.GetString("SortByMetric"));

    m_sortByMetricHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SortOrder"))
  {
    m_sortOrder = SortOrderMapper::GetSortOrderForName(jsonValue.GetString("SortOrder"));

    m_sortOrderHasBeenSet = true;
  }

  return *this;
}

JsonValue CurrentMetricSortCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_sortByMetricHasBeenSet)
  {
   payload.WithString("SortByMetric", CurrentMetricNameMapper::GetNameForCurrentMetricName(m_sortByMetric));
  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("SortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
