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

#include <aws/medialive/model/ScheduleAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

ScheduleAction::ScheduleAction() : 
    m_actionNameHasBeenSet(false),
    m_scheduleActionSettingsHasBeenSet(false),
    m_scheduleActionStartSettingsHasBeenSet(false)
{
}

ScheduleAction::ScheduleAction(JsonView jsonValue) : 
    m_actionNameHasBeenSet(false),
    m_scheduleActionSettingsHasBeenSet(false),
    m_scheduleActionStartSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduleAction& ScheduleAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionName"))
  {
    m_actionName = jsonValue.GetString("actionName");

    m_actionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scheduleActionSettings"))
  {
    m_scheduleActionSettings = jsonValue.GetObject("scheduleActionSettings");

    m_scheduleActionSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scheduleActionStartSettings"))
  {
    m_scheduleActionStartSettings = jsonValue.GetObject("scheduleActionStartSettings");

    m_scheduleActionStartSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduleAction::Jsonize() const
{
  JsonValue payload;

  if(m_actionNameHasBeenSet)
  {
   payload.WithString("actionName", m_actionName);

  }

  if(m_scheduleActionSettingsHasBeenSet)
  {
   payload.WithObject("scheduleActionSettings", m_scheduleActionSettings.Jsonize());

  }

  if(m_scheduleActionStartSettingsHasBeenSet)
  {
   payload.WithObject("scheduleActionStartSettings", m_scheduleActionStartSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
