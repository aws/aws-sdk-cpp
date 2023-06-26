/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/SetTimerAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

SetTimerAction::SetTimerAction() : 
    m_timerNameHasBeenSet(false),
    m_durationExpressionHasBeenSet(false)
{
}

SetTimerAction::SetTimerAction(JsonView jsonValue) : 
    m_timerNameHasBeenSet(false),
    m_durationExpressionHasBeenSet(false)
{
  *this = jsonValue;
}

SetTimerAction& SetTimerAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timerName"))
  {
    m_timerName = jsonValue.GetString("timerName");

    m_timerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("durationExpression"))
  {
    m_durationExpression = jsonValue.GetString("durationExpression");

    m_durationExpressionHasBeenSet = true;
  }

  return *this;
}

JsonValue SetTimerAction::Jsonize() const
{
  JsonValue payload;

  if(m_timerNameHasBeenSet)
  {
   payload.WithString("timerName", m_timerName);

  }

  if(m_durationExpressionHasBeenSet)
  {
   payload.WithString("durationExpression", m_durationExpression);

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
