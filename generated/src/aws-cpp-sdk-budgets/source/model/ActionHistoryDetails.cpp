/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/ActionHistoryDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Budgets
{
namespace Model
{

ActionHistoryDetails::ActionHistoryDetails() : 
    m_messageHasBeenSet(false),
    m_actionHasBeenSet(false)
{
}

ActionHistoryDetails::ActionHistoryDetails(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_actionHasBeenSet(false)
{
  *this = jsonValue;
}

ActionHistoryDetails& ActionHistoryDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Action"))
  {
    m_action = jsonValue.GetObject("Action");

    m_actionHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionHistoryDetails::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_actionHasBeenSet)
  {
   payload.WithObject("Action", m_action.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Budgets
} // namespace Aws
