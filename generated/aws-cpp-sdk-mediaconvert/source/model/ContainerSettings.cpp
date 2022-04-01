/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_cmfcSettingsHasBeenSet(false),
    m_container(ContainerType::NOT_SET),
    m_containerHasBeenSet(false),
    m_f4vSettingsHasBeenSet(false),
    m_m2tsSettingsHasBeenSet(false),
    m_m3u8SettingsHasBeenSet(false),
    m_movSettingsHasBeenSet(false),
    m_mp4SettingsHasBeenSet(false),
    m_mpdSettingsHasBeenSet(false),
    m_mxfSettingsHasBeenSet(false)
{
}

ContainerSettings::ContainerSettings(JsonView jsonValue) : 
    m_cmfcSettingsHasBeenSet(false),
    m_container(ContainerType::NOT_SET),
    m_containerHasBeenSet(false),
    m_f4vSettingsHasBeenSet(false),
    m_m2tsSettingsHasBeenSet(false),
    m_m3u8SettingsHasBeenSet(false),
    m_movSettingsHasBeenSet(false),
    m_mp4SettingsHasBeenSet(false),
    m_mpdSettingsHasBeenSet(false),
    m_mxfSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerSettings& ContainerSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cmfcSettings"))
  {
    m_cmfcSettings = jsonValue.GetObject("cmfcSettings");

    m_cmfcSettingsHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("mpdSettings"))
  {
    m_mpdSettings = jsonValue.GetObject("mpdSettings");

    m_mpdSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mxfSettings"))
  {
    m_mxfSettings = jsonValue.GetObject("mxfSettings");

    m_mxfSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerSettings::Jsonize() const
{
  JsonValue payload;

  if(m_cmfcSettingsHasBeenSet)
  {
   payload.WithObject("cmfcSettings", m_cmfcSettings.Jsonize());

  }

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

  if(m_mpdSettingsHasBeenSet)
  {
   payload.WithObject("mpdSettings", m_mpdSettings.Jsonize());

  }

  if(m_mxfSettingsHasBeenSet)
  {
   payload.WithObject("mxfSettings", m_mxfSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
