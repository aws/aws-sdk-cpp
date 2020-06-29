/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/StringFilter.h>
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

StringFilter::StringFilter() : 
    m_valueHasBeenSet(false),
    m_comparison(StringFilterComparison::NOT_SET),
    m_comparisonHasBeenSet(false)
{
}

StringFilter::StringFilter(JsonView jsonValue) : 
    m_valueHasBeenSet(false),
    m_comparison(StringFilterComparison::NOT_SET),
    m_comparisonHasBeenSet(false)
{
  *this = jsonValue;
}

StringFilter& StringFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Comparison"))
  {
    m_comparison = StringFilterComparisonMapper::GetStringFilterComparisonForName(jsonValue.GetString("Comparison"));

    m_comparisonHasBeenSet = true;
  }

  return *this;
}

JsonValue StringFilter::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_comparisonHasBeenSet)
  {
   payload.WithString("Comparison", StringFilterComparisonMapper::GetNameForStringFilterComparison(m_comparison));
  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
