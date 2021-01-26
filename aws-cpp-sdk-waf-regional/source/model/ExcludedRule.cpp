/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/ExcludedRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

ExcludedRule::ExcludedRule() : 
    m_ruleIdHasBeenSet(false)
{
}

ExcludedRule::ExcludedRule(JsonView jsonValue) : 
    m_ruleIdHasBeenSet(false)
{
  *this = jsonValue;
}

ExcludedRule& ExcludedRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleId"))
  {
    m_ruleId = jsonValue.GetString("RuleId");

    m_ruleIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ExcludedRule::Jsonize() const
{
  JsonValue payload;

  if(m_ruleIdHasBeenSet)
  {
   payload.WithString("RuleId", m_ruleId);

  }

  return payload;
}

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
