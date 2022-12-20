/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/FrameCaptureSettings.h>
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

FrameCaptureSettings::FrameCaptureSettings() : 
    m_captureInterval(0),
    m_captureIntervalHasBeenSet(false),
    m_captureIntervalUnits(FrameCaptureIntervalUnit::NOT_SET),
    m_captureIntervalUnitsHasBeenSet(false),
    m_timecodeBurninSettingsHasBeenSet(false)
{
}

FrameCaptureSettings::FrameCaptureSettings(JsonView jsonValue) : 
    m_captureInterval(0),
    m_captureIntervalHasBeenSet(false),
    m_captureIntervalUnits(FrameCaptureIntervalUnit::NOT_SET),
    m_captureIntervalUnitsHasBeenSet(false),
    m_timecodeBurninSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

FrameCaptureSettings& FrameCaptureSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("captureInterval"))
  {
    m_captureInterval = jsonValue.GetInteger("captureInterval");

    m_captureIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("captureIntervalUnits"))
  {
    m_captureIntervalUnits = FrameCaptureIntervalUnitMapper::GetFrameCaptureIntervalUnitForName(jsonValue.GetString("captureIntervalUnits"));

    m_captureIntervalUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timecodeBurninSettings"))
  {
    m_timecodeBurninSettings = jsonValue.GetObject("timecodeBurninSettings");

    m_timecodeBurninSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue FrameCaptureSettings::Jsonize() const
{
  JsonValue payload;

  if(m_captureIntervalHasBeenSet)
  {
   payload.WithInteger("captureInterval", m_captureInterval);

  }

  if(m_captureIntervalUnitsHasBeenSet)
  {
   payload.WithString("captureIntervalUnits", FrameCaptureIntervalUnitMapper::GetNameForFrameCaptureIntervalUnit(m_captureIntervalUnits));
  }

  if(m_timecodeBurninSettingsHasBeenSet)
  {
   payload.WithObject("timecodeBurninSettings", m_timecodeBurninSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
