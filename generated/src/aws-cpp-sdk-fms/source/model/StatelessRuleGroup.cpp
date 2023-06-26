/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/StatelessRuleGroup.h>
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

StatelessRuleGroup::StatelessRuleGroup() : 
    m_ruleGroupNameHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false)
{
}

StatelessRuleGroup::StatelessRuleGroup(JsonView jsonValue) : 
    m_ruleGroupNameHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false)
{
  *this = jsonValue;
}

StatelessRuleGroup& StatelessRuleGroup::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue StatelessRuleGroup::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
