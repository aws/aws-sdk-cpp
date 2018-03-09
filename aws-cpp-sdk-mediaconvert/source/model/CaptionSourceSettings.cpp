﻿/*
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
    m_teletextSourceSettingsHasBeenSet(false)
{
}

CaptionSourceSettings::CaptionSourceSettings(const JsonValue& jsonValue) : 
    m_ancillarySourceSettingsHasBeenSet(false),
    m_dvbSubSourceSettingsHasBeenSet(false),
    m_embeddedSourceSettingsHasBeenSet(false),
    m_fileSourceSettingsHasBeenSet(false),
    m_sourceType(CaptionSourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false),
    m_teletextSourceSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

CaptionSourceSettings& CaptionSourceSettings::operator =(const JsonValue& jsonValue)
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

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
