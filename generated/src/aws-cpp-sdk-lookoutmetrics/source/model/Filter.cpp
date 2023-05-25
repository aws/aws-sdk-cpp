/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/Filter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

Filter::Filter() : 
    m_dimensionValueHasBeenSet(false),
    m_filterOperation(FilterOperation::NOT_SET),
    m_filterOperationHasBeenSet(false)
{
}

Filter::Filter(JsonView jsonValue) : 
    m_dimensionValueHasBeenSet(false),
    m_filterOperation(FilterOperation::NOT_SET),
    m_filterOperationHasBeenSet(false)
{
  *this = jsonValue;
}

Filter& Filter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DimensionValue"))
  {
    m_dimensionValue = jsonValue.GetString("DimensionValue");

    m_dimensionValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FilterOperation"))
  {
    m_filterOperation = FilterOperationMapper::GetFilterOperationForName(jsonValue.GetString("FilterOperation"));

    m_filterOperationHasBeenSet = true;
  }

  return *this;
}

JsonValue Filter::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionValueHasBeenSet)
  {
   payload.WithString("DimensionValue", m_dimensionValue);

  }

  if(m_filterOperationHasBeenSet)
  {
   payload.WithString("FilterOperation", FilterOperationMapper::GetNameForFilterOperation(m_filterOperation));
  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
