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
    m_excludedRulesHasBeenSet(false)
{
}

RuleGroupReferenceStatement::RuleGroupReferenceStatement(JsonView jsonValue) : 
    m_aRNHasBeenSet(false),
    m_excludedRulesHasBeenSet(false)
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
    Array<JsonView> excludedRulesJsonList = jsonValue.GetArray("ExcludedRules");
    for(unsigned excludedRulesIndex = 0; excludedRulesIndex < excludedRulesJsonList.GetLength(); ++excludedRulesIndex)
    {
      m_excludedRules.push_back(excludedRulesJsonList[excludedRulesIndex].AsObject());
    }
    m_excludedRulesHasBeenSet = true;
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
   Array<JsonValue> excludedRulesJsonList(m_excludedRules.size());
   for(unsigned excludedRulesIndex = 0; excludedRulesIndex < excludedRulesJsonList.GetLength(); ++excludedRulesIndex)
   {
     excludedRulesJsonList[excludedRulesIndex].AsObject(m_excludedRules[excludedRulesIndex].Jsonize());
   }
   payload.WithArray("ExcludedRules", std::move(excludedRulesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
