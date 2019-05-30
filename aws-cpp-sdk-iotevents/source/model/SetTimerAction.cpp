/*
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
    m_seconds(0),
    m_secondsHasBeenSet(false)
{
}

SetTimerAction::SetTimerAction(JsonView jsonValue) : 
    m_timerNameHasBeenSet(false),
    m_seconds(0),
    m_secondsHasBeenSet(false)
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

  if(jsonValue.ValueExists("seconds"))
  {
    m_seconds = jsonValue.GetInteger("seconds");

    m_secondsHasBeenSet = true;
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

  if(m_secondsHasBeenSet)
  {
   payload.WithInteger("seconds", m_seconds);

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
