/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
