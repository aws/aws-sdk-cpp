﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/RuleGroupSourceStatefulRulesOptionsDetails.h>
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

RuleGroupSourceStatefulRulesOptionsDetails::RuleGroupSourceStatefulRulesOptionsDetails() : 
    m_keywordHasBeenSet(false),
    m_settingsHasBeenSet(false)
{
}

RuleGroupSourceStatefulRulesOptionsDetails::RuleGroupSourceStatefulRulesOptionsDetails(JsonView jsonValue) : 
    m_keywordHasBeenSet(false),
    m_settingsHasBeenSet(false)
{
  *this = jsonValue;
}

RuleGroupSourceStatefulRulesOptionsDetails& RuleGroupSourceStatefulRulesOptionsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Keyword"))
  {
    m_keyword = jsonValue.GetString("Keyword");

    m_keywordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Settings"))
  {
    Aws::Utils::Array<JsonView> settingsJsonList = jsonValue.GetArray("Settings");
    for(unsigned settingsIndex = 0; settingsIndex < settingsJsonList.GetLength(); ++settingsIndex)
    {
      m_settings.push_back(settingsJsonList[settingsIndex].AsString());
    }
    m_settingsHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleGroupSourceStatefulRulesOptionsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_keywordHasBeenSet)
  {
   payload.WithString("Keyword", m_keyword);

  }

  if(m_settingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> settingsJsonList(m_settings.size());
   for(unsigned settingsIndex = 0; settingsIndex < settingsJsonList.GetLength(); ++settingsIndex)
   {
     settingsJsonList[settingsIndex].AsString(m_settings[settingsIndex]);
   }
   payload.WithArray("Settings", std::move(settingsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
