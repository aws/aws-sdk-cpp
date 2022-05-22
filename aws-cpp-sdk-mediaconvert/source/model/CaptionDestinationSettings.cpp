/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CaptionDestinationSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

CaptionDestinationSettings::CaptionDestinationSettings() : 
    m_burninDestinationSettingsHasBeenSet(false),
    m_destinationType(CaptionDestinationType::NOT_SET),
    m_destinationTypeHasBeenSet(false),
    m_dvbSubDestinationSettingsHasBeenSet(false),
    m_embeddedDestinationSettingsHasBeenSet(false),
    m_imscDestinationSettingsHasBeenSet(false),
    m_sccDestinationSettingsHasBeenSet(false),
    m_srtDestinationSettingsHasBeenSet(false),
    m_teletextDestinationSettingsHasBeenSet(false),
    m_ttmlDestinationSettingsHasBeenSet(false),
    m_webvttDestinationSettingsHasBeenSet(false)
{
}

CaptionDestinationSettings::CaptionDestinationSettings(JsonView jsonValue) : 
    m_burninDestinationSettingsHasBeenSet(false),
    m_destinationType(CaptionDestinationType::NOT_SET),
    m_destinationTypeHasBeenSet(false),
    m_dvbSubDestinationSettingsHasBeenSet(false),
    m_embeddedDestinationSettingsHasBeenSet(false),
    m_imscDestinationSettingsHasBeenSet(false),
    m_sccDestinationSettingsHasBeenSet(false),
    m_srtDestinationSettingsHasBeenSet(false),
    m_teletextDestinationSettingsHasBeenSet(false),
    m_ttmlDestinationSettingsHasBeenSet(false),
    m_webvttDestinationSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

CaptionDestinationSettings& CaptionDestinationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("burninDestinationSettings"))
  {
    m_burninDestinationSettings = jsonValue.GetObject("burninDestinationSettings");

    m_burninDestinationSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationType"))
  {
    m_destinationType = CaptionDestinationTypeMapper::GetCaptionDestinationTypeForName(jsonValue.GetString("destinationType"));

    m_destinationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dvbSubDestinationSettings"))
  {
    m_dvbSubDestinationSettings = jsonValue.GetObject("dvbSubDestinationSettings");

    m_dvbSubDestinationSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("embeddedDestinationSettings"))
  {
    m_embeddedDestinationSettings = jsonValue.GetObject("embeddedDestinationSettings");

    m_embeddedDestinationSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imscDestinationSettings"))
  {
    m_imscDestinationSettings = jsonValue.GetObject("imscDestinationSettings");

    m_imscDestinationSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sccDestinationSettings"))
  {
    m_sccDestinationSettings = jsonValue.GetObject("sccDestinationSettings");

    m_sccDestinationSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("srtDestinationSettings"))
  {
    m_srtDestinationSettings = jsonValue.GetObject("srtDestinationSettings");

    m_srtDestinationSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("teletextDestinationSettings"))
  {
    m_teletextDestinationSettings = jsonValue.GetObject("teletextDestinationSettings");

    m_teletextDestinationSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ttmlDestinationSettings"))
  {
    m_ttmlDestinationSettings = jsonValue.GetObject("ttmlDestinationSettings");

    m_ttmlDestinationSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("webvttDestinationSettings"))
  {
    m_webvttDestinationSettings = jsonValue.GetObject("webvttDestinationSettings");

    m_webvttDestinationSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue CaptionDestinationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_burninDestinationSettingsHasBeenSet)
  {
   payload.WithObject("burninDestinationSettings", m_burninDestinationSettings.Jsonize());

  }

  if(m_destinationTypeHasBeenSet)
  {
   payload.WithString("destinationType", CaptionDestinationTypeMapper::GetNameForCaptionDestinationType(m_destinationType));
  }

  if(m_dvbSubDestinationSettingsHasBeenSet)
  {
   payload.WithObject("dvbSubDestinationSettings", m_dvbSubDestinationSettings.Jsonize());

  }

  if(m_embeddedDestinationSettingsHasBeenSet)
  {
   payload.WithObject("embeddedDestinationSettings", m_embeddedDestinationSettings.Jsonize());

  }

  if(m_imscDestinationSettingsHasBeenSet)
  {
   payload.WithObject("imscDestinationSettings", m_imscDestinationSettings.Jsonize());

  }

  if(m_sccDestinationSettingsHasBeenSet)
  {
   payload.WithObject("sccDestinationSettings", m_sccDestinationSettings.Jsonize());

  }

  if(m_srtDestinationSettingsHasBeenSet)
  {
   payload.WithObject("srtDestinationSettings", m_srtDestinationSettings.Jsonize());

  }

  if(m_teletextDestinationSettingsHasBeenSet)
  {
   payload.WithObject("teletextDestinationSettings", m_teletextDestinationSettings.Jsonize());

  }

  if(m_ttmlDestinationSettingsHasBeenSet)
  {
   payload.WithObject("ttmlDestinationSettings", m_ttmlDestinationSettings.Jsonize());

  }

  if(m_webvttDestinationSettingsHasBeenSet)
  {
   payload.WithObject("webvttDestinationSettings", m_webvttDestinationSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
