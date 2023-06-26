/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/StringFilter.h>
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

StringFilter::StringFilter() : 
    m_comparison(StringComparison::NOT_SET),
    m_comparisonHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

StringFilter::StringFilter(JsonView jsonValue) : 
    m_comparison(StringComparison::NOT_SET),
    m_comparisonHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

StringFilter& StringFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("comparison"))
  {
    m_comparison = StringComparisonMapper::GetStringComparisonForName(jsonValue.GetString("comparison"));

    m_comparisonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue StringFilter::Jsonize() const
{
  JsonValue payload;

  if(m_comparisonHasBeenSet)
  {
   payload.WithString("comparison", StringComparisonMapper::GetNameForStringComparison(m_comparison));
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
