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

#include <aws/iotevents/model/Action.h>
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

Action::Action() : 
    m_setVariableHasBeenSet(false),
    m_snsHasBeenSet(false),
    m_iotTopicPublishHasBeenSet(false),
    m_setTimerHasBeenSet(false),
    m_clearTimerHasBeenSet(false),
    m_resetTimerHasBeenSet(false)
{
}

Action::Action(JsonView jsonValue) : 
    m_setVariableHasBeenSet(false),
    m_snsHasBeenSet(false),
    m_iotTopicPublishHasBeenSet(false),
    m_setTimerHasBeenSet(false),
    m_clearTimerHasBeenSet(false),
    m_resetTimerHasBeenSet(false)
{
  *this = jsonValue;
}

Action& Action::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("setVariable"))
  {
    m_setVariable = jsonValue.GetObject("setVariable");

    m_setVariableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sns"))
  {
    m_sns = jsonValue.GetObject("sns");

    m_snsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iotTopicPublish"))
  {
    m_iotTopicPublish = jsonValue.GetObject("iotTopicPublish");

    m_iotTopicPublishHasBeenSet = true;
  }

  if(jsonValue.ValueExists("setTimer"))
  {
    m_setTimer = jsonValue.GetObject("setTimer");

    m_setTimerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clearTimer"))
  {
    m_clearTimer = jsonValue.GetObject("clearTimer");

    m_clearTimerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resetTimer"))
  {
    m_resetTimer = jsonValue.GetObject("resetTimer");

    m_resetTimerHasBeenSet = true;
  }

  return *this;
}

JsonValue Action::Jsonize() const
{
  JsonValue payload;

  if(m_setVariableHasBeenSet)
  {
   payload.WithObject("setVariable", m_setVariable.Jsonize());

  }

  if(m_snsHasBeenSet)
  {
   payload.WithObject("sns", m_sns.Jsonize());

  }

  if(m_iotTopicPublishHasBeenSet)
  {
   payload.WithObject("iotTopicPublish", m_iotTopicPublish.Jsonize());

  }

  if(m_setTimerHasBeenSet)
  {
   payload.WithObject("setTimer", m_setTimer.Jsonize());

  }

  if(m_clearTimerHasBeenSet)
  {
   payload.WithObject("clearTimer", m_clearTimer.Jsonize());

  }

  if(m_resetTimerHasBeenSet)
  {
   payload.WithObject("resetTimer", m_resetTimer.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
