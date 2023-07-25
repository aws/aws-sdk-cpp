/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/MatchingRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

MatchingRule::MatchingRule() : 
    m_ruleHasBeenSet(false)
{
}

MatchingRule::MatchingRule(JsonView jsonValue) : 
    m_ruleHasBeenSet(false)
{
  *this = jsonValue;
}

MatchingRule& MatchingRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Rule"))
  {
    Aws::Utils::Array<JsonView> ruleJsonList = jsonValue.GetArray("Rule");
    for(unsigned ruleIndex = 0; ruleIndex < ruleJsonList.GetLength(); ++ruleIndex)
    {
      m_rule.push_back(ruleJsonList[ruleIndex].AsString());
    }
    m_ruleHasBeenSet = true;
  }

  return *this;
}

JsonValue MatchingRule::Jsonize() const
{
  JsonValue payload;

  if(m_ruleHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ruleJsonList(m_rule.size());
   for(unsigned ruleIndex = 0; ruleIndex < ruleJsonList.GetLength(); ++ruleIndex)
   {
     ruleJsonList[ruleIndex].AsString(m_rule[ruleIndex]);
   }
   payload.WithArray("Rule", std::move(ruleJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
