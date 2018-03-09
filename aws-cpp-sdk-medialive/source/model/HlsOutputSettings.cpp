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

#include <aws/medialive/model/HlsOutputSettings.h>
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

HlsOutputSettings::HlsOutputSettings() : 
    m_hlsSettingsHasBeenSet(false),
    m_nameModifierHasBeenSet(false),
    m_segmentModifierHasBeenSet(false)
{
}

HlsOutputSettings::HlsOutputSettings(const JsonValue& jsonValue) : 
    m_hlsSettingsHasBeenSet(false),
    m_nameModifierHasBeenSet(false),
    m_segmentModifierHasBeenSet(false)
{
  *this = jsonValue;
}

HlsOutputSettings& HlsOutputSettings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("hlsSettings"))
  {
    m_hlsSettings = jsonValue.GetObject("hlsSettings");

    m_hlsSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nameModifier"))
  {
    m_nameModifier = jsonValue.GetString("nameModifier");

    m_nameModifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentModifier"))
  {
    m_segmentModifier = jsonValue.GetString("segmentModifier");

    m_segmentModifierHasBeenSet = true;
  }

  return *this;
}

JsonValue HlsOutputSettings::Jsonize() const
{
  JsonValue payload;

  if(m_hlsSettingsHasBeenSet)
  {
   payload.WithObject("hlsSettings", m_hlsSettings.Jsonize());

  }

  if(m_nameModifierHasBeenSet)
  {
   payload.WithString("nameModifier", m_nameModifier);

  }

  if(m_segmentModifierHasBeenSet)
  {
   payload.WithString("segmentModifier", m_segmentModifier);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
