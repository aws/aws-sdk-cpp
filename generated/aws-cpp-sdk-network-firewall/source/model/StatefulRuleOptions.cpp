/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/StatefulRuleOptions.h>
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

StatefulRuleOptions::StatefulRuleOptions() : 
    m_ruleOrder(RuleOrder::NOT_SET),
    m_ruleOrderHasBeenSet(false)
{
}

StatefulRuleOptions::StatefulRuleOptions(JsonView jsonValue) : 
    m_ruleOrder(RuleOrder::NOT_SET),
    m_ruleOrderHasBeenSet(false)
{
  *this = jsonValue;
}

StatefulRuleOptions& StatefulRuleOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleOrder"))
  {
    m_ruleOrder = RuleOrderMapper::GetRuleOrderForName(jsonValue.GetString("RuleOrder"));

    m_ruleOrderHasBeenSet = true;
  }

  return *this;
}

JsonValue StatefulRuleOptions::Jsonize() const
{
  JsonValue payload;

  if(m_ruleOrderHasBeenSet)
  {
   payload.WithString("RuleOrder", RuleOrderMapper::GetNameForRuleOrder(m_ruleOrder));
  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
