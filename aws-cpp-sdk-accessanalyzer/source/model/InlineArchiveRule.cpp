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

#include <aws/accessanalyzer/model/InlineArchiveRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

InlineArchiveRule::InlineArchiveRule() : 
    m_filterHasBeenSet(false),
    m_ruleNameHasBeenSet(false)
{
}

InlineArchiveRule::InlineArchiveRule(JsonView jsonValue) : 
    m_filterHasBeenSet(false),
    m_ruleNameHasBeenSet(false)
{
  *this = jsonValue;
}

InlineArchiveRule& InlineArchiveRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("filter"))
  {
    Aws::Map<Aws::String, JsonView> filterJsonMap = jsonValue.GetObject("filter").GetAllObjects();
    for(auto& filterItem : filterJsonMap)
    {
      m_filter[filterItem.first] = filterItem.second.AsObject();
    }
    m_filterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ruleName"))
  {
    m_ruleName = jsonValue.GetString("ruleName");

    m_ruleNameHasBeenSet = true;
  }

  return *this;
}

JsonValue InlineArchiveRule::Jsonize() const
{
  JsonValue payload;

  if(m_filterHasBeenSet)
  {
   JsonValue filterJsonMap;
   for(auto& filterItem : m_filter)
   {
     filterJsonMap.WithObject(filterItem.first, filterItem.second.Jsonize());
   }
   payload.WithObject("filter", std::move(filterJsonMap));

  }

  if(m_ruleNameHasBeenSet)
  {
   payload.WithString("ruleName", m_ruleName);

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
