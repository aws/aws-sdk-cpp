/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/HlsCdnSettings.h>
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

HlsCdnSettings::HlsCdnSettings() : 
    m_hlsAkamaiSettingsHasBeenSet(false),
    m_hlsBasicPutSettingsHasBeenSet(false),
    m_hlsMediaStoreSettingsHasBeenSet(false),
    m_hlsS3SettingsHasBeenSet(false),
    m_hlsWebdavSettingsHasBeenSet(false)
{
}

HlsCdnSettings::HlsCdnSettings(JsonView jsonValue) : 
    m_hlsAkamaiSettingsHasBeenSet(false),
    m_hlsBasicPutSettingsHasBeenSet(false),
    m_hlsMediaStoreSettingsHasBeenSet(false),
    m_hlsS3SettingsHasBeenSet(false),
    m_hlsWebdavSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

HlsCdnSettings& HlsCdnSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("hlsAkamaiSettings"))
  {
    m_hlsAkamaiSettings = jsonValue.GetObject("hlsAkamaiSettings");

    m_hlsAkamaiSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hlsBasicPutSettings"))
  {
    m_hlsBasicPutSettings = jsonValue.GetObject("hlsBasicPutSettings");

    m_hlsBasicPutSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hlsMediaStoreSettings"))
  {
    m_hlsMediaStoreSettings = jsonValue.GetObject("hlsMediaStoreSettings");

    m_hlsMediaStoreSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hlsS3Settings"))
  {
    m_hlsS3Settings = jsonValue.GetObject("hlsS3Settings");

    m_hlsS3SettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hlsWebdavSettings"))
  {
    m_hlsWebdavSettings = jsonValue.GetObject("hlsWebdavSettings");

    m_hlsWebdavSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue HlsCdnSettings::Jsonize() const
{
  JsonValue payload;

  if(m_hlsAkamaiSettingsHasBeenSet)
  {
   payload.WithObject("hlsAkamaiSettings", m_hlsAkamaiSettings.Jsonize());

  }

  if(m_hlsBasicPutSettingsHasBeenSet)
  {
   payload.WithObject("hlsBasicPutSettings", m_hlsBasicPutSettings.Jsonize());

  }

  if(m_hlsMediaStoreSettingsHasBeenSet)
  {
   payload.WithObject("hlsMediaStoreSettings", m_hlsMediaStoreSettings.Jsonize());

  }

  if(m_hlsS3SettingsHasBeenSet)
  {
   payload.WithObject("hlsS3Settings", m_hlsS3Settings.Jsonize());

  }

  if(m_hlsWebdavSettingsHasBeenSet)
  {
   payload.WithObject("hlsWebdavSettings", m_hlsWebdavSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
