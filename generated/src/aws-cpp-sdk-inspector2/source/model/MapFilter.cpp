﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/MapFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

MapFilter::MapFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

MapFilter& MapFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("comparison"))
  {
    m_comparison = MapComparisonMapper::GetMapComparisonForName(jsonValue.GetString("comparison"));
    m_comparisonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");
    m_keyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue MapFilter::Jsonize() const
{
  JsonValue payload;

  if(m_comparisonHasBeenSet)
  {
   payload.WithString("comparison", MapComparisonMapper::GetNameForMapComparison(m_comparison));
  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
