/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/RuleGroupSource.h>
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

RuleGroupSource::RuleGroupSource() : 
    m_rulesSourceListHasBeenSet(false),
    m_rulesStringHasBeenSet(false),
    m_statefulRulesHasBeenSet(false),
    m_statelessRulesAndCustomActionsHasBeenSet(false)
{
}

RuleGroupSource::RuleGroupSource(JsonView jsonValue) : 
    m_rulesSourceListHasBeenSet(false),
    m_rulesStringHasBeenSet(false),
    m_statefulRulesHasBeenSet(false),
    m_statelessRulesAndCustomActionsHasBeenSet(false)
{
  *this = jsonValue;
}

RuleGroupSource& RuleGroupSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RulesSourceList"))
  {
    m_rulesSourceList = jsonValue.GetObject("RulesSourceList");

    m_rulesSourceListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RulesString"))
  {
    m_rulesString = jsonValue.GetString("RulesString");

    m_rulesStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatefulRules"))
  {
    Aws::Utils::Array<JsonView> statefulRulesJsonList = jsonValue.GetArray("StatefulRules");
    for(unsigned statefulRulesIndex = 0; statefulRulesIndex < statefulRulesJsonList.GetLength(); ++statefulRulesIndex)
    {
      m_statefulRules.push_back(statefulRulesJsonList[statefulRulesIndex].AsObject());
    }
    m_statefulRulesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatelessRulesAndCustomActions"))
  {
    m_statelessRulesAndCustomActions = jsonValue.GetObject("StatelessRulesAndCustomActions");

    m_statelessRulesAndCustomActionsHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleGroupSource::Jsonize() const
{
  JsonValue payload;

  if(m_rulesSourceListHasBeenSet)
  {
   payload.WithObject("RulesSourceList", m_rulesSourceList.Jsonize());

  }

  if(m_rulesStringHasBeenSet)
  {
   payload.WithString("RulesString", m_rulesString);

  }

  if(m_statefulRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statefulRulesJsonList(m_statefulRules.size());
   for(unsigned statefulRulesIndex = 0; statefulRulesIndex < statefulRulesJsonList.GetLength(); ++statefulRulesIndex)
   {
     statefulRulesJsonList[statefulRulesIndex].AsObject(m_statefulRules[statefulRulesIndex].Jsonize());
   }
   payload.WithArray("StatefulRules", std::move(statefulRulesJsonList));

  }

  if(m_statelessRulesAndCustomActionsHasBeenSet)
  {
   payload.WithObject("StatelessRulesAndCustomActions", m_statelessRulesAndCustomActions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
