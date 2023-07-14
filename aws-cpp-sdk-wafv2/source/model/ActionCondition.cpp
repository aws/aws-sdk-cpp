/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/ActionCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

ActionCondition::ActionCondition() : 
    m_action(ActionValue::NOT_SET),
    m_actionHasBeenSet(false)
{
}

ActionCondition::ActionCondition(JsonView jsonValue) : 
    m_action(ActionValue::NOT_SET),
    m_actionHasBeenSet(false)
{
  *this = jsonValue;
}

ActionCondition& ActionCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Action"))
  {
    m_action = ActionValueMapper::GetActionValueForName(jsonValue.GetString("Action"));

    m_actionHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionCondition::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", ActionValueMapper::GetNameForActionValue(m_action));
  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
