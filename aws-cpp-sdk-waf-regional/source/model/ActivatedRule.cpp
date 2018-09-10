﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/waf-regional/model/ActivatedRule.h>
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

ActivatedRule::ActivatedRule() : 
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_overrideActionHasBeenSet(false),
    m_type(WafRuleType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

ActivatedRule::ActivatedRule(JsonView jsonValue) : 
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_overrideActionHasBeenSet(false),
    m_type(WafRuleType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

ActivatedRule& ActivatedRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Priority"))
  {
    m_priority = jsonValue.GetInteger("Priority");

    m_priorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleId"))
  {
    m_ruleId = jsonValue.GetString("RuleId");

    m_ruleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Action"))
  {
    m_action = jsonValue.GetObject("Action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OverrideAction"))
  {
    m_overrideAction = jsonValue.GetObject("OverrideAction");

    m_overrideActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = WafRuleTypeMapper::GetWafRuleTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue ActivatedRule::Jsonize() const
{
  JsonValue payload;

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("Priority", m_priority);

  }

  if(m_ruleIdHasBeenSet)
  {
   payload.WithString("RuleId", m_ruleId);

  }

  if(m_actionHasBeenSet)
  {
   payload.WithObject("Action", m_action.Jsonize());

  }

  if(m_overrideActionHasBeenSet)
  {
   payload.WithObject("OverrideAction", m_overrideAction.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", WafRuleTypeMapper::GetNameForWafRuleType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
