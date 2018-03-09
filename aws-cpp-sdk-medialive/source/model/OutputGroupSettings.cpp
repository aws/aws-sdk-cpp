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
    m_hlsGroupSettingsHasBeenSet(false),
    m_msSmoothGroupSettingsHasBeenSet(false),
    m_udpGroupSettingsHasBeenSet(false)
{
}

OutputGroupSettings::OutputGroupSettings(const JsonValue& jsonValue) : 
    m_archiveGroupSettingsHasBeenSet(false),
    m_hlsGroupSettingsHasBeenSet(false),
    m_msSmoothGroupSettingsHasBeenSet(false),
    m_udpGroupSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

OutputGroupSettings& OutputGroupSettings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("archiveGroupSettings"))
  {
    m_archiveGroupSettings = jsonValue.GetObject("archiveGroupSettings");

    m_archiveGroupSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hlsGroupSettings"))
  {
    m_hlsGroupSettings = jsonValue.GetObject("hlsGroupSettings");

    m_hlsGroupSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("msSmoothGroupSettings"))
  {
    m_msSmoothGroupSettings = jsonValue.GetObject("msSmoothGroupSettings");

    m_msSmoothGroupSettingsHasBeenSet = true;
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

  if(m_hlsGroupSettingsHasBeenSet)
  {
   payload.WithObject("hlsGroupSettings", m_hlsGroupSettings.Jsonize());

  }

  if(m_msSmoothGroupSettingsHasBeenSet)
  {
   payload.WithObject("msSmoothGroupSettings", m_msSmoothGroupSettings.Jsonize());

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
