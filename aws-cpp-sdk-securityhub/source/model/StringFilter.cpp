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
