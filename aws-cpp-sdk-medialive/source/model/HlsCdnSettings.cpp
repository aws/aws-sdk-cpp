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
    m_hlsWebdavSettingsHasBeenSet(false)
{
}

HlsCdnSettings::HlsCdnSettings(const JsonValue& jsonValue) : 
    m_hlsAkamaiSettingsHasBeenSet(false),
    m_hlsBasicPutSettingsHasBeenSet(false),
    m_hlsMediaStoreSettingsHasBeenSet(false),
    m_hlsWebdavSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

HlsCdnSettings& HlsCdnSettings::operator =(const JsonValue& jsonValue)
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

  if(m_hlsWebdavSettingsHasBeenSet)
  {
   payload.WithObject("hlsWebdavSettings", m_hlsWebdavSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
