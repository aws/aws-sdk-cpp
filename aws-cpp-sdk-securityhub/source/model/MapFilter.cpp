/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/MapFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

MapFilter::MapFilter() : 
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_comparison(MapFilterComparison::NOT_SET),
    m_comparisonHasBeenSet(false)
{
}

MapFilter::MapFilter(JsonView jsonValue) : 
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_comparison(MapFilterComparison::NOT_SET),
    m_comparisonHasBeenSet(false)
{
  *this = jsonValue;
}

MapFilter& MapFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetString("Key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Comparison"))
  {
    m_comparison = MapFilterComparisonMapper::GetMapFilterComparisonForName(jsonValue.GetString("Comparison"));

    m_comparisonHasBeenSet = true;
  }

  return *this;
}

JsonValue MapFilter::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_comparisonHasBeenSet)
  {
   payload.WithString("Comparison", MapFilterComparisonMapper::GetNameForMapFilterComparison(m_comparison));
  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
