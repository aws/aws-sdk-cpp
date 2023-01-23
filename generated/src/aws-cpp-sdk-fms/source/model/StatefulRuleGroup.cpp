/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/StatefulRuleGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

StatefulRuleGroup::StatefulRuleGroup() : 
    m_ruleGroupNameHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_overrideHasBeenSet(false)
{
}

StatefulRuleGroup::StatefulRuleGroup(JsonView jsonValue) : 
    m_ruleGroupNameHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_overrideHasBeenSet(false)
{
  *this = jsonValue;
}

StatefulRuleGroup& StatefulRuleGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleGroupName"))
  {
    m_ruleGroupName = jsonValue.GetString("RuleGroupName");

    m_ruleGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Priority"))
  {
    m_priority = jsonValue.GetInteger("Priority");

    m_priorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Override"))
  {
    m_override = jsonValue.GetObject("Override");

    m_overrideHasBeenSet = true;
  }

  return *this;
}

JsonValue StatefulRuleGroup::Jsonize() const
{
  JsonValue payload;

  if(m_ruleGroupNameHasBeenSet)
  {
   payload.WithString("RuleGroupName", m_ruleGroupName);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("Priority", m_priority);

  }

  if(m_overrideHasBeenSet)
  {
   payload.WithObject("Override", m_override.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
