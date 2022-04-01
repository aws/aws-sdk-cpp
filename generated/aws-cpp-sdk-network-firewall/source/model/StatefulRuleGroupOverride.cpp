/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/StatefulRuleGroupOverride.h>
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

StatefulRuleGroupOverride::StatefulRuleGroupOverride() : 
    m_action(OverrideAction::NOT_SET),
    m_actionHasBeenSet(false)
{
}

StatefulRuleGroupOverride::StatefulRuleGroupOverride(JsonView jsonValue) : 
    m_action(OverrideAction::NOT_SET),
    m_actionHasBeenSet(false)
{
  *this = jsonValue;
}

StatefulRuleGroupOverride& StatefulRuleGroupOverride::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Action"))
  {
    m_action = OverrideActionMapper::GetOverrideActionForName(jsonValue.GetString("Action"));

    m_actionHasBeenSet = true;
  }

  return *this;
}

JsonValue StatefulRuleGroupOverride::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", OverrideActionMapper::GetNameForOverrideAction(m_action));
  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
