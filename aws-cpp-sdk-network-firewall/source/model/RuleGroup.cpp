/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/RuleGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

RuleGroup::RuleGroup() : 
    m_ruleVariablesHasBeenSet(false),
    m_rulesSourceHasBeenSet(false)
{
}

RuleGroup::RuleGroup(JsonView jsonValue) : 
    m_ruleVariablesHasBeenSet(false),
    m_rulesSourceHasBeenSet(false)
{
  *this = jsonValue;
}

RuleGroup& RuleGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleVariables"))
  {
    m_ruleVariables = jsonValue.GetObject("RuleVariables");

    m_ruleVariablesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RulesSource"))
  {
    m_rulesSource = jsonValue.GetObject("RulesSource");

    m_rulesSourceHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleGroup::Jsonize() const
{
  JsonValue payload;

  if(m_ruleVariablesHasBeenSet)
  {
   payload.WithObject("RuleVariables", m_ruleVariables.Jsonize());

  }

  if(m_rulesSourceHasBeenSet)
  {
   payload.WithObject("RulesSource", m_rulesSource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
