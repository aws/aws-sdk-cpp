/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ResourceMapFilter.h>
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

ResourceMapFilter::ResourceMapFilter() : 
    m_comparison(ResourceMapComparison::NOT_SET),
    m_comparisonHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

ResourceMapFilter::ResourceMapFilter(JsonView jsonValue) : 
    m_comparison(ResourceMapComparison::NOT_SET),
    m_comparisonHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceMapFilter& ResourceMapFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("comparison"))
  {
    m_comparison = ResourceMapComparisonMapper::GetResourceMapComparisonForName(jsonValue.GetString("comparison"));

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

JsonValue ResourceMapFilter::Jsonize() const
{
  JsonValue payload;

  if(m_comparisonHasBeenSet)
  {
   payload.WithString("comparison", ResourceMapComparisonMapper::GetNameForResourceMapComparison(m_comparison));
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
