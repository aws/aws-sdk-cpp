/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/ClearTimerAction.h>
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

ClearTimerAction::ClearTimerAction() : 
    m_timerNameHasBeenSet(false)
{
}

ClearTimerAction::ClearTimerAction(JsonView jsonValue) : 
    m_timerNameHasBeenSet(false)
{
  *this = jsonValue;
}

ClearTimerAction& ClearTimerAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timerName"))
  {
    m_timerName = jsonValue.GetString("timerName");

    m_timerNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ClearTimerAction::Jsonize() const
{
  JsonValue payload;

  if(m_timerNameHasBeenSet)
  {
   payload.WithString("timerName", m_timerName);

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
