/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ActionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

ActionSummary::ActionSummary() : 
    m_actionType(ActionType::NOT_SET),
    m_actionTypeHasBeenSet(false)
{
}

ActionSummary::ActionSummary(JsonView jsonValue) : 
    m_actionType(ActionType::NOT_SET),
    m_actionTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ActionSummary& ActionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ActionType"))
  {
    m_actionType = ActionTypeMapper::GetActionTypeForName(jsonValue.GetString("ActionType"));

    m_actionTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_actionTypeHasBeenSet)
  {
   payload.WithString("ActionType", ActionTypeMapper::GetNameForActionType(m_actionType));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
