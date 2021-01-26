/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/CaptionSelectorSettings.h>
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

CaptionSelectorSettings::CaptionSelectorSettings() : 
    m_ancillarySourceSettingsHasBeenSet(false),
    m_aribSourceSettingsHasBeenSet(false),
    m_dvbSubSourceSettingsHasBeenSet(false),
    m_embeddedSourceSettingsHasBeenSet(false),
    m_scte20SourceSettingsHasBeenSet(false),
    m_scte27SourceSettingsHasBeenSet(false),
    m_teletextSourceSettingsHasBeenSet(false)
{
}

CaptionSelectorSettings::CaptionSelectorSettings(JsonView jsonValue) : 
    m_ancillarySourceSettingsHasBeenSet(false),
    m_aribSourceSettingsHasBeenSet(false),
    m_dvbSubSourceSettingsHasBeenSet(false),
    m_embeddedSourceSettingsHasBeenSet(false),
    m_scte20SourceSettingsHasBeenSet(false),
    m_scte27SourceSettingsHasBeenSet(false),
    m_teletextSourceSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

CaptionSelectorSettings& CaptionSelectorSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ancillarySourceSettings"))
  {
    m_ancillarySourceSettings = jsonValue.GetObject("ancillarySourceSettings");

    m_ancillarySourceSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("aribSourceSettings"))
  {
    m_aribSourceSettings = jsonValue.GetObject("aribSourceSettings");

    m_aribSourceSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dvbSubSourceSettings"))
  {
    m_dvbSubSourceSettings = jsonValue.GetObject("dvbSubSourceSettings");

    m_dvbSubSourceSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("embeddedSourceSettings"))
  {
    m_embeddedSourceSettings = jsonValue.GetObject("embeddedSourceSettings");

    m_embeddedSourceSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scte20SourceSettings"))
  {
    m_scte20SourceSettings = jsonValue.GetObject("scte20SourceSettings");

    m_scte20SourceSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scte27SourceSettings"))
  {
    m_scte27SourceSettings = jsonValue.GetObject("scte27SourceSettings");

    m_scte27SourceSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("teletextSourceSettings"))
  {
    m_teletextSourceSettings = jsonValue.GetObject("teletextSourceSettings");

    m_teletextSourceSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue CaptionSelectorSettings::Jsonize() const
{
  JsonValue payload;

  if(m_ancillarySourceSettingsHasBeenSet)
  {
   payload.WithObject("ancillarySourceSettings", m_ancillarySourceSettings.Jsonize());

  }

  if(m_aribSourceSettingsHasBeenSet)
  {
   payload.WithObject("aribSourceSettings", m_aribSourceSettings.Jsonize());

  }

  if(m_dvbSubSourceSettingsHasBeenSet)
  {
   payload.WithObject("dvbSubSourceSettings", m_dvbSubSourceSettings.Jsonize());

  }

  if(m_embeddedSourceSettingsHasBeenSet)
  {
   payload.WithObject("embeddedSourceSettings", m_embeddedSourceSettings.Jsonize());

  }

  if(m_scte20SourceSettingsHasBeenSet)
  {
   payload.WithObject("scte20SourceSettings", m_scte20SourceSettings.Jsonize());

  }

  if(m_scte27SourceSettingsHasBeenSet)
  {
   payload.WithObject("scte27SourceSettings", m_scte27SourceSettings.Jsonize());

  }

  if(m_teletextSourceSettingsHasBeenSet)
  {
   payload.WithObject("teletextSourceSettings", m_teletextSourceSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
