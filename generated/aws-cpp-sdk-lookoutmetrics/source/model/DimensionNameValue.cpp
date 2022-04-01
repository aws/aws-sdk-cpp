/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/DimensionNameValue.h>
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

DimensionNameValue::DimensionNameValue() : 
    m_dimensionNameHasBeenSet(false),
    m_dimensionValueHasBeenSet(false)
{
}

DimensionNameValue::DimensionNameValue(JsonView jsonValue) : 
    m_dimensionNameHasBeenSet(false),
    m_dimensionValueHasBeenSet(false)
{
  *this = jsonValue;
}

DimensionNameValue& DimensionNameValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DimensionName"))
  {
    m_dimensionName = jsonValue.GetString("DimensionName");

    m_dimensionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DimensionValue"))
  {
    m_dimensionValue = jsonValue.GetString("DimensionValue");

    m_dimensionValueHasBeenSet = true;
  }

  return *this;
}

JsonValue DimensionNameValue::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionNameHasBeenSet)
  {
   payload.WithString("DimensionName", m_dimensionName);

  }

  if(m_dimensionValueHasBeenSet)
  {
   payload.WithString("DimensionValue", m_dimensionValue);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
