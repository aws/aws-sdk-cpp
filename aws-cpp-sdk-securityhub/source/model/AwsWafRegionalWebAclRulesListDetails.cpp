/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsWafRegionalWebAclRulesListDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsWafRegionalWebAclRulesListDetails::AwsWafRegionalWebAclRulesListDetails() : 
    m_actionHasBeenSet(false),
    m_overrideActionHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

AwsWafRegionalWebAclRulesListDetails::AwsWafRegionalWebAclRulesListDetails(JsonView jsonValue) : 
    m_actionHasBeenSet(false),
    m_overrideActionHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsWafRegionalWebAclRulesListDetails& AwsWafRegionalWebAclRulesListDetails::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsWafRegionalWebAclRulesListDetails::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithObject("Action", m_action.Jsonize());

  }

  if(m_overrideActionHasBeenSet)
  {
   payload.WithObject("OverrideAction", m_overrideAction.Jsonize());

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("Priority", m_priority);

  }

  if(m_ruleIdHasBeenSet)
  {
   payload.WithString("RuleId", m_ruleId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
