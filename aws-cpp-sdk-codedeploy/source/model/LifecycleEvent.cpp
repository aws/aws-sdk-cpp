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
#include <aws/codedeploy/model/LifecycleEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

LifecycleEvent::LifecycleEvent() : 
    m_lifecycleEventNameHasBeenSet(false),
    m_diagnosticsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_status(LifecycleEventStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

LifecycleEvent::LifecycleEvent(const JsonValue& jsonValue) : 
    m_lifecycleEventNameHasBeenSet(false),
    m_diagnosticsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_status(LifecycleEventStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

LifecycleEvent& LifecycleEvent::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("lifecycleEventName"))
  {
    m_lifecycleEventName = jsonValue.GetString("lifecycleEventName");

    m_lifecycleEventNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("diagnostics"))
  {
    m_diagnostics = jsonValue.GetObject("diagnostics");

    m_diagnosticsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = LifecycleEventStatusMapper::GetLifecycleEventStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue LifecycleEvent::Jsonize() const
{
  JsonValue payload;

  if(m_lifecycleEventNameHasBeenSet)
  {
   payload.WithString("lifecycleEventName", m_lifecycleEventName);

  }

  if(m_diagnosticsHasBeenSet)
  {
   payload.WithObject("diagnostics", m_diagnostics.Jsonize());

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", LifecycleEventStatusMapper::GetNameForLifecycleEventStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws