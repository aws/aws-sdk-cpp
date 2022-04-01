/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/OutputGroupSettings.h>
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

OutputGroupSettings::OutputGroupSettings() : 
    m_archiveGroupSettingsHasBeenSet(false),
    m_frameCaptureGroupSettingsHasBeenSet(false),
    m_hlsGroupSettingsHasBeenSet(false),
    m_mediaPackageGroupSettingsHasBeenSet(false),
    m_msSmoothGroupSettingsHasBeenSet(false),
    m_multiplexGroupSettingsHasBeenSet(false),
    m_rtmpGroupSettingsHasBeenSet(false),
    m_udpGroupSettingsHasBeenSet(false)
{
}

OutputGroupSettings::OutputGroupSettings(JsonView jsonValue) : 
    m_archiveGroupSettingsHasBeenSet(false),
    m_frameCaptureGroupSettingsHasBeenSet(false),
    m_hlsGroupSettingsHasBeenSet(false),
    m_mediaPackageGroupSettingsHasBeenSet(false),
    m_msSmoothGroupSettingsHasBeenSet(false),
    m_multiplexGroupSettingsHasBeenSet(false),
    m_rtmpGroupSettingsHasBeenSet(false),
    m_udpGroupSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

OutputGroupSettings& OutputGroupSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("archiveGroupSettings"))
  {
    m_archiveGroupSettings = jsonValue.GetObject("archiveGroupSettings");

    m_archiveGroupSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("frameCaptureGroupSettings"))
  {
    m_frameCaptureGroupSettings = jsonValue.GetObject("frameCaptureGroupSettings");

    m_frameCaptureGroupSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hlsGroupSettings"))
  {
    m_hlsGroupSettings = jsonValue.GetObject("hlsGroupSettings");

    m_hlsGroupSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mediaPackageGroupSettings"))
  {
    m_mediaPackageGroupSettings = jsonValue.GetObject("mediaPackageGroupSettings");

    m_mediaPackageGroupSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("msSmoothGroupSettings"))
  {
    m_msSmoothGroupSettings = jsonValue.GetObject("msSmoothGroupSettings");

    m_msSmoothGroupSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("multiplexGroupSettings"))
  {
    m_multiplexGroupSettings = jsonValue.GetObject("multiplexGroupSettings");

    m_multiplexGroupSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rtmpGroupSettings"))
  {
    m_rtmpGroupSettings = jsonValue.GetObject("rtmpGroupSettings");

    m_rtmpGroupSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("udpGroupSettings"))
  {
    m_udpGroupSettings = jsonValue.GetObject("udpGroupSettings");

    m_udpGroupSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputGroupSettings::Jsonize() const
{
  JsonValue payload;

  if(m_archiveGroupSettingsHasBeenSet)
  {
   payload.WithObject("archiveGroupSettings", m_archiveGroupSettings.Jsonize());

  }

  if(m_frameCaptureGroupSettingsHasBeenSet)
  {
   payload.WithObject("frameCaptureGroupSettings", m_frameCaptureGroupSettings.Jsonize());

  }

  if(m_hlsGroupSettingsHasBeenSet)
  {
   payload.WithObject("hlsGroupSettings", m_hlsGroupSettings.Jsonize());

  }

  if(m_mediaPackageGroupSettingsHasBeenSet)
  {
   payload.WithObject("mediaPackageGroupSettings", m_mediaPackageGroupSettings.Jsonize());

  }

  if(m_msSmoothGroupSettingsHasBeenSet)
  {
   payload.WithObject("msSmoothGroupSettings", m_msSmoothGroupSettings.Jsonize());

  }

  if(m_multiplexGroupSettingsHasBeenSet)
  {
   payload.WithObject("multiplexGroupSettings", m_multiplexGroupSettings.Jsonize());

  }

  if(m_rtmpGroupSettingsHasBeenSet)
  {
   payload.WithObject("rtmpGroupSettings", m_rtmpGroupSettings.Jsonize());

  }

  if(m_udpGroupSettingsHasBeenSet)
  {
   payload.WithObject("udpGroupSettings", m_udpGroupSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
