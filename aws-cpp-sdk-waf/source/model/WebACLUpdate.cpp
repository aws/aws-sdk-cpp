/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/WebACLUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAF
{
namespace Model
{

WebACLUpdate::WebACLUpdate() : 
    m_action(ChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_activatedRuleHasBeenSet(false)
{
}

WebACLUpdate::WebACLUpdate(JsonView jsonValue) : 
    m_action(ChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_activatedRuleHasBeenSet(false)
{
  *this = jsonValue;
}

WebACLUpdate& WebACLUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Action"))
  {
    m_action = ChangeActionMapper::GetChangeActionForName(jsonValue.GetString("Action"));

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActivatedRule"))
  {
    m_activatedRule = jsonValue.GetObject("ActivatedRule");

    m_activatedRuleHasBeenSet = true;
  }

  return *this;
}

JsonValue WebACLUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", ChangeActionMapper::GetNameForChangeAction(m_action));
  }

  if(m_activatedRuleHasBeenSet)
  {
   payload.WithObject("ActivatedRule", m_activatedRule.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAF
} // namespace Aws
