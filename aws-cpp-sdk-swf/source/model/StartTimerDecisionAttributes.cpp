/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/swf/model/StartTimerDecisionAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SWF
{
namespace Model
{

StartTimerDecisionAttributes::StartTimerDecisionAttributes() : 
    m_timerIdHasBeenSet(false),
    m_controlHasBeenSet(false),
    m_startToFireTimeoutHasBeenSet(false)
{
}

StartTimerDecisionAttributes::StartTimerDecisionAttributes(const JsonValue& jsonValue) : 
    m_timerIdHasBeenSet(false),
    m_controlHasBeenSet(false),
    m_startToFireTimeoutHasBeenSet(false)
{
  *this = jsonValue;
}

StartTimerDecisionAttributes& StartTimerDecisionAttributes::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("timerId"))
  {
    m_timerId = jsonValue.GetString("timerId");

    m_timerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("control"))
  {
    m_control = jsonValue.GetString("control");

    m_controlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startToFireTimeout"))
  {
    m_startToFireTimeout = jsonValue.GetString("startToFireTimeout");

    m_startToFireTimeoutHasBeenSet = true;
  }

  return *this;
}

JsonValue StartTimerDecisionAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_timerIdHasBeenSet)
  {
   payload.WithString("timerId", m_timerId);

  }

  if(m_controlHasBeenSet)
  {
   payload.WithString("control", m_control);

  }

  if(m_startToFireTimeoutHasBeenSet)
  {
   payload.WithString("startToFireTimeout", m_startToFireTimeout);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws