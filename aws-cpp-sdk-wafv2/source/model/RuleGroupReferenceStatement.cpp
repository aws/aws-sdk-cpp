/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/RuleGroupReferenceStatement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

RuleGroupReferenceStatement::RuleGroupReferenceStatement() : 
    m_aRNHasBeenSet(false),
    m_excludedRulesHasBeenSet(false),
    m_ruleActionOverridesHasBeenSet(false)
{
}

RuleGroupReferenceStatement::RuleGroupReferenceStatement(JsonView jsonValue) : 
    m_aRNHasBeenSet(false),
    m_excludedRulesHasBeenSet(false),
    m_ruleActionOverridesHasBeenSet(false)
{
  *this = jsonValue;
}

RuleGroupReferenceStatement& RuleGroupReferenceStatement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ARN"))
  {
    m_aRN = jsonValue.GetString("ARN");

    m_aRNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExcludedRules"))
  {
    Aws::Utils::Array<JsonView> excludedRulesJsonList = jsonValue.GetArray("ExcludedRules");
    for(unsigned excludedRulesIndex = 0; excludedRulesIndex < excludedRulesJsonList.GetLength(); ++excludedRulesIndex)
    {
      m_excludedRules.push_back(excludedRulesJsonList[excludedRulesIndex].AsObject());
    }
    m_excludedRulesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleActionOverrides"))
  {
    Aws::Utils::Array<JsonView> ruleActionOverridesJsonList = jsonValue.GetArray("RuleActionOverrides");
    for(unsigned ruleActionOverridesIndex = 0; ruleActionOverridesIndex < ruleActionOverridesJsonList.GetLength(); ++ruleActionOverridesIndex)
    {
      m_ruleActionOverrides.push_back(ruleActionOverridesJsonList[ruleActionOverridesIndex].AsObject());
    }
    m_ruleActionOverridesHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleGroupReferenceStatement::Jsonize() const
{
  JsonValue payload;

  if(m_aRNHasBeenSet)
  {
   payload.WithString("ARN", m_aRN);

  }

  if(m_excludedRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludedRulesJsonList(m_excludedRules.size());
   for(unsigned excludedRulesIndex = 0; excludedRulesIndex < excludedRulesJsonList.GetLength(); ++excludedRulesIndex)
   {
     excludedRulesJsonList[excludedRulesIndex].AsObject(m_excludedRules[excludedRulesIndex].Jsonize());
   }
   payload.WithArray("ExcludedRules", std::move(excludedRulesJsonList));

  }

  if(m_ruleActionOverridesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ruleActionOverridesJsonList(m_ruleActionOverrides.size());
   for(unsigned ruleActionOverridesIndex = 0; ruleActionOverridesIndex < ruleActionOverridesJsonList.GetLength(); ++ruleActionOverridesIndex)
   {
     ruleActionOverridesJsonList[ruleActionOverridesIndex].AsObject(m_ruleActionOverrides[ruleActionOverridesIndex].Jsonize());
   }
   payload.WithArray("RuleActionOverrides", std::move(ruleActionOverridesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
