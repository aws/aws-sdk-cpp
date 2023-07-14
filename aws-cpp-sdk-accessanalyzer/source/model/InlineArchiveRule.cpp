﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
