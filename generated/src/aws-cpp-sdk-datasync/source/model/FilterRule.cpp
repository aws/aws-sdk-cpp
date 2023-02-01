/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/FilterRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

FilterRule::FilterRule() : 
    m_filterType(FilterType::NOT_SET),
    m_filterTypeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

FilterRule::FilterRule(JsonView jsonValue) : 
    m_filterType(FilterType::NOT_SET),
    m_filterTypeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

FilterRule& FilterRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FilterType"))
  {
    m_filterType = FilterTypeMapper::GetFilterTypeForName(jsonValue.GetString("FilterType"));

    m_filterTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue FilterRule::Jsonize() const
{
  JsonValue payload;

  if(m_filterTypeHasBeenSet)
  {
   payload.WithString("FilterType", FilterTypeMapper::GetNameForFilterType(m_filterType));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
