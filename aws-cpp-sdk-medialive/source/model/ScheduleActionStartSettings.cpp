/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ScheduleActionStartSettings.h>
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

ScheduleActionStartSettings::ScheduleActionStartSettings() : 
    m_fixedModeScheduleActionStartSettingsHasBeenSet(false),
    m_followModeScheduleActionStartSettingsHasBeenSet(false),
    m_immediateModeScheduleActionStartSettingsHasBeenSet(false)
{
}

ScheduleActionStartSettings::ScheduleActionStartSettings(JsonView jsonValue) : 
    m_fixedModeScheduleActionStartSettingsHasBeenSet(false),
    m_followModeScheduleActionStartSettingsHasBeenSet(false),
    m_immediateModeScheduleActionStartSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduleActionStartSettings& ScheduleActionStartSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fixedModeScheduleActionStartSettings"))
  {
    m_fixedModeScheduleActionStartSettings = jsonValue.GetObject("fixedModeScheduleActionStartSettings");

    m_fixedModeScheduleActionStartSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("followModeScheduleActionStartSettings"))
  {
    m_followModeScheduleActionStartSettings = jsonValue.GetObject("followModeScheduleActionStartSettings");

    m_followModeScheduleActionStartSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("immediateModeScheduleActionStartSettings"))
  {
    m_immediateModeScheduleActionStartSettings = jsonValue.GetObject("immediateModeScheduleActionStartSettings");

    m_immediateModeScheduleActionStartSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduleActionStartSettings::Jsonize() const
{
  JsonValue payload;

  if(m_fixedModeScheduleActionStartSettingsHasBeenSet)
  {
   payload.WithObject("fixedModeScheduleActionStartSettings", m_fixedModeScheduleActionStartSettings.Jsonize());

  }

  if(m_followModeScheduleActionStartSettingsHasBeenSet)
  {
   payload.WithObject("followModeScheduleActionStartSettings", m_followModeScheduleActionStartSettings.Jsonize());

  }

  if(m_immediateModeScheduleActionStartSettingsHasBeenSet)
  {
   payload.WithObject("immediateModeScheduleActionStartSettings", m_immediateModeScheduleActionStartSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
