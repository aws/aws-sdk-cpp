/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CaptionSourceSettings.h>
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

CaptionSourceSettings::CaptionSourceSettings() : 
    m_ancillarySourceSettingsHasBeenSet(false),
    m_dvbSubSourceSettingsHasBeenSet(false),
    m_embeddedSourceSettingsHasBeenSet(false),
    m_fileSourceSettingsHasBeenSet(false),
    m_sourceType(CaptionSourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false),
    m_teletextSourceSettingsHasBeenSet(false),
    m_trackSourceSettingsHasBeenSet(false)
{
}

CaptionSourceSettings::CaptionSourceSettings(JsonView jsonValue) : 
    m_ancillarySourceSettingsHasBeenSet(false),
    m_dvbSubSourceSettingsHasBeenSet(false),
    m_embeddedSourceSettingsHasBeenSet(false),
    m_fileSourceSettingsHasBeenSet(false),
    m_sourceType(CaptionSourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false),
    m_teletextSourceSettingsHasBeenSet(false),
    m_trackSourceSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

CaptionSourceSettings& CaptionSourceSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ancillarySourceSettings"))
  {
    m_ancillarySourceSettings = jsonValue.GetObject("ancillarySourceSettings");

    m_ancillarySourceSettingsHasBeenSet = true;
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

  if(jsonValue.ValueExists("fileSourceSettings"))
  {
    m_fileSourceSettings = jsonValue.GetObject("fileSourceSettings");

    m_fileSourceSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceType"))
  {
    m_sourceType = CaptionSourceTypeMapper::GetCaptionSourceTypeForName(jsonValue.GetString("sourceType"));

    m_sourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("teletextSourceSettings"))
  {
    m_teletextSourceSettings = jsonValue.GetObject("teletextSourceSettings");

    m_teletextSourceSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("trackSourceSettings"))
  {
    m_trackSourceSettings = jsonValue.GetObject("trackSourceSettings");

    m_trackSourceSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue CaptionSourceSettings::Jsonize() const
{
  JsonValue payload;

  if(m_ancillarySourceSettingsHasBeenSet)
  {
   payload.WithObject("ancillarySourceSettings", m_ancillarySourceSettings.Jsonize());

  }

  if(m_dvbSubSourceSettingsHasBeenSet)
  {
   payload.WithObject("dvbSubSourceSettings", m_dvbSubSourceSettings.Jsonize());

  }

  if(m_embeddedSourceSettingsHasBeenSet)
  {
   payload.WithObject("embeddedSourceSettings", m_embeddedSourceSettings.Jsonize());

  }

  if(m_fileSourceSettingsHasBeenSet)
  {
   payload.WithObject("fileSourceSettings", m_fileSourceSettings.Jsonize());

  }

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("sourceType", CaptionSourceTypeMapper::GetNameForCaptionSourceType(m_sourceType));
  }

  if(m_teletextSourceSettingsHasBeenSet)
  {
   payload.WithObject("teletextSourceSettings", m_teletextSourceSettings.Jsonize());

  }

  if(m_trackSourceSettingsHasBeenSet)
  {
   payload.WithObject("trackSourceSettings", m_trackSourceSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
