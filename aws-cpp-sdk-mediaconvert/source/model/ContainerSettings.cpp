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

#include <aws/mediaconvert/model/ContainerSettings.h>
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

ContainerSettings::ContainerSettings() : 
    m_container(ContainerType::NOT_SET),
    m_containerHasBeenSet(false),
    m_f4vSettingsHasBeenSet(false),
    m_m2tsSettingsHasBeenSet(false),
    m_m3u8SettingsHasBeenSet(false),
    m_movSettingsHasBeenSet(false),
    m_mp4SettingsHasBeenSet(false)
{
}

ContainerSettings::ContainerSettings(const JsonValue& jsonValue) : 
    m_container(ContainerType::NOT_SET),
    m_containerHasBeenSet(false),
    m_f4vSettingsHasBeenSet(false),
    m_m2tsSettingsHasBeenSet(false),
    m_m3u8SettingsHasBeenSet(false),
    m_movSettingsHasBeenSet(false),
    m_mp4SettingsHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerSettings& ContainerSettings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("container"))
  {
    m_container = ContainerTypeMapper::GetContainerTypeForName(jsonValue.GetString("container"));

    m_containerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("f4vSettings"))
  {
    m_f4vSettings = jsonValue.GetObject("f4vSettings");

    m_f4vSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("m2tsSettings"))
  {
    m_m2tsSettings = jsonValue.GetObject("m2tsSettings");

    m_m2tsSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("m3u8Settings"))
  {
    m_m3u8Settings = jsonValue.GetObject("m3u8Settings");

    m_m3u8SettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("movSettings"))
  {
    m_movSettings = jsonValue.GetObject("movSettings");

    m_movSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mp4Settings"))
  {
    m_mp4Settings = jsonValue.GetObject("mp4Settings");

    m_mp4SettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerSettings::Jsonize() const
{
  JsonValue payload;

  if(m_containerHasBeenSet)
  {
   payload.WithString("container", ContainerTypeMapper::GetNameForContainerType(m_container));
  }

  if(m_f4vSettingsHasBeenSet)
  {
   payload.WithObject("f4vSettings", m_f4vSettings.Jsonize());

  }

  if(m_m2tsSettingsHasBeenSet)
  {
   payload.WithObject("m2tsSettings", m_m2tsSettings.Jsonize());

  }

  if(m_m3u8SettingsHasBeenSet)
  {
   payload.WithObject("m3u8Settings", m_m3u8Settings.Jsonize());

  }

  if(m_movSettingsHasBeenSet)
  {
   payload.WithObject("movSettings", m_movSettings.Jsonize());

  }

  if(m_mp4SettingsHasBeenSet)
  {
   payload.WithObject("mp4Settings", m_mp4Settings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
